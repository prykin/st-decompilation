FUN_004dcaa0:
004DCAA0  55                        PUSH EBP
004DCAA1  8B EC                     MOV EBP,ESP
004DCAA3  56                        PUSH ESI
004DCAA4  8B F1                     MOV ESI,ECX
004DCAA6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DCAAC  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004DCAB2  50                        PUSH EAX
004DCAB3  E8 FF 7E F2 FF            CALL 0x004049b7
004DCAB8  25 FF 00 00 00            AND EAX,0xff
004DCABD  8B 96 45 02 00 00         MOV EDX,dword ptr [ESI + 0x245]
004DCAC3  48                        DEC EAX
004DCAC4  8B C8                     MOV ECX,EAX
004DCAC6  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DCACC  83 E8 00                  SUB EAX,0x0
004DCACF  74 22                     JZ 0x004dcaf3
004DCAD1  48                        DEC EAX
004DCAD2  74 08                     JZ 0x004dcadc
004DCAD4  48                        DEC EAX
004DCAD5  74 1C                     JZ 0x004dcaf3
004DCAD7  5E                        POP ESI
004DCAD8  5D                        POP EBP
004DCAD9  C2 10 00                  RET 0x10
LAB_004dcadc:
004DCADC  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004DCADF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004DCAE2  5E                        POP ESI
004DCAE3  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
004DCAE9  C7 02 27 00 00 00         MOV dword ptr [EDX],0x27
004DCAEF  5D                        POP EBP
004DCAF0  C2 10 00                  RET 0x10
LAB_004dcaf3:
004DCAF3  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004DCAF9  53                        PUSH EBX
004DCAFA  8B 1C 95 70 51 7B 00      MOV EBX,dword ptr [EDX*0x4 + 0x7b5170]
004DCB01  57                        PUSH EDI
004DCB02  8D 3C 41                  LEA EDI,[ECX + EAX*0x2]
004DCB05  03 C7                     ADD EAX,EDI
004DCB07  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004DCB0A  8D 04 87                  LEA EAX,[EDI + EAX*0x4]
004DCB0D  8B 04 C3                  MOV EAX,dword ptr [EBX + EAX*0x8]
004DCB10  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
004DCB13  89 03                     MOV dword ptr [EBX],EAX
004DCB15  8B B6 35 02 00 00         MOV ESI,dword ptr [ESI + 0x235]
004DCB1B  8D 0C 71                  LEA ECX,[ECX + ESI*0x2]
004DCB1E  03 F1                     ADD ESI,ECX
004DCB20  8B 0C 95 70 51 7B 00      MOV ECX,dword ptr [EDX*0x4 + 0x7b5170]
004DCB27  8D 04 B7                  LEA EAX,[EDI + ESI*0x4]
004DCB2A  5F                        POP EDI
004DCB2B  5B                        POP EBX
004DCB2C  5E                        POP ESI
004DCB2D  8B 54 C1 04               MOV EDX,dword ptr [ECX + EAX*0x8 + 0x4]
004DCB31  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004DCB34  89 10                     MOV dword ptr [EAX],EDX
004DCB36  5D                        POP EBP
004DCB37  C2 10 00                  RET 0x10
