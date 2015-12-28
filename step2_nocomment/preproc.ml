# 1 "preproc.mll"
 
	(*this is the list of definition*)
	let def_list = ref [("","")] ;;
	let print_pos pos = begin
		Printf.fprintf stderr "//%s " pos.Lexing.pos_fname;
		Printf.fprintf stderr "Line %d " pos.Lexing.pos_lnum;
		Printf.fprintf stderr "Char %d\n" (pos.Lexing.pos_cnum - pos.Lexing.pos_bol);
		flush stderr
	end
	;;
	exception Ssyeof of string
	
	type token = 
		| DIRECTIVE_define
		| DIRECTIVE_else
		| DIRECTIVE_endif
		| DIRECTIVE_ifdef
		| DIRECTIVE_ifndef
		| Other
		| Eof
		| Eol

	let prt_fatal str = begin
		Printf.fprintf  stderr "\n// FATAL CHECKER NODEF : %s \n"  str;
	end
	and prt_warning str = begin
		Printf.fprintf  stderr "\n// WARNING CHECKER NODEF : %s \n"  str;
	end


# 33 "preproc.ml"
let __ocaml_lex_tables = {
  Lexing.lex_base = 
   "\000\000\249\255\114\000\251\255\016\000\254\255\016\000\253\255\
    \001\000\255\255\020\000\016\000\026\000\252\255\017\000\252\255\
    \253\255\000\000\013\000\255\255\254\255\003\000\254\255\004\000\
    \080\000\254\255\099\000\005\000\254\255\006\000\006\000\254\255\
    \007\000\009\000\012\000\010\000\253\255\254\255\255\255";
  Lexing.lex_backtrk = 
   "\255\255\255\255\005\000\255\255\006\000\255\255\006\000\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\003\000\003\000\255\255\255\255\255\255\255\255\000\000\
    \255\255\255\255\000\000\255\255\255\255\000\000\255\255\255\255\
    \001\000\255\255\000\000\255\255\255\255\255\255\255\255";
  Lexing.lex_default = 
   "\001\000\000\000\255\255\000\000\255\255\000\000\255\255\000\000\
    \008\000\000\000\255\255\255\255\255\255\000\000\015\000\000\000\
    \000\000\255\255\255\255\000\000\000\000\022\000\000\000\255\255\
    \025\000\000\000\255\255\028\000\000\000\255\255\031\000\000\000\
    \033\000\033\000\033\000\036\000\000\000\000\000\000\000";
  Lexing.lex_trans = 
   "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\002\000\005\000\009\000\023\000\023\000\029\000\029\000\
    \255\255\255\255\255\255\255\255\038\000\255\255\255\255\000\000\
    \000\000\000\000\000\000\016\000\000\000\000\000\000\000\000\000\
    \002\000\000\000\000\000\023\000\023\000\029\000\029\000\255\255\
    \032\000\255\255\020\000\034\000\255\255\000\000\034\000\006\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\007\000\018\000\019\000\000\000\000\000\008\000\
    \017\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\000\000\000\000\000\000\000\000\002\000\
    \004\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\010\000\011\000\012\000\013\000\
    \026\000\026\000\026\000\026\000\026\000\026\000\026\000\026\000\
    \026\000\026\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\002\000\026\000\026\000\026\000\026\000\026\000\
    \026\000\026\000\026\000\026\000\026\000\000\000\000\000\000\000\
    \000\000\000\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\000\000\000\000\000\000\
    \000\000\002\000\000\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \003\000\255\255\000\000\255\255\000\000\255\255\255\255\255\255\
    \000\000\255\255\037\000\000\000\255\255\000\000\000\000\000\000\
    \000\000\255\255\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \255\255\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000";
  Lexing.lex_check = 
   "\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\000\000\000\000\008\000\021\000\023\000\027\000\029\000\
    \032\000\032\000\033\000\033\000\035\000\034\000\034\000\255\255\
    \255\255\255\255\255\255\014\000\255\255\255\255\255\255\255\255\
    \000\000\255\255\255\255\021\000\023\000\027\000\029\000\032\000\
    \030\000\033\000\017\000\033\000\034\000\255\255\034\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\006\000\014\000\018\000\255\255\255\255\006\000\
    \014\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\255\255\255\255\255\255\255\255\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\002\000\004\000\010\000\011\000\012\000\
    \024\000\024\000\024\000\024\000\024\000\024\000\024\000\024\000\
    \024\000\024\000\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\002\000\026\000\026\000\026\000\026\000\026\000\
    \026\000\026\000\026\000\026\000\026\000\255\255\255\255\255\255\
    \255\255\255\255\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\255\255\255\255\255\255\
    \255\255\002\000\255\255\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\002\000\002\000\002\000\
    \002\000\002\000\002\000\002\000\002\000\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \000\000\008\000\255\255\021\000\255\255\027\000\030\000\032\000\
    \255\255\033\000\035\000\255\255\034\000\255\255\255\255\255\255\
    \255\255\014\000\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \024\000\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255";
  Lexing.lex_base_code = 
   "";
  Lexing.lex_backtrk_code = 
   "";
  Lexing.lex_default_code = 
   "";
  Lexing.lex_trans_code = 
   "";
  Lexing.lex_check_code = 
   "";
  Lexing.lex_code = 
   "";
}

