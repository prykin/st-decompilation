STT3DSprC::ShowCurFase:
004AC040  55                        PUSH EBP
004AC041  8B EC                     MOV EBP,ESP
004AC043  83 EC 48                  SUB ESP,0x48
004AC046  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004AC04B  53                        PUSH EBX
004AC04C  56                        PUSH ESI
004AC04D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004AC050  57                        PUSH EDI
004AC051  8D 55 BC                  LEA EDX,[EBP + -0x44]
004AC054  8D 4D B8                  LEA ECX,[EBP + -0x48]
004AC057  6A 00                     PUSH 0x0
004AC059  52                        PUSH EDX
004AC05A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004AC05D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AC063  E8 88 17 28 00            CALL 0x0072d7f0
004AC068  83 C4 08                  ADD ESP,0x8
004AC06B  85 C0                     TEST EAX,EAX
004AC06D  0F 85 9E 00 00 00         JNZ 0x004ac111
004AC073  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004AC076  83 7B 18 FF               CMP dword ptr [EBX + 0x18],-0x1
004AC07A  75 17                     JNZ 0x004ac093
004AC07C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004AC081  68 BA 00 00 00            PUSH 0xba
004AC086  68 38 C6 7A 00            PUSH 0x7ac638
004AC08B  50                        PUSH EAX
004AC08C  6A FF                     PUSH -0x1
004AC08E  E8 AD 9D 1F 00            CALL 0x006a5e40
LAB_004ac093:
004AC093  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC096  84 C0                     TEST AL,AL
004AC098  7C 0B                     JL 0x004ac0a5
004AC09A  8B 4B 14                  MOV ECX,dword ptr [EBX + 0x14]
004AC09D  0F BE D0                  MOVSX EDX,AL
004AC0A0  49                        DEC ECX
004AC0A1  3B D1                     CMP EDX,ECX
004AC0A3  7E 1A                     JLE 0x004ac0bf
LAB_004ac0a5:
004AC0A5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004AC0AA  68 BB 00 00 00            PUSH 0xbb
004AC0AF  68 38 C6 7A 00            PUSH 0x7ac638
004AC0B4  50                        PUSH EAX
004AC0B5  6A FF                     PUSH -0x1
004AC0B7  E8 84 9D 1F 00            CALL 0x006a5e40
004AC0BC  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
LAB_004ac0bf:
004AC0BF  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
004AC0C2  0F BE F8                  MOVSX EDI,AL
004AC0C5  8D 34 FF                  LEA ESI,[EDI + EDI*0x8]
004AC0C8  C1 E6 02                  SHL ESI,0x2
004AC0CB  83 3C 31 00               CMP dword ptr [ECX + ESI*0x1],0x0
004AC0CF  75 18                     JNZ 0x004ac0e9
004AC0D1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004AC0D7  68 BC 00 00 00            PUSH 0xbc
004AC0DC  68 38 C6 7A 00            PUSH 0x7ac638
004AC0E1  52                        PUSH EDX
004AC0E2  6A FF                     PUSH -0x1
004AC0E4  E8 57 9D 1F 00            CALL 0x006a5e40
LAB_004ac0e9:
004AC0E9  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
004AC0EC  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
004AC0EF  8B 4C 30 18               MOV ECX,dword ptr [EAX + ESI*0x1 + 0x18]
004AC0F3  51                        PUSH ECX
004AC0F4  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
004AC0F7  57                        PUSH EDI
004AC0F8  52                        PUSH EDX
004AC0F9  E8 72 E1 23 00            CALL 0x006ea270
004AC0FE  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004AC101  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004AC106  33 C0                     XOR EAX,EAX
004AC108  5F                        POP EDI
004AC109  5E                        POP ESI
004AC10A  5B                        POP EBX
004AC10B  8B E5                     MOV ESP,EBP
004AC10D  5D                        POP EBP
004AC10E  C2 04 00                  RET 0x4
LAB_004ac111:
004AC111  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004AC114  68 C0 C6 7A 00            PUSH 0x7ac6c0
004AC119  68 CC 4C 7A 00            PUSH 0x7a4ccc
004AC11E  50                        PUSH EAX
004AC11F  6A 00                     PUSH 0x0
004AC121  68 BF 00 00 00            PUSH 0xbf
004AC126  68 38 C6 7A 00            PUSH 0x7ac638
004AC12B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AC131  E8 9A 13 20 00            CALL 0x006ad4d0
004AC136  83 C4 18                  ADD ESP,0x18
004AC139  85 C0                     TEST EAX,EAX
004AC13B  74 01                     JZ 0x004ac13e
004AC13D  CC                        INT3
LAB_004ac13e:
004AC13E  5F                        POP EDI
004AC13F  5E                        POP ESI
004AC140  83 C8 FF                  OR EAX,0xffffffff
004AC143  5B                        POP EBX
004AC144  8B E5                     MOV ESP,EBP
004AC146  5D                        POP EBP
004AC147  C2 04 00                  RET 0x4
