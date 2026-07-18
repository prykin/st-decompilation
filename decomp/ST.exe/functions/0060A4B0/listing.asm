FUN_0060a4b0:
0060A4B0  55                        PUSH EBP
0060A4B1  8B EC                     MOV EBP,ESP
0060A4B3  83 EC 20                  SUB ESP,0x20
0060A4B6  57                        PUSH EDI
0060A4B7  8B F9                     MOV EDI,ECX
0060A4B9  33 C9                     XOR ECX,ECX
0060A4BB  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0060A4BE  8B 87 34 02 00 00         MOV EAX,dword ptr [EDI + 0x234]
0060A4C4  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0060A4C7  3B C1                     CMP EAX,ECX
0060A4C9  0F 84 6E 02 00 00         JZ 0x0060a73d
0060A4CF  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0060A4D2  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0060A4D5  3B C1                     CMP EAX,ECX
0060A4D7  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0060A4DA  0F 8E 55 02 00 00         JLE 0x0060a735
0060A4E0  53                        PUSH EBX
0060A4E1  56                        PUSH ESI
LAB_0060a4e2:
0060A4E2  8B 87 34 02 00 00         MOV EAX,dword ptr [EDI + 0x234]
0060A4E8  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0060A4EB  0F 83 30 02 00 00         JNC 0x0060a721
0060A4F1  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0060A4F4  0F AF F1                  IMUL ESI,ECX
0060A4F7  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
0060A4FA  85 F6                     TEST ESI,ESI
0060A4FC  0F 84 1F 02 00 00         JZ 0x0060a721
0060A502  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0060A505  85 C0                     TEST EAX,EAX
0060A507  0F 8C 14 02 00 00         JL 0x0060a721
0060A50D  83 7E 04 FF               CMP dword ptr [ESI + 0x4],-0x1
0060A511  0F 84 0A 02 00 00         JZ 0x0060a721
0060A517  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0060A51D  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
0060A524  85 FF                     TEST EDI,EDI
0060A526  0F 84 38 01 00 00         JZ 0x0060a664
0060A52C  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0060A52F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0060A534  85 C9                     TEST ECX,ECX
0060A536  7C 14                     JL 0x0060a54c
0060A538  F7 E9                     IMUL ECX
0060A53A  C1 FA 06                  SAR EDX,0x6
0060A53D  8B C2                     MOV EAX,EDX
0060A53F  C1 E8 1F                  SHR EAX,0x1f
0060A542  03 D0                     ADD EDX,EAX
0060A544  0F BF CA                  MOVSX ECX,DX
0060A547  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0060A54A  EB 13                     JMP 0x0060a55f
LAB_0060a54c:
0060A54C  F7 E9                     IMUL ECX
0060A54E  C1 FA 06                  SAR EDX,0x6
0060A551  8B C2                     MOV EAX,EDX
0060A553  C1 E8 1F                  SHR EAX,0x1f
0060A556  03 D0                     ADD EDX,EAX
0060A558  0F BF C2                  MOVSX EAX,DX
0060A55B  48                        DEC EAX
0060A55C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0060a55f:
0060A55F  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0060A562  B8 79 19 8C 02            MOV EAX,0x28c1979
0060A567  85 C9                     TEST ECX,ECX
0060A569  7C 10                     JL 0x0060a57b
0060A56B  F7 E9                     IMUL ECX
0060A56D  D1 FA                     SAR EDX,0x1
0060A56F  8B CA                     MOV ECX,EDX
0060A571  C1 E9 1F                  SHR ECX,0x1f
0060A574  03 D1                     ADD EDX,ECX
0060A576  0F BF DA                  MOVSX EBX,DX
0060A579  EB 0F                     JMP 0x0060a58a
LAB_0060a57b:
0060A57B  F7 E9                     IMUL ECX
0060A57D  D1 FA                     SAR EDX,0x1
0060A57F  8B C2                     MOV EAX,EDX
0060A581  C1 E8 1F                  SHR EAX,0x1f
0060A584  03 D0                     ADD EDX,EAX
0060A586  0F BF DA                  MOVSX EBX,DX
0060A589  4B                        DEC EBX
LAB_0060a58a:
0060A58A  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0060A58D  B8 79 19 8C 02            MOV EAX,0x28c1979
0060A592  85 C9                     TEST ECX,ECX
0060A594  7C 10                     JL 0x0060a5a6
0060A596  F7 E9                     IMUL ECX
0060A598  D1 FA                     SAR EDX,0x1
0060A59A  8B CA                     MOV ECX,EDX
0060A59C  C1 E9 1F                  SHR ECX,0x1f
0060A59F  03 D1                     ADD EDX,ECX
0060A5A1  0F BF C2                  MOVSX EAX,DX
0060A5A4  EB 0F                     JMP 0x0060a5b5
LAB_0060a5a6:
0060A5A6  F7 E9                     IMUL ECX
0060A5A8  D1 FA                     SAR EDX,0x1
0060A5AA  8B C2                     MOV EAX,EDX
0060A5AC  C1 E8 1F                  SHR EAX,0x1f
0060A5AF  03 D0                     ADD EDX,EAX
0060A5B1  0F BF C2                  MOVSX EAX,DX
0060A5B4  48                        DEC EAX
LAB_0060a5b5:
0060A5B5  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
0060A5BC  74 6A                     JZ 0x0060a628
0060A5BE  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
0060A5C4  85 C9                     TEST ECX,ECX
0060A5C6  74 60                     JZ 0x0060a628
0060A5C8  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0060A5CB  8D 55 E8                  LEA EDX,[EBP + -0x18]
0060A5CE  51                        PUSH ECX
0060A5CF  52                        PUSH EDX
0060A5D0  53                        PUSH EBX
0060A5D1  50                        PUSH EAX
0060A5D2  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
0060A5D8  8B CF                     MOV ECX,EDI
0060A5DA  50                        PUSH EAX
0060A5DB  E8 73 99 DF FF            CALL 0x00403f53
0060A5E0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060A5E3  85 C0                     TEST EAX,EAX
0060A5E5  7C 41                     JL 0x0060a628
0060A5E7  83 F8 05                  CMP EAX,0x5
0060A5EA  7D 3C                     JGE 0x0060a628
0060A5EC  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0060A5EF  85 D2                     TEST EDX,EDX
0060A5F1  7C 35                     JL 0x0060a628
0060A5F3  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
0060A5F6  3B D1                     CMP EDX,ECX
0060A5F8  7D 2E                     JGE 0x0060a628
0060A5FA  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
0060A601  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0060A604  03 C3                     ADD EAX,EBX
0060A606  33 DB                     XOR EBX,EBX
0060A608  3B C3                     CMP EAX,EBX
0060A60A  7C 1C                     JL 0x0060a628
0060A60C  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0060A60F  7D 17                     JGE 0x0060a628
0060A611  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0060A614  3B FB                     CMP EDI,EBX
0060A616  74 10                     JZ 0x0060a628
0060A618  0F AF C1                  IMUL EAX,ECX
0060A61B  03 C7                     ADD EAX,EDI
0060A61D  33 C9                     XOR ECX,ECX
0060A61F  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0060A622  8B C1                     MOV EAX,ECX
0060A624  3B C3                     CMP EAX,EBX
0060A626  74 21                     JZ 0x0060a649
LAB_0060a628:
0060A628  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0060A62B  85 C0                     TEST EAX,EAX
0060A62D  75 35                     JNZ 0x0060a664
0060A62F  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0060A632  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A638  6A 00                     PUSH 0x0
0060A63A  52                        PUSH EDX
0060A63B  E8 60 04 0E 00            CALL 0x006eaaa0
0060A640  C7 46 04 01 00 00 00      MOV dword ptr [ESI + 0x4],0x1
0060A647  EB 1B                     JMP 0x0060a664
LAB_0060a649:
0060A649  83 7E 04 01               CMP dword ptr [ESI + 0x4],0x1
0060A64D  75 15                     JNZ 0x0060a664
0060A64F  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0060A652  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A658  50                        PUSH EAX
0060A659  E8 02 05 0E 00            CALL 0x006eab60
0060A65E  89 5E 04                  MOV dword ptr [ESI + 0x4],EBX
0060A661  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_0060a664:
0060A664  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0060A667  85 C9                     TEST ECX,ECX
0060A669  74 14                     JZ 0x0060a67f
0060A66B  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0060A66E  3B C1                     CMP EAX,ECX
0060A670  7C 09                     JL 0x0060a67b
0060A672  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
0060A679  EB 04                     JMP 0x0060a67f
LAB_0060a67b:
0060A67B  40                        INC EAX
0060A67C  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
LAB_0060a67f:
0060A67F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060A682  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0060A685  85 C0                     TEST EAX,EAX
0060A687  0F 84 94 00 00 00         JZ 0x0060a721
0060A68D  8B 87 48 02 00 00         MOV EAX,dword ptr [EDI + 0x248]
0060A693  BB 01 00 00 00            MOV EBX,0x1
0060A698  3B C3                     CMP EAX,EBX
0060A69A  74 68                     JZ 0x0060a704
0060A69C  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0060A69F  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
0060A6A2  51                        PUSH ECX
0060A6A3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A6A9  6A 00                     PUSH 0x0
0060A6AB  52                        PUSH EDX
0060A6AC  E8 BF FB 0D 00            CALL 0x006ea270
0060A6B1  DB 46 14                  FILD dword ptr [ESI + 0x14]
0060A6B4  51                        PUSH ECX
0060A6B5  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0060A6B8  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0060A6BE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0060A6C4  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0060A6CA  D9 1C 24                  FSTP float ptr [ESP]
0060A6CD  DB 46 10                  FILD dword ptr [ESI + 0x10]
0060A6D0  51                        PUSH ECX
0060A6D1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0060A6D7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0060A6DD  D9 1C 24                  FSTP float ptr [ESP]
0060A6E0  DB 46 0C                  FILD dword ptr [ESI + 0xc]
0060A6E3  51                        PUSH ECX
0060A6E4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A6EA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0060A6F0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0060A6F6  D9 1C 24                  FSTP float ptr [ESP]
0060A6F9  50                        PUSH EAX
0060A6FA  E8 61 02 0E 00            CALL 0x006ea960
0060A6FF  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0060A702  EB 1D                     JMP 0x0060a721
LAB_0060a704:
0060A704  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0060A707  85 C0                     TEST EAX,EAX
0060A709  74 16                     JZ 0x0060a721
0060A70B  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0060A70E  51                        PUSH ECX
0060A70F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A715  E8 46 04 0E 00            CALL 0x006eab60
0060A71A  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
LAB_0060a721:
0060A721  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0060A724  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0060A727  41                        INC ECX
0060A728  3B C8                     CMP ECX,EAX
0060A72A  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0060A72D  0F 8C AF FD FF FF         JL 0x0060a4e2
0060A733  5E                        POP ESI
0060A734  5B                        POP EBX
LAB_0060a735:
0060A735  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0060A738  5F                        POP EDI
0060A739  8B E5                     MOV ESP,EBP
0060A73B  5D                        POP EBP
0060A73C  C3                        RET
LAB_0060a73d:
0060A73D  33 C0                     XOR EAX,EAX
0060A73F  5F                        POP EDI
0060A740  8B E5                     MOV ESP,EBP
0060A742  5D                        POP EBP
0060A743  C3                        RET
