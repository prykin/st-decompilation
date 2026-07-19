FUN_005fe5d0:
005FE5D0  55                        PUSH EBP
005FE5D1  8B EC                     MOV EBP,ESP
005FE5D3  83 EC 2C                  SUB ESP,0x2c
005FE5D6  53                        PUSH EBX
005FE5D7  8B D9                     MOV EBX,ECX
005FE5D9  33 D2                     XOR EDX,EDX
005FE5DB  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
005FE5DE  8B 8B 33 02 00 00         MOV ECX,dword ptr [EBX + 0x233]
005FE5E4  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
005FE5EB  3B CA                     CMP ECX,EDX
005FE5ED  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005FE5F0  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
005FE5F3  75 09                     JNZ 0x005fe5fe
005FE5F5  33 C0                     XOR EAX,EAX
005FE5F7  5B                        POP EBX
005FE5F8  8B E5                     MOV ESP,EBP
005FE5FA  5D                        POP EBP
005FE5FB  C2 10 00                  RET 0x10
LAB_005fe5fe:
005FE5FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FE601  56                        PUSH ESI
005FE602  57                        PUSH EDI
005FE603  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
005FE606  8D 04 F0                  LEA EAX,[EAX + ESI*0x8]
005FE609  D1 E0                     SHL EAX,0x1
005FE60B  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005FE60E  8D 34 08                  LEA ESI,[EAX + ECX*0x1]
005FE611  8B 46 4E                  MOV EAX,dword ptr [ESI + 0x4e]
005FE614  3B C2                     CMP EAX,EDX
005FE616  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
005FE619  8D 7E 4E                  LEA EDI,[ESI + 0x4e]
005FE61C  74 06                     JZ 0x005fe624
005FE61E  57                        PUSH EDI
005FE61F  E8 3C CA 0A 00            CALL 0x006ab060
LAB_005fe624:
005FE624  68 58 02 00 00            PUSH 0x258
005FE629  E8 42 C6 0A 00            CALL 0x006aac70
005FE62E  89 07                     MOV dword ptr [EDI],EAX
005FE630  33 FF                     XOR EDI,EDI
005FE632  83 C8 FF                  OR EAX,0xffffffff
005FE635  89 7E 46                  MOV dword ptr [ESI + 0x46],EDI
005FE638  89 7E 4A                  MOV dword ptr [ESI + 0x4a],EDI
005FE63B  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005FE63E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005FE641  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_005fe644:
005FE644  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FE647  3B C7                     CMP EAX,EDI
005FE649  75 2E                     JNZ 0x005fe679
005FE64B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005FE64E  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
005FE651  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005FE658  66 8B 10                  MOV DX,word ptr [EAX]
005FE65B  66 89 11                  MOV word ptr [ECX],DX
005FE65E  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
005FE661  66 8B 50 02               MOV DX,word ptr [EAX + 0x2]
005FE665  66 89 51 02               MOV word ptr [ECX + 0x2],DX
005FE669  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
005FE66C  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
005FE670  66 89 51 04               MOV word ptr [ECX + 0x4],DX
005FE674  E9 D2 01 00 00            JMP 0x005fe84b
LAB_005fe679:
005FE679  8D 4D EC                  LEA ECX,[EBP + -0x14]
005FE67C  8D 55 F0                  LEA EDX,[EBP + -0x10]
005FE67F  51                        PUSH ECX
005FE680  8D 4D F4                  LEA ECX,[EBP + -0xc]
005FE683  52                        PUSH EDX
005FE684  51                        PUSH ECX
005FE685  50                        PUSH EAX
005FE686  56                        PUSH ESI
005FE687  8B CB                     MOV ECX,EBX
005FE689  E8 9A 4C E0 FF            CALL 0x00403328
005FE68E  85 C0                     TEST EAX,EAX
005FE690  0F 84 B5 01 00 00         JZ 0x005fe84b
005FE696  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005FE699  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
005FE69C  0F BF 42 04               MOVSX EAX,word ptr [EDX + 0x4]
005FE6A0  3B F0                     CMP ESI,EAX
005FE6A2  7F 03                     JG 0x005fe6a7
005FE6A4  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_005fe6a7:
005FE6A7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005FE6AA  B8 79 19 8C 02            MOV EAX,0x28c1979
005FE6AF  3B CF                     CMP ECX,EDI
005FE6B1  7C 10                     JL 0x005fe6c3
005FE6B3  F7 E9                     IMUL ECX
005FE6B5  D1 FA                     SAR EDX,0x1
005FE6B7  8B CA                     MOV ECX,EDX
005FE6B9  C1 E9 1F                  SHR ECX,0x1f
005FE6BC  03 D1                     ADD EDX,ECX
005FE6BE  0F BF DA                  MOVSX EBX,DX
005FE6C1  EB 0F                     JMP 0x005fe6d2
LAB_005fe6c3:
005FE6C3  F7 E9                     IMUL ECX
005FE6C5  D1 FA                     SAR EDX,0x1
005FE6C7  8B C2                     MOV EAX,EDX
005FE6C9  C1 E8 1F                  SHR EAX,0x1f
005FE6CC  03 D0                     ADD EDX,EAX
005FE6CE  0F BF DA                  MOVSX EBX,DX
005FE6D1  4B                        DEC EBX
LAB_005fe6d2:
005FE6D2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005FE6D5  B8 79 19 8C 02            MOV EAX,0x28c1979
005FE6DA  85 C9                     TEST ECX,ECX
005FE6DC  7C 10                     JL 0x005fe6ee
005FE6DE  F7 E9                     IMUL ECX
005FE6E0  D1 FA                     SAR EDX,0x1
005FE6E2  8B CA                     MOV ECX,EDX
005FE6E4  C1 E9 1F                  SHR ECX,0x1f
005FE6E7  03 D1                     ADD EDX,ECX
005FE6E9  0F BF FA                  MOVSX EDI,DX
005FE6EC  EB 0F                     JMP 0x005fe6fd
LAB_005fe6ee:
005FE6EE  F7 E9                     IMUL ECX
005FE6F0  D1 FA                     SAR EDX,0x1
005FE6F2  8B C2                     MOV EAX,EDX
005FE6F4  C1 E8 1F                  SHR EAX,0x1f
005FE6F7  03 D0                     ADD EDX,EAX
005FE6F9  0F BF FA                  MOVSX EDI,DX
005FE6FC  4F                        DEC EDI
LAB_005fe6fd:
005FE6FD  85 F6                     TEST ESI,ESI
005FE6FF  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FE704  7C 11                     JL 0x005fe717
005FE706  F7 EE                     IMUL ESI
005FE708  C1 FA 06                  SAR EDX,0x6
005FE70B  8B CA                     MOV ECX,EDX
005FE70D  C1 E9 1F                  SHR ECX,0x1f
005FE710  03 D1                     ADD EDX,ECX
005FE712  0F BF F2                  MOVSX ESI,DX
005FE715  EB 10                     JMP 0x005fe727
LAB_005fe717:
005FE717  F7 EE                     IMUL ESI
005FE719  C1 FA 06                  SAR EDX,0x6
005FE71C  8B C2                     MOV EAX,EDX
005FE71E  C1 E8 1F                  SHR EAX,0x1f
005FE721  03 D0                     ADD EDX,EAX
005FE723  0F BF F2                  MOVSX ESI,DX
005FE726  4E                        DEC ESI
LAB_005fe727:
005FE727  85 DB                     TEST EBX,EBX
005FE729  0F 8C 77 01 00 00         JL 0x005fe8a6
005FE72F  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
005FE736  3B D9                     CMP EBX,ECX
005FE738  0F 8D 68 01 00 00         JGE 0x005fe8a6
005FE73E  85 FF                     TEST EDI,EDI
005FE740  0F 8C 60 01 00 00         JL 0x005fe8a6
005FE746  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
005FE74D  3B FA                     CMP EDI,EDX
005FE74F  0F 8D 51 01 00 00         JGE 0x005fe8a6
005FE755  85 F6                     TEST ESI,ESI
005FE757  0F 8C 49 01 00 00         JL 0x005fe8a6
005FE75D  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
005FE764  3B F0                     CMP ESI,EAX
005FE766  0F 8D 3A 01 00 00         JGE 0x005fe8a6
005FE76C  3B 5D E4                  CMP EBX,dword ptr [EBP + -0x1c]
005FE76F  75 0E                     JNZ 0x005fe77f
005FE771  3B 7D E0                  CMP EDI,dword ptr [EBP + -0x20]
005FE774  75 09                     JNZ 0x005fe77f
005FE776  3B 75 DC                  CMP ESI,dword ptr [EBP + -0x24]
005FE779  0F 84 92 00 00 00         JZ 0x005fe811
LAB_005fe77f:
005FE77F  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005FE785  56                        PUSH ESI
005FE786  57                        PUSH EDI
005FE787  53                        PUSH EBX
005FE788  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
005FE78B  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
005FE78E  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
005FE791  E8 A5 65 E0 FF            CALL 0x00404d3b
005FE796  85 C0                     TEST EAX,EAX
005FE798  75 77                     JNZ 0x005fe811
005FE79A  66 85 DB                  TEST BX,BX
005FE79D  7C 50                     JL 0x005fe7ef
005FE79F  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
005FE7A5  66 3B D8                  CMP BX,AX
005FE7A8  7D 45                     JGE 0x005fe7ef
005FE7AA  66 85 FF                  TEST DI,DI
005FE7AD  7C 40                     JL 0x005fe7ef
005FE7AF  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
005FE7B6  7D 37                     JGE 0x005fe7ef
005FE7B8  66 85 F6                  TEST SI,SI
005FE7BB  7C 32                     JL 0x005fe7ef
005FE7BD  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
005FE7C4  7D 29                     JGE 0x005fe7ef
005FE7C6  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
005FE7CD  0F BF D6                  MOVSX EDX,SI
005FE7D0  0F AF CA                  IMUL ECX,EDX
005FE7D3  0F BF C0                  MOVSX EAX,AX
005FE7D6  0F BF D7                  MOVSX EDX,DI
005FE7D9  0F AF C2                  IMUL EAX,EDX
005FE7DC  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005FE7E2  03 C8                     ADD ECX,EAX
005FE7E4  0F BF C3                  MOVSX EAX,BX
005FE7E7  03 C8                     ADD ECX,EAX
005FE7E9  83 3C CA 00               CMP dword ptr [EDX + ECX*0x8],0x0
005FE7ED  75 1B                     JNZ 0x005fe80a
LAB_005fe7ef:
005FE7EF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005FE7F2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005FE7F5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005FE7F8  50                        PUSH EAX
005FE7F9  51                        PUSH ECX
005FE7FA  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005FE800  52                        PUSH EDX
005FE801  E8 38 62 E0 FF            CALL 0x00404a3e
005FE806  85 C0                     TEST EAX,EAX
005FE808  7C 07                     JL 0x005fe811
LAB_005fe80a:
005FE80A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_005fe811:
005FE811  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005FE814  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005FE817  66 8B 7D F4               MOV DI,word ptr [EBP + -0xc]
005FE81B  83 C2 4E                  ADD EDX,0x4e
005FE81E  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
005FE821  8B 32                     MOV ESI,dword ptr [EDX]
005FE823  D1 E0                     SHL EAX,0x1
005FE825  41                        INC ECX
005FE826  66 89 3C 06               MOV word ptr [ESI + EAX*0x1],DI
005FE82A  8B 32                     MOV ESI,dword ptr [EDX]
005FE82C  66 8B 7D F0               MOV DI,word ptr [EBP + -0x10]
005FE830  83 F9 64                  CMP ECX,0x64
005FE833  66 89 7C 06 02            MOV word ptr [ESI + EAX*0x1 + 0x2],DI
005FE838  8B 12                     MOV EDX,dword ptr [EDX]
005FE83A  66 8B 75 EC               MOV SI,word ptr [EBP + -0x14]
005FE83E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005FE841  66 89 74 02 04            MOV word ptr [EDX + EAX*0x1 + 0x4],SI
005FE846  7D 14                     JGE 0x005fe85c
005FE848  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_005fe84b:
005FE84B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005FE84E  33 FF                     XOR EDI,EDI
005FE850  3B C7                     CMP EAX,EDI
005FE852  74 12                     JZ 0x005fe866
005FE854  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
005FE857  E9 E8 FD FF FF            JMP 0x005fe644
LAB_005fe85c:
005FE85C  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_005fe863:
005FE863  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
FUN_005fe5d0::cf_common_exit_005FE866:
005FE866  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005FE869  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005FE86F  8B 88 33 02 00 00         MOV ECX,dword ptr [EAX + 0x233]
005FE875  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005FE87B  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
005FE87E  89 44 0A 35               MOV dword ptr [EDX + ECX*0x1 + 0x35],EAX
005FE882  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FE885  85 C0                     TEST EAX,EAX
005FE887  74 03                     JZ 0x005fe88c
005FE889  89 46 46                  MOV dword ptr [ESI + 0x46],EAX
LAB_005fe88c:
005FE88C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005FE88F  85 C0                     TEST EAX,EAX
005FE891  75 07                     JNZ 0x005fe89a
005FE893  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
LAB_005fe89a:
005FE89A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005FE89D  5F                        POP EDI
005FE89E  5E                        POP ESI
005FE89F  5B                        POP EBX
005FE8A0  8B E5                     MOV ESP,EBP
005FE8A2  5D                        POP EBP
005FE8A3  C2 10 00                  RET 0x10
LAB_005fe8a6:
005FE8A6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FE8A9  48                        DEC EAX
005FE8AA  85 C0                     TEST EAX,EAX
005FE8AC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005FE8AF  7F B2                     JG 0x005fe863
005FE8B1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005FE8B4  E8 57 53 E0 FF            CALL 0x00403c10
005FE8B9  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005FE8BC  5F                        POP EDI
005FE8BD  5E                        POP ESI
005FE8BE  5B                        POP EBX
005FE8BF  8B E5                     MOV ESP,EBP
005FE8C1  5D                        POP EBP
005FE8C2  C2 10 00                  RET 0x10
