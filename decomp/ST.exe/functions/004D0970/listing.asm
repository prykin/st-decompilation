FUN_004d0970:
004D0970  55                        PUSH EBP
004D0971  8B EC                     MOV EBP,ESP
004D0973  56                        PUSH ESI
004D0974  8B F1                     MOV ESI,ECX
004D0976  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004D097C  8B 86 49 02 00 00         MOV EAX,dword ptr [ESI + 0x249]
004D0982  41                        INC ECX
004D0983  3B C8                     CMP ECX,EAX
004D0985  7C 22                     JL 0x004d09a9
004D0987  83 C0 0A                  ADD EAX,0xa
004D098A  89 86 49 02 00 00         MOV dword ptr [ESI + 0x249],EAX
004D0990  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004D0993  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
004D0999  C1 E2 02                  SHL EDX,0x2
004D099C  52                        PUSH EDX
004D099D  50                        PUSH EAX
004D099E  E8 AD C5 1D 00            CALL 0x006acf50
004D09A3  89 86 4D 02 00 00         MOV dword ptr [ESI + 0x24d],EAX
LAB_004d09a9:
004D09A9  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004D09AF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004D09B2  53                        PUSH EBX
004D09B3  57                        PUSH EDI
004D09B4  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004D09B7  8B 86 4D 02 00 00         MOV EAX,dword ptr [ESI + 0x24d]
004D09BD  89 0C 90                  MOV dword ptr [EAX + EDX*0x4],ECX
004D09C0  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004D09C6  8B BE 4D 02 00 00         MOV EDI,dword ptr [ESI + 0x24d]
004D09CC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D09CF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D09D2  89 54 87 04               MOV dword ptr [EDI + EAX*0x4 + 0x4],EDX
004D09D6  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004D09DC  8B 9E 4D 02 00 00         MOV EBX,dword ptr [ESI + 0x24d]
004D09E2  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
004D09E5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004D09E8  89 44 BB 08               MOV dword ptr [EBX + EDI*0x4 + 0x8],EAX
004D09EC  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
004D09EF  57                        PUSH EDI
004D09F0  56                        PUSH ESI
004D09F1  6A 00                     PUSH 0x0
004D09F3  50                        PUSH EAX
004D09F4  52                        PUSH EDX
004D09F5  51                        PUSH ECX
004D09F6  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
004D09FC  E8 24 09 F3 FF            CALL 0x00401325
004D0A01  5F                        POP EDI
004D0A02  5B                        POP EBX
004D0A03  85 C0                     TEST EAX,EAX
004D0A05  74 17                     JZ 0x004d0a1e
004D0A07  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004D0A0D  68 F9 02 00 00            PUSH 0x2f9
004D0A12  68 9C F3 7B 00            PUSH 0x7bf39c
004D0A17  51                        PUSH ECX
004D0A18  50                        PUSH EAX
004D0A19  E8 22 54 1D 00            CALL 0x006a5e40
LAB_004d0a1e:
004D0A1E  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004D0A24  40                        INC EAX
004D0A25  89 86 45 02 00 00         MOV dword ptr [ESI + 0x245],EAX
004D0A2B  33 C0                     XOR EAX,EAX
004D0A2D  5E                        POP ESI
004D0A2E  5D                        POP EBP
004D0A2F  C2 0C 00                  RET 0xc