let rec preproc lexbuf =
    __ocaml_lex_preproc_rec lexbuf 0
and __ocaml_lex_preproc_rec lexbuf __ocaml_lex_state =
  match Lexing.engine __ocaml_lex_tables __ocaml_lex_state lexbuf with
      | 0 ->
# 34 "preproc.mll"
                        (
			Lexing.new_line lexbuf ;
			Printf.printf  "\n`line %d \"%s\" 1\n" ((lexbuf.Lexing.lex_curr_p.Lexing.pos_lnum)) (lexbuf.Lexing.lex_curr_p.Lexing.pos_fname) ;
			Other
		)
# 174 "preproc.ml"

  | 1 ->
# 39 "preproc.mll"
        (
			print_endline "";
			Lexing.new_line lexbuf ;
			Eol
		)
# 183 "preproc.ml"

  | 2 ->
# 44 "preproc.mll"
                         ( (*multiline comment*)
	  	comment 1 (Lexing.lexeme_start_p lexbuf)  lexbuf;
			Printf.printf  "\n`line %d \"%s\" 1\n" ((lexbuf.Lexing.lex_curr_p.Lexing.pos_lnum)) (lexbuf.Lexing.lex_curr_p.Lexing.pos_fname) ;
			Other
		)
# 192 "preproc.ml"

  | 3 ->
# 49 "preproc.mll"
             (
						print_string "`line";
						line_skip_blank  lexbuf
		)
# 200 "preproc.ml"

  | 4 ->
# 53 "preproc.mll"
          ( Eof                      )
# 205 "preproc.ml"

  | 5 ->
let
# 54 "preproc.mll"
                                              ssss
# 211 "preproc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos lexbuf.Lexing.lex_curr_pos in
# 54 "preproc.mll"
                                                    (
			print_string ssss; Other
		)
# 217 "preproc.ml"

  | 6 ->
let
# 57 "preproc.mll"
        lsm
# 223 "preproc.ml"
= Lexing.sub_lexeme_char lexbuf lexbuf.Lexing.lex_start_pos in
# 57 "preproc.mll"
               (
			print_char lsm; Other
		)
# 229 "preproc.ml"

  | __ocaml_lex_state -> lexbuf.Lexing.refill_buff lexbuf; __ocaml_lex_preproc_rec lexbuf __ocaml_lex_state

and comment depth stpos lexbuf =
    __ocaml_lex_comment_rec depth stpos lexbuf 14
and __ocaml_lex_comment_rec depth stpos lexbuf __ocaml_lex_state =
  match Lexing.engine __ocaml_lex_tables __ocaml_lex_state lexbuf with
      | 0 ->
# 61 "preproc.mll"
        ( (*end of current comment*)
		if(depth==1) then (*the first level of nested comment*)
			Other
		else
			comment (depth-1) stpos lexbuf
		)
# 245 "preproc.ml"

  | 1 ->
# 67 "preproc.mll"
         (  (*new nested comment*)
			comment (depth+1) stpos lexbuf
		)
# 252 "preproc.ml"

  | 2 ->
# 70 "preproc.mll"
         (
			Lexing.new_line lexbuf ;
			comment depth stpos lexbuf
		)
# 260 "preproc.ml"

  | 3 ->
# 74 "preproc.mll"
      (
			comment depth stpos lexbuf
		)
# 267 "preproc.ml"

  | __ocaml_lex_state -> lexbuf.Lexing.refill_buff lexbuf; __ocaml_lex_comment_rec depth stpos lexbuf __ocaml_lex_state

and line_skip_blank lexbuf =
    __ocaml_lex_line_skip_blank_rec lexbuf 21
and __ocaml_lex_line_skip_blank_rec lexbuf __ocaml_lex_state =
  match Lexing.engine __ocaml_lex_tables __ocaml_lex_state lexbuf with
      | 0 ->
# 78 "preproc.mll"
             (
		line_number  lexbuf
	)
# 280 "preproc.ml"

  | 1 ->
# 81 "preproc.mll"
     (
		prt_fatal "`line must be followed by blanks and line number and  filename";
		print_pos (lexbuf.Lexing.lex_curr_p);
		endofline lexbuf;
		Other
	)
# 290 "preproc.ml"

  | __ocaml_lex_state -> lexbuf.Lexing.refill_buff lexbuf; __ocaml_lex_line_skip_blank_rec lexbuf __ocaml_lex_state

