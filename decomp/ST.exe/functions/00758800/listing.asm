FUN_00758800:
00758800  55                        PUSH EBP
00758801  8B EC                     MOV EBP,ESP
00758803  83 EC 1C                  SUB ESP,0x1c
00758806  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00758809  53                        PUSH EBX
0075880A  56                        PUSH ESI
0075880B  57                        PUSH EDI
0075880C  8B 88 A6 01 00 00         MOV ECX,dword ptr [EAX + 0x1a6]
00758812  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
00758815  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00758818  8B 51 54                  MOV EDX,dword ptr [ECX + 0x54]
0075881B  8B 33                     MOV ESI,dword ptr [EBX]
0075881D  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
00758820  85 D2                     TEST EDX,EDX
00758822  75 1B                     JNZ 0x0075883f
00758824  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075882A  68 1A 01 00 00            PUSH 0x11a
0075882F  68 B0 2D 7F 00            PUSH 0x7f2db0
00758834  52                        PUSH EDX
00758835  6A 3D                     PUSH 0x3d
00758837  E8 04 D6 F4 FF            CALL 0x006a5e40
0075883C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0075883f:
0075883F  85 FF                     TEST EDI,EDI
00758841  75 14                     JNZ 0x00758857
00758843  50                        PUSH EAX
00758844  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758847  85 C0                     TEST EAX,EAX
00758849  0F 84 00 02 00 00         JZ 0x00758a4f
0075884F  8B 33                     MOV ESI,dword ptr [EBX]
00758851  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
00758854  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00758857:
00758857  33 C9                     XOR ECX,ECX
00758859  4F                        DEC EDI
0075885A  8A 2E                     MOV CH,byte ptr [ESI]
0075885C  46                        INC ESI
0075885D  85 FF                     TEST EDI,EDI
0075885F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00758862  75 14                     JNZ 0x00758878
00758864  50                        PUSH EAX
00758865  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758868  85 C0                     TEST EAX,EAX
0075886A  0F 84 DF 01 00 00         JZ 0x00758a4f
00758870  8B 33                     MOV ESI,dword ptr [EBX]
00758872  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
00758875  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00758878:
00758878  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0075887B  33 D2                     XOR EDX,EDX
0075887D  8A 16                     MOV DL,byte ptr [ESI]
0075887F  4F                        DEC EDI
00758880  03 CA                     ADD ECX,EDX
00758882  46                        INC ESI
00758883  85 FF                     TEST EDI,EDI
00758885  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00758888  75 14                     JNZ 0x0075889e
0075888A  50                        PUSH EAX
0075888B  FF 53 0C                  CALL dword ptr [EBX + 0xc]
0075888E  85 C0                     TEST EAX,EAX
00758890  0F 84 B9 01 00 00         JZ 0x00758a4f
00758896  8B 33                     MOV ESI,dword ptr [EBX]
00758898  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
0075889B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0075889e:
0075889E  33 C9                     XOR ECX,ECX
007588A0  4F                        DEC EDI
007588A1  8A 0E                     MOV CL,byte ptr [ESI]
007588A3  46                        INC ESI
007588A4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007588A7  8D 54 09 06               LEA EDX,[ECX + ECX*0x1 + 0x6]
007588AB  39 55 FC                  CMP dword ptr [EBP + -0x4],EDX
007588AE  75 0A                     JNZ 0x007588ba
007588B0  83 F9 01                  CMP ECX,0x1
007588B3  7C 05                     JL 0x007588ba
007588B5  83 F9 04                  CMP ECX,0x4
007588B8  7E 1D                     JLE 0x007588d7
LAB_007588ba:
007588BA  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007588BF  68 21 01 00 00            PUSH 0x121
007588C4  68 B0 2D 7F 00            PUSH 0x7f2db0
007588C9  50                        PUSH EAX
007588CA  6A 09                     PUSH 0x9
007588CC  E8 6F D5 F4 FF            CALL 0x006a5e40
007588D1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007588D4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_007588d7:
007588D7  85 C9                     TEST ECX,ECX
007588D9  89 88 36 01 00 00         MOV dword ptr [EAX + 0x136],ECX
007588DF  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007588E6  0F 8E C1 00 00 00         JLE 0x007589ad
007588EC  8D 88 3A 01 00 00         LEA ECX,[EAX + 0x13a]
007588F2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_007588f5:
007588F5  85 FF                     TEST EDI,EDI
007588F7  75 14                     JNZ 0x0075890d
007588F9  50                        PUSH EAX
007588FA  FF 53 0C                  CALL dword ptr [EBX + 0xc]
007588FD  85 C0                     TEST EAX,EAX
007588FF  0F 84 4A 01 00 00         JZ 0x00758a4f
00758905  8B 33                     MOV ESI,dword ptr [EBX]
00758907  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
0075890A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0075890d:
0075890D  33 D2                     XOR EDX,EDX
0075890F  4F                        DEC EDI
00758910  8A 16                     MOV DL,byte ptr [ESI]
00758912  46                        INC ESI
00758913  85 FF                     TEST EDI,EDI
00758915  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00758918  75 14                     JNZ 0x0075892e
0075891A  50                        PUSH EAX
0075891B  FF 53 0C                  CALL dword ptr [EBX + 0xc]
0075891E  85 C0                     TEST EAX,EAX
00758920  0F 84 29 01 00 00         JZ 0x00758a4f
00758926  8B 33                     MOV ESI,dword ptr [EBX]
00758928  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
0075892B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0075892e:
0075892E  8B 98 D0 00 00 00         MOV EBX,dword ptr [EAX + 0xd0]
00758934  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00758937  33 C9                     XOR ECX,ECX
00758939  4F                        DEC EDI
0075893A  8A 0E                     MOV CL,byte ptr [ESI]
0075893C  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
0075893F  46                        INC ESI
00758940  33 D2                     XOR EDX,EDX
00758942  85 C0                     TEST EAX,EAX
00758944  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00758947  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075894A  7E 12                     JLE 0x0075895e
LAB_0075894c:
0075894C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0075894F  3B 03                     CMP EAX,dword ptr [EBX]
00758951  74 26                     JZ 0x00758979
00758953  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00758956  42                        INC EDX
00758957  83 C3 54                  ADD EBX,0x54
0075895A  3B D0                     CMP EDX,EAX
0075895C  7C EE                     JL 0x0075894c
LAB_0075895e:
0075895E  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00758964  68 33 01 00 00            PUSH 0x133
00758969  68 B0 2D 7F 00            PUSH 0x7f2db0
0075896E  51                        PUSH ECX
0075896F  6A 05                     PUSH 0x5
00758971  E8 CA D4 F4 FF            CALL 0x006a5e40
00758976  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_00758979:
00758979  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0075897C  8B C1                     MOV EAX,ECX
0075897E  C1 F8 04                  SAR EAX,0x4
00758981  83 E0 0F                  AND EAX,0xf
00758984  89 1A                     MOV dword ptr [EDX],EBX
00758986  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
00758989  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075898C  83 E1 0F                  AND ECX,0xf
0075898F  40                        INC EAX
00758990  89 4B 18                  MOV dword ptr [EBX + 0x18],ECX
00758993  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00758996  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00758999  83 C2 04                  ADD EDX,0x4
0075899C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0075899F  3B C1                     CMP EAX,ECX
007589A1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007589A4  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007589A7  0F 8C 48 FF FF FF         JL 0x007588f5
LAB_007589ad:
007589AD  85 FF                     TEST EDI,EDI
007589AF  75 14                     JNZ 0x007589c5
007589B1  50                        PUSH EAX
007589B2  FF 53 0C                  CALL dword ptr [EBX + 0xc]
007589B5  85 C0                     TEST EAX,EAX
007589B7  0F 84 92 00 00 00         JZ 0x00758a4f
007589BD  8B 33                     MOV ESI,dword ptr [EBX]
007589BF  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
007589C2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_007589c5:
007589C5  33 C9                     XOR ECX,ECX
007589C7  4F                        DEC EDI
007589C8  8A 0E                     MOV CL,byte ptr [ESI]
007589CA  46                        INC ESI
007589CB  85 FF                     TEST EDI,EDI
007589CD  89 88 7E 01 00 00         MOV dword ptr [EAX + 0x17e],ECX
007589D3  75 10                     JNZ 0x007589e5
007589D5  50                        PUSH EAX
007589D6  FF 53 0C                  CALL dword ptr [EBX + 0xc]
007589D9  85 C0                     TEST EAX,EAX
007589DB  74 72                     JZ 0x00758a4f
007589DD  8B 33                     MOV ESI,dword ptr [EBX]
007589DF  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
007589E2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_007589e5:
007589E5  33 C9                     XOR ECX,ECX
007589E7  4F                        DEC EDI
007589E8  8A 0E                     MOV CL,byte ptr [ESI]
007589EA  46                        INC ESI
007589EB  85 FF                     TEST EDI,EDI
007589ED  89 88 82 01 00 00         MOV dword ptr [EAX + 0x182],ECX
007589F3  75 10                     JNZ 0x00758a05
007589F5  50                        PUSH EAX
007589F6  FF 53 0C                  CALL dword ptr [EBX + 0xc]
007589F9  85 C0                     TEST EAX,EAX
007589FB  74 52                     JZ 0x00758a4f
007589FD  8B 33                     MOV ESI,dword ptr [EBX]
007589FF  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
00758A02  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00758a05:
00758A05  33 C9                     XOR ECX,ECX
00758A07  8A 0E                     MOV CL,byte ptr [ESI]
00758A09  8B D1                     MOV EDX,ECX
00758A0B  83 E1 0F                  AND ECX,0xf
00758A0E  C1 FA 04                  SAR EDX,0x4
00758A11  89 88 8A 01 00 00         MOV dword ptr [EAX + 0x18a],ECX
00758A17  8B 88 A6 01 00 00         MOV ECX,dword ptr [EAX + 0x1a6]
00758A1D  83 E2 0F                  AND EDX,0xf
00758A20  89 90 86 01 00 00         MOV dword ptr [EAX + 0x186],EDX
00758A26  C7 41 58 00 00 00 00      MOV dword ptr [ECX + 0x58],0x0
00758A2D  8B 88 88 00 00 00         MOV ECX,dword ptr [EAX + 0x88]
00758A33  41                        INC ECX
00758A34  46                        INC ESI
00758A35  4F                        DEC EDI
00758A36  89 88 88 00 00 00         MOV dword ptr [EAX + 0x88],ECX
00758A3C  89 7B 04                  MOV dword ptr [EBX + 0x4],EDI
00758A3F  89 33                     MOV dword ptr [EBX],ESI
00758A41  5F                        POP EDI
00758A42  5E                        POP ESI
00758A43  B8 01 00 00 00            MOV EAX,0x1
00758A48  5B                        POP EBX
00758A49  8B E5                     MOV ESP,EBP
00758A4B  5D                        POP EBP
00758A4C  C2 04 00                  RET 0x4
LAB_00758a4f:
00758A4F  5F                        POP EDI
00758A50  5E                        POP ESI
00758A51  33 C0                     XOR EAX,EAX
00758A53  5B                        POP EBX
00758A54  8B E5                     MOV ESP,EBP
00758A56  5D                        POP EBP
00758A57  C2 04 00                  RET 0x4
