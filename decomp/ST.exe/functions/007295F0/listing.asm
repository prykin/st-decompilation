FUN_007295f0:
007295F0  55                        PUSH EBP
007295F1  8B EC                     MOV EBP,ESP
007295F3  6A FF                     PUSH -0x1
007295F5  68 20 E3 79 00            PUSH 0x79e320
007295FA  68 64 D9 72 00            PUSH 0x72d964
007295FF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00729605  50                        PUSH EAX
00729606  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0072960D  83 EC 3C                  SUB ESP,0x3c
00729610  53                        PUSH EBX
00729611  56                        PUSH ESI
00729612  57                        PUSH EDI
00729613  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00729616  8B F1                     MOV ESI,ECX
00729618  89 75 B8                  MOV dword ptr [EBP + -0x48],ESI
0072961B  33 DB                     XOR EBX,EBX
0072961D  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
00729620  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00729623  8B 96 28 03 00 00         MOV EDX,dword ptr [ESI + 0x328]
00729629  8B C2                     MOV EAX,EDX
0072962B  2B 86 20 03 00 00         SUB EAX,dword ptr [ESI + 0x320]
00729631  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00729634  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00729637  4A                        DEC EDX
00729638  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0072963B  8D 0C 52                  LEA ECX,[EDX + EDX*0x2]
0072963E  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
00729641  8B BE 30 03 00 00         MOV EDI,dword ptr [ESI + 0x330]
00729647  8D 0C CF                  LEA ECX,[EDI + ECX*0x8]
0072964A  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
LAB_0072964d:
0072964D  3B D0                     CMP EDX,EAX
0072964F  0F 8C 1D 01 00 00         JL 0x00729772
00729655  8B 41 64                  MOV EAX,dword ptr [ECX + 0x64]
00729658  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0072965B  F7 41 04 00 80 00 00      TEST dword ptr [ECX + 0x4],0x8000
00729662  0F 84 1F 01 00 00         JZ 0x00729787
00729668  F6 01 02                  TEST byte ptr [ECX],0x2
0072966B  0F 84 16 01 00 00         JZ 0x00729787
00729671  8B 79 60                  MOV EDI,dword ptr [ECX + 0x60]
00729674  C1 E7 04                  SHL EDI,0x4
00729677  03 B8 F0 00 00 00         ADD EDI,dword ptr [EAX + 0xf0]
0072967D  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
00729680  F6 07 02                  TEST byte ptr [EDI],0x2
00729683  0F 85 FE 00 00 00         JNZ 0x00729787
00729689  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0072968C  85 C9                     TEST ECX,ECX
0072968E  75 3B                     JNZ 0x007296cb
00729690  6A 00                     PUSH 0x0
00729692  8D 55 E0                  LEA EDX,[EBP + -0x20]
00729695  52                        PUSH EDX
00729696  8D 45 D8                  LEA EAX,[EBP + -0x28]
00729699  50                        PUSH EAX
0072969A  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0072969D  8B 51 40                  MOV EDX,dword ptr [ECX + 0x40]
007296A0  52                        PUSH EDX
007296A1  E8 9A 27 F9 FF            CALL 0x006bbe40
007296A6  8B D8                     MOV EBX,EAX
007296A8  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
007296AB  85 DB                     TEST EBX,EBX
007296AD  74 0C                     JZ 0x007296bb
007296AF  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
007296B6  E9 F9 00 00 00            JMP 0x007297b4
LAB_007296bb:
007296BB  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
007296BE  0F AF 45 E0               IMUL EAX,dword ptr [EBP + -0x20]
007296C2  03 46 20                  ADD EAX,dword ptr [ESI + 0x20]
007296C5  01 45 D8                  ADD dword ptr [EBP + -0x28],EAX
007296C8  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_007296cb:
007296CB  8B 80 04 01 00 00         MOV EAX,dword ptr [EAX + 0x104]
007296D1  85 C0                     TEST EAX,EAX
007296D3  74 04                     JZ 0x007296d9
007296D5  8B C8                     MOV ECX,EAX
007296D7  EB 6F                     JMP 0x00729748
LAB_007296d9:
007296D9  8B 86 44 01 00 00         MOV EAX,dword ptr [ESI + 0x144]
007296DF  85 C0                     TEST EAX,EAX
007296E1  74 5F                     JZ 0x00729742
007296E3  8B 86 58 01 00 00         MOV EAX,dword ptr [ESI + 0x158]
007296E9  85 C0                     TEST EAX,EAX
007296EB  74 55                     JZ 0x00729742
007296ED  8B 8E 6C 01 00 00         MOV ECX,dword ptr [ESI + 0x16c]
007296F3  8B 9E 78 02 00 00         MOV EBX,dword ptr [ESI + 0x278]
007296F9  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
007296FC  0F BF 42 04               MOVSX EAX,word ptr [EDX + 0x4]
00729700  2B C1                     SUB EAX,ECX
00729702  0F AF C3                  IMUL EAX,EBX
00729705  8B 96 70 01 00 00         MOV EDX,dword ptr [ESI + 0x170]
0072970B  2B D1                     SUB EDX,ECX
0072970D  8B CA                     MOV ECX,EDX
0072970F  99                        CDQ
00729710  F7 F9                     IDIV ECX
00729712  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00729715  85 C0                     TEST EAX,EAX
00729717  7D 12                     JGE 0x0072972b
00729719  33 C0                     XOR EAX,EAX
0072971B  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0072971E  C1 E0 08                  SHL EAX,0x8
00729721  8B 8E 7C 02 00 00         MOV ECX,dword ptr [ESI + 0x27c]
00729727  03 C8                     ADD ECX,EAX
00729729  EB 1D                     JMP 0x00729748
LAB_0072972b:
0072972B  3B C3                     CMP EAX,EBX
0072972D  7C 06                     JL 0x00729735
0072972F  8D 43 FF                  LEA EAX,[EBX + -0x1]
00729732  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
LAB_00729735:
00729735  C1 E0 08                  SHL EAX,0x8
00729738  8B 8E 7C 02 00 00         MOV ECX,dword ptr [ESI + 0x27c]
0072973E  03 C8                     ADD ECX,EAX
00729740  EB 06                     JMP 0x00729748
LAB_00729742:
00729742  8B 8E 7C 02 00 00         MOV ECX,dword ptr [ESI + 0x27c]
LAB_00729748:
00729748  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0072974B  51                        PUSH ECX
0072974C  8B 17                     MOV EDX,dword ptr [EDI]
0072974E  83 E2 01                  AND EDX,0x1
00729751  52                        PUSH EDX
00729752  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00729755  50                        PUSH EAX
00729756  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
00729759  51                        PUSH ECX
0072975A  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0072975D  52                        PUSH EDX
0072975E  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00729761  50                        PUSH EAX
00729762  8B CE                     MOV ECX,ESI
00729764  E8 37 F6 FF FF            CALL 0x00728da0
00729769  8B D8                     MOV EBX,EAX
0072976B  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0072976E  85 DB                     TEST EBX,EBX
00729770  74 09                     JZ 0x0072977b
LAB_00729772:
00729772  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00729779  EB 39                     JMP 0x007297b4
LAB_0072977b:
0072977B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0072977E  83 08 10                  OR dword ptr [EAX],0x10
00729781  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00729784  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
LAB_00729787:
00729787  83 20 DF                  AND dword ptr [EAX],0xffffffdf
0072978A  83 E9 68                  SUB ECX,0x68
0072978D  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
00729790  4A                        DEC EDX
00729791  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00729794  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00729797  E9 B1 FE FF FF            JMP 0x0072964d
LAB_007297b4:
007297B4  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
007297B7  85 C0                     TEST EAX,EAX
007297B9  74 11                     JZ 0x007297cc
007297BB  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
007297BE  8B 41 40                  MOV EAX,dword ptr [ECX + 0x40]
007297C1  8B 10                     MOV EDX,dword ptr [EAX]
007297C3  6A 00                     PUSH 0x0
007297C5  50                        PUSH EAX
007297C6  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
LAB_007297cc:
007297CC  8B C3                     MOV EAX,EBX
007297CE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007297D1  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
007297D8  5F                        POP EDI
007297D9  5E                        POP ESI
007297DA  5B                        POP EBX
007297DB  8B E5                     MOV ESP,EBP
007297DD  5D                        POP EBP
007297DE  C3                        RET
