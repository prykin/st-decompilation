SettMapMTy::RunGame:
005D4850  55                        PUSH EBP
005D4851  8B EC                     MOV EBP,ESP
005D4853  83 EC 48                  SUB ESP,0x48
005D4856  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D485B  53                        PUSH EBX
005D485C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D485F  56                        PUSH ESI
005D4860  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D4863  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D4866  6A 00                     PUSH 0x0
005D4868  52                        PUSH EDX
005D4869  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D486C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D4872  E8 79 8F 15 00            CALL 0x0072d7f0
005D4877  8B F0                     MOV ESI,EAX
005D4879  83 C4 08                  ADD ESP,0x8
005D487C  85 F6                     TEST ESI,ESI
005D487E  75 7F                     JNZ 0x005d48ff
005D4880  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D4885  84 C0                     TEST AL,AL
005D4887  74 0B                     JZ 0x005d4894
005D4889  A1 64 17 81 00            MOV EAX,[0x00811764]
005D488E  50                        PUSH EAX
005D488F  E8 DC 27 0E 00            CALL 0x006b7070
LAB_005d4894:
005D4894  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005D4897  6A 00                     PUSH 0x0
005D4899  6A 00                     PUSH 0x0
005D489B  68 48 69 00 00            PUSH 0x6948
005D48A0  8B CE                     MOV ECX,ESI
005D48A2  E8 19 EE E2 FF            CALL 0x004036c0
005D48A7  8B 16                     MOV EDX,dword ptr [ESI]
005D48A9  BB 01 00 00 00            MOV EBX,0x1
005D48AE  8B CE                     MOV ECX,ESI
005D48B0  88 9E E6 21 00 00         MOV byte ptr [ESI + 0x21e6],BL
005D48B6  88 9E E5 21 00 00         MOV byte ptr [ESI + 0x21e5],BL
005D48BC  88 9E E4 21 00 00         MOV byte ptr [ESI + 0x21e4],BL
005D48C2  88 9E E7 21 00 00         MOV byte ptr [ESI + 0x21e7],BL
005D48C8  88 9E E2 21 00 00         MOV byte ptr [ESI + 0x21e2],BL
005D48CE  88 9E E1 21 00 00         MOV byte ptr [ESI + 0x21e1],BL
005D48D4  FF 52 08                  CALL dword ptr [EDX + 0x8]
005D48D7  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005D48DD  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005D48E3  85 C9                     TEST ECX,ECX
005D48E5  74 09                     JZ 0x005d48f0
005D48E7  53                        PUSH EBX
005D48E8  6A 00                     PUSH 0x0
005D48EA  53                        PUSH EBX
005D48EB  E8 B5 D6 E2 FF            CALL 0x00401fa5
LAB_005d48f0:
005D48F0  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005D48F3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D48F9  5E                        POP ESI
005D48FA  5B                        POP EBX
005D48FB  8B E5                     MOV ESP,EBP
005D48FD  5D                        POP EBP
005D48FE  C3                        RET
LAB_005d48ff:
005D48FF  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005D4902  68 10 D5 7C 00            PUSH 0x7cd510
005D4907  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D490C  56                        PUSH ESI
005D490D  6A 00                     PUSH 0x0
005D490F  68 98 09 00 00            PUSH 0x998
005D4914  68 58 D2 7C 00            PUSH 0x7cd258
005D4919  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D491F  E8 AC 8B 0D 00            CALL 0x006ad4d0
005D4924  83 C4 18                  ADD ESP,0x18
005D4927  85 C0                     TEST EAX,EAX
005D4929  74 01                     JZ 0x005d492c
005D492B  CC                        INT3
LAB_005d492c:
005D492C  68 98 09 00 00            PUSH 0x998
005D4931  68 58 D2 7C 00            PUSH 0x7cd258
005D4936  6A 00                     PUSH 0x0
005D4938  56                        PUSH ESI
005D4939  E8 02 15 0D 00            CALL 0x006a5e40
005D493E  5E                        POP ESI
005D493F  5B                        POP EBX
005D4940  8B E5                     MOV ESP,EBP
005D4942  5D                        POP EBP
005D4943  C3                        RET
