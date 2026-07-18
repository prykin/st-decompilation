FUN_00746670:
00746670  55                        PUSH EBP
00746671  8B EC                     MOV EBP,ESP
00746673  83 EC 18                  SUB ESP,0x18
00746676  56                        PUSH ESI
00746677  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0074667B  74 1F                     JZ 0x0074669c
0074667D  6A 3D                     PUSH 0x3d
0074667F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746682  50                        PUSH EAX
00746683  E8 38 04 00 00            CALL 0x00746ac0
00746688  83 C4 08                  ADD ESP,0x8
0074668B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0074668E  83 7D E8 00               CMP dword ptr [EBP + -0x18],0x0
00746692  74 08                     JZ 0x0074669c
00746694  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00746697  3B 4D E8                  CMP ECX,dword ptr [EBP + -0x18]
0074669A  75 08                     JNZ 0x007466a4
LAB_0074669c:
0074669C  83 C8 FF                  OR EAX,0xffffffff
0074669F  E9 A7 02 00 00            JMP 0x0074694b
LAB_007466a4:
007466A4  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
007466A7  0F BE 42 01               MOVSX EAX,byte ptr [EDX + 0x1]
007466AB  F7 D8                     NEG EAX
007466AD  1B C0                     SBB EAX,EAX
007466AF  40                        INC EAX
007466B0  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
007466B3  8B 0D 70 71 85 00         MOV ECX,dword ptr [0x00857170]
007466B9  3B 0D 74 71 85 00         CMP ECX,dword ptr [0x00857174]
007466BF  75 14                     JNZ 0x007466d5
007466C1  8B 15 70 71 85 00         MOV EDX,dword ptr [0x00857170]
007466C7  52                        PUSH EDX
007466C8  E8 03 03 00 00            CALL 0x007469d0
007466CD  83 C4 04                  ADD ESP,0x4
007466D0  A3 70 71 85 00            MOV [0x00857170],EAX
LAB_007466d5:
007466D5  83 3D 70 71 85 00 00      CMP dword ptr [0x00857170],0x0
007466DC  0F 85 B3 00 00 00         JNZ 0x00746795
007466E2  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
007466E6  74 1F                     JZ 0x00746707
007466E8  83 3D 78 71 85 00 00      CMP dword ptr [0x00857178],0x0
007466EF  74 16                     JZ 0x00746707
007466F1  E8 7A FA FF FF            CALL 0x00746170
007466F6  85 C0                     TEST EAX,EAX
007466F8  74 08                     JZ 0x00746702
007466FA  83 C8 FF                  OR EAX,0xffffffff
007466FD  E9 49 02 00 00            JMP 0x0074694b
LAB_00746702:
00746702  E9 8E 00 00 00            JMP 0x00746795
LAB_00746707:
00746707  83 7D EC 00               CMP dword ptr [EBP + -0x14],0x0
0074670B  74 07                     JZ 0x00746714
0074670D  33 C0                     XOR EAX,EAX
0074670F  E9 37 02 00 00            JMP 0x0074694b
LAB_00746714:
00746714  83 3D 70 71 85 00 00      CMP dword ptr [0x00857170],0x0
0074671B  75 37                     JNZ 0x00746754
0074671D  68 87 00 00 00            PUSH 0x87
00746722  68 C8 10 7A 00            PUSH 0x7a10c8
00746727  6A 02                     PUSH 0x2
00746729  6A 04                     PUSH 0x4
0074672B  E8 D4 A9 CB FF            CALL 0x00401104
00746730  83 C4 10                  ADD ESP,0x10
00746733  A3 70 71 85 00            MOV [0x00857170],EAX
00746738  83 3D 70 71 85 00 00      CMP dword ptr [0x00857170],0x0
0074673F  75 08                     JNZ 0x00746749
00746741  83 C8 FF                  OR EAX,0xffffffff
00746744  E9 02 02 00 00            JMP 0x0074694b
LAB_00746749:
00746749  A1 70 71 85 00            MOV EAX,[0x00857170]
0074674E  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_00746754:
00746754  83 3D 78 71 85 00 00      CMP dword ptr [0x00857178],0x0
0074675B  75 38                     JNZ 0x00746795
0074675D  68 8E 00 00 00            PUSH 0x8e
00746762  68 C8 10 7A 00            PUSH 0x7a10c8
00746767  6A 02                     PUSH 0x2
00746769  6A 04                     PUSH 0x4
0074676B  E8 94 A9 CB FF            CALL 0x00401104
00746770  83 C4 10                  ADD ESP,0x10
00746773  A3 78 71 85 00            MOV [0x00857178],EAX
00746778  83 3D 78 71 85 00 00      CMP dword ptr [0x00857178],0x0
0074677F  75 08                     JNZ 0x00746789
00746781  83 C8 FF                  OR EAX,0xffffffff
00746784  E9 C2 01 00 00            JMP 0x0074694b
LAB_00746789:
00746789  8B 0D 78 71 85 00         MOV ECX,dword ptr [0x00857178]
0074678F  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
LAB_00746795:
00746795  8B 15 70 71 85 00         MOV EDX,dword ptr [0x00857170]
0074679B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0074679E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
007467A1  2B 45 08                  SUB EAX,dword ptr [EBP + 0x8]
007467A4  50                        PUSH EAX
007467A5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007467A8  51                        PUSH ECX
007467A9  E8 A2 01 00 00            CALL 0x00746950
007467AE  83 C4 08                  ADD ESP,0x8
007467B1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007467B4  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
007467B8  0F 8C 93 00 00 00         JL 0x00746851
007467BE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007467C1  83 3A 00                  CMP dword ptr [EDX],0x0
007467C4  0F 84 87 00 00 00         JZ 0x00746851
007467CA  83 7D EC 00               CMP dword ptr [EBP + -0x14],0x0
007467CE  74 73                     JZ 0x00746843
007467D0  6A 02                     PUSH 0x2
007467D2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007467D5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007467D8  8B 14 81                  MOV EDX,dword ptr [ECX + EAX*0x4]
007467DB  52                        PUSH EDX
007467DC  E8 2B DD CB FF            CALL 0x0040450c
007467E1  83 C4 08                  ADD ESP,0x8
007467E4  EB 09                     JMP 0x007467ef
LAB_007467e6:
007467E6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007467E9  83 C0 01                  ADD EAX,0x1
007467EC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_007467ef:
007467EF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007467F2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007467F5  83 3C 8A 00               CMP dword ptr [EDX + ECX*0x4],0x0
007467F9  74 15                     JZ 0x00746810
007467FB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007467FE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00746801  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00746804  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00746807  8B 54 96 04               MOV EDX,dword ptr [ESI + EDX*0x4 + 0x4]
0074680B  89 14 81                  MOV dword ptr [ECX + EAX*0x4],EDX
0074680E  EB D6                     JMP 0x007467e6
LAB_00746810:
00746810  68 B9 00 00 00            PUSH 0xb9
00746815  68 C8 10 7A 00            PUSH 0x7a10c8
0074681A  6A 02                     PUSH 0x2
0074681C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074681F  C1 E0 02                  SHL EAX,0x2
00746822  50                        PUSH EAX
00746823  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00746826  51                        PUSH ECX
00746827  E8 88 DF CB FF            CALL 0x004047b4
0074682C  83 C4 14                  ADD ESP,0x14
0074682F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00746832  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
00746836  74 09                     JZ 0x00746841
00746838  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0074683B  89 15 70 71 85 00         MOV dword ptr [0x00857170],EDX
LAB_00746841:
00746841  EB 0C                     JMP 0x0074684f
LAB_00746843:
00746843  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00746846  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00746849  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074684C  89 14 81                  MOV dword ptr [ECX + EAX*0x4],EDX
LAB_0074684f:
0074684F  EB 73                     JMP 0x007468c4
LAB_00746851:
00746851  83 7D EC 00               CMP dword ptr [EBP + -0x14],0x0
00746855  75 66                     JNZ 0x007468bd
00746857  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0074685B  7D 08                     JGE 0x00746865
0074685D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00746860  F7 D8                     NEG EAX
00746862  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_00746865:
00746865  68 CE 00 00 00            PUSH 0xce
0074686A  68 C8 10 7A 00            PUSH 0x7a10c8
0074686F  6A 02                     PUSH 0x2
00746871  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00746874  8D 14 8D 08 00 00 00      LEA EDX,[ECX*0x4 + 0x8]
0074687B  52                        PUSH EDX
0074687C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074687F  50                        PUSH EAX
00746880  E8 2F DF CB FF            CALL 0x004047b4
00746885  83 C4 14                  ADD ESP,0x14
00746888  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0074688B  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
0074688F  75 08                     JNZ 0x00746899
00746891  83 C8 FF                  OR EAX,0xffffffff
00746894  E9 B2 00 00 00            JMP 0x0074694b
LAB_00746899:
00746899  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0074689C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0074689F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007468A2  89 04 8A                  MOV dword ptr [EDX + ECX*0x4],EAX
007468A5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007468A8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007468AB  C7 44 8A 04 00 00 00 00   MOV dword ptr [EDX + ECX*0x4 + 0x4],0x0
007468B3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007468B6  A3 70 71 85 00            MOV [0x00857170],EAX
007468BB  EB 07                     JMP 0x007468c4
LAB_007468bd:
007468BD  33 C0                     XOR EAX,EAX
007468BF  E9 87 00 00 00            JMP 0x0074694b
LAB_007468c4:
007468C4  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
007468C8  74 7F                     JZ 0x00746949
007468CA  68 E5 00 00 00            PUSH 0xe5
007468CF  68 C8 10 7A 00            PUSH 0x7a10c8
007468D4  6A 02                     PUSH 0x2
007468D6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007468D9  51                        PUSH ECX
007468DA  E8 31 03 FF FF            CALL 0x00736c10
007468DF  83 C4 04                  ADD ESP,0x4
007468E2  83 C0 02                  ADD EAX,0x2
007468E5  50                        PUSH EAX
007468E6  E8 19 A8 CB FF            CALL 0x00401104
007468EB  83 C4 10                  ADD ESP,0x10
007468EE  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007468F1  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
007468F5  74 52                     JZ 0x00746949
007468F7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007468FA  52                        PUSH EDX
007468FB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007468FE  50                        PUSH EAX
007468FF  E8 3C 39 FF FF            CALL 0x0073a240
00746904  83 C4 08                  ADD ESP,0x8
00746907  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0074690A  2B 4D 08                  SUB ECX,dword ptr [EBP + 0x8]
0074690D  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00746910  03 D1                     ADD EDX,ECX
00746912  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00746915  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00746918  C6 00 00                  MOV byte ptr [EAX],0x0
0074691B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074691E  83 C1 01                  ADD ECX,0x1
00746921  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00746924  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00746927  F7 DA                     NEG EDX
00746929  1B D2                     SBB EDX,EDX
0074692B  F7 D2                     NOT EDX
0074692D  23 55 FC                  AND EDX,dword ptr [EBP + -0x4]
00746930  52                        PUSH EDX
00746931  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00746934  50                        PUSH EAX
00746935  FF 15 84 BC 85 00         CALL dword ptr [0x0085bc84]
0074693B  6A 02                     PUSH 0x2
0074693D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00746940  51                        PUSH ECX
00746941  E8 C6 DB CB FF            CALL 0x0040450c
00746946  83 C4 08                  ADD ESP,0x8
LAB_00746949:
00746949  33 C0                     XOR EAX,EAX
LAB_0074694b:
0074694B  5E                        POP ESI
0074694C  8B E5                     MOV ESP,EBP
0074694E  5D                        POP EBP
0074694F  C3                        RET
