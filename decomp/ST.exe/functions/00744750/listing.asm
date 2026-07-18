FUN_00744750:
00744750  55                        PUSH EBP
00744751  8B EC                     MOV EBP,ESP
00744753  83 EC 70                  SUB ESP,0x70
00744756  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00744759  33 C9                     XOR ECX,ECX
0074475B  66 8B 08                  MOV CX,word ptr [EAX]
0074475E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00744761  8D 55 F0                  LEA EDX,[EBP + -0x10]
00744764  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00744767  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074476A  8B 08                     MOV ECX,dword ptr [EAX]
0074476C  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0074476F  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
00744772  83 EA 01                  SUB EDX,0x1
00744775  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
00744778  83 7D 94 07               CMP dword ptr [EBP + -0x6c],0x7
0074477C  77 40                     JA 0x007447be
0074477E  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
switchD_00744781::switchD:
00744781  FF 24 85 AC 48 74 00      JMP dword ptr [EAX*0x4 + 0x7448ac]
switchD_00744781::caseD_1:
00744788  C7 45 FC 08 00 00 00      MOV dword ptr [EBP + -0x4],0x8
0074478F  EB 34                     JMP 0x007447c5
switchD_00744781::caseD_3:
00744791  C7 45 FC 11 00 00 00      MOV dword ptr [EBP + -0x4],0x11
00744798  EB 2B                     JMP 0x007447c5
switchD_00744781::caseD_4:
0074479A  C7 45 FC 12 00 00 00      MOV dword ptr [EBP + -0x4],0x12
007447A1  EB 22                     JMP 0x007447c5
switchD_00744781::caseD_2:
007447A3  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
007447AA  EB 19                     JMP 0x007447c5
switchD_00744781::caseD_8:
007447AC  C7 45 FC 10 00 00 00      MOV dword ptr [EBP + -0x4],0x10
007447B3  EB 10                     JMP 0x007447c5
switchD_00744781::caseD_7:
007447B5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007447B8  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
switchD_00744781::caseD_6:
007447BE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_007447c5:
007447C5  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007447C9  0F 84 8B 00 00 00         JZ 0x0074485a
007447CF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007447D2  8B 02                     MOV EAX,dword ptr [EDX]
007447D4  50                        PUSH EAX
007447D5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007447D8  83 C1 18                  ADD ECX,0x18
007447DB  51                        PUSH ECX
007447DC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007447DF  52                        PUSH EDX
007447E0  E8 7B 12 FF FF            CALL 0x00735a60
007447E5  83 C4 0C                  ADD ESP,0xc
007447E8  85 C0                     TEST EAX,EAX
007447EA  75 6E                     JNZ 0x0074485a
007447EC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007447EF  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
007447F2  83 7D 90 10               CMP dword ptr [EBP + -0x70],0x10
007447F6  74 0E                     JZ 0x00744806
007447F8  83 7D 90 16               CMP dword ptr [EBP + -0x70],0x16
007447FC  74 08                     JZ 0x00744806
007447FE  83 7D 90 1D               CMP dword ptr [EBP + -0x70],0x1d
00744802  74 02                     JZ 0x00744806
00744804  EB 26                     JMP 0x0074482c
LAB_00744806:
00744806  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00744809  83 C9 01                  OR ECX,0x1
0074480C  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0074480F  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00744812  83 E2 E1                  AND EDX,0xffffffe1
00744815  83 CA 02                  OR EDX,0x2
00744818  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0074481B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074481E  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00744821  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
00744824  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00744827  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
0074482A  EB 08                     JMP 0x00744834
LAB_0074482c:
0074482C  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0074482F  24 FE                     AND AL,0xfe
00744831  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_00744834:
00744834  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00744837  83 C1 18                  ADD ECX,0x18
0074483A  51                        PUSH ECX
0074483B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0074483E  83 C2 08                  ADD EDX,0x8
00744841  52                        PUSH EDX
00744842  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744845  50                        PUSH EAX
00744846  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00744849  51                        PUSH ECX
0074484A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0074484D  52                        PUSH EDX
0074484E  8D 45 98                  LEA EAX,[EBP + -0x68]
00744851  50                        PUSH EAX
00744852  E8 39 0D FF FF            CALL 0x00735590
00744857  83 C4 18                  ADD ESP,0x18
LAB_0074485a:
0074485A  68 FF FF 00 00            PUSH 0xffff
0074485F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00744862  8B 11                     MOV EDX,dword ptr [ECX]
00744864  52                        PUSH EDX
00744865  E8 06 1A FF FF            CALL 0x00736270
0074486A  83 C4 08                  ADD ESP,0x8
0074486D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00744874  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00744877  83 38 08                  CMP dword ptr [EAX],0x8
0074487A  74 18                     JZ 0x00744894
0074487C  83 3D D0 24 7F 00 00      CMP dword ptr [0x007f24d0],0x0
00744883  75 0F                     JNZ 0x00744894
00744885  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00744888  51                        PUSH ECX
00744889  E8 22 BE FF FF            CALL 0x007406b0
0074488E  83 C4 04                  ADD ESP,0x4
00744891  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00744894:
00744894  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00744898  75 0E                     JNZ 0x007448a8
0074489A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0074489D  8B 02                     MOV EAX,dword ptr [EDX]
0074489F  50                        PUSH EAX
007448A0  E8 DB 15 FF FF            CALL 0x00735e80
007448A5  83 C4 04                  ADD ESP,0x4
LAB_007448a8:
007448A8  8B E5                     MOV ESP,EBP
007448AA  5D                        POP EBP
007448AB  C3                        RET
