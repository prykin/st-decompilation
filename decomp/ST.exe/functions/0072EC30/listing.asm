FUN_0072ec30:
0072EC30  55                        PUSH EBP
0072EC31  8B EC                     MOV EBP,ESP
0072EC33  51                        PUSH ECX
0072EC34  6A 02                     PUSH 0x2
0072EC36  A1 F4 A5 85 00            MOV EAX,[0x0085a5f4]
0072EC3B  50                        PUSH EAX
0072EC3C  E8 11 40 CD FF            CALL 0x00402c52
0072EC41  83 C4 08                  ADD ESP,0x8
0072EC44  8B 0D F0 A5 85 00         MOV ECX,dword ptr [0x0085a5f0]
0072EC4A  2B 0D F4 A5 85 00         SUB ECX,dword ptr [0x0085a5f4]
0072EC50  83 C1 04                  ADD ECX,0x4
0072EC53  3B C1                     CMP EAX,ECX
0072EC55  73 5C                     JNC 0x0072ecb3
0072EC57  6A 68                     PUSH 0x68
0072EC59  68 84 FE 79 00            PUSH 0x79fe84
0072EC5E  6A 02                     PUSH 0x2
0072EC60  6A 02                     PUSH 0x2
0072EC62  8B 15 F4 A5 85 00         MOV EDX,dword ptr [0x0085a5f4]
0072EC68  52                        PUSH EDX
0072EC69  E8 E4 3F CD FF            CALL 0x00402c52
0072EC6E  83 C4 08                  ADD ESP,0x8
0072EC71  83 C0 10                  ADD EAX,0x10
0072EC74  50                        PUSH EAX
0072EC75  A1 F4 A5 85 00            MOV EAX,[0x0085a5f4]
0072EC7A  50                        PUSH EAX
0072EC7B  E8 34 5B CD FF            CALL 0x004047b4
0072EC80  83 C4 14                  ADD ESP,0x14
0072EC83  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072EC86  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0072EC8A  75 04                     JNZ 0x0072ec90
0072EC8C  33 C0                     XOR EAX,EAX
0072EC8E  EB 40                     JMP 0x0072ecd0
LAB_0072ec90:
0072EC90  8B 0D F0 A5 85 00         MOV ECX,dword ptr [0x0085a5f0]
0072EC96  2B 0D F4 A5 85 00         SUB ECX,dword ptr [0x0085a5f4]
0072EC9C  C1 F9 02                  SAR ECX,0x2
0072EC9F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072ECA2  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
0072ECA5  A3 F0 A5 85 00            MOV [0x0085a5f0],EAX
0072ECAA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072ECAD  89 0D F4 A5 85 00         MOV dword ptr [0x0085a5f4],ECX
LAB_0072ecb3:
0072ECB3  8B 15 F0 A5 85 00         MOV EDX,dword ptr [0x0085a5f0]
0072ECB9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072ECBC  89 02                     MOV dword ptr [EDX],EAX
0072ECBE  8B 0D F0 A5 85 00         MOV ECX,dword ptr [0x0085a5f0]
0072ECC4  83 C1 04                  ADD ECX,0x4
0072ECC7  89 0D F0 A5 85 00         MOV dword ptr [0x0085a5f0],ECX
0072ECCD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0072ecd0:
0072ECD0  8B E5                     MOV ESP,EBP
0072ECD2  5D                        POP EBP
0072ECD3  C3                        RET
