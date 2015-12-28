# 1 "proc_inc.mll"
 
	(*this is the list of definition*)
	let def_list = ref [("","")] ;

	exception Ssyeof of string
	
	type token =  DIRECTIVE_include
              | Other
              | Eof
              | Eol

	let prt_fatal str = begin
		Printf.fprintf stderr  "\n// FATAL CHECKER NOINC : %s \n"  str;
		flush stderr;
	end

# 19 "proc_inc.ml"
let __ocaml_lex_tables = {
  Lexing.lex_base = 
   "\000\000\001\000\251\255\252\255\000\000\002\000\254\255\002\000\
    \255\255\000\000\000\000\000\000\000\000\000\000\000\000\253\255\
    \003\000\252\255\253\255\000\000\004\000\255\255\254\255\005\000\
    \251\255\252\255\004\000\011\000\254\255\006\000\255\255\007\000\
    \253\255";
  Lexing.lex_backtrk = 
   "\255\255\005\000\255\255\255\255\006\000\006\000\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\003\000\003\000\255\255\255\255\255\255\
    \255\255\255\255\004\000\004\000\255\255\255\255\255\255\255\255\
    \255\255";
  Lexing.lex_default = 
   "\001\000\001\000\000\000\000\000\255\255\255\255\000\000\007\000\
    \000\000\255\255\255\255\255\255\255\255\255\255\255\255\000\000\
    \017\000\000\000\000\000\255\255\255\255\000\000\000\000\024\000\
    \000\000\000\000\031\000\255\255\000\000\029\000\000\000\031\000\
    \000\000";
  Lexing.lex_trans = 
   "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\002\000\255\255\008\000\018\000\255\255\025\000\
    \030\000\255\255\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\255\255\026\000\
    \000\000\032\000\022\000\000\000\006\000\020\000\000\000\005\000\
    \255\255\007\000\019\000\021\000\027\000\028\000\000\000\000\000\
    \000\000\000\000\029\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \004\000\255\255\000\000\011\000\014\000\015\000\000\000\000\000\
    \000\000\009\000\000\000\000\000\012\000\000\000\010\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\013\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\
    \003\000\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \000\000\000\000\000\000\000\000";
  Lexing.lex_check = 
   "\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\000\000\001\000\007\000\016\000\026\000\023\000\
    \029\000\031\000\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\026\000\023\000\
    \255\255\031\000\019\000\255\255\005\000\016\000\255\255\000\000\
    \001\000\005\000\016\000\020\000\023\000\027\000\255\255\255\255\
    \255\255\255\255\027\000\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \000\000\001\000\255\255\010\000\013\000\014\000\255\255\255\255\
    \255\255\004\000\255\255\255\255\011\000\255\255\009\000\255\255\
    \255\255\255\255\255\255\255\255\255\255\012\000\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\255\
    \000\000\001\000\007\000\016\000\026\000\023\000\029\000\031\000\
    \255\255\255\255\255\255\255\255";
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

let rec proc_inc pathlist lexbuf =
    __ocaml_lex_proc_inc_rec pathlist lexbuf 0
and __ocaml_lex_proc_inc_rec pathlist lexbuf __ocaml_lex_state =
  match Lexing.engine __ocaml_lex_tables __ocaml_lex_state lexbuf with
      | 0 ->
let
# 19 "proc_inc.mll"
                        cmt
# 131 "proc_inc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos lexbuf.Lexing.lex_curr_pos in
# 19 "proc_inc.mll"
                              (
			print_string cmt;
			Other
		)
# 138 "proc_inc.ml"

  | 1 ->
let
# 23 "proc_inc.mll"
                        cmt
# 144 "proc_inc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos (lexbuf.Lexing.lex_start_pos + 2) in
# 23 "proc_inc.mll"
                               ( (*multiline comment*)
			print_string cmt;
	  	comment 1 (Lexing.lexeme_start_p lexbuf)  lexbuf
		)
# 151 "proc_inc.ml"

  | 2 ->
# 27 "proc_inc.mll"
                (   
			proc_include pathlist lexbuf ; 
			DIRECTIVE_include 
		)
# 159 "proc_inc.ml"

  | 3 ->
# 31 "proc_inc.mll"
          ( 
			Eof                      
		)
# 166 "proc_inc.ml"

  | 4 ->
# 34 "proc_inc.mll"
           (
			Lexing.new_line lexbuf ;
			Printf.printf "\n";
			Other
		)
# 175 "proc_inc.ml"

  | 5 ->
let
# 39 "proc_inc.mll"
                        ssss
# 181 "proc_inc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos lexbuf.Lexing.lex_curr_pos in
# 39 "proc_inc.mll"
                              (
			print_string ssss; 
			Other
		)
# 188 "proc_inc.ml"

  | 6 ->
let
# 43 "proc_inc.mll"
        lsm
# 194 "proc_inc.ml"
= Lexing.sub_lexeme_char lexbuf lexbuf.Lexing.lex_start_pos in
# 43 "proc_inc.mll"
               (
			print_char lsm; 
			Other
		)
# 201 "proc_inc.ml"

  | __ocaml_lex_state -> lexbuf.Lexing.refill_buff lexbuf; __ocaml_lex_proc_inc_rec pathlist lexbuf __ocaml_lex_state

and comment depth stpos lexbuf =
    __ocaml_lex_comment_rec depth stpos lexbuf 16
and __ocaml_lex_comment_rec depth stpos lexbuf __ocaml_lex_state =
  match Lexing.engine __ocaml_lex_tables __ocaml_lex_state lexbuf with
      | 0 ->
let
# 48 "proc_inc.mll"
         cmt
# 213 "proc_inc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos (lexbuf.Lexing.lex_start_pos + 2) in
# 48 "proc_inc.mll"
              ( (*end of current comment*)
		print_string cmt;
		if(depth==1) then (*the first level of nested comment*)
			Other
		else
			comment (depth-1) stpos lexbuf
		)
# 223 "proc_inc.ml"

  | 1 ->
let
# 55 "proc_inc.mll"
           cmt
# 229 "proc_inc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos (lexbuf.Lexing.lex_start_pos + 2) in
# 55 "proc_inc.mll"
               (  (*new nested comment*)
			print_string cmt;
			comment (depth+1) stpos lexbuf
		)
# 236 "proc_inc.ml"

  | 2 ->
let
# 59 "proc_inc.mll"
           lsm
# 242 "proc_inc.ml"
= Lexing.sub_lexeme_char lexbuf lexbuf.Lexing.lex_start_pos in
# 59 "proc_inc.mll"
               (
			print_char lsm; 
			Lexing.new_line lexbuf ;
			comment depth stpos lexbuf
		)
# 250 "proc_inc.ml"

  | 3 ->
let
# 64 "proc_inc.mll"
        lsm
# 256 "proc_inc.ml"
= Lexing.sub_lexeme_char lexbuf lexbuf.Lexing.lex_start_pos in
# 64 "proc_inc.mll"
            (
			print_char lsm; 
			comment depth stpos lexbuf
		)
# 263 "proc_inc.ml"

  | __ocaml_lex_state -> lexbuf.Lexing.refill_buff lexbuf; __ocaml_lex_comment_rec depth stpos lexbuf __ocaml_lex_state

and proc_include pathlist lexbuf =
    __ocaml_lex_proc_include_rec pathlist lexbuf 23
and __ocaml_lex_proc_include_rec pathlist lexbuf __ocaml_lex_state =
  match Lexing.engine __ocaml_lex_tables __ocaml_lex_state lexbuf with
      | 0 ->
let
# 69 "proc_inc.mll"
                         cmt
# 275 "proc_inc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos lexbuf.Lexing.lex_curr_pos in
# 69 "proc_inc.mll"
                              (
			print_string cmt;
			proc_include pathlist lexbuf
		)
# 282 "proc_inc.ml"

  | 1 ->
let
# 73 "proc_inc.mll"
             cmt
# 288 "proc_inc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos (lexbuf.Lexing.lex_start_pos + 2) in
# 73 "proc_inc.mll"
                               ( (*multiline comment*)
			print_string cmt;
	  	comment 1 (Lexing.lexeme_start_p lexbuf)  lexbuf;
			proc_include pathlist lexbuf
		)
# 296 "proc_inc.ml"

  | 2 ->
let
# 78 "proc_inc.mll"
                          filename
# 302 "proc_inc.ml"
= Lexing.sub_lexeme lexbuf lexbuf.Lexing.lex_start_pos lexbuf.Lexing.lex_curr_pos in
# 78 "proc_inc.mll"
                                   (
			let tfn1=String.sub filename 1 ((String.length filename)-2) 
			in
			let fn = begin
				if Sys.file_exists tfn1 then tfn1
				else begin
					let nl = List.map (fun x -> x ^ "/" ^ tfn1) pathlist
					in
					let found_filename= begin
						try 
							List.find (fun x -> Sys.file_exists x) nl
						with Not_found -> begin
							prt_fatal (Printf.sprintf  "not found %s "  tfn1);
							""
						end
					end
					in begin
						Printf.printf "\n// INFO : using %s as %s\n" found_filename tfn1;
						found_filename
					end
				end
			end
			in 
			begin
				if(fn<>"") then begin
					Printf.printf  "\n`line 1 \"%s\" 1\n" fn ;
					let inputFileChannle = open_in fn in
					let lexbuf1 = Lexing.from_channel inputFileChannle 
					in begin
						lexbuf1.Lexing.lex_curr_p <- { lexbuf1.Lexing.lex_curr_p with Lexing.pos_fname = fn};
						while (proc_inc pathlist lexbuf1)!=Eof do
							flush stdout;
						done
					end
					;			
					Printf.printf  "\n//jump back to %s\n" (lexbuf.Lexing.lex_curr_p.Lexing.pos_fname);
					Printf.printf  "\n`line %d \"%s\" 2\n" ((lexbuf.Lexing.lex_curr_p.Lexing.pos_lnum)+1) (lexbuf.Lexing.lex_curr_p.Lexing.pos_fname) ;
					close_in inputFileChannle
				end
			end
			;
			Other
	)
# 348 "proc_inc.ml"

  | 3 ->
let
# 121 "proc_inc.mll"
            lsm
# 354 "proc_inc.ml"
= Lexing.sub_lexeme_char lexbuf lexbuf.Lexing.lex_start_pos in
# 121 "proc_inc.mll"
                ( 
			print_char lsm; 
			proc_inc pathlist lexbuf           
		)
# 361 "proc_inc.ml"

  | 4 ->
let
# 125 "proc_inc.mll"
         lsm
# 367 "proc_inc.ml"
= Lexing.sub_lexeme_char lexbuf lexbuf.Lexing.lex_start_pos in
# 125 "proc_inc.mll"
               ( 
			print_char lsm; 
			proc_include pathlist lexbuf      
		)
# 374 "proc_inc.ml"

  | __ocaml_lex_state -> lexbuf.Lexing.refill_buff lexbuf; __ocaml_lex_proc_include_rec pathlist lexbuf __ocaml_lex_state

;;

