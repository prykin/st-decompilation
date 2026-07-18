FUN_0075cf90:
0075CF90  55                        PUSH EBP
0075CF91  8B EC                     MOV EBP,ESP
0075CF93  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0075CF96  53                        PUSH EBX
0075CF97  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0075CF9A  56                        PUSH ESI
0075CF9B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075CF9E  57                        PUSH EDI
0075CF9F  8B 0B                     MOV ECX,dword ptr [EBX]
0075CFA1  8B BE 9E 01 00 00         MOV EDI,dword ptr [ESI + 0x19e]
0075CFA7  2B C1                     SUB EAX,ECX
0075CFA9  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
0075CFAC  3B C1                     CMP EAX,ECX
0075CFAE  76 02                     JBE 0x0075cfb2
0075CFB0  8B C1                     MOV EAX,ECX
LAB_0075cfb2:
0075CFB2  8B 8E B2 01 00 00         MOV ECX,dword ptr [ESI + 0x1b2]
0075CFB8  8D 55 08                  LEA EDX,[EBP + 0x8]
0075CFBB  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0075CFC2  50                        PUSH EAX
0075CFC3  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0075CFC6  52                        PUSH EDX
0075CFC7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075CFCA  50                        PUSH EAX
0075CFCB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075CFCE  52                        PUSH EDX
0075CFCF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075CFD2  50                        PUSH EAX
0075CFD3  52                        PUSH EDX
0075CFD4  56                        PUSH ESI
0075CFD5  FF 51 04                  CALL dword ptr [ECX + 0x4]
0075CFD8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075CFDB  8B 13                     MOV EDX,dword ptr [EBX]
0075CFDD  8B 86 BA 01 00 00         MOV EAX,dword ptr [ESI + 0x1ba]
0075CFE3  51                        PUSH ECX
0075CFE4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0075CFE7  8D 14 91                  LEA EDX,[ECX + EDX*0x4]
0075CFEA  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0075CFED  52                        PUSH EDX
0075CFEE  51                        PUSH ECX
0075CFEF  56                        PUSH ESI
0075CFF0  FF 50 04                  CALL dword ptr [EAX + 0x4]
0075CFF3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075CFF6  8B 03                     MOV EAX,dword ptr [EBX]
0075CFF8  03 C2                     ADD EAX,EDX
0075CFFA  5F                        POP EDI
0075CFFB  89 03                     MOV dword ptr [EBX],EAX
0075CFFD  5E                        POP ESI
0075CFFE  5B                        POP EBX
0075CFFF  5D                        POP EBP
0075D000  C2 1C 00                  RET 0x1c
