SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00693D00::FUN_00693d00:
00693D00  55                        PUSH EBP
00693D01  8B EC                     MOV EBP,ESP
00693D03  83 EC 4C                  SUB ESP,0x4c
00693D06  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00693D09  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00693D0C  80 E2 05                  AND DL,0x5
00693D0F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00693D12  83 CA 05                  OR EDX,0x5
00693D15  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00693D1B  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00693D1E  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
00693D21  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00693D26  8D 55 B8                  LEA EDX,[EBP + -0x48]
00693D29  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00693D2C  6A 00                     PUSH 0x0
00693D2E  52                        PUSH EDX
00693D2F  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
00693D36  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00693D39  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00693D3F  E8 AC 9A 09 00            CALL 0x0072d7f0
00693D44  83 C4 08                  ADD ESP,0x8
00693D47  85 C0                     TEST EAX,EAX
00693D49  75 2F                     JNZ 0x00693d7a
00693D4B  8B 0D 70 D7 79 00         MOV ECX,dword ptr [0x0079d770]
00693D51  50                        PUSH EAX
00693D52  50                        PUSH EAX
00693D53  50                        PUSH EAX
00693D54  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00693D57  68 99 19 00 00            PUSH 0x1999
00693D5C  50                        PUSH EAX
00693D5D  51                        PUSH ECX
00693D5E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00693D61  6A 00                     PUSH 0x0
00693D63  E8 88 D6 05 00            CALL 0x006f13f0
00693D68  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00693D6B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00693D6E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00693D74  8B E5                     MOV ESP,EBP
00693D76  5D                        POP EBP
00693D77  C2 08 00                  RET 0x8
LAB_00693d7a:
00693D7A  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00693D7D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00693D82  33 C0                     XOR EAX,EAX
00693D84  8B E5                     MOV ESP,EBP
00693D86  5D                        POP EBP
00693D87  C2 08 00                  RET 0x8
