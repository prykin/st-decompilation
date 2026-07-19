FUN_006d8120:
006D8120  C8 30 00 00               ENTER 0x30,0x0
006D8124  53                        PUSH EBX
006D8125  56                        PUSH ESI
006D8126  57                        PUSH EDI
006D8127  FC                        CLD
006D8128  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D812B  8B 47 36                  MOV EAX,dword ptr [EDI + 0x36]
006D812E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D8131  8B 47 3A                  MOV EAX,dword ptr [EDI + 0x3a]
006D8134  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D8137  0F B6 47 11               MOVZX EAX,byte ptr [EDI + 0x11]
006D813B  3C 01                     CMP AL,0x1
006D813D  0F 87 E3 00 00 00         JA 0x006d8226
006D8143  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D8146  0F B6 47 10               MOVZX EAX,byte ptr [EDI + 0x10]
006D814A  F7 67 08                  MUL dword ptr [EDI + 0x8]
006D814D  83 C0 07                  ADD EAX,0x7
006D8150  C1 E8 03                  SHR EAX,0x3
006D8153  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006D8156  8B 57 12                  MOV EDX,dword ptr [EDI + 0x12]
006D8159  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006D815C  2B D0                     SUB EDX,EAX
006D815E  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006D8161  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
006D8164  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006D8167  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006D816A  F7 65 EC                  MUL dword ptr [EBP + -0x14]
006D816D  05 00 02 00 00            ADD EAX,0x200
006D8172  83 C0 03                  ADD EAX,0x3
006D8175  50                        PUSH EAX
006D8176  E8 A6 A9 D2 FF            CALL 0x00402b21
006D817B  83 C4 04                  ADD ESP,0x4
006D817E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006D8181  0B C0                     OR EAX,EAX
006D8183  0F 84 9D 00 00 00         JZ 0x006d8226
006D8189  05 00 02 00 00            ADD EAX,0x200
006D818E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006D8191  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D8194  33 DB                     XOR EBX,EBX
006D8196  33 D2                     XOR EDX,EDX
006D8198  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_006d819b:
006D819B  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006D819E  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006D81A1  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006d81a4:
006D81A4  F7 DB                     NEG EBX
006D81A6  8B CB                     MOV ECX,EBX
006D81A8  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
LAB_006d81ab:
006D81AB  0B DB                     OR EBX,EBX
006D81AD  7E 39                     JLE 0x006d81e8
006D81AF  0B C9                     OR ECX,ECX
006D81B1  75 21                     JNZ 0x006d81d4
006D81B3  3B F2                     CMP ESI,EDX
006D81B5  72 07                     JC 0x006d81be
006D81B7  E8 6F 00 00 00            CALL 0x006d822b
006D81BC  72 59                     JC 0x006d8217
LAB_006d81be:
006D81BE  41                        INC ECX
006D81BF  AC                        LODSB ESI
006D81C0  3C C0                     CMP AL,0xc0
006D81C2  72 10                     JC 0x006d81d4
006D81C4  24 3F                     AND AL,0x3f
006D81C6  8A C8                     MOV CL,AL
006D81C8  3B F2                     CMP ESI,EDX
006D81CA  72 07                     JC 0x006d81d3
006D81CC  E8 5A 00 00 00            CALL 0x006d822b
006D81D1  72 44                     JC 0x006d8217
LAB_006d81d3:
006D81D3  AC                        LODSB ESI
LAB_006d81d4:
006D81D4  2B D9                     SUB EBX,ECX
006D81D6  7C 05                     JL 0x006d81dd
006D81D8  3B 5D D8                  CMP EBX,dword ptr [EBP + -0x28]
006D81DB  73 07                     JNC 0x006d81e4
LAB_006d81dd:
006D81DD  03 CB                     ADD ECX,EBX
006D81DF  2B 4D D8                  SUB ECX,dword ptr [EBP + -0x28]
006D81E2  7E C7                     JLE 0x006d81ab
LAB_006d81e4:
006D81E4  F3 AA                     STOSB.REP ES:EDI
006D81E6  EB C3                     JMP 0x006d81ab
LAB_006d81e8:
006D81E8  FF 4D D4                  DEC dword ptr [EBP + -0x2c]
006D81EB  75 B7                     JNZ 0x006d81a4
006D81ED  52                        PUSH EDX
006D81EE  53                        PUSH EBX
006D81EF  50                        PUSH EAX
006D81F0  FF 75 E8                  PUSH dword ptr [EBP + -0x18]
006D81F3  FF 75 F0                  PUSH dword ptr [EBP + -0x10]
006D81F6  FF 75 08                  PUSH dword ptr [EBP + 0x8]
006D81F9  FF 55 F8                  CALL dword ptr [EBP + -0x8]
006D81FC  59                        POP ECX
006D81FD  5B                        POP EBX
006D81FE  5A                        POP EDX
006D81FF  FC                        CLD
006D8200  0B C0                     OR EAX,EAX
006D8202  74 07                     JZ 0x006d820b
006D8204  83 F8 FF                  CMP EAX,-0x1
006D8207  74 0C                     JZ 0x006d8215
006D8209  EB 0C                     JMP 0x006d8217
LAB_006d820b:
006D820B  8B C1                     MOV EAX,ECX
006D820D  FF 45 E8                  INC dword ptr [EBP + -0x18]
006D8210  FF 4D E4                  DEC dword ptr [EBP + -0x1c]
006D8213  75 86                     JNZ 0x006d819b
LAB_006d8215:
006D8215  33 C0                     XOR EAX,EAX
FUN_006d8120::cf_common_exit_006D8217:
006D8217  8B F0                     MOV ESI,EAX
006D8219  FF 75 F4                  PUSH dword ptr [EBP + -0xc]
006D821C  E8 69 DB D2 FF            CALL 0x00405d8a
006D8221  83 C4 04                  ADD ESP,0x4
006D8224  8B C6                     MOV EAX,ESI
LAB_006d8226:
006D8226  5F                        POP EDI
006D8227  5E                        POP ESI
006D8228  5B                        POP EBX
006D8229  C9                        LEAVE
006D822A  C3                        RET
