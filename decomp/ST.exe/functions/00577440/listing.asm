FUN_00577440:
00577440  55                        PUSH EBP
00577441  8B EC                     MOV EBP,ESP
00577443  83 EC 08                  SUB ESP,0x8
00577446  56                        PUSH ESI
00577447  8B F1                     MOV ESI,ECX
00577449  57                        PUSH EDI
0057744A  56                        PUSH ESI
0057744B  B9 20 76 80 00            MOV ECX,0x807620
00577450  E8 EB D8 16 00            CALL 0x006e4d40
00577455  83 F8 01                  CMP EAX,0x1
00577458  0F 85 97 01 00 00         JNZ 0x005775f5
0057745E  A1 84 87 80 00            MOV EAX,[0x00808784]
00577463  85 C0                     TEST EAX,EAX
00577465  0F 85 8A 01 00 00         JNZ 0x005775f5
0057746B  33 C0                     XOR EAX,EAX
0057746D  8A 86 30 04 00 00         MOV AL,byte ptr [ESI + 0x430]
00577473  48                        DEC EAX
00577474  0F 84 2A 01 00 00         JZ 0x005775a4
0057747A  48                        DEC EAX
0057747B  0F 85 74 01 00 00         JNZ 0x005775f5
00577481  8B 86 31 04 00 00         MOV EAX,dword ptr [ESI + 0x431]
00577487  85 C0                     TEST EAX,EAX
00577489  0F 84 66 01 00 00         JZ 0x005775f5
0057748F  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00577492  E8 19 DD 16 00            CALL 0x006e51b0
00577497  8B 8E 31 04 00 00         MOV ECX,dword ptr [ESI + 0x431]
0057749D  8B F8                     MOV EDI,EAX
0057749F  33 D2                     XOR EDX,EDX
005774A1  83 C8 FF                  OR EAX,0xffffffff
005774A4  85 C9                     TEST ECX,ECX
005774A6  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005774A9  C7 45 FC 01 01 00 00      MOV dword ptr [EBP + -0x4],0x101
005774B0  0F 84 3F 01 00 00         JZ 0x005775f5
005774B6  53                        PUSH EBX
LAB_005774b7:
005774B7  8B DF                     MOV EBX,EDI
005774B9  2B 59 0B                  SUB EBX,dword ptr [ECX + 0xb]
005774BC  3B 59 07                  CMP EBX,dword ptr [ECX + 0x7]
005774BF  0F 82 A9 00 00 00         JC 0x0057756e
005774C5  8A 59 06                  MOV BL,byte ptr [ECX + 0x6]
005774C8  33 D2                     XOR EDX,EDX
005774CA  3A DA                     CMP BL,DL
005774CC  89 79 0B                  MOV dword ptr [ECX + 0xb],EDI
005774CF  75 06                     JNZ 0x005774d7
005774D1  66 FF 41 0F               INC word ptr [ECX + 0xf]
005774D5  EB 04                     JMP 0x005774db
LAB_005774d7:
005774D7  66 FF 49 0F               DEC word ptr [ECX + 0xf]
LAB_005774db:
005774DB  66 39 51 0F               CMP word ptr [ECX + 0xf],DX
005774DF  7D 18                     JGE 0x005774f9
005774E1  38 51 05                  CMP byte ptr [ECX + 0x5],DL
005774E4  75 09                     JNZ 0x005774ef
005774E6  88 51 06                  MOV byte ptr [ECX + 0x6],DL
005774E9  66 89 51 0F               MOV word ptr [ECX + 0xf],DX
005774ED  EB 0A                     JMP 0x005774f9
LAB_005774ef:
005774EF  66 8B 79 11               MOV DI,word ptr [ECX + 0x11]
005774F3  66 4F                     DEC DI
005774F5  66 89 79 0F               MOV word ptr [ECX + 0xf],DI
LAB_005774f9:
005774F9  66 8B 79 0F               MOV DI,word ptr [ECX + 0xf]
005774FD  66 3B 79 11               CMP DI,word ptr [ECX + 0x11]
00577501  7C 13                     JL 0x00577516
00577503  38 51 05                  CMP byte ptr [ECX + 0x5],DL
00577506  75 0A                     JNZ 0x00577512
00577508  66 8B 51 11               MOV DX,word ptr [ECX + 0x11]
0057750C  C6 41 06 01               MOV byte ptr [ECX + 0x6],0x1
00577510  66 4A                     DEC DX
LAB_00577512:
00577512  66 89 51 0F               MOV word ptr [ECX + 0xf],DX
LAB_00577516:
00577516  33 D2                     XOR EDX,EDX
00577518  8A 51 04                  MOV DL,byte ptr [ECX + 0x4]
0057751B  8B FA                     MOV EDI,EDX
0057751D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00577520  3B D7                     CMP EDX,EDI
00577522  7E 03                     JLE 0x00577527
00577524  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_00577527:
00577527  3B C7                     CMP EAX,EDI
00577529  7D 02                     JGE 0x0057752d
0057752B  8B C7                     MOV EAX,EDI
LAB_0057752d:
0057752D  0F BF 51 0F               MOVSX EDX,word ptr [ECX + 0xf]
00577531  8D 1C 51                  LEA EBX,[ECX + EDX*0x2]
00577534  8A 54 1A 13               MOV DL,byte ptr [EDX + EBX*0x1 + 0x13]
00577538  33 DB                     XOR EBX,EBX
0057753A  88 54 BE 28               MOV byte ptr [ESI + EDI*0x4 + 0x28],DL
0057753E  8A 59 04                  MOV BL,byte ptr [ECX + 0x4]
00577541  0F BF 51 0F               MOVSX EDX,word ptr [ECX + 0xf]
00577545  8D 3C 51                  LEA EDI,[ECX + EDX*0x2]
00577548  8A 54 3A 14               MOV DL,byte ptr [EDX + EDI*0x1 + 0x14]
0057754C  88 54 9E 29               MOV byte ptr [ESI + EBX*0x4 + 0x29],DL
00577550  0F BF 51 0F               MOVSX EDX,word ptr [ECX + 0xf]
00577554  83 C2 07                  ADD EDX,0x7
00577557  33 DB                     XOR EBX,EBX
00577559  8A 59 04                  MOV BL,byte ptr [ECX + 0x4]
0057755C  8D 3C 51                  LEA EDI,[ECX + EDX*0x2]
0057755F  8A 14 3A                  MOV DL,byte ptr [EDX + EDI*0x1]
00577562  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00577565  88 54 9E 2A               MOV byte ptr [ESI + EBX*0x4 + 0x2a],DL
00577569  BA 01 00 00 00            MOV EDX,0x1
LAB_0057756e:
0057756E  8B 09                     MOV ECX,dword ptr [ECX]
00577570  85 C9                     TEST ECX,ECX
00577572  0F 85 3F FF FF FF         JNZ 0x005774b7
00577578  85 D2                     TEST EDX,EDX
0057757A  5B                        POP EBX
0057757B  74 78                     JZ 0x005775f5
0057757D  51                        PUSH ECX
0057757E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00577581  2B C1                     SUB EAX,ECX
00577583  40                        INC EAX
00577584  50                        PUSH EAX
00577585  51                        PUSH ECX
00577586  8D 44 8E 28               LEA EAX,[ESI + ECX*0x4 + 0x28]
0057758A  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00577590  50                        PUSH EAX
00577591  51                        PUSH ECX
00577592  E8 89 94 13 00            CALL 0x006b0a20
00577597  8B CE                     MOV ECX,ESI
00577599  E8 F2 E7 16 00            CALL 0x006e5d90
0057759E  5F                        POP EDI
0057759F  5E                        POP ESI
005775A0  8B E5                     MOV ESP,EBP
005775A2  5D                        POP EBP
005775A3  C3                        RET
LAB_005775a4:
005775A4  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005775A7  8D 56 20                  LEA EDX,[ESI + 0x20]
005775AA  52                        PUSH EDX
005775AB  8D 7E 28                  LEA EDI,[ESI + 0x28]
005775AE  E8 FD DB 16 00            CALL 0x006e51b0
005775B3  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005775B9  50                        PUSH EAX
005775BA  8D 46 24                  LEA EAX,[ESI + 0x24]
005775BD  6A 02                     PUSH 0x2
005775BF  50                        PUSH EAX
005775C0  6A 0A                     PUSH 0xa
005775C2  68 00 01 00 00            PUSH 0x100
005775C7  6A 00                     PUSH 0x0
005775C9  57                        PUSH EDI
005775CA  51                        PUSH ECX
005775CB  E8 70 19 1A 00            CALL 0x00718f40
005775D0  83 C4 24                  ADD ESP,0x24
005775D3  83 F8 FC                  CMP EAX,-0x4
005775D6  75 1D                     JNZ 0x005775f5
005775D8  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005775DE  6A 00                     PUSH 0x0
005775E0  68 00 01 00 00            PUSH 0x100
005775E5  6A 00                     PUSH 0x0
005775E7  57                        PUSH EDI
005775E8  52                        PUSH EDX
005775E9  E8 32 94 13 00            CALL 0x006b0a20
005775EE  C6 86 30 04 00 00 02      MOV byte ptr [ESI + 0x430],0x2
LAB_005775f5:
005775F5  8B CE                     MOV ECX,ESI
005775F7  E8 94 E7 16 00            CALL 0x006e5d90
005775FC  5F                        POP EDI
005775FD  5E                        POP ESI
005775FE  8B E5                     MOV ESP,EBP
00577600  5D                        POP EBP
00577601  C3                        RET
