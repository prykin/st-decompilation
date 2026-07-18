StartSystemTy::CreateChatView:
005DE270  55                        PUSH EBP
005DE271  8B EC                     MOV EBP,ESP
005DE273  81 EC C0 08 00 00         SUB ESP,0x8c0
005DE279  53                        PUSH EBX
005DE27A  56                        PUSH ESI
005DE27B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DE27E  57                        PUSH EDI
005DE27F  B9 1E 02 00 00            MOV ECX,0x21e
005DE284  33 C0                     XOR EAX,EAX
005DE286  8D BD 40 F7 FF FF         LEA EDI,[EBP + 0xfffff740]
005DE28C  33 F6                     XOR ESI,ESI
005DE28E  F3 AB                     STOSD.REP ES:EDI
005DE290  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DE295  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DE298  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DE29B  56                        PUSH ESI
005DE29C  52                        PUSH EDX
005DE29D  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DE2A0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DE2A6  E8 45 F5 14 00            CALL 0x0072d7f0
005DE2AB  8B F8                     MOV EDI,EAX
005DE2AD  83 C4 08                  ADD ESP,0x8
005DE2B0  3B FE                     CMP EDI,ESI
005DE2B2  0F 85 FB 01 00 00         JNZ 0x005de4b3
005DE2B8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005DE2BB  B9 02 00 00 00            MOV ECX,0x2
005DE2C0  89 B5 40 F7 FF FF         MOV dword ptr [EBP + 0xfffff740],ESI
005DE2C6  89 8D 44 F7 FF FF         MOV dword ptr [EBP + 0xfffff744],ECX
005DE2CC  8B 83 7E 06 00 00         MOV EAX,dword ptr [EBX + 0x67e]
005DE2D2  8B 7B 34                  MOV EDI,dword ptr [EBX + 0x34]
005DE2D5  C7 85 60 F7 FF FF CD 00 00 00  MOV dword ptr [EBP + 0xfffff760],0xcd
005DE2DF  C7 85 64 F7 FF FF F3 01 00 00  MOV dword ptr [EBP + 0xfffff764],0x1f3
005DE2E9  C7 85 48 F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff748],0x1
005DE2F3  89 B5 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ESI
005DE2F9  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005DE2FC  89 95 50 F7 FF FF         MOV dword ptr [EBP + 0xfffff750],EDX
005DE302  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
005DE308  3B C6                     CMP EAX,ESI
005DE30A  74 0E                     JZ 0x005de31a
005DE30C  57                        PUSH EDI
005DE30D  E8 7E 24 13 00            CALL 0x00710790
005DE312  83 C4 04                  ADD ESP,0x4
005DE315  B9 02 00 00 00            MOV ECX,0x2
LAB_005de31a:
005DE31A  8B BF 8A 00 00 00         MOV EDI,dword ptr [EDI + 0x8a]
005DE320  B8 49 00 00 00            MOV EAX,0x49
005DE325  99                        CDQ
005DE326  F7 FF                     IDIV EDI
005DE328  8B 93 09 06 00 00         MOV EDX,dword ptr [EBX + 0x609]
005DE32E  89 BD 54 F7 FF FF         MOV dword ptr [EBP + 0xfffff754],EDI
005DE334  89 95 04 F8 FF FF         MOV dword ptr [EBP + 0xfffff804],EDX
005DE33A  8B 93 0D 06 00 00         MOV EDX,dword ptr [EBX + 0x60d]
005DE340  89 95 08 F8 FF FF         MOV dword ptr [EBP + 0xfffff808],EDX
005DE346  8B 93 11 06 00 00         MOV EDX,dword ptr [EBX + 0x611]
005DE34C  89 95 0C F8 FF FF         MOV dword ptr [EBP + 0xfffff80c],EDX
005DE352  8B 93 15 06 00 00         MOV EDX,dword ptr [EBX + 0x615]
005DE358  89 B5 7C F7 FF FF         MOV dword ptr [EBP + 0xfffff77c],ESI
005DE35E  89 B5 F4 F7 FF FF         MOV dword ptr [EBP + 0xfffff7f4],ESI
005DE364  89 8D F8 F7 FF FF         MOV dword ptr [EBP + 0xfffff7f8],ECX
005DE36A  89 B5 FC F7 FF FF         MOV dword ptr [EBP + 0xfffff7fc],ESI
005DE370  89 8D 00 F8 FF FF         MOV dword ptr [EBP + 0xfffff800],ECX
005DE376  89 B5 60 F8 FF FF         MOV dword ptr [EBP + 0xfffff860],ESI
005DE37C  89 8D 78 F9 FF FF         MOV dword ptr [EBP + 0xfffff978],ECX
005DE382  B9 5F 00 00 00            MOV ECX,0x5f
005DE387  8D B5 FC F7 FF FF         LEA ESI,[EBP + 0xfffff7fc]
005DE38D  8D BD 7C F9 FF FF         LEA EDI,[EBP + 0xfffff97c]
005DE393  C7 85 58 F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff758],0x1
005DE39D  C7 85 80 F7 FF FF 3F 63 00 00  MOV dword ptr [EBP + 0xfffff780],0x633f
005DE3A7  C7 85 F0 F7 FF FF 04 00 00 00  MOV dword ptr [EBP + 0xfffff7f0],0x4
005DE3B1  89 95 10 F8 FF FF         MOV dword ptr [EBP + 0xfffff810],EDX
005DE3B7  8B 93 80 05 00 00         MOV EDX,dword ptr [EBX + 0x580]
005DE3BD  C7 85 0C F9 FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffff90c],0x1f4
005DE3C7  C7 85 10 F9 FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffff910],0x32
005DE3D1  C7 85 64 F8 FF FF 41 63 00 00  MOV dword ptr [EBP + 0xfffff864],0x6341
005DE3DB  6A 00                     PUSH 0x0
005DE3DD  89 85 5C F7 FF FF         MOV dword ptr [EBP + 0xfffff75c],EAX
005DE3E3  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
005DE3E6  89 85 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],EAX
005DE3EC  89 85 5C F8 FF FF         MOV dword ptr [EBP + 0xfffff85c],EAX
005DE3F2  8B 83 78 05 00 00         MOV EAX,dword ptr [EBX + 0x578]
005DE3F8  F3 A5                     MOVSD.REP ES:EDI,ESI
005DE3FA  8B 8B 7C 05 00 00         MOV ECX,dword ptr [EBX + 0x57c]
005DE400  89 85 84 F9 FF FF         MOV dword ptr [EBP + 0xfffff984],EAX
005DE406  8B 83 84 05 00 00         MOV EAX,dword ptr [EBX + 0x584]
005DE40C  89 8D 88 F9 FF FF         MOV dword ptr [EBP + 0xfffff988],ECX
005DE412  89 85 90 F9 FF FF         MOV dword ptr [EBP + 0xfffff990],EAX
005DE418  8D 85 40 F7 FF FF         LEA EAX,[EBP + 0xfffff740]
005DE41E  50                        PUSH EAX
005DE41F  8D 8B 50 05 00 00         LEA ECX,[EBX + 0x550]
005DE425  89 95 8C F9 FF FF         MOV dword ptr [EBP + 0xfffff98c],EDX
005DE42B  8B 13                     MOV EDX,dword ptr [EBX]
005DE42D  6A 00                     PUSH 0x0
005DE42F  51                        PUSH ECX
005DE430  6A 08                     PUSH 0x8
005DE432  8B CB                     MOV ECX,EBX
005DE434  C7 85 E4 F9 FF FF 40 63 00 00  MOV dword ptr [EBP + 0xfffff9e4],0x6340
005DE43E  FF 52 08                  CALL dword ptr [EDX + 0x8]
005DE441  8B 93 58 05 00 00         MOV EDX,dword ptr [EBX + 0x558]
005DE447  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DE44C  52                        PUSH EDX
005DE44D  50                        PUSH EAX
005DE44E  E8 DD 4F 0D 00            CALL 0x006b3430
005DE453  8B 83 60 05 00 00         MOV EAX,dword ptr [EBX + 0x560]
005DE459  83 F8 FF                  CMP EAX,-0x1
005DE45C  74 1D                     JZ 0x005de47b
005DE45E  8B 8B 7C 05 00 00         MOV ECX,dword ptr [EBX + 0x57c]
005DE464  8B 93 78 05 00 00         MOV EDX,dword ptr [EBX + 0x578]
005DE46A  51                        PUSH ECX
005DE46B  52                        PUSH EDX
005DE46C  6A FE                     PUSH -0x2
005DE46E  50                        PUSH EAX
005DE46F  8B 83 A4 05 00 00         MOV EAX,dword ptr [EBX + 0x5a4]
005DE475  50                        PUSH EAX
005DE476  E8 55 50 0D 00            CALL 0x006b34d0
LAB_005de47b:
005DE47B  8B 83 F1 05 00 00         MOV EAX,dword ptr [EBX + 0x5f1]
005DE481  83 F8 FF                  CMP EAX,-0x1
005DE484  74 1D                     JZ 0x005de4a3
005DE486  8B 8B 0D 06 00 00         MOV ECX,dword ptr [EBX + 0x60d]
005DE48C  8B 93 09 06 00 00         MOV EDX,dword ptr [EBX + 0x609]
005DE492  51                        PUSH ECX
005DE493  52                        PUSH EDX
005DE494  6A FE                     PUSH -0x2
005DE496  50                        PUSH EAX
005DE497  8B 83 35 06 00 00         MOV EAX,dword ptr [EBX + 0x635]
005DE49D  50                        PUSH EAX
005DE49E  E8 2D 50 0D 00            CALL 0x006b34d0
LAB_005de4a3:
005DE4A3  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DE4A6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DE4AC  5F                        POP EDI
005DE4AD  5E                        POP ESI
005DE4AE  5B                        POP EBX
005DE4AF  8B E5                     MOV ESP,EBP
005DE4B1  5D                        POP EBP
005DE4B2  C3                        RET
LAB_005de4b3:
005DE4B3  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005DE4B6  68 04 D9 7C 00            PUSH 0x7cd904
005DE4BB  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DE4C0  57                        PUSH EDI
005DE4C1  56                        PUSH ESI
005DE4C2  68 F9 03 00 00            PUSH 0x3f9
005DE4C7  68 18 D7 7C 00            PUSH 0x7cd718
005DE4CC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DE4D2  E8 F9 EF 0C 00            CALL 0x006ad4d0
005DE4D7  83 C4 18                  ADD ESP,0x18
005DE4DA  85 C0                     TEST EAX,EAX
005DE4DC  74 01                     JZ 0x005de4df
005DE4DE  CC                        INT3
LAB_005de4df:
005DE4DF  68 F9 03 00 00            PUSH 0x3f9
005DE4E4  68 18 D7 7C 00            PUSH 0x7cd718
005DE4E9  56                        PUSH ESI
005DE4EA  57                        PUSH EDI
005DE4EB  E8 50 79 0C 00            CALL 0x006a5e40
005DE4F0  5F                        POP EDI
005DE4F1  5E                        POP ESI
005DE4F2  5B                        POP EBX
005DE4F3  8B E5                     MOV ESP,EBP
005DE4F5  5D                        POP EBP
005DE4F6  C3                        RET
