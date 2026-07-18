FUN_0041da30:
0041DA30  55                        PUSH EBP
0041DA31  8B EC                     MOV EBP,ESP
0041DA33  51                        PUSH ECX
0041DA34  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
0041DA37  56                        PUSH ESI
0041DA38  85 C0                     TEST EAX,EAX
0041DA3A  0F 85 BA 00 00 00         JNZ 0x0041dafa
0041DA40  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0041DA45  8D B1 D5 01 00 00         LEA ESI,[ECX + 0x1d5]
0041DA4B  83 F8 01                  CMP EAX,0x1
0041DA4E  75 58                     JNZ 0x0041daa8
0041DA50  0F BF 41 45               MOVSX EAX,word ptr [ECX + 0x45]
0041DA54  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0041DA57  51                        PUSH ECX
0041DA58  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0041DA5B  0F BF 51 43               MOVSX EDX,word ptr [ECX + 0x43]
0041DA5F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DA65  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0041DA68  0F BF 41 41               MOVSX EAX,word ptr [ECX + 0x41]
0041DA6C  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DA72  D8 41 70                  FADD float ptr [ECX + 0x70]
0041DA75  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0041DA7B  D9 1C 24                  FSTP float ptr [ESP]
0041DA7E  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0041DA81  51                        PUSH ECX
0041DA82  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0041DA85  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DA8B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DA91  D9 1C 24                  FSTP float ptr [ESP]
0041DA94  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0041DA97  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DA9D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DAA3  E9 9E 00 00 00            JMP 0x0041db46
LAB_0041daa8:
0041DAA8  0F BF 51 45               MOVSX EDX,word ptr [ECX + 0x45]
0041DAAC  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0041DAAF  51                        PUSH ECX
0041DAB0  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0041DAB3  0F BF 41 43               MOVSX EAX,word ptr [ECX + 0x43]
0041DAB7  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DABD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0041DAC0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DAC6  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0041DACC  D9 1C 24                  FSTP float ptr [ESP]
0041DACF  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0041DAD2  51                        PUSH ECX
0041DAD3  0F BF 49 41               MOVSX ECX,word ptr [ECX + 0x41]
0041DAD7  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DADD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0041DAE0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DAE6  D9 1C 24                  FSTP float ptr [ESP]
0041DAE9  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0041DAEC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DAF2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DAF8  EB 4C                     JMP 0x0041db46
LAB_0041dafa:
0041DAFA  0F BF 51 45               MOVSX EDX,word ptr [ECX + 0x45]
0041DAFE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0041DB01  51                        PUSH ECX
0041DB02  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0041DB05  0F BF 41 49               MOVSX EAX,word ptr [ECX + 0x49]
0041DB09  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DB0F  40                        INC EAX
0041DB10  8D B1 D5 01 00 00         LEA ESI,[ECX + 0x1d5]
0041DB16  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0041DB19  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041DB1F  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0041DB25  D9 1C 24                  FSTP float ptr [ESP]
0041DB28  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0041DB2B  51                        PUSH ECX
0041DB2C  0F BF 49 47               MOVSX ECX,word ptr [ECX + 0x47]
0041DB30  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041DB36  41                        INC ECX
0041DB37  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0041DB3A  D9 1C 24                  FSTP float ptr [ESP]
0041DB3D  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0041DB40  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
LAB_0041db46:
0041DB46  51                        PUSH ECX
0041DB47  8B CE                     MOV ECX,ESI
0041DB49  D9 1C 24                  FSTP float ptr [ESP]
0041DB4C  E8 88 6A FE FF            CALL 0x004045d9
0041DB51  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0041DB57  8B CE                     MOV ECX,ESI
0041DB59  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0041DB5F  50                        PUSH EAX
0041DB60  E8 45 58 FE FF            CALL 0x004033aa
0041DB65  5E                        POP ESI
0041DB66  8B E5                     MOV ESP,EBP
0041DB68  5D                        POP EBP
0041DB69  C3                        RET
