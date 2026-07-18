FUN_006964f0:
006964F0  55                        PUSH EBP
006964F1  8B EC                     MOV EBP,ESP
006964F3  83 EC 50                  SUB ESP,0x50
006964F6  53                        PUSH EBX
006964F7  56                        PUSH ESI
006964F8  57                        PUSH EDI
006964F9  8B F9                     MOV EDI,ECX
006964FB  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00696502  8B 87 53 58 00 00         MOV EAX,dword ptr [EDI + 0x5853]
00696508  85 C0                     TEST EAX,EAX
0069650A  0F 84 9B 01 00 00         JZ 0x006966ab
00696510  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00696513  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00696516  3B CA                     CMP ECX,EDX
00696518  0F 83 8D 01 00 00         JNC 0x006966ab
0069651E  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00696521  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00696524  0F AF F1                  IMUL ESI,ECX
00696527  03 F2                     ADD ESI,EDX
00696529  85 F6                     TEST ESI,ESI
0069652B  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0069652E  0F 84 77 01 00 00         JZ 0x006966ab
00696534  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00696537  85 D2                     TEST EDX,EDX
00696539  74 05                     JZ 0x00696540
0069653B  8B 06                     MOV EAX,dword ptr [ESI]
0069653D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00696540:
00696540  8B 87 2F 58 00 00         MOV EAX,dword ptr [EDI + 0x582f]
00696546  8B 9F 4F 58 00 00         MOV EBX,dword ptr [EDI + 0x584f]
0069654C  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
00696550  8D 04 43                  LEA EAX,[EBX + EAX*0x2]
00696553  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00696556  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
00696559  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0069655C  85 C0                     TEST EAX,EAX
0069655E  89 46 11                  MOV dword ptr [ESI + 0x11],EAX
00696561  0F 84 39 01 00 00         JZ 0x006966a0
00696567  8B 8F 33 58 00 00         MOV ECX,dword ptr [EDI + 0x5833]
0069656D  51                        PUSH ECX
0069656E  8B CF                     MOV ECX,EDI
00696570  E8 D6 F0 D6 FF            CALL 0x0040564b
00696575  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
00696578  33 D2                     XOR EDX,EDX
0069657A  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0069657D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00696580  85 C9                     TEST ECX,ECX
00696582  0F 8E 23 01 00 00         JLE 0x006966ab
00696588  EB 03                     JMP 0x0069658d
LAB_0069658a:
0069658A  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_0069658d:
0069658D  3B D1                     CMP EDX,ECX
0069658F  73 0D                     JNC 0x0069659e
00696591  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
00696594  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00696597  0F AF DA                  IMUL EBX,EDX
0069659A  03 D9                     ADD EBX,ECX
0069659C  EB 02                     JMP 0x006965a0
LAB_0069659e:
0069659E  33 DB                     XOR EBX,EBX
LAB_006965a0:
006965A0  8B 43 02                  MOV EAX,dword ptr [EBX + 0x2]
006965A3  8D 55 B0                  LEA EDX,[EBP + -0x50]
006965A6  52                        PUSH EDX
006965A7  50                        PUSH EAX
006965A8  8B CF                     MOV ECX,EDI
006965AA  E8 DC BA D6 FF            CALL 0x0040208b
006965AF  33 C9                     XOR ECX,ECX
006965B1  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006965B4  3B C1                     CMP EAX,ECX
006965B6  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006965B9  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006965BC  0F 8E 9F 00 00 00         JLE 0x00696661
006965C2  8D 4D B0                  LEA ECX,[EBP + -0x50]
006965C5  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006965C8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_006965cb:
006965CB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006965CE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006965D1  8B 0A                     MOV ECX,dword ptr [EDX]
006965D3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006965D6  0F BF 04 48               MOVSX EAX,word ptr [EAX + ECX*0x2]
006965DA  3B C2                     CMP EAX,EDX
006965DC  74 0B                     JZ 0x006965e9
006965DE  50                        PUSH EAX
006965DF  52                        PUSH EDX
006965E0  8B CF                     MOV ECX,EDI
006965E2  E8 A7 AD D6 FF            CALL 0x0040138e
006965E7  EB 5C                     JMP 0x00696645
LAB_006965e9:
006965E9  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006965EC  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006965EF  42                        INC EDX
006965F0  85 C0                     TEST EAX,EAX
006965F2  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006965F5  74 4E                     JZ 0x00696645
006965F7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006965FA  8B B7 33 58 00 00         MOV ESI,dword ptr [EDI + 0x5833]
00696600  8D 55 D4                  LEA EDX,[EBP + -0x2c]
00696603  52                        PUSH EDX
00696604  50                        PUSH EAX
00696605  8B C1                     MOV EAX,ECX
00696607  99                        CDQ
00696608  F7 FE                     IDIV ESI
0069660A  50                        PUSH EAX
0069660B  8B C1                     MOV EAX,ECX
0069660D  99                        CDQ
0069660E  F7 FE                     IDIV ESI
00696610  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
00696613  52                        PUSH EDX
00696614  51                        PUSH ECX
00696615  E8 32 DB D6 FF            CALL 0x0040414c
0069661A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0069661D  83 C4 14                  ADD ESP,0x14
00696620  8B C8                     MOV ECX,EAX
00696622  25 00 20 00 00            AND EAX,0x2000
00696627  83 E1 0F                  AND ECX,0xf
0069662A  3D 00 20 00 00            CMP EAX,0x2000
0069662F  75 11                     JNZ 0x00696642
00696631  83 F9 09                  CMP ECX,0x9
00696634  7C 05                     JL 0x0069663b
00696636  83 F9 0E                  CMP ECX,0xe
00696639  7E 04                     JLE 0x0069663f
LAB_0069663b:
0069663B  85 C9                     TEST ECX,ECX
0069663D  75 03                     JNZ 0x00696642
LAB_0069663f:
0069663F  FF 45 F4                  INC dword ptr [EBP + -0xc]
LAB_00696642:
00696642  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_00696645:
00696645  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00696648  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0069664B  83 C1 04                  ADD ECX,0x4
0069664E  48                        DEC EAX
0069664F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00696652  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00696655  0F 85 70 FF FF FF         JNZ 0x006965cb
0069665B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0069665E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_00696661:
00696661  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00696664  C6 03 00                  MOV byte ptr [EBX],0x0
00696667  3B D0                     CMP EDX,EAX
00696669  75 17                     JNZ 0x00696682
0069666B  83 F8 08                  CMP EAX,0x8
0069666E  75 12                     JNZ 0x00696682
00696670  83 F9 03                  CMP ECX,0x3
00696673  C6 03 01                  MOV byte ptr [EBX],0x1
00696676  7E 0A                     JLE 0x00696682
00696678  3B C8                     CMP ECX,EAX
0069667A  C6 03 03                  MOV byte ptr [EBX],0x3
0069667D  75 03                     JNZ 0x00696682
0069667F  C6 03 07                  MOV byte ptr [EBX],0x7
LAB_00696682:
00696682  8B 46 15                  MOV EAX,dword ptr [ESI + 0x15]
00696685  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00696688  42                        INC EDX
00696689  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0069668C  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0069668F  3B D1                     CMP EDX,ECX
00696691  0F 8C F3 FE FF FF         JL 0x0069658a
00696697  5F                        POP EDI
00696698  5E                        POP ESI
00696699  5B                        POP EBX
0069669A  8B E5                     MOV ESP,EBP
0069669C  5D                        POP EBP
0069669D  C2 08 00                  RET 0x8
LAB_006966a0:
006966A0  6A FF                     PUSH -0x1
006966A2  52                        PUSH EDX
006966A3  51                        PUSH ECX
006966A4  8B CF                     MOV ECX,EDI
006966A6  E8 28 BD D6 FF            CALL 0x004023d3
LAB_006966ab:
006966AB  5F                        POP EDI
006966AC  5E                        POP ESI
006966AD  5B                        POP EBX
006966AE  8B E5                     MOV ESP,EBP
006966B0  5D                        POP EBP
006966B1  C2 08 00                  RET 0x8
