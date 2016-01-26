
       module    t    
       (         input                     a          ,          output              [       4       :       0       ]         b          ,          output              [       4       :       0       ]         c          ,          output              [       4       :       0       ]         d         )  ;  
           assign                              b                =           1         +             3           +             2             ;
       
           assign                              c                =           1         +             2           +             3             ;
       
           assign                              d                =           1         +             3           +             2             ;
       
           initial          begin      
                  #    1                     $display     (       "  %d  "        ,              b                 )   ;                        $display     (       "  %d  "        ,              c                 )   ;                    $display     (       "  %d  "        ,              d                 )   ;          end           
   
 endmodule
   