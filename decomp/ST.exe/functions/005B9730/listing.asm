FUN_005b9730:
005B9730  55                        PUSH EBP
005B9731  8B EC                     MOV EBP,ESP
005B9733  83 EC 4C                  SUB ESP,0x4c
005B9736  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005B9739  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005B973F  53                        PUSH EBX
005B9740  56                        PUSH ESI
005B9741  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005B9744  57                        PUSH EDI
005B9745  8D 45 B8                  LEA EAX,[EBP + -0x48]
005B9748  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005B974B  6A 00                     PUSH 0x0
005B974D  50                        PUSH EAX
005B974E  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
005B9751  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B9757  E8 94 40 17 00            CALL 0x0072d7f0
005B975C  8B F0                     MOV ESI,EAX
005B975E  83 C4 08                  ADD ESP,0x8
005B9761  85 F6                     TEST ESI,ESI
005B9763  75 76                     JNZ 0x005b97db
005B9765  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005B9768  85 C9                     TEST ECX,ECX
005B976A  74 5D                     JZ 0x005b97c9
005B976C  8B B1 82 1C 00 00         MOV ESI,dword ptr [ECX + 0x1c82]
005B9772  85 F6                     TEST ESI,ESI
005B9774  74 53                     JZ 0x005b97c9
005B9776  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005B9779  80 CB FF                  OR BL,0xff
005B977C  32 C0                     XOR AL,AL
005B977E  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
LAB_005b9781:
005B9781  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005B9784  81 E7 FF 00 00 00         AND EDI,0xff
005B978A  39 94 B9 2A 1C 00 00      CMP dword ptr [ECX + EDI*0x4 + 0x1c2a],EDX
005B9791  74 0B                     JZ 0x005b979e
005B9793  FE C0                     INC AL
005B9795  3C 16                     CMP AL,0x16
005B9797  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005B979A  72 E5                     JC 0x005b9781
005B979C  EB 02                     JMP 0x005b97a0
LAB_005b979e:
005B979E  8A D8                     MOV BL,AL
LAB_005b97a0:
005B97A0  80 FB FF                  CMP BL,0xff
005B97A3  74 24                     JZ 0x005b97c9
005B97A5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005B97A8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005B97AB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005B97AE  6A 00                     PUSH 0x0
005B97B0  51                        PUSH ECX
005B97B1  8D 48 99                  LEA ECX,[EAX + -0x67]
005B97B4  52                        PUSH EDX
005B97B5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005B97B8  51                        PUSH ECX
005B97B9  6A 00                     PUSH 0x0
005B97BB  6A 00                     PUSH 0x0
005B97BD  56                        PUSH ESI
005B97BE  50                        PUSH EAX
005B97BF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B97C2  52                        PUSH EDX
005B97C3  50                        PUSH EAX
005B97C4  E8 B7 AE 0F 00            CALL 0x006b4680
LAB_005b97c9:
005B97C9  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005B97CC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B97D2  5F                        POP EDI
005B97D3  5E                        POP ESI
005B97D4  5B                        POP EBX
005B97D5  8B E5                     MOV ESP,EBP
005B97D7  5D                        POP EBP
005B97D8  C2 20 00                  RET 0x20
LAB_005b97db:
005B97DB  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005B97DE  68 50 CD 7C 00            PUSH 0x7ccd50
005B97E3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B97E8  56                        PUSH ESI
005B97E9  6A 00                     PUSH 0x0
005B97EB  6A 2C                     PUSH 0x2c
005B97ED  68 28 CD 7C 00            PUSH 0x7ccd28
005B97F2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B97F8  E8 D3 3C 0F 00            CALL 0x006ad4d0
005B97FD  83 C4 18                  ADD ESP,0x18
005B9800  85 C0                     TEST EAX,EAX
005B9802  74 01                     JZ 0x005b9805
005B9804  CC                        INT3
LAB_005b9805:
005B9805  6A 2C                     PUSH 0x2c
005B9807  68 28 CD 7C 00            PUSH 0x7ccd28
005B980C  6A 00                     PUSH 0x0
005B980E  56                        PUSH ESI
005B980F  E8 2C C6 0E 00            CALL 0x006a5e40
005B9814  5F                        POP EDI
005B9815  5E                        POP ESI
005B9816  5B                        POP EBX
005B9817  8B E5                     MOV ESP,EBP
005B9819  5D                        POP EBP
005B981A  C2 20 00                  RET 0x20
