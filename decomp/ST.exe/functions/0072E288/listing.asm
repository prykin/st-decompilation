__ftol:
0072E288  55                        PUSH EBP
0072E289  8B EC                     MOV EBP,ESP
0072E28B  83 C4 F4                  ADD ESP,-0xc
0072E28E  9B D9 7D FE               FSTCW word ptr [EBP + -0x2]
0072E292  9B                        WAIT
0072E293  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
0072E297  80 CC 0C                  OR AH,0xc
0072E29A  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
0072E29E  D9 6D FC                  FLDCW word ptr [EBP + -0x4]
0072E2A1  DF 7D F4                  FISTP qword ptr [EBP + -0xc]
0072E2A4  D9 6D FE                  FLDCW word ptr [EBP + -0x2]
0072E2A7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072E2AA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072E2AD  C9                        LEAVE
0072E2AE  C3                        RET
