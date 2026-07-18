FUN_005fac40:
005FAC40  55                        PUSH EBP
005FAC41  8B EC                     MOV EBP,ESP
005FAC43  56                        PUSH ESI
005FAC44  8B F1                     MOV ESI,ECX
005FAC46  57                        PUSH EDI
005FAC47  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FAC4D  85 C0                     TEST EAX,EAX
005FAC4F  0F 84 EF 00 00 00         JZ 0x005fad44
005FAC55  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005FAC58  85 FF                     TEST EDI,EDI
005FAC5A  74 15                     JZ 0x005fac71
005FAC5C  8D 45 18                  LEA EAX,[EBP + 0x18]
005FAC5F  8D 4D 14                  LEA ECX,[EBP + 0x14]
005FAC62  50                        PUSH EAX
005FAC63  8D 55 08                  LEA EDX,[EBP + 0x8]
005FAC66  51                        PUSH ECX
005FAC67  52                        PUSH EDX
005FAC68  8B CE                     MOV ECX,ESI
005FAC6A  E8 74 85 E0 FF            CALL 0x004031e3
005FAC6F  EB 12                     JMP 0x005fac83
LAB_005fac71:
005FAC71  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005FAC74  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
005FAC77  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005FAC7A  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
005FAC7D  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
005FAC80  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
LAB_005fac83:
005FAC83  83 7D 0C 01               CMP dword ptr [EBP + 0xc],0x1
005FAC87  0F 85 B7 00 00 00         JNZ 0x005fad44
005FAC8D  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
005FAC91  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005FAC97  89 41 14                  MOV dword ptr [ECX + 0x14],EAX
005FAC9A  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FACA0  0F BF 55 14               MOVSX EDX,word ptr [EBP + 0x14]
005FACA4  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
005FACA7  8B 96 E6 02 00 00         MOV EDX,dword ptr [ESI + 0x2e6]
005FACAD  0F BF 4D 18               MOVSX ECX,word ptr [EBP + 0x18]
005FACB1  83 E9 32                  SUB ECX,0x32
005FACB4  89 4A 1C                  MOV dword ptr [EDX + 0x1c],ECX
005FACB7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005FACBD  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FACC3  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005FACC9  89 50 68                  MOV dword ptr [EAX + 0x68],EDX
005FACCC  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FACD2  85 FF                     TEST EDI,EDI
005FACD4  C7 40 64 09 00 00 00      MOV dword ptr [EAX + 0x64],0x9
005FACDB  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FACE1  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005FACE4  89 48 60                  MOV dword ptr [EAX + 0x60],ECX
005FACE7  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FACED  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005FACF0  89 50 34                  MOV dword ptr [EAX + 0x34],EDX
005FACF3  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FACF9  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
005FACFC  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
005FACFF  74 0E                     JZ 0x005fad0f
005FAD01  8B 96 E6 02 00 00         MOV EDX,dword ptr [ESI + 0x2e6]
005FAD07  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005FAD0A  89 42 3C                  MOV dword ptr [EDX + 0x3c],EAX
005FAD0D  EB 09                     JMP 0x005fad18
LAB_005fad0f:
005FAD0F  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FAD15  8B 40 3C                  MOV EAX,dword ptr [EAX + 0x3c]
LAB_005fad18:
005FAD18  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005FAD1E  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
005FAD21  2B F8                     SUB EDI,EAX
005FAD23  74 1F                     JZ 0x005fad44
005FAD25  8B 41 64                  MOV EAX,dword ptr [ECX + 0x64]
005FAD28  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005FAD2B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005FAD2E  C1 E0 02                  SHL EAX,0x2
005FAD31  99                        CDQ
005FAD32  F7 FF                     IDIV EDI
005FAD34  40                        INC EAX
005FAD35  89 41 50                  MOV dword ptr [ECX + 0x50],EAX
005FAD38  8B B6 E6 02 00 00         MOV ESI,dword ptr [ESI + 0x2e6]
005FAD3E  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
005FAD41  89 4E 54                  MOV dword ptr [ESI + 0x54],ECX
LAB_005fad44:
005FAD44  5F                        POP EDI
005FAD45  5E                        POP ESI
005FAD46  5D                        POP EBP
005FAD47  C2 18 00                  RET 0x18
