
 module  t  
  
 (
  input      a   ,  output      b  );
 assign        b  = 1 ;
 
 
 endmodule
 
 module  i  
  
 (
  input      a   ,      b   ,      c   ,  output      o2   ,      o3  );
 assign        o2  =  a  +  b  ;
 
 assign        o3  =  a  +  b  +  c  ;
 
 
 endmodule
 