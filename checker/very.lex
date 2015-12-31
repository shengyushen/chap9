%{
	#include<string>
	#include<iostream>
	#include<fstream>
	#include<stack>
	#include<assert.h>
	#include<regex>
	#include<vector>

	#include"veryclass.h"

	void prt_fatal(string str)  { cerr<<"FATAL : "<<str<<endl<<flush; return; }
	void prt_info (string str)  { cerr<<"INOF  : "<<str<<endl<<flush; return; }
	
	string stringssy_string;
	unsigned int ln;
%}

%option noyywrap
%option yylineno


  /*A.8.7 Numbers */
x_digit       [xX]
z_digit       [zZ\?]
binary_digit  {x_digit}|{z_digit}|[01]
octal_digit   {x_digit}|{z_digit}|[0-7]
decimal_digit [0-9]
hex_digit     {x_digit}|{z_digit}|[0-9A-Fa-f]
non_zero_decimal_digit  [1-9]
decimal_base  (\'[sS]?d)|(\'[sS]?D)
binary_base   (\'[sS]?b)|(\'[sS]?B)
octal_base    (\'[sS]?o)|(\'[sS]?O)
hex_base      (\'[sS]?h)|(\'[sS]?H)
binary_value  {binary_digit}(_|{binary_digit})*
octal_value   {octal_digit}(_|{octal_digit})*
hex_value     {hex_digit}(_|{hex_digit})*
unsigned_number  {decimal_digit}(_|{decimal_digit})*
non_zero_unsigned_number  {non_zero_decimal_digit}(_|{decimal_digit})*
size          {non_zero_unsigned_number}
sign          [+-]
exp           [eE]
real_number     ({unsigned_number}\.{unsigned_number})|({unsigned_number}(\.{unsigned_number})?{exp}{sign}?{unsigned_number})
time_precision "s"|"ms"|"us"|"ns"|"ps"|"fs"

  /*A.8.8 Strings*/
  /*already deal with below*/

  /*A.9.2 Comments*/
  /*already deal with below*/


  /*A.9.3 Identifiers*/
escaped_identifier     \\[^ \t\n]+[ ]
system_task_function_identifier [\$][a-zA-Z0-9_\$]+
simple_identifier  [a-zA-Z_][a-zA-Z0-9_\$]*
  /*A.9.4 White space*/
  /*white space only used in escaped_identifier*/

useless_directives "`default_decay_time"|"`default_trireg_strength"|"`delay_mode_distributed"|"`delay_mode_path"|"`delay_mode_unit"|"`delay_mode_zero"|"`accelerate"|"`autoexpand_vectornets"|"`begin_keywords"|"`celldefine"|"`default_nettype"|"`endcelldefine"|"`end_keywords"|"`endprotect"|"`endprotected"|"`expand_vectornets"|"`include"|"`noaccelerate"|"`noexpand_vectornets"|"`noremove_gatenames"|"`noremove_netnames"|"`nounconnected_drive"|"`pragma"|"`protect"|"`protected"|"`remove_gatenames"|"`remove_netnames"|"`resetall"|"`timescale"|"`unconnected_drive"

harful_directives "`define"|"`else"|"`elsif"|"`endif"|"`ifdef"|"`ifndef"|"`resetall"|"`undef"

blank [ \t]
digit [0-9]

%x line_skip_blank line_number line_skip_blank2 line_filename endofline stringssy

%%

{blank}+ 

{system_task_function_identifier} {
	string s{yytext};
	cout<<"SYSTEM_TASK_FUNCTION_IDENTIFIER "<<s<<endl;
}

"always"							{ cout<<"KEY_ALWAYS"<<endl;}
"and"								{ cout<<"KEY_AND"<<endl;}
"assign"            	{ cout<<"KEY_ASSIGN"<<endl;}
"automatic"          { cout<<"KEY_AUTOMATIC"<<endl;}
"begin"              { cout<<"KEY_BEGIN"<<endl;}
"buf"                { cout<<"KEY_BUF"<<endl;}
"bufif0"             { cout<<"KEY_BUFIF0"<<endl;}
"bufif1"             { cout<<"KEY_BUFIF1"<<endl;}
"case"               { cout<<"KEY_CASE"<<endl;}
"casex"              { cout<<"KEY_CASEX"<<endl;}
"casez"              { cout<<"KEY_CASEZ"<<endl;}
"cell"               { cout<<"KEY_CELL"<<endl;}
"cmos"               { cout<<"KEY_CMOS"<<endl;}
"config"             { cout<<"KEY_CONFIG"<<endl;}
"deassign"           { cout<<"KEY_DEASSIGN"<<endl;}
"default"            { cout<<"KEY_DEFAULT"<<endl;}
"defparam"           { cout<<"KEY_DEFPARAM"<<endl;}
"design"             { cout<<"KEY_DESIGN"<<endl;}
"disable"            { cout<<"KEY_DISABLE"<<endl;}
"edge"								{ cout<<"KEY_EDGE"<<endl;}
"else"               { cout<<"KEY_ELSE"<<endl;}
"end"                { cout<<"KEY_END"<<endl;}
"endcase"            { cout<<"KEY_ENDCASE"<<endl;}
"endconfig"          { cout<<"KEY_ENDCONFIG"<<endl;}
"endfunction"        { cout<<"KEY_ENDFUNCTION"<<endl;}
"endgenerate"        { cout<<"KEY_ENDGENERATE"<<endl;}
"endmodule"          { cout<<"KEY_ENDMODULE"<<endl;}
"endprimitive"       { cout<<"KEY_ENDPRIMITIVE"<<endl;}
"endspecify"         { cout<<"KEY_ENDSPECIFY"<<endl;}
"endtable"           { cout<<"KEY_ENDTABLE"<<endl;}
"endtask"            { cout<<"KEY_ENDTASK"<<endl;}
"event"              { cout<<"KEY_EVENT"<<endl;}
"for"                { cout<<"KEY_FOR"<<endl;}
"force"              { cout<<"KEY_FORCE"<<endl;}
"forever"            { cout<<"KEY_FOREVER"<<endl;}
"fork"               { cout<<"KEY_FORK"<<endl;}
"function"           { cout<<"KEY_FUNCTION"<<endl;}
"generate"           { cout<<"KEY_GENERATE"<<endl;}
"genvar"							{ cout<<"KEY_GENVAR"<<endl;}
"highz0"             { cout<<"KEY_HIGHZ0"<<endl;}
"highz1"             { cout<<"KEY_HIGHZ1"<<endl;}
"if"                 { cout<<"KEY_IF"<<endl;}
"ifnone"             { cout<<"KEY_IFNONE"<<endl;}
"incdir"             { cout<<"KEY_INCDIR"<<endl;}
"include"            { cout<<"KEY_INCLUDE"<<endl;}
"initial"            { cout<<"KEY_INITIAL"<<endl;}
"inout"              { cout<<"KEY_INOUT"<<endl;}
"input"              { cout<<"KEY_INPUT"<<endl;}
"instance"           { cout<<"KEY_INSTANCE"<<endl;}
"integer"            { cout<<"KEY_INTEGER"<<endl;}
"join"               { cout<<"KEY_JOIN"<<endl;}
"large"              { cout<<"KEY_LARGE"<<endl;}
"liblist"            { cout<<"KEY_LIBLIST"<<endl;}
"library"            { cout<<"KEY_LIBRARY"<<endl;}
"localparam"         { cout<<"KEY_LOCALPARAM"<<endl;}
"macromodule"        { cout<<"KEY_MACROMODULE"<<endl;}
"medium"             { cout<<"KEY_MEDIUM"<<endl;}
"module"							{ cout<<"KEY_MODULE"<<endl;}
"nand"               { cout<<"KEY_NAND"<<endl;}
"negedge"            { cout<<"KEY_NEGEDGE"<<endl;}
"nmos"               { cout<<"KEY_NMOS"<<endl;}
"nor"                { cout<<"KEY_NOR"<<endl;}
"noshowcancelled"    { cout<<"KEY_NOSHOWCANCELLED"<<endl;}
"not"                { cout<<"KEY_NOT"<<endl;}
"notif0"             { cout<<"KEY_NOTIF0"<<endl;}
"notif1"             { cout<<"KEY_NOTIF1"<<endl;}
"or"                 { cout<<"KEY_OR"<<endl;}
"output"             { cout<<"KEY_OUTPUT"<<endl;}
"parameter"          { cout<<"KEY_PARAMETER"<<endl;}
"pmos"               { cout<<"KEY_PMOS"<<endl;}
"posedge"            { cout<<"KEY_POSEDGE"<<endl;}
"primitive"          { cout<<"KEY_PRIMITIVE"<<endl;}
"pull0"              { cout<<"KEY_PULL0"<<endl;}
"pull1"              { cout<<"KEY_PULL1"<<endl;}
"pulldown"           { cout<<"KEY_PULLDOWN"<<endl;}
"pullup"             { cout<<"KEY_PULLUP"<<endl;}
"pulsestyle_onevent"	{ cout<<"KEY_PULSESTYLE_ONEVENT"<<endl;}
"pulsestyle_ondetect" { cout<<"KEY_PULSESTYLE_ONDETECT"<<endl;}
"rcmos"              { cout<<"KEY_RCMOS"<<endl;}
"real"               { cout<<"KEY_REAL"<<endl;}
"realtime"           { cout<<"KEY_REALTIME"<<endl;}
"reg"                { cout<<"KEY_REG"<<endl;}
"release"            { cout<<"KEY_RELEASE"<<endl;}
"repeat"             { cout<<"KEY_REPEAT"<<endl;}
"rnmos"              { cout<<"KEY_RNMOS"<<endl;}
"rpmos"              { cout<<"KEY_RPMOS"<<endl;}
"rtran"              { cout<<"KEY_RTRAN"<<endl;}
"rtranif0"           { cout<<"KEY_RTRANIF0"<<endl;}
"rtranif1"           { cout<<"KEY_RTRANIF1"<<endl;}
"scalared"           { cout<<"KEY_SCALARED"<<endl;}
"showcancelled"      { cout<<"KEY_SHOWCANCELLED"<<endl;}
"signed"             { cout<<"KEY_SIGNED"<<endl;}
"small"              { cout<<"KEY_SMALL"<<endl;}
"specify"            { cout<<"KEY_SPECIFY"<<endl;}
"specparam"          { cout<<"KEY_SPECPARAM"<<endl;}
"strong0"						{ cout<<"KEY_STRONG0"<<endl;}
"strong1"            { cout<<"KEY_STRONG1"<<endl;}
"supply0"            { cout<<"KEY_SUPPLY0"<<endl;}
"supply1"            { cout<<"KEY_SUPPLY1"<<endl;}
"table"              { cout<<"KEY_TABLE"<<endl;}
"task"               { cout<<"KEY_TASK"<<endl;}
"time"               { cout<<"KEY_TIME"<<endl;}
"tran"               { cout<<"KEY_TRAN"<<endl;}
"tranif0"            { cout<<"KEY_TRANIF0"<<endl;}
"tranif1"            { cout<<"KEY_TRANIF1"<<endl;}
"tri"                { cout<<"KEY_TRI"<<endl;}
"tri0"               { cout<<"KEY_TRI0"<<endl;}
"tri1"               { cout<<"KEY_TRI1"<<endl;}
"triand"             { cout<<"KEY_TRIAND"<<endl;}
"trior"              { cout<<"KEY_TRIOR"<<endl;}
"trireg"             { cout<<"KEY_TRIREG"<<endl;}
"unsigned"           { cout<<"KEY_UNSIGNED"<<endl;}
"use"                { cout<<"KEY_USE"<<endl;}
"uwire"              { cout<<"KEY_UWIRE"<<endl;}
"vectored"						{ cout<<"KEY_VECTORED"<<endl;}
"wait"               { cout<<"KEY_WAIT"<<endl;}
"wand"               { cout<<"KEY_WAND"<<endl;}
"weak0"              { cout<<"KEY_WEAK0"<<endl;}
"weak1"              { cout<<"KEY_WEAK1"<<endl;}
"while"              { cout<<"KEY_WHILE"<<endl;}
"wire"               { cout<<"KEY_WIRE"<<endl;}
"wor"                { cout<<"KEY_WOR"<<endl;}
"xnor"               { cout<<"KEY_XNOR"<<endl;}
"xor"                { cout<<"KEY_XOR"<<endl;}
{simple_identifier} { cout<<"SIMPLE_IDENTIFIER "<<yytext<<endl;}

{unsigned_number} {
	unsigned int lxm_no_;
	sscanf(yytext,"%d",&lxm_no_);
	cout<<"UNSIGNED_NUMBER "<<lxm_no_<<endl;
}


{size}?{decimal_base}{blank}*{unsigned_number} {
	cout<<"UNSIGNED_NUMBER_size "<<yytext<<endl;
}


{size}?{decimal_base}{blank}*{x_digit}[_]* {
	assert(false);
}

{size}?{decimal_base}{blank}*{z_digit}[_]* {
	assert(false);
}

{size}?{octal_base}{blank}*{octal_value} {
	cout<<"OCTAL_NUMBER "<<yytext<<endl;
}

{size}?{binary_base}{blank}*{binary_value} {
	cout<<"BINARY_NUMBER "<<yytext<<endl;
}


{size}?{hex_base}{blank}*{hex_value} {
	cout<<"HEX_NUMBER "<<yytext<<endl;
}


{real_number} {
	cout<<"REAL_NUMBER "<<yytext<<endl;
}


"+"		{string s{yytext};cout<<"OP2_ADD "<<s<<endl;}
"-"		{string s{yytext};cout<<"OP2_SUB "<<s<<endl;}
"&"		{string s{yytext};cout<<"OP2_AND "<<s<<endl;}
"|"		{string s{yytext};cout<<"OP2_OR  "<<s<<endl;}
"^"		{string s{yytext};cout<<"OP2_XOR "<<s<<endl;}
"~^"|"^~"		{string s{yytext};cout<<"OP2_XNOR "<<s<<endl;}
"!"		{string s{yytext};cout<<"OP1_LOGIC_NEG "<<s<<endl;}
"~"		{string s{yytext};cout<<"OP1_BITWISE_NEG "<<s<<endl;}
"~&"	{string s{yytext};cout<<"OP1_REDUCE_NAND "<<s<<endl;}
"~|"	{string s{yytext};cout<<"OP1_REDUCE_NOR "<<s<<endl;}
"*"		{string s{yytext};cout<<"OP2_MULTIPLE "<<s<<endl;}
"/"		{string s{yytext};cout<<"OP2_DIV "<<s<<endl;}
"%"		{string s{yytext};cout<<"OP2_MOD "<<s<<endl;}
"=="	{string s{yytext};cout<<"OP2_EQU2 "<<s<<endl;}
"!="	{string s{yytext};cout<<"OP2_NEQ2 "<<s<<endl;}
"==="	{string s{yytext};cout<<"OP2_EQU3 "<<s<<endl;}
"!=="	{string s{yytext};cout<<"OP2_NEQ3 "<<s<<endl;}
"&&"	{string s{yytext};cout<<"OP2_AND2 "<<s<<endl;}
"||"	{string s{yytext};cout<<"OP2_OR2 "<<s<<endl;}
"**"	{string s{yytext};cout<<"OP2_POWER "<<s<<endl;}
"<"		{string s{yytext};cout<<"OP2_LT "<<s<<endl;}
"<="	{string s{yytext};cout<<"OP2_LE "<<s<<endl;}
">"		{string s{yytext};cout<<"OP2_GT "<<s<<endl;}
">="	{string s{yytext};cout<<"OP2_GE "<<s<<endl;}
">>"	{string s{yytext};cout<<"OP2_LOGICAL_RIGHTSHIFT "<<s<<endl;}
"<<"	{string s{yytext};cout<<"OP2_LOGICAL_LEFTSHIFT "<<s<<endl;}
">>>"	{string s{yytext};cout<<"OP2_ARITHMETIC_RIGHTSHIFT "<<s<<endl;}
"<<<"	{string s{yytext};cout<<"OP2_ARITHMETIC_LEFTSHIFT "<<s<<endl;}
"?"		{string s{yytext};cout<<"OP2_QUESTION "<<s<<endl;}
"("		{string s{yytext};cout<<"LPARENT "<<s<<endl;}
"(*"		{string s{yytext};cout<<"LPARENTSTART "<<s<<endl;}
")"		{string s{yytext};cout<<"RPARENT "<<s<<endl;}
"*)"		{string s{yytext};cout<<"RPARENTSTART "<<s<<endl;}
","		{string s{yytext};cout<<"COMMA "<<s<<endl;}
";"		{string s{yytext};cout<<"SEMICOLON "<<s<<endl;}
":"		{string s{yytext};cout<<"COLON "<<s<<endl;}
"["		{string s{yytext};cout<<"LSQUARE "<<s<<endl;}
"]"		{string s{yytext};cout<<"RSQUARE "<<s<<endl;}
"="		{string s{yytext};cout<<"EQU1 "<<s<<endl;}
"{"		{string s{yytext};cout<<"LBRACE "<<s<<endl;}
"}"		{string s{yytext};cout<<"RBRACE "<<s<<endl;}
"."		{string s{yytext};cout<<"PERIOD "<<s<<endl;}
"@"		{string s{yytext};cout<<"AT "<<s<<endl;}
"#"		{string s{yytext};cout<<"JING "<<s<<endl;}
"+:"	{string s{yytext};cout<<"ADDRANGE "<<s<<endl;}
"-:"	{string s{yytext};cout<<"SUBRANGE "<<s<<endl;}

\r

\n {
	incLineNumber();
}


\"		{ 
	stringssy_string="";
	yy_push_state(stringssy);
}


   /*2005 standard directive*/
"`default_decay_time"{blank}+{unsigned_number} |
"`default_decay_time"{blank}+{real_number} |
"`default_decay_time"{blank}+"infinite" |
"`default_trireg_strength"{blank}+{unsigned_number} |
"`delay_mode_distributed" |
"`delay_mode_path" |
"`delay_mode_unit" |
"`delay_mode_zero" |
"`begin_keywords"{blank}+"1364-1995" |
"`begin_keywords"{blank}+"1364-2001-noconfig" |
"`begin_keywords"{blank}+"1364-2001" |
"`begin_keywords"{blank}+"1364-2005" |
"`end_keywords" |
"`celldefine" |
"`endcelldefine" |
"`default_nettype"{blank}+"wire" |
"`default_nettype"{blank}+"tri0" |
"`default_nettype"{blank}+"tri1" |
"`default_nettype"{blank}+"wand" |
"`default_nettype"{blank}+"triand" |
"`default_nettype"{blank}+"wor" |
"`default_nettype"{blank}+"trior" |
"`default_nettype"{blank}+"trireg" |
"`default_nettype"{blank}+"uwire" |
"`default_nettype"{blank}+"none" |
"`default_nettype"{blank}+"tri" |
"`nounconnected_drive" |
"`pragma"[^\n]* |
"`resetall" |
"`timescale"{blank}+{unsigned_number}{blank}*{time_precision}{blank}*"/"{blank}*{unsigned_number}{blank}*{time_precision} |
"`unconnected_drive"{blank}+"pull1" |
"`unconnected_drive"{blank}+"pull0" {
	string s{yytext};
	prt_info("ignoring directive "+s);
}

"`accelerate" |
"`noaccelerate" |
"`autoexpand_vectornets" |
"`endprotect" |
"`endprotected" |
"`expand_vectornets" |
"`noexpand_vectornets" |
"`noremove_gatenames" |
"`noremove_netnames" |
"`protect" |
"`protected" |
"`remove_gatenames" |
"`remove_netnames" {
	string s{yytext};
	prt_info("deprecated directive "+s);
}

"`line"			{
	ECHO;
	yy_push_state(line_skip_blank);
}

. {
	string s{yytext};
	prt_fatal("improper syntax "+s);
	print_pos();
	exit(1);
}


<line_skip_blank>{
	{blank}+ {
		ECHO;
		yy_pop_state();
		yy_push_state(line_number);
	}
	. {
		string s{yytext};
		prt_fatal("improper `line statement"+s);
		print_pos();
		exit(1);
	}
}

<line_number>{
	{digit}+ {
		sscanf(yytext,"%d",&ln);
		ECHO;
		yy_pop_state();
		yy_push_state(line_skip_blank2);
	}

	. {
		string s{yytext};
		prt_fatal("improper `line number"+s);
		print_pos();
		exit(1);
	}
}

<line_skip_blank2>{
	{blank}+ {
		ECHO;
		yy_pop_state();
		yy_push_state(line_filename);
	}
	. {
		string s{yytext};
		prt_fatal("improper `line file name"+s);
		print_pos();
		exit(1);
	}
}

<line_filename>{
	[^\n\t ]+ {
		string s{yytext};
		setPosition(ln-1,s);
		ECHO;
		yy_pop_state();
		yy_push_state(endofline);
	}

	. {
		string s{yytext};
		prt_fatal("improper `line file name 2"+s);
		print_pos();
		exit(1);
	}
}


<endofline>{
	[^\n]*\n {
		incLineNumber();
		ECHO;
		yy_pop_state();
	}
}

<stringssy>{
	\n {
		prt_fatal("incomplet string"+stringssy_string);
		print_pos();
		exit(1);
	}
	"\\\"" {
		string s{yytext};
		stringssy_string = stringssy_string+s;
	}
	\" {
		cout<<"STRING " << stringssy_string<<endl;
		yy_pop_state();
	} 
	. {
		string s{yytext};
		stringssy_string = stringssy_string+s;
	}
}
%%



