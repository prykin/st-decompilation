FUN_00713200:
00713200  55                        PUSH EBP
00713201  8B EC                     MOV EBP,ESP
00713203  83 EC 5C                  SUB ESP,0x5c
00713206  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071320B  53                        PUSH EBX
0071320C  56                        PUSH ESI
0071320D  57                        PUSH EDI
0071320E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00713211  33 FF                     XOR EDI,EDI
00713213  8D 55 A8                  LEA EDX,[EBP + -0x58]
00713216  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00713219  57                        PUSH EDI
0071321A  52                        PUSH EDX
0071321B  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0071321E  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
00713222  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00713225  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00713228  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0071322B  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0071322E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00713234  E8 B7 A5 01 00            CALL 0x0072d7f0
00713239  8B F0                     MOV ESI,EAX
0071323B  83 C4 08                  ADD ESP,0x8
0071323E  3B F7                     CMP ESI,EDI
00713240  0F 85 CA 01 00 00         JNZ 0x00713410
00713246  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00713249  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0071324C  3B DF                     CMP EBX,EDI
0071324E  74 04                     JZ 0x00713254
00713250  3B F7                     CMP ESI,EDI
00713252  7F 17                     JG 0x0071326b
LAB_00713254:
00713254  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00713259  68 12 09 00 00            PUSH 0x912
0071325E  68 90 01 7F 00            PUSH 0x7f0190
00713263  50                        PUSH EAX
00713264  6A CC                     PUSH -0x34
00713266  E8 D5 2B F9 FF            CALL 0x006a5e40
LAB_0071326b:
0071326B  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0071326E  53                        PUSH EBX
0071326F  8B CF                     MOV ECX,EDI
00713271  E8 9A DE FF FF            CALL 0x00711110
00713276  3B C6                     CMP EAX,ESI
00713278  7F 41                     JG 0x007132bb
0071327A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071327D  85 D2                     TEST EDX,EDX
0071327F  75 13                     JNZ 0x00713294
00713281  8B FB                     MOV EDI,EBX
00713283  83 C9 FF                  OR ECX,0xffffffff
00713286  33 C0                     XOR EAX,EAX
00713288  F2 AE                     SCASB.REPNE ES:EDI
0071328A  F7 D1                     NOT ECX
0071328C  51                        PUSH ECX
0071328D  E8 7E 79 F9 FF            CALL 0x006aac10
00713292  8B D0                     MOV EDX,EAX
LAB_00713294:
00713294  8B FB                     MOV EDI,EBX
00713296  83 C9 FF                  OR ECX,0xffffffff
00713299  33 C0                     XOR EAX,EAX
0071329B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0071329E  F2 AE                     SCASB.REPNE ES:EDI
007132A0  F7 D1                     NOT ECX
007132A2  2B F9                     SUB EDI,ECX
007132A4  8B C1                     MOV EAX,ECX
007132A6  8B F7                     MOV ESI,EDI
007132A8  8B FA                     MOV EDI,EDX
007132AA  C1 E9 02                  SHR ECX,0x2
007132AD  F3 A5                     MOVSD.REP ES:EDI,ESI
007132AF  8B C8                     MOV ECX,EAX
007132B1  83 E1 03                  AND ECX,0x3
007132B4  F3 A4                     MOVSB.REP ES:EDI,ESI
007132B6  E9 34 01 00 00            JMP 0x007133ef
LAB_007132bb:
007132BB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007132BE  85 C0                     TEST EAX,EAX
007132C0  74 0B                     JZ 0x007132cd
007132C2  50                        PUSH EAX
007132C3  8B CF                     MOV ECX,EDI
007132C5  E8 46 DE FF FF            CALL 0x00711110
007132CA  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_007132cd:
007132CD  39 75 EC                  CMP dword ptr [EBP + -0x14],ESI
007132D0  7E 18                     JLE 0x007132ea
007132D2  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
007132D8  68 1D 09 00 00            PUSH 0x91d
007132DD  68 90 01 7F 00            PUSH 0x7f0190
007132E2  51                        PUSH ECX
007132E3  6A CC                     PUSH -0x34
007132E5  E8 56 2B F9 FF            CALL 0x006a5e40
LAB_007132ea:
007132EA  8A 03                     MOV AL,byte ptr [EBX]
007132EC  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
007132EF  84 C0                     TEST AL,AL
007132F1  8B F3                     MOV ESI,EBX
007132F3  74 61                     JZ 0x00713356
LAB_007132f5:
007132F5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007132F8  85 C0                     TEST EAX,EAX
007132FA  74 09                     JZ 0x00713305
007132FC  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00713303  EB 49                     JMP 0x0071334e
LAB_00713305:
00713305  8D 97 9E 00 00 00         LEA EDX,[EDI + 0x9e]
0071330B  56                        PUSH ESI
0071330C  52                        PUSH EDX
0071330D  E8 7E 9A FF FF            CALL 0x0070cd90
00713312  83 C4 08                  ADD ESP,0x8
00713315  85 C0                     TEST EAX,EAX
00713317  75 0E                     JNZ 0x00713327
00713319  8B 47 7E                  MOV EAX,dword ptr [EDI + 0x7e]
0071331C  85 C0                     TEST EAX,EAX
0071331E  74 07                     JZ 0x00713327
00713320  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
LAB_00713327:
00713327  3B 75 F4                  CMP ESI,dword ptr [EBP + -0xc]
0071332A  74 1F                     JZ 0x0071334b
0071332C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0071332F  8A 1E                     MOV BL,byte ptr [ESI]
00713331  50                        PUSH EAX
00713332  8B CF                     MOV ECX,EDI
00713334  C6 06 00                  MOV byte ptr [ESI],0x0
00713337  E8 D4 DD FF FF            CALL 0x00711110
0071333C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0071333F  88 1E                     MOV byte ptr [ESI],BL
00713341  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00713344  03 C1                     ADD EAX,ECX
00713346  3B 45 14                  CMP EAX,dword ptr [EBP + 0x14]
00713349  7F 0B                     JG 0x00713356
LAB_0071334b:
0071334B  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_0071334e:
0071334E  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
00713351  46                        INC ESI
00713352  84 C0                     TEST AL,AL
00713354  75 9F                     JNZ 0x007132f5
LAB_00713356:
00713356  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00713359  8A 10                     MOV DL,byte ptr [EAX]
0071335B  C6 00 00                  MOV byte ptr [EAX],0x0
0071335E  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00713361  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00713364  85 D2                     TEST EDX,EDX
00713366  75 30                     JNZ 0x00713398
00713368  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0071336B  85 FF                     TEST EDI,EDI
0071336D  74 0F                     JZ 0x0071337e
0071336F  83 C9 FF                  OR ECX,0xffffffff
00713372  33 C0                     XOR EAX,EAX
00713374  F2 AE                     SCASB.REPNE ES:EDI
00713376  F7 D1                     NOT ECX
00713378  49                        DEC ECX
00713379  8B D1                     MOV EDX,ECX
0071337B  42                        INC EDX
0071337C  EB 02                     JMP 0x00713380
LAB_0071337e:
0071337E  33 D2                     XOR EDX,EDX
LAB_00713380:
00713380  8B FB                     MOV EDI,EBX
00713382  83 C9 FF                  OR ECX,0xffffffff
00713385  33 C0                     XOR EAX,EAX
00713387  F2 AE                     SCASB.REPNE ES:EDI
00713389  F7 D1                     NOT ECX
0071338B  49                        DEC ECX
0071338C  8D 44 11 01               LEA EAX,[ECX + EDX*0x1 + 0x1]
00713390  50                        PUSH EAX
00713391  E8 7A 78 F9 FF            CALL 0x006aac10
00713396  8B D0                     MOV EDX,EAX
LAB_00713398:
00713398  8B FB                     MOV EDI,EBX
0071339A  83 C9 FF                  OR ECX,0xffffffff
0071339D  33 C0                     XOR EAX,EAX
0071339F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007133A2  F2 AE                     SCASB.REPNE ES:EDI
007133A4  F7 D1                     NOT ECX
007133A6  2B F9                     SUB EDI,ECX
007133A8  8B C1                     MOV EAX,ECX
007133AA  8B F7                     MOV ESI,EDI
007133AC  8B FA                     MOV EDI,EDX
007133AE  C1 E9 02                  SHR ECX,0x2
007133B1  F3 A5                     MOVSD.REP ES:EDI,ESI
007133B3  8B C8                     MOV ECX,EAX
007133B5  83 E1 03                  AND ECX,0x3
007133B8  F3 A4                     MOVSB.REP ES:EDI,ESI
007133BA  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007133BD  85 FF                     TEST EDI,EDI
007133BF  74 26                     JZ 0x007133e7
007133C1  83 C9 FF                  OR ECX,0xffffffff
007133C4  33 C0                     XOR EAX,EAX
007133C6  F2 AE                     SCASB.REPNE ES:EDI
007133C8  F7 D1                     NOT ECX
007133CA  2B F9                     SUB EDI,ECX
007133CC  8B F7                     MOV ESI,EDI
007133CE  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
007133D1  8B D1                     MOV EDX,ECX
007133D3  83 C9 FF                  OR ECX,0xffffffff
007133D6  F2 AE                     SCASB.REPNE ES:EDI
007133D8  8B CA                     MOV ECX,EDX
007133DA  4F                        DEC EDI
007133DB  C1 E9 02                  SHR ECX,0x2
007133DE  F3 A5                     MOVSD.REP ES:EDI,ESI
007133E0  8B CA                     MOV ECX,EDX
007133E2  83 E1 03                  AND ECX,0x3
007133E5  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_007133e7:
007133E7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007133EA  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
007133ED  88 01                     MOV byte ptr [ECX],AL
LAB_007133ef:
007133EF  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
007133F2  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
007133F5  85 C0                     TEST EAX,EAX
007133F7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007133FD  74 05                     JZ 0x00713404
007133FF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00713402  89 08                     MOV dword ptr [EAX],ECX
LAB_00713404:
00713404  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00713407  5F                        POP EDI
00713408  5E                        POP ESI
00713409  5B                        POP EBX
0071340A  8B E5                     MOV ESP,EBP
0071340C  5D                        POP EBP
0071340D  C2 14 00                  RET 0x14
LAB_00713410:
00713410  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00713413  68 8C 03 7F 00            PUSH 0x7f038c
00713418  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071341D  56                        PUSH ESI
0071341E  57                        PUSH EDI
0071341F  68 3F 09 00 00            PUSH 0x93f
00713424  68 90 01 7F 00            PUSH 0x7f0190
00713429  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071342F  E8 9C A0 F9 FF            CALL 0x006ad4d0
00713434  83 C4 18                  ADD ESP,0x18
00713437  85 C0                     TEST EAX,EAX
00713439  74 01                     JZ 0x0071343c
0071343B  CC                        INT3
LAB_0071343c:
0071343C  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
0071343F  84 C0                     TEST AL,AL
00713441  74 05                     JZ 0x00713448
00713443  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00713446  88 01                     MOV byte ptr [ECX],AL
LAB_00713448:
00713448  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0071344B  3B C7                     CMP EAX,EDI
0071344D  74 0E                     JZ 0x0071345d
0071344F  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
00713452  74 09                     JZ 0x0071345d
00713454  8D 55 F8                  LEA EDX,[EBP + -0x8]
00713457  52                        PUSH EDX
00713458  E8 03 7C F9 FF            CALL 0x006ab060
LAB_0071345d:
0071345D  68 44 09 00 00            PUSH 0x944
00713462  68 90 01 7F 00            PUSH 0x7f0190
00713467  57                        PUSH EDI
00713468  56                        PUSH ESI
00713469  E8 D2 29 F9 FF            CALL 0x006a5e40
0071346E  5F                        POP EDI
0071346F  5E                        POP ESI
00713470  33 C0                     XOR EAX,EAX
00713472  5B                        POP EBX
00713473  8B E5                     MOV ESP,EBP
00713475  5D                        POP EBP
00713476  C2 14 00                  RET 0x14
