FUN_00620670:
00620670  55                        PUSH EBP
00620671  8B EC                     MOV EBP,ESP
00620673  83 EC 0C                  SUB ESP,0xc
00620676  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0062067B  53                        PUSH EBX
0062067C  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0062067F  56                        PUSH ESI
00620680  8B F1                     MOV ESI,ECX
00620682  57                        PUSH EDI
00620683  8B B8 E4 00 00 00         MOV EDI,dword ptr [EAX + 0xe4]
00620689  33 C9                     XOR ECX,ECX
0062068B  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
00620691  3B CB                     CMP ECX,EBX
00620693  0F 85 93 00 00 00         JNZ 0x0062072c
00620699  3B BE D9 00 00 00         CMP EDI,dword ptr [ESI + 0xd9]
0062069F  0F 82 87 00 00 00         JC 0x0062072c
006206A5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006206A8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006206AB  53                        PUSH EBX
006206AC  52                        PUSH EDX
006206AD  50                        PUSH EAX
006206AE  57                        PUSH EDI
006206AF  8B CE                     MOV ECX,ESI
006206B1  E8 42 34 DE FF            CALL 0x00403af8
006206B6  85 C0                     TEST EAX,EAX
006206B8  7D 15                     JGE 0x006206cf
006206BA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006206BD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006206C0  53                        PUSH EBX
006206C1  51                        PUSH ECX
006206C2  52                        PUSH EDX
006206C3  57                        PUSH EDI
006206C4  8B CE                     MOV ECX,ESI
006206C6  E8 06 4C DE FF            CALL 0x004052d1
006206CB  85 C0                     TEST EAX,EAX
006206CD  7D 05                     JGE 0x006206d4
LAB_006206cf:
006206CF  83 F8 02                  CMP EAX,0x2
006206D2  75 58                     JNZ 0x0062072c
LAB_006206d4:
006206D4  33 C0                     XOR EAX,EAX
006206D6  A0 4E 87 80 00            MOV AL,[0x0080874e]
006206DB  48                        DEC EAX
006206DC  74 14                     JZ 0x006206f2
006206DE  48                        DEC EAX
006206DF  74 0A                     JZ 0x006206eb
006206E1  48                        DEC EAX
006206E2  75 48                     JNZ 0x0062072c
006206E4  B8 85 00 00 00            MOV EAX,0x85
006206E9  EB 0C                     JMP 0x006206f7
LAB_006206eb:
006206EB  B8 84 00 00 00            MOV EAX,0x84
006206F0  EB 05                     JMP 0x006206f7
LAB_006206f2:
006206F2  B8 83 00 00 00            MOV EAX,0x83
LAB_006206f7:
006206F7  33 C9                     XOR ECX,ECX
006206F9  8D 55 F4                  LEA EDX,[EBP + -0xc]
006206FC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006206FF  6A 00                     PUSH 0x0
00620701  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00620704  52                        PUSH EDX
00620705  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00620708  83 C9 FF                  OR ECX,0xffffffff
0062070B  50                        PUSH EAX
0062070C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0062070F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00620712  6A 00                     PUSH 0x0
00620714  6A 06                     PUSH 0x6
00620716  B9 58 76 80 00            MOV ECX,0x807658
0062071B  E8 B8 44 DE FF            CALL 0x00404bd8
00620720  81 C7 FA 00 00 00         ADD EDI,0xfa
00620726  89 BE C1 00 00 00         MOV dword ptr [ESI + 0xc1],EDI
LAB_0062072c:
0062072C  5F                        POP EDI
0062072D  5E                        POP ESI
0062072E  5B                        POP EBX
0062072F  8B E5                     MOV ESP,EBP
00620731  5D                        POP EBP
00620732  C2 10 00                  RET 0x10
