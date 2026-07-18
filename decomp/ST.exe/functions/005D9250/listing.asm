SIDTy::PaintExplanation:
005D9250  55                        PUSH EBP
005D9251  8B EC                     MOV EBP,ESP
005D9253  83 EC 48                  SUB ESP,0x48
005D9256  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D925B  53                        PUSH EBX
005D925C  56                        PUSH ESI
005D925D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D9260  57                        PUSH EDI
005D9261  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D9264  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D9267  6A 00                     PUSH 0x0
005D9269  52                        PUSH EDX
005D926A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D926D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D9273  E8 78 45 15 00            CALL 0x0072d7f0
005D9278  8B F0                     MOV ESI,EAX
005D927A  83 C4 08                  ADD ESP,0x8
005D927D  85 F6                     TEST ESI,ESI
005D927F  0F 85 2C 01 00 00         JNZ 0x005d93b1
005D9285  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005D9288  68 FF 00 00 00            PUSH 0xff
005D928D  8B 86 C0 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cc0]
005D9293  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D9296  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005D9299  8B 86 B8 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cb8]
005D929F  51                        PUSH ECX
005D92A0  52                        PUSH EDX
005D92A1  6A 7D                     PUSH 0x7d
005D92A3  6A 00                     PUSH 0x0
005D92A5  6A 00                     PUSH 0x0
005D92A7  50                        PUSH EAX
005D92A8  E8 C3 AE 0D 00            CALL 0x006b4170
005D92AD  8B 86 C0 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cc0]
005D92B3  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005D92B6  85 DB                     TEST EBX,EBX
005D92B8  75 18                     JNZ 0x005d92d2
005D92BA  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005D92BE  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005D92C2  83 C3 1F                  ADD EBX,0x1f
005D92C5  C1 EB 03                  SHR EBX,0x3
005D92C8  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005D92CE  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005d92d2:
005D92D2  50                        PUSH EAX
005D92D3  E8 C8 BC 0D 00            CALL 0x006b4fa0
005D92D8  8B CB                     MOV ECX,EBX
005D92DA  8B F8                     MOV EDI,EAX
005D92DC  8B D1                     MOV EDX,ECX
005D92DE  83 C8 FF                  OR EAX,0xffffffff
005D92E1  C1 E9 02                  SHR ECX,0x2
005D92E4  F3 AB                     STOSD.REP ES:EDI
005D92E6  8B CA                     MOV ECX,EDX
005D92E8  6A 00                     PUSH 0x0
005D92EA  83 E1 03                  AND ECX,0x3
005D92ED  6A 00                     PUSH 0x0
005D92EF  F3 AA                     STOSB.REP ES:EDI
005D92F1  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D92F7  8B 86 C0 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cc0]
005D92FD  6A 00                     PUSH 0x0
005D92FF  6A 00                     PUSH 0x0
005D9301  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005D9304  6A 00                     PUSH 0x0
005D9306  50                        PUSH EAX
005D9307  E8 84 77 13 00            CALL 0x00710a90
005D930C  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005D9312  84 C0                     TEST AL,AL
005D9314  74 41                     JZ 0x005d9357
005D9316  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005D931C  68 DD 7D 80 00            PUSH 0x807ddd
005D9321  52                        PUSH EDX
005D9322  68 20 25 00 00            PUSH 0x2520
005D9327  8D BE D4 1C 00 00         LEA EDI,[ESI + 0x1cd4]
005D932D  E8 0E 6E 0D 00            CALL 0x006b0140
005D9332  50                        PUSH EAX
005D9333  68 C4 D6 7C 00            PUSH 0x7cd6c4
005D9338  57                        PUSH EDI
005D9339  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005D933F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D9344  83 C4 10                  ADD ESP,0x10
005D9347  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D934A  6A FF                     PUSH -0x1
005D934C  6A FF                     PUSH -0x1
005D934E  6A 00                     PUSH 0x0
005D9350  6A FF                     PUSH -0x1
005D9352  6A FE                     PUSH -0x2
005D9354  57                        PUSH EDI
005D9355  EB 25                     JMP 0x005d937c
LAB_005d9357:
005D9357  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005D935D  6A FF                     PUSH -0x1
005D935F  6A FF                     PUSH -0x1
005D9361  6A 00                     PUSH 0x0
005D9363  6A FF                     PUSH -0x1
005D9365  6A FE                     PUSH -0x2
005D9367  51                        PUSH ECX
005D9368  68 21 25 00 00            PUSH 0x2521
005D936D  E8 CE 6D 0D 00            CALL 0x006b0140
005D9372  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D9378  50                        PUSH EAX
005D9379  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
LAB_005d937c:
005D937C  E8 EF 87 13 00            CALL 0x00711b70
005D9381  8B 86 C0 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cc0]
005D9387  8B 8E B8 1C 00 00         MOV ECX,dword ptr [ESI + 0x1cb8]
005D938D  68 FF 00 00 00            PUSH 0xff
005D9392  6A 00                     PUSH 0x0
005D9394  50                        PUSH EAX
005D9395  6A 7D                     PUSH 0x7d
005D9397  6A 00                     PUSH 0x0
005D9399  6A 00                     PUSH 0x0
005D939B  51                        PUSH ECX
005D939C  E8 9F C0 0D 00            CALL 0x006b5440
005D93A1  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005D93A4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D93AA  5F                        POP EDI
005D93AB  5E                        POP ESI
005D93AC  5B                        POP EBX
005D93AD  8B E5                     MOV ESP,EBP
005D93AF  5D                        POP EBP
005D93B0  C3                        RET
LAB_005d93b1:
005D93B1  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005D93B4  68 A8 D6 7C 00            PUSH 0x7cd6a8
005D93B9  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D93BE  56                        PUSH ESI
005D93BF  6A 00                     PUSH 0x0
005D93C1  68 7B 01 00 00            PUSH 0x17b
005D93C6  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D93CB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D93D0  E8 FB 40 0D 00            CALL 0x006ad4d0
005D93D5  83 C4 18                  ADD ESP,0x18
005D93D8  85 C0                     TEST EAX,EAX
005D93DA  74 01                     JZ 0x005d93dd
005D93DC  CC                        INT3
LAB_005d93dd:
005D93DD  68 7B 01 00 00            PUSH 0x17b
005D93E2  68 C4 D5 7C 00            PUSH 0x7cd5c4
005D93E7  6A 00                     PUSH 0x0
005D93E9  56                        PUSH ESI
005D93EA  E8 51 CA 0C 00            CALL 0x006a5e40
005D93EF  5F                        POP EDI
005D93F0  5E                        POP ESI
005D93F1  5B                        POP EBX
005D93F2  8B E5                     MOV ESP,EBP
005D93F4  5D                        POP EBP
005D93F5  C3                        RET
