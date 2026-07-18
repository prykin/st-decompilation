FUN_00693c10:
00693C10  55                        PUSH EBP
00693C11  8B EC                     MOV EBP,ESP
00693C13  53                        PUSH EBX
00693C14  56                        PUSH ESI
00693C15  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00693C18  33 C0                     XOR EAX,EAX
00693C1A  8B D9                     MOV EBX,ECX
00693C1C  8A 46 22                  MOV AL,byte ptr [ESI + 0x22]
00693C1F  50                        PUSH EAX
00693C20  E8 EE FC D6 FF            CALL 0x00403913
00693C25  85 C0                     TEST EAX,EAX
00693C27  75 56                     JNZ 0x00693c7f
00693C29  57                        PUSH EDI
00693C2A  8B CB                     MOV ECX,EBX
00693C2C  E8 CE ED D6 FF            CALL 0x004029ff
00693C31  33 C9                     XOR ECX,ECX
00693C33  8A 4E 22                  MOV CL,byte ptr [ESI + 0x22]
00693C36  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00693C39  8D 14 CB                  LEA EDX,[EBX + ECX*0x8]
00693C3C  8D 7C 11 11               LEA EDI,[ECX + EDX*0x1 + 0x11]
00693C40  B9 14 00 00 00            MOV ECX,0x14
00693C45  F3 A5                     MOVSD.REP ES:EDI,ESI
00693C47  A4                        MOVSB ES:EDI,ESI
00693C48  8A 53 10                  MOV DL,byte ptr [EBX + 0x10]
00693C4B  5F                        POP EDI
00693C4C  FE C2                     INC DL
00693C4E  85 C0                     TEST EAX,EAX
00693C50  88 53 10                  MOV byte ptr [EBX + 0x10],DL
00693C53  7C 12                     JL 0x00693c67
00693C55  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00693C58  33 C9                     XOR ECX,ECX
00693C5A  8A 4A 22                  MOV CL,byte ptr [EDX + 0x22]
00693C5D  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00693C60  8D 14 CB                  LEA EDX,[EBX + ECX*0x8]
00693C63  88 44 11 34               MOV byte ptr [ECX + EDX*0x1 + 0x34],AL
LAB_00693c67:
00693C67  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00693C6A  33 C0                     XOR EAX,EAX
00693C6C  5E                        POP ESI
00693C6D  8A 41 22                  MOV AL,byte ptr [ECX + 0x22]
00693C70  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00693C73  8D 14 C3                  LEA EDX,[EBX + EAX*0x8]
00693C76  5B                        POP EBX
00693C77  8D 44 10 11               LEA EAX,[EAX + EDX*0x1 + 0x11]
00693C7B  5D                        POP EBP
00693C7C  C2 04 00                  RET 0x4
LAB_00693c7f:
00693C7F  5E                        POP ESI
00693C80  33 C0                     XOR EAX,EAX
00693C82  5B                        POP EBX
00693C83  5D                        POP EBP
00693C84  C2 04 00                  RET 0x4