and line_number lexbuf =
    __ocaml_lex_line_number_rec lexbuf 24
and __ocaml_lex_line_number_rec lexbuf __ocaml_lex_state =
  match Lexing.engine __ocaml_lex_tables __ocaml_lex_state lexbuf with
      | 0 ->
let
# 88 "preproc.mll"
               linenum
# 302 "preproc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos lexbuf.Lexing.lex_curr_pos in
# 88 "preproc.mll"
                       (
		let ln = int_of_string linenum
		in begin
			if(ln<=0) then begin
				prt_warning "Warning : line number <=0 may leads to incorrect referring to original files\n";
				print_pos (lexbuf.Lexing.lex_curr_p)
			end
			;
			Printf.printf " %s" linenum;
			line_skip_blank2  (ln-1) lexbuf
		end
	)
# 317 "preproc.ml"

  | 1 ->
# 100 "preproc.mll"
     (
		prt_fatal "`line and blanks must be followed by line number and  filename";
		print_pos (lexbuf.Lexing.lex_curr_p);
		endofline lexbuf;
		Other
	)
# 327 "preproc.ml"

  | __ocaml_lex_state -> lexbuf.Lexing.refill_buff lexbuf; __ocaml_lex_line_number_rec lexbuf __ocaml_lex_state

and line_skip_blank2 ln lexbuf =
    __ocaml_lex_line_skip_blank2_rec ln lexbuf 27
and __ocaml_lex_line_skip_blank2_rec ln lexbuf __ocaml_lex_state =
  match Lexing.engine __ocaml_lex_tables __ocaml_lex_state lexbuf with
      | 0 ->
# 107 "preproc.mll"
             (
		line_filename  ln lexbuf
	)
# 340 "preproc.ml"

  | 1 ->
# 110 "preproc.mll"
     (
		prt_fatal "`line and blanks and line number must be followed by  blanks";
		print_pos (lexbuf.Lexing.lex_curr_p);
		endofline lexbuf;
		Other
	)
# 350 "preproc.ml"

  | __ocaml_lex_state -> lexbuf.Lexing.refill_buff lexbuf; __ocaml_lex_line_skip_blank2_rec ln lexbuf __ocaml_lex_state

and line_filename ln lexbuf =
    __ocaml_lex_line_filename_rec ln lexbuf 30
and __ocaml_lex_line_filename_rec ln lexbuf __ocaml_lex_state =
  match Lexing.engine __ocaml_lex_tables __ocaml_lex_state lexbuf with
      | 0 ->
let
# 117 "preproc.mll"
                                  fn
# 362 "preproc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos lexbuf.Lexing.lex_curr_pos in
# 117 "preproc.mll"
                                     (
		let realfn = String.sub fn 1 ((String.length fn)-2)
		in begin
			lexbuf.Lexing.lex_curr_p <- { lexbuf.Lexing.lex_curr_p with Lexing.pos_fname = realfn };
			lexbuf.Lexing.lex_curr_p <- { lexbuf.Lexing.lex_curr_p with Lexing.pos_lnum  = ln };
			Printf.printf " \"%s\" " realfn;
			endofline lexbuf;
			Other
		end
	)
# 375 "preproc.ml"

  | 1 ->
# 127 "preproc.mll"
     (
		prt_fatal "`line and blanks and line number and blanks must be followed by filename";
		print_pos (lexbuf.Lexing.lex_curr_p);
		endofline lexbuf;
		Other
	)
# 385 "preproc.ml"

  | __ocaml_lex_state -> lexbuf.Lexing.refill_buff lexbuf; __ocaml_lex_line_filename_rec ln lexbuf __ocaml_lex_state

and endofline lexbuf =
    __ocaml_lex_endofline_rec lexbuf 35
and __ocaml_lex_endofline_rec lexbuf __ocaml_lex_state =
  match Lexing.engine __ocaml_lex_tables __ocaml_lex_state lexbuf with
      | 0 ->
# 134 "preproc.mll"
      (
			print_endline "";
			Lexing.new_line lexbuf;
			Eol
		)
# 400 "preproc.ml"

  | 1 ->
# 139 "preproc.mll"
       (
			Eof
		)
# 407 "preproc.ml"

  | 2 ->
let
# 142 "preproc.mll"
        lxm
# 413 "preproc.ml"
= Lexing.sub_lexeme_char lexbuf lexbuf.Lexing.lex_start_pos in
# 142 "preproc.mll"
            (
			print_char lxm;
			endofline lexbuf
		)
# 420 "preproc.ml"

  | __ocaml_lex_state -> lexbuf.Lexing.refill_buff lexbuf; __ocaml_lex_endofline_rec lexbuf __ocaml_lex_state

;;

