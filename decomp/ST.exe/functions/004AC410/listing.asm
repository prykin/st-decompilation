FUN_004ac410:
004AC410  55                        PUSH EBP
004AC411  8B EC                     MOV EBP,ESP
004AC413  83 EC 48                  SUB ESP,0x48
004AC416  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004AC41B  53                        PUSH EBX
004AC41C  56                        PUSH ESI
004AC41D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004AC420  57                        PUSH EDI
004AC421  8D 55 BC                  LEA EDX,[EBP + -0x44]
004AC424  8D 4D B8                  LEA ECX,[EBP + -0x48]
004AC427  6A 00                     PUSH 0x0
004AC429  52                        PUSH EDX
004AC42A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004AC42D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AC433  E8 B8 13 28 00            CALL 0x0072d7f0
004AC438  83 C4 08                  ADD ESP,0x8
004AC43B  85 C0                     TEST EAX,EAX
004AC43D  0F 85 C7 00 00 00         JNZ 0x004ac50a
004AC443  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004AC446  83 7E 18 FF               CMP dword ptr [ESI + 0x18],-0x1
004AC44A  75 17                     JNZ 0x004ac463
004AC44C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004AC451  68 FF 00 00 00            PUSH 0xff
004AC456  68 38 C6 7A 00            PUSH 0x7ac638
004AC45B  50                        PUSH EAX
004AC45C  6A FF                     PUSH -0x1
004AC45E  E8 DD 99 1F 00            CALL 0x006a5e40
LAB_004ac463:
004AC463  8A 5D 08                  MOV BL,byte ptr [EBP + 0x8]
004AC466  84 DB                     TEST BL,BL
004AC468  7C 0B                     JL 0x004ac475
004AC46A  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
004AC46D  0F BE D3                  MOVSX EDX,BL
004AC470  49                        DEC ECX
004AC471  3B D1                     CMP EDX,ECX
004AC473  7E 17                     JLE 0x004ac48c
LAB_004ac475:
004AC475  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004AC47A  68 00 01 00 00            PUSH 0x100
004AC47F  68 38 C6 7A 00            PUSH 0x7ac638
004AC484  50                        PUSH EAX
004AC485  6A FF                     PUSH -0x1
004AC487  E8 B4 99 1F 00            CALL 0x006a5e40
LAB_004ac48c:
004AC48C  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004AC48F  BF 01 00 00 00            MOV EDI,0x1
004AC494  0F BE CB                  MOVSX ECX,BL
004AC497  D3 E7                     SHL EDI,CL
004AC499  85 C7                     TEST EDI,EAX
004AC49B  75 14                     JNZ 0x004ac4b1
004AC49D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004AC4A0  33 C0                     XOR EAX,EAX
004AC4A2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AC4A8  5F                        POP EDI
004AC4A9  5E                        POP ESI
004AC4AA  5B                        POP EBX
004AC4AB  8B E5                     MOV ESP,EBP
004AC4AD  5D                        POP EBP
004AC4AE  C2 04 00                  RET 0x4
LAB_004ac4b1:
004AC4B1  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004AC4B4  51                        PUSH ECX
004AC4B5  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004AC4B8  52                        PUSH EDX
004AC4B9  E8 82 D8 23 00            CALL 0x006e9d40
004AC4BE  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
004AC4C1  F7 D7                     NOT EDI
004AC4C3  23 CF                     AND ECX,EDI
004AC4C5  80 FB 0E                  CMP BL,0xe
004AC4C8  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
004AC4CB  75 2A                     JNZ 0x004ac4f7
004AC4CD  8A 46 11                  MOV AL,byte ptr [ESI + 0x11]
004AC4D0  8B CE                     MOV ECX,ESI
004AC4D2  3C 01                     CMP AL,0x1
004AC4D4  75 18                     JNZ 0x004ac4ee
004AC4D6  E8 B5 65 F5 FF            CALL 0x00402a90
004AC4DB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004AC4DE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004AC4E3  33 C0                     XOR EAX,EAX
004AC4E5  5F                        POP EDI
004AC4E6  5E                        POP ESI
004AC4E7  5B                        POP EBX
004AC4E8  8B E5                     MOV ESP,EBP
004AC4EA  5D                        POP EBP
004AC4EB  C2 04 00                  RET 0x4
LAB_004ac4ee:
004AC4EE  E8 9D 65 F5 FF            CALL 0x00402a90
004AC4F3  C6 46 11 00               MOV byte ptr [ESI + 0x11],0x0
LAB_004ac4f7:
004AC4F7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004AC4FA  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004AC4FF  33 C0                     XOR EAX,EAX
004AC501  5F                        POP EDI
004AC502  5E                        POP ESI
004AC503  5B                        POP EBX
004AC504  8B E5                     MOV ESP,EBP
004AC506  5D                        POP EBP
004AC507  C2 04 00                  RET 0x4
LAB_004ac50a:
004AC50A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004AC50D  68 F8 C6 7A 00            PUSH 0x7ac6f8
004AC512  68 CC 4C 7A 00            PUSH 0x7a4ccc
004AC517  50                        PUSH EAX
004AC518  6A 00                     PUSH 0x0
004AC51A  68 0E 01 00 00            PUSH 0x10e
004AC51F  68 38 C6 7A 00            PUSH 0x7ac638
004AC524  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004AC52A  E8 A1 0F 20 00            CALL 0x006ad4d0
004AC52F  83 C4 18                  ADD ESP,0x18
004AC532  85 C0                     TEST EAX,EAX
004AC534  74 01                     JZ 0x004ac537
004AC536  CC                        INT3
LAB_004ac537:
004AC537  5F                        POP EDI
004AC538  5E                        POP ESI
004AC539  83 C8 FF                  OR EAX,0xffffffff
004AC53C  5B                        POP EBX
004AC53D  8B E5                     MOV ESP,EBP
004AC53F  5D                        POP EBP
004AC540  C2 04 00                  RET 0x4
