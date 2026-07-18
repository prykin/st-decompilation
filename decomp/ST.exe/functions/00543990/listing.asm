FUN_00543990:
00543990  55                        PUSH EBP
00543991  8B EC                     MOV EBP,ESP
00543993  83 EC 48                  SUB ESP,0x48
00543996  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054399B  56                        PUSH ESI
0054399C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054399F  57                        PUSH EDI
005439A0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005439A3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005439A6  6A 00                     PUSH 0x0
005439A8  52                        PUSH EDX
005439A9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005439AC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005439B2  E8 39 9E 1E 00            CALL 0x0072d7f0
005439B7  8B F0                     MOV ESI,EAX
005439B9  83 C4 08                  ADD ESP,0x8
005439BC  85 F6                     TEST ESI,ESI
005439BE  0F 85 81 00 00 00         JNZ 0x00543a45
005439C4  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005439C7  8D 77 18                  LEA ESI,[EDI + 0x18]
005439CA  8B CE                     MOV ECX,ESI
005439CC  E8 DF 20 1D 00            CALL 0x00715ab0
005439D1  83 7D 08 07               CMP dword ptr [EBP + 0x8],0x7
005439D5  75 12                     JNZ 0x005439e9
005439D7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005439DC  6A 00                     PUSH 0x0
005439DE  6A 00                     PUSH 0x0
005439E0  6A 00                     PUSH 0x0
005439E2  6A 07                     PUSH 0x7
005439E4  6A 00                     PUSH 0x0
005439E6  50                        PUSH EAX
005439E7  EB 19                     JMP 0x00543a02
LAB_005439e9:
005439E9  8B 0D 40 16 81 00         MOV ECX,dword ptr [0x00811640]
005439EF  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005439F5  6A 01                     PUSH 0x1
005439F7  6A 21                     PUSH 0x21
005439F9  51                        PUSH ECX
005439FA  68 81 00 00 00            PUSH 0x81
005439FF  6A 00                     PUSH 0x0
00543A01  52                        PUSH EDX
LAB_00543a02:
00543A02  8B CE                     MOV ECX,ESI
00543A04  E8 97 1E 1D 00            CALL 0x007158a0
00543A09  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
00543A0C  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
00543A0F  50                        PUSH EAX
00543A10  51                        PUSH ECX
00543A11  6A 00                     PUSH 0x0
00543A13  8B CF                     MOV ECX,EDI
00543A15  66 C7 87 94 04 00 00 58 00  MOV word ptr [EDI + 0x494],0x58
00543A1E  E8 5B 16 EC FF            CALL 0x0040507e
00543A23  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00543A26  83 F8 FF                  CMP EAX,-0x1
00543A29  74 0A                     JZ 0x00543a35
00543A2B  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
00543A2E  50                        PUSH EAX
00543A2F  52                        PUSH EDX
00543A30  E8 BB 00 17 00            CALL 0x006b3af0
LAB_00543a35:
00543A35  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00543A38  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00543A3D  5F                        POP EDI
00543A3E  5E                        POP ESI
00543A3F  8B E5                     MOV ESP,EBP
00543A41  5D                        POP EBP
00543A42  C2 04 00                  RET 0x4
LAB_00543a45:
00543A45  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00543A48  68 00 7E 7C 00            PUSH 0x7c7e00
00543A4D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00543A52  56                        PUSH ESI
00543A53  6A 00                     PUSH 0x0
00543A55  68 8C 00 00 00            PUSH 0x8c
00543A5A  68 60 7D 7C 00            PUSH 0x7c7d60
00543A5F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00543A65  E8 66 9A 16 00            CALL 0x006ad4d0
00543A6A  83 C4 18                  ADD ESP,0x18
00543A6D  85 C0                     TEST EAX,EAX
00543A6F  74 01                     JZ 0x00543a72
00543A71  CC                        INT3
LAB_00543a72:
00543A72  68 8D 00 00 00            PUSH 0x8d
00543A77  68 60 7D 7C 00            PUSH 0x7c7d60
00543A7C  6A 00                     PUSH 0x0
00543A7E  56                        PUSH ESI
00543A7F  E8 BC 23 16 00            CALL 0x006a5e40
00543A84  5F                        POP EDI
00543A85  5E                        POP ESI
00543A86  8B E5                     MOV ESP,EBP
00543A88  5D                        POP EBP
00543A89  C2 04 00                  RET 0x4
