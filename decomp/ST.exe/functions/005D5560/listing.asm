SettMapSTy::GetMessage:
005D5560  55                        PUSH EBP
005D5561  8B EC                     MOV EBP,ESP
005D5563  81 EC 60 01 00 00         SUB ESP,0x160
005D5569  53                        PUSH EBX
005D556A  56                        PUSH ESI
005D556B  8B F1                     MOV ESI,ECX
005D556D  57                        PUSH EDI
005D556E  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
005D5571  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005D5574  E8 37 FC 10 00            CALL 0x006e51b0
005D5579  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005D557C  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D5581  8D 95 40 FF FF FF         LEA EDX,[EBP + 0xffffff40]
005D5587  8D 8D 3C FF FF FF         LEA ECX,[EBP + 0xffffff3c]
005D558D  6A 00                     PUSH 0x0
005D558F  52                        PUSH EDX
005D5590  89 85 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EAX
005D5596  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D559C  E8 4F 82 15 00            CALL 0x0072d7f0
005D55A1  8B F0                     MOV ESI,EAX
005D55A3  83 C4 08                  ADD ESP,0x8
005D55A6  85 F6                     TEST ESI,ESI
005D55A8  0F 85 51 1A 00 00         JNZ 0x005d6fff
005D55AE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005D55B1  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
005D55B4  56                        PUSH ESI
005D55B5  8B CB                     MOV ECX,EBX
005D55B7  E8 C2 DC E2 FF            CALL 0x0040327e
005D55BC  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005D55BF  3D 04 65 00 00            CMP EAX,0x6504
005D55C4  0F 87 2D 02 00 00         JA 0x005d57f7
005D55CA  0F 84 84 01 00 00         JZ 0x005d5754
005D55D0  2D 01 65 00 00            SUB EAX,0x6501
005D55D5  0F 84 D6 00 00 00         JZ 0x005d56b1
005D55DB  48                        DEC EAX
005D55DC  0F 85 1D 0A 00 00         JNZ 0x005d5fff
005D55E2  8B C6                     MOV EAX,ESI
005D55E4  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005D55E7  83 FE FF                  CMP ESI,-0x1
005D55EA  0F 84 0F 0A 00 00         JZ 0x005d5fff
005D55F0  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D55F6  85 C9                     TEST ECX,ECX
005D55F8  0F 84 01 0A 00 00         JZ 0x005d5fff
005D55FE  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005D5604  3B 72 0C                  CMP ESI,dword ptr [EDX + 0xc]
005D5607  73 0B                     JNC 0x005d5614
005D5609  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005D560C  0F AF C6                  IMUL EAX,ESI
005D560F  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005D5612  EB 02                     JMP 0x005d5616
LAB_005d5614:
005D5614  33 C0                     XOR EAX,EAX
LAB_005d5616:
005D5616  8A 90 04 01 00 00         MOV DL,byte ptr [EAX + 0x104]
005D561C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005D561F  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
005D5622  88 55 F7                  MOV byte ptr [EBP + -0x9],DL
005D5625  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
005D5628  3B C6                     CMP EAX,ESI
005D562A  73 0B                     JNC 0x005d5637
005D562C  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
005D562F  0F AF F0                  IMUL ESI,EAX
005D5632  03 71 1C                  ADD ESI,dword ptr [ECX + 0x1c]
005D5635  EB 02                     JMP 0x005d5639
LAB_005d5637:
005D5637  33 F6                     XOR ESI,ESI
LAB_005d5639:
005D5639  85 F6                     TEST ESI,ESI
005D563B  0F 84 BE 09 00 00         JZ 0x005d5fff
005D5641  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
005D5644  3C FF                     CMP AL,0xff
005D5646  74 0E                     JZ 0x005d5656
005D5648  50                        PUSH EAX
005D5649  B9 20 76 80 00            MOV ECX,0x807620
005D564E  E8 14 E9 E2 FF            CALL 0x00403f67
005D5653  8A 55 F7                  MOV DL,byte ptr [EBP + -0x9]
LAB_005d5656:
005D5656  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
005D5659  88 56 02                  MOV byte ptr [ESI + 0x2],DL
005D565C  3C 02                     CMP AL,0x2
005D565E  75 06                     JNZ 0x005d5666
005D5660  88 15 4D 87 80 00         MOV byte ptr [0x0080874d],DL
LAB_005d5666:
005D5666  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D5669  8B 71 18                  MOV ESI,dword ptr [ECX + 0x18]
005D566C  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D5672  46                        INC ESI
005D5673  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D5676  3B F0                     CMP ESI,EAX
005D5678  7D 2B                     JGE 0x005d56a5
LAB_005d567a:
005D567A  73 0D                     JNC 0x005d5689
005D567C  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D567F  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
005D5682  0F AF C6                  IMUL EAX,ESI
005D5685  03 C7                     ADD EAX,EDI
005D5687  EB 02                     JMP 0x005d568b
LAB_005d5689:
005D5689  33 C0                     XOR EAX,EAX
LAB_005d568b:
005D568B  85 C0                     TEST EAX,EAX
005D568D  74 16                     JZ 0x005d56a5
005D568F  80 38 00                  CMP byte ptr [EAX],0x0
005D5692  75 11                     JNZ 0x005d56a5
005D5694  88 50 02                  MOV byte ptr [EAX + 0x2],DL
005D5697  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D569D  46                        INC ESI
005D569E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D56A1  3B F0                     CMP ESI,EAX
005D56A3  7C D5                     JL 0x005d567a
LAB_005d56a5:
005D56A5  8B 13                     MOV EDX,dword ptr [EBX]
005D56A7  8B CB                     MOV ECX,EBX
005D56A9  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005D56AC  E9 47 09 00 00            JMP 0x005d5ff8
LAB_005d56b1:
005D56B1  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005D56B4  83 FE FF                  CMP ESI,-0x1
005D56B7  0F 84 42 09 00 00         JZ 0x005d5fff
005D56BD  8B BB 84 1F 00 00         MOV EDI,dword ptr [EBX + 0x1f84]
005D56C3  85 FF                     TEST EDI,EDI
005D56C5  0F 84 34 09 00 00         JZ 0x005d5fff
005D56CB  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D56D1  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
005D56D4  73 0D                     JNC 0x005d56e3
005D56D6  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D56D9  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005D56DC  0F AF C6                  IMUL EAX,ESI
005D56DF  03 C2                     ADD EAX,EDX
005D56E1  EB 02                     JMP 0x005d56e5
LAB_005d56e3:
005D56E3  33 C0                     XOR EAX,EAX
LAB_005d56e5:
005D56E5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005D56E8  8A 90 04 01 00 00         MOV DL,byte ptr [EAX + 0x104]
005D56EE  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D56F1  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005D56F4  3B C8                     CMP ECX,EAX
005D56F6  73 0B                     JNC 0x005d5703
005D56F8  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005D56FB  0F AF C1                  IMUL EAX,ECX
005D56FE  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
005D5701  EB 02                     JMP 0x005d5705
LAB_005d5703:
005D5703  33 C0                     XOR EAX,EAX
LAB_005d5705:
005D5705  85 C0                     TEST EAX,EAX
005D5707  74 03                     JZ 0x005d570c
005D5709  88 50 4A                  MOV byte ptr [EAX + 0x4a],DL
LAB_005d570c:
005D570C  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D5712  8B 76 18                  MOV ESI,dword ptr [ESI + 0x18]
005D5715  46                        INC ESI
005D5716  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D5719  3B F0                     CMP ESI,EAX
005D571B  7D 2B                     JGE 0x005d5748
LAB_005d571d:
005D571D  73 0D                     JNC 0x005d572c
005D571F  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D5722  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
005D5725  0F AF C6                  IMUL EAX,ESI
005D5728  03 C7                     ADD EAX,EDI
005D572A  EB 02                     JMP 0x005d572e
LAB_005d572c:
005D572C  33 C0                     XOR EAX,EAX
LAB_005d572e:
005D572E  85 C0                     TEST EAX,EAX
005D5730  74 16                     JZ 0x005d5748
005D5732  80 38 00                  CMP byte ptr [EAX],0x0
005D5735  75 11                     JNZ 0x005d5748
005D5737  88 50 4A                  MOV byte ptr [EAX + 0x4a],DL
005D573A  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D5740  46                        INC ESI
005D5741  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D5744  3B F0                     CMP ESI,EAX
005D5746  7C D5                     JL 0x005d571d
LAB_005d5748:
005D5748  8B 03                     MOV EAX,dword ptr [EBX]
005D574A  8B CB                     MOV ECX,EBX
005D574C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005D574F  E9 AB 08 00 00            JMP 0x005d5fff
LAB_005d5754:
005D5754  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005D5757  83 FE FF                  CMP ESI,-0x1
005D575A  0F 84 9F 08 00 00         JZ 0x005d5fff
005D5760  8B BB 84 1F 00 00         MOV EDI,dword ptr [EBX + 0x1f84]
005D5766  85 FF                     TEST EDI,EDI
005D5768  0F 84 91 08 00 00         JZ 0x005d5fff
005D576E  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D5774  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
005D5777  73 0D                     JNC 0x005d5786
005D5779  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D577C  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005D577F  0F AF C6                  IMUL EAX,ESI
005D5782  03 C2                     ADD EAX,EDX
005D5784  EB 02                     JMP 0x005d5788
LAB_005d5786:
005D5786  33 C0                     XOR EAX,EAX
LAB_005d5788:
005D5788  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005D578B  8A 90 04 01 00 00         MOV DL,byte ptr [EAX + 0x104]
005D5791  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D5794  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005D5797  3B C8                     CMP ECX,EAX
005D5799  73 0B                     JNC 0x005d57a6
005D579B  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005D579E  0F AF C1                  IMUL EAX,ECX
005D57A1  03 47 1C                  ADD EAX,dword ptr [EDI + 0x1c]
005D57A4  EB 02                     JMP 0x005d57a8
LAB_005d57a6:
005D57A6  33 C0                     XOR EAX,EAX
LAB_005d57a8:
005D57A8  85 C0                     TEST EAX,EAX
005D57AA  74 03                     JZ 0x005d57af
005D57AC  88 50 03                  MOV byte ptr [EAX + 0x3],DL
LAB_005d57af:
005D57AF  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D57B5  8B 76 18                  MOV ESI,dword ptr [ESI + 0x18]
005D57B8  46                        INC ESI
005D57B9  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D57BC  3B F0                     CMP ESI,EAX
005D57BE  7D 2B                     JGE 0x005d57eb
LAB_005d57c0:
005D57C0  73 0D                     JNC 0x005d57cf
005D57C2  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D57C5  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
005D57C8  0F AF C6                  IMUL EAX,ESI
005D57CB  03 C7                     ADD EAX,EDI
005D57CD  EB 02                     JMP 0x005d57d1
LAB_005d57cf:
005D57CF  33 C0                     XOR EAX,EAX
LAB_005d57d1:
005D57D1  85 C0                     TEST EAX,EAX
005D57D3  74 16                     JZ 0x005d57eb
005D57D5  80 38 00                  CMP byte ptr [EAX],0x0
005D57D8  75 11                     JNZ 0x005d57eb
005D57DA  88 50 03                  MOV byte ptr [EAX + 0x3],DL
005D57DD  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D57E3  46                        INC ESI
005D57E4  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D57E7  3B F0                     CMP ESI,EAX
005D57E9  7C D5                     JL 0x005d57c0
LAB_005d57eb:
005D57EB  8B 13                     MOV EDX,dword ptr [EBX]
005D57ED  8B CB                     MOV ECX,EBX
005D57EF  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005D57F2  E9 08 08 00 00            JMP 0x005d5fff
LAB_005d57f7:
005D57F7  3D 05 65 00 00            CMP EAX,0x6505
005D57FC  0F 84 AD 06 00 00         JZ 0x005d5eaf
005D5802  3D 4A 69 00 00            CMP EAX,0x694a
005D5807  0F 85 F2 07 00 00         JNZ 0x005d5fff
005D580D  B8 01 01 01 01            MOV EAX,0x1010101
005D5812  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005D5815  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
005D5818  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D581E  85 C0                     TEST EAX,EAX
005D5820  0F 84 D9 07 00 00         JZ 0x005d5fff
005D5826  B9 A2 00 00 00            MOV ECX,0xa2
005D582B  33 C0                     XOR EAX,EAX
005D582D  BF C7 87 80 00            MOV EDI,0x8087c7
005D5832  C6 05 A9 8A 80 00 01      MOV byte ptr [0x00808aa9],0x1
005D5839  C6 05 C6 87 80 00 00      MOV byte ptr [0x008087c6],0x0
005D5840  C6 05 4F 87 80 00 00      MOV byte ptr [0x0080874f],0x0
005D5847  F3 AB                     STOSD.REP ES:EDI
005D5849  B8 E9 87 80 00            MOV EAX,0x8087e9
LAB_005d584e:
005D584E  C6 40 FF 00               MOV byte ptr [EAX + -0x1],0x0
005D5852  C6 00 FF                  MOV byte ptr [EAX],0xff
005D5855  83 C0 51                  ADD EAX,0x51
005D5858  3D 71 8A 80 00            CMP EAX,0x808a71
005D585D  7C EF                     JL 0x005d584e
005D585F  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D5865  33 F6                     XOR ESI,ESI
005D5867  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005D586A  85 D2                     TEST EDX,EDX
005D586C  7E 32                     JLE 0x005d58a0
005D586E  3B F2                     CMP ESI,EDX
LAB_005d5870:
005D5870  73 0D                     JNC 0x005d587f
005D5872  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D5875  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
005D5878  0F AF C6                  IMUL EAX,ESI
005D587B  03 C7                     ADD EAX,EDI
005D587D  EB 02                     JMP 0x005d5881
LAB_005d587f:
005D587F  33 C0                     XOR EAX,EAX
LAB_005d5881:
005D5881  85 C0                     TEST EAX,EAX
005D5883  74 16                     JZ 0x005d589b
005D5885  80 38 00                  CMP byte ptr [EAX],0x0
005D5888  74 11                     JZ 0x005d589b
005D588A  8A 40 02                  MOV AL,byte ptr [EAX + 0x2]
005D588D  3C FF                     CMP AL,0xff
005D588F  74 0A                     JZ 0x005d589b
005D5891  25 FF 00 00 00            AND EAX,0xff
005D5896  C6 44 05 D4 00            MOV byte ptr [EBP + EAX*0x1 + -0x2c],0x0
LAB_005d589b:
005D589B  46                        INC ESI
005D589C  3B F2                     CMP ESI,EDX
005D589E  7C D0                     JL 0x005d5870
LAB_005d58a0:
005D58A0  33 F6                     XOR ESI,ESI
005D58A2  85 D2                     TEST EDX,EDX
005D58A4  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005D58A7  0F 8E 0E 02 00 00         JLE 0x005d5abb
005D58AD  3B F2                     CMP ESI,EDX
LAB_005d58af:
005D58AF  73 0D                     JNC 0x005d58be
005D58B1  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005D58B4  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005D58B7  0F AF D6                  IMUL EDX,ESI
005D58BA  03 D0                     ADD EDX,EAX
005D58BC  EB 02                     JMP 0x005d58c0
LAB_005d58be:
005D58BE  33 D2                     XOR EDX,EDX
LAB_005d58c0:
005D58C0  85 D2                     TEST EDX,EDX
005D58C2  0F 84 DE 01 00 00         JZ 0x005d5aa6
005D58C8  80 3A 00                  CMP byte ptr [EDX],0x0
005D58CB  0F 84 D5 01 00 00         JZ 0x005d5aa6
005D58D1  8A 42 04                  MOV AL,byte ptr [EDX + 0x4]
005D58D4  84 C0                     TEST AL,AL
005D58D6  0F 84 CA 01 00 00         JZ 0x005d5aa6
005D58DC  3C 01                     CMP AL,0x1
005D58DE  75 0D                     JNZ 0x005d58ed
005D58E0  80 BB 26 1E 00 00 02      CMP byte ptr [EBX + 0x1e26],0x2
005D58E7  0F 85 B9 01 00 00         JNZ 0x005d5aa6
LAB_005d58ed:
005D58ED  8B 72 50                  MOV ESI,dword ptr [EDX + 0x50]
005D58F0  33 C9                     XOR ECX,ECX
005D58F2  8A 4A 05                  MOV CL,byte ptr [EDX + 0x5]
005D58F5  3B 4E 0C                  CMP ECX,dword ptr [ESI + 0xc]
005D58F8  73 0E                     JNC 0x005d5908
005D58FA  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D58FD  0F AF C1                  IMUL EAX,ECX
005D5900  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
005D5903  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005D5906  EB 07                     JMP 0x005d590f
LAB_005d5908:
005D5908  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_005d590f:
005D590F  8A 0D C6 87 80 00         MOV CL,byte ptr [0x008087c6]
005D5915  FE C1                     INC CL
005D5917  88 0D C6 87 80 00         MOV byte ptr [0x008087c6],CL
005D591D  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D5920  3C FF                     CMP AL,0xff
005D5922  75 1A                     JNZ 0x005d593e
005D5924  33 C0                     XOR EAX,EAX
LAB_005d5926:
005D5926  8A 4C 05 D4               MOV CL,byte ptr [EBP + EAX*0x1 + -0x2c]
005D592A  84 C9                     TEST CL,CL
005D592C  75 08                     JNZ 0x005d5936
005D592E  40                        INC EAX
005D592F  83 F8 08                  CMP EAX,0x8
005D5932  7C F2                     JL 0x005d5926
005D5934  EB 08                     JMP 0x005d593e
LAB_005d5936:
005D5936  88 42 02                  MOV byte ptr [EDX + 0x2],AL
005D5939  C6 44 05 D4 00            MOV byte ptr [EBP + EAX*0x1 + -0x2c],0x0
LAB_005d593e:
005D593E  8A 4A 02                  MOV CL,byte ptr [EDX + 0x2]
005D5941  BF A0 16 80 00            MOV EDI,0x8016a0
005D5946  8B C1                     MOV EAX,ECX
005D5948  25 FF 00 00 00            AND EAX,0xff
005D594D  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D5950  88 8C C0 E9 87 80 00      MOV byte ptr [EAX + EAX*0x8 + 0x8087e9],CL
005D5957  8A 4A 03                  MOV CL,byte ptr [EDX + 0x3]
005D595A  33 C0                     XOR EAX,EAX
005D595C  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D595F  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
005D5962  33 C0                     XOR EAX,EAX
005D5964  88 8C F6 E8 87 80 00      MOV byte ptr [ESI + ESI*0x8 + 0x8087e8],CL
005D596B  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D596E  83 C9 FF                  OR ECX,0xffffffff
005D5971  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D5974  8D B4 C0 C8 87 80 00      LEA ESI,[EAX + EAX*0x8 + 0x8087c8]
005D597B  33 C0                     XOR EAX,EAX
005D597D  F2 AE                     SCASB.REPNE ES:EDI
005D597F  F7 D1                     NOT ECX
005D5981  2B F9                     SUB EDI,ECX
005D5983  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005D5986  8B C1                     MOV EAX,ECX
005D5988  8B F7                     MOV ESI,EDI
005D598A  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005D598D  C1 E9 02                  SHR ECX,0x2
005D5990  F3 A5                     MOVSD.REP ES:EDI,ESI
005D5992  8B C8                     MOV ECX,EAX
005D5994  33 C0                     XOR EAX,EAX
005D5996  83 E1 03                  AND ECX,0x3
005D5999  F3 A4                     MOVSB.REP ES:EDI,ESI
005D599B  8A 42 04                  MOV AL,byte ptr [EDX + 0x4]
005D599E  83 E8 02                  SUB EAX,0x2
005D59A1  0F 84 8E 00 00 00         JZ 0x005d5a35
005D59A7  83 E8 02                  SUB EAX,0x2
005D59AA  0F 85 AB 00 00 00         JNZ 0x005d5a5b
005D59B0  33 C0                     XOR EAX,EAX
005D59B2  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D59B5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D59B8  C6 84 C0 C7 87 80 00 01   MOV byte ptr [EAX + EAX*0x8 + 0x8087c7],0x1
005D59C0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D59C3  85 C0                     TEST EAX,EAX
005D59C5  74 37                     JZ 0x005d59fe
005D59C7  8B C8                     MOV ECX,EAX
005D59C9  33 C0                     XOR EAX,EAX
005D59CB  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D59CE  8D 79 4C                  LEA EDI,[ECX + 0x4c]
005D59D1  83 C9 FF                  OR ECX,0xffffffff
005D59D4  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D59D7  8D B4 C0 C8 87 80 00      LEA ESI,[EAX + EAX*0x8 + 0x8087c8]
005D59DE  33 C0                     XOR EAX,EAX
005D59E0  F2 AE                     SCASB.REPNE ES:EDI
005D59E2  F7 D1                     NOT ECX
005D59E4  2B F9                     SUB EDI,ECX
005D59E6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005D59E9  8B C1                     MOV EAX,ECX
005D59EB  8B F7                     MOV ESI,EDI
005D59ED  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005D59F0  C1 E9 02                  SHR ECX,0x2
005D59F3  F3 A5                     MOVSD.REP ES:EDI,ESI
005D59F5  8B C8                     MOV ECX,EAX
005D59F7  83 E1 03                  AND ECX,0x3
005D59FA  F3 A4                     MOVSB.REP ES:EDI,ESI
005D59FC  EB 5D                     JMP 0x005d5a5b
LAB_005d59fe:
005D59FE  33 C0                     XOR EAX,EAX
005D5A00  BF A0 16 80 00            MOV EDI,0x8016a0
005D5A05  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D5A08  83 C9 FF                  OR ECX,0xffffffff
005D5A0B  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D5A0E  8D B4 C0 C8 87 80 00      LEA ESI,[EAX + EAX*0x8 + 0x8087c8]
005D5A15  33 C0                     XOR EAX,EAX
005D5A17  F2 AE                     SCASB.REPNE ES:EDI
005D5A19  F7 D1                     NOT ECX
005D5A1B  2B F9                     SUB EDI,ECX
005D5A1D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005D5A20  8B C1                     MOV EAX,ECX
005D5A22  8B F7                     MOV ESI,EDI
005D5A24  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005D5A27  C1 E9 02                  SHR ECX,0x2
005D5A2A  F3 A5                     MOVSD.REP ES:EDI,ESI
005D5A2C  8B C8                     MOV ECX,EAX
005D5A2E  83 E1 03                  AND ECX,0x3
005D5A31  F3 A4                     MOVSB.REP ES:EDI,ESI
005D5A33  EB 26                     JMP 0x005d5a5b
LAB_005d5a35:
005D5A35  80 3A 00                  CMP byte ptr [EDX],0x0
005D5A38  74 21                     JZ 0x005d5a5b
005D5A3A  33 C0                     XOR EAX,EAX
005D5A3C  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D5A3F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D5A42  C6 84 C0 C7 87 80 00 00   MOV byte ptr [EAX + EAX*0x8 + 0x8087c7],0x0
005D5A4A  8A 4A 02                  MOV CL,byte ptr [EDX + 0x2]
005D5A4D  88 0D 4D 87 80 00         MOV byte ptr [0x0080874d],CL
005D5A53  8A 42 03                  MOV AL,byte ptr [EDX + 0x3]
005D5A56  A2 4E 87 80 00            MOV [0x0080874e],AL
LAB_005d5a5b:
005D5A5B  8A 4A 4A                  MOV CL,byte ptr [EDX + 0x4a]
005D5A5E  33 C0                     XOR EAX,EAX
005D5A60  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D5A63  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
005D5A66  33 C0                     XOR EAX,EAX
005D5A68  88 8C F6 EA 87 80 00      MOV byte ptr [ESI + ESI*0x8 + 0x8087ea],CL
005D5A6F  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D5A72  8B 4A 54                  MOV ECX,dword ptr [EDX + 0x54]
005D5A75  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005D5A78  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D5A7B  89 8C C0 EB 87 80 00      MOV dword ptr [EAX + EAX*0x8 + 0x8087eb],ECX
005D5A82  8B 4A 58                  MOV ECX,dword ptr [EDX + 0x58]
005D5A85  33 C0                     XOR EAX,EAX
005D5A87  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D5A8A  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D5A8D  89 8C C0 EF 87 80 00      MOV dword ptr [EAX + EAX*0x8 + 0x8087ef],ECX
005D5A94  33 C0                     XOR EAX,EAX
005D5A96  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D5A99  8B 52 5C                  MOV EDX,dword ptr [EDX + 0x5c]
005D5A9C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D5A9F  89 94 C0 F3 87 80 00      MOV dword ptr [EAX + EAX*0x8 + 0x8087f3],EDX
LAB_005d5aa6:
005D5AA6  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D5AAC  46                        INC ESI
005D5AAD  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005D5AB0  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005D5AB3  3B F2                     CMP ESI,EDX
005D5AB5  0F 8C F4 FD FF FF         JL 0x005d58af
LAB_005d5abb:
005D5ABB  B9 20 76 80 00            MOV ECX,0x807620
005D5AC0  E8 56 FE E2 FF            CALL 0x0040591b
005D5AC5  B9 A8 03 00 00            MOV ECX,0x3a8
005D5ACA  33 C0                     XOR EAX,EAX
005D5ACC  BF B0 8A 80 00            MOV EDI,0x808ab0
005D5AD1  33 F6                     XOR ESI,ESI
005D5AD3  F3 AB                     STOSD.REP ES:EDI
005D5AD5  A2 AF 8A 80 00            MOV [0x00808aaf],AL
005D5ADA  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D5AE0  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005D5AE3  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D5AE6  85 C9                     TEST ECX,ECX
005D5AE8  0F 8E 65 01 00 00         JLE 0x005d5c53
005D5AEE  3B F1                     CMP ESI,ECX
LAB_005d5af0:
005D5AF0  73 0D                     JNC 0x005d5aff
005D5AF2  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005D5AF5  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005D5AF8  0F AF D6                  IMUL EDX,ESI
005D5AFB  03 D1                     ADD EDX,ECX
005D5AFD  EB 02                     JMP 0x005d5b01
LAB_005d5aff:
005D5AFF  33 D2                     XOR EDX,EDX
LAB_005d5b01:
005D5B01  85 D2                     TEST EDX,EDX
005D5B03  0F 84 35 01 00 00         JZ 0x005d5c3e
005D5B09  8A 4A 04                  MOV CL,byte ptr [EDX + 0x4]
005D5B0C  80 F9 01                  CMP CL,0x1
005D5B0F  88 4D F7                  MOV byte ptr [EBP + -0x9],CL
005D5B12  0F 84 26 01 00 00         JZ 0x005d5c3e
005D5B18  84 C9                     TEST CL,CL
005D5B1A  0F 84 1E 01 00 00         JZ 0x005d5c3e
005D5B20  80 F9 04                  CMP CL,0x4
005D5B23  74 20                     JZ 0x005d5b45
005D5B25  8D 7A 0A                  LEA EDI,[EDX + 0xa]
005D5B28  83 C9 FF                  OR ECX,0xffffffff
005D5B2B  33 C0                     XOR EAX,EAX
005D5B2D  8D B5 A0 FE FF FF         LEA ESI,[EBP + 0xfffffea0]
005D5B33  F2 AE                     SCASB.REPNE ES:EDI
005D5B35  F7 D1                     NOT ECX
005D5B37  2B F9                     SUB EDI,ECX
005D5B39  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005D5B3C  8B F7                     MOV ESI,EDI
005D5B3E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005D5B41  8B C1                     MOV EAX,ECX
005D5B43  EB 39                     JMP 0x005d5b7e
LAB_005d5b45:
005D5B45  8B 72 50                  MOV ESI,dword ptr [EDX + 0x50]
005D5B48  33 C0                     XOR EAX,EAX
005D5B4A  8A 42 05                  MOV AL,byte ptr [EDX + 0x5]
005D5B4D  3B 46 0C                  CMP EAX,dword ptr [ESI + 0xc]
005D5B50  73 0B                     JNC 0x005d5b5d
005D5B52  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
005D5B55  0F AF F8                  IMUL EDI,EAX
005D5B58  03 7E 1C                  ADD EDI,dword ptr [ESI + 0x1c]
005D5B5B  EB 02                     JMP 0x005d5b5f
LAB_005d5b5d:
005D5B5D  33 FF                     XOR EDI,EDI
LAB_005d5b5f:
005D5B5F  85 FF                     TEST EDI,EDI
005D5B61  74 2A                     JZ 0x005d5b8d
005D5B63  83 C9 FF                  OR ECX,0xffffffff
005D5B66  33 C0                     XOR EAX,EAX
005D5B68  F2 AE                     SCASB.REPNE ES:EDI
005D5B6A  F7 D1                     NOT ECX
005D5B6C  8D B5 A0 FE FF FF         LEA ESI,[EBP + 0xfffffea0]
005D5B72  2B F9                     SUB EDI,ECX
005D5B74  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005D5B77  8B F7                     MOV ESI,EDI
005D5B79  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005D5B7C  8B C1                     MOV EAX,ECX
LAB_005d5b7e:
005D5B7E  C1 E9 02                  SHR ECX,0x2
005D5B81  F3 A5                     MOVSD.REP ES:EDI,ESI
005D5B83  8B C8                     MOV ECX,EAX
005D5B85  83 E1 03                  AND ECX,0x3
005D5B88  F3 A4                     MOVSB.REP ES:EDI,ESI
005D5B8A  8A 4D F7                  MOV CL,byte ptr [EBP + -0x9]
LAB_005d5b8d:
005D5B8D  8B 42 06                  MOV EAX,dword ptr [EDX + 0x6]
005D5B90  80 F9 02                  CMP CL,0x2
005D5B93  89 85 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EAX
005D5B99  8A 42 02                  MOV AL,byte ptr [EDX + 0x2]
005D5B9C  8A 12                     MOV DL,byte ptr [EDX]
005D5B9E  88 85 E4 FE FF FF         MOV byte ptr [EBP + 0xfffffee4],AL
005D5BA4  8B 43 61                  MOV EAX,dword ptr [EBX + 0x61]
005D5BA7  88 95 E5 FE FF FF         MOV byte ptr [EBP + 0xfffffee5],DL
005D5BAD  C6 85 E7 FE FF FF 01      MOV byte ptr [EBP + 0xfffffee7],0x1
005D5BB4  89 85 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EAX
005D5BBA  75 09                     JNZ 0x005d5bc5
005D5BBC  C6 85 E6 FE FF FF 01      MOV byte ptr [EBP + 0xfffffee6],0x1
005D5BC3  EB 10                     JMP 0x005d5bd5
LAB_005d5bc5:
005D5BC5  80 F9 03                  CMP CL,0x3
005D5BC8  0F 95 C1                  SETNZ CL
005D5BCB  49                        DEC ECX
005D5BCC  83 E1 02                  AND ECX,0x2
005D5BCF  88 8D E6 FE FF FF         MOV byte ptr [EBP + 0xfffffee6],CL
LAB_005d5bd5:
005D5BD5  33 C0                     XOR EAX,EAX
005D5BD7  B9 27 00 00 00            MOV ECX,0x27
005D5BDC  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005D5BE1  8D B5 A0 FE FF FF         LEA ESI,[EBP + 0xfffffea0]
005D5BE7  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005D5BEA  C1 E2 03                  SHL EDX,0x3
005D5BED  2B D0                     SUB EDX,EAX
005D5BEF  8A 85 E4 FE FF FF         MOV AL,byte ptr [EBP + 0xfffffee4]
005D5BF5  3C 08                     CMP AL,0x8
005D5BF7  8D 3C 95 B0 8A 80 00      LEA EDI,[EDX*0x4 + 0x808ab0]
005D5BFE  F3 A5                     MOVSD.REP ES:EDI,ESI
005D5C00  73 2D                     JNC 0x005d5c2f
005D5C02  8B 85 E4 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee4]
005D5C08  33 C9                     XOR ECX,ECX
005D5C0A  25 FF 00 00 00            AND EAX,0xff
005D5C0F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005D5C12  8D B4 C0 00 88 80 00      LEA ESI,[EAX + EAX*0x8 + 0x808800]
LAB_005d5c19:
005D5C19  80 3C 0E 00               CMP byte ptr [ESI + ECX*0x1],0x0
005D5C1D  74 08                     JZ 0x005d5c27
005D5C1F  41                        INC ECX
005D5C20  83 F9 18                  CMP ECX,0x18
005D5C23  7C F4                     JL 0x005d5c19
005D5C25  EB 08                     JMP 0x005d5c2f
LAB_005d5c27:
005D5C27  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005D5C2C  88 04 0E                  MOV byte ptr [ESI + ECX*0x1],AL
LAB_005d5c2f:
005D5C2F  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005D5C34  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005D5C37  FE C0                     INC AL
005D5C39  A2 AF 8A 80 00            MOV [0x00808aaf],AL
LAB_005d5c3e:
005D5C3E  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D5C44  46                        INC ESI
005D5C45  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005D5C48  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D5C4B  3B F1                     CMP ESI,ECX
005D5C4D  0F 8C 9D FE FF FF         JL 0x005d5af0
LAB_005d5c53:
005D5C53  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D5C59  3C 06                     CMP AL,0x6
005D5C5B  0F 84 C2 00 00 00         JZ 0x005d5d23
005D5C61  A2 A0 87 80 00            MOV [0x008087a0],AL
005D5C66  BF 16 ED 80 00            MOV EDI,0x80ed16
005D5C6B  83 C9 FF                  OR ECX,0xffffffff
005D5C6E  33 C0                     XOR EAX,EAX
005D5C70  C6 05 83 87 80 00 02      MOV byte ptr [0x00808783],0x2
005D5C77  6A 00                     PUSH 0x0
005D5C79  F2 AE                     SCASB.REPNE ES:EDI
005D5C7B  F7 D1                     NOT ECX
005D5C7D  2B F9                     SUB EDI,ECX
005D5C7F  6A 00                     PUSH 0x0
005D5C81  8B D1                     MOV EDX,ECX
005D5C83  8B F7                     MOV ESI,EDI
005D5C85  BF 1A EE 80 00            MOV EDI,0x80ee1a
005D5C8A  68 48 69 00 00            PUSH 0x6948
005D5C8F  C1 E9 02                  SHR ECX,0x2
005D5C92  F3 A5                     MOVSD.REP ES:EDI,ESI
005D5C94  8B CA                     MOV ECX,EDX
005D5C96  83 E1 03                  AND ECX,0x3
005D5C99  F3 A4                     MOVSB.REP ES:EDI,ESI
005D5C9B  BF 80 76 80 00            MOV EDI,0x807680
005D5CA0  83 C9 FF                  OR ECX,0xffffffff
005D5CA3  F2 AE                     SCASB.REPNE ES:EDI
005D5CA5  F7 D1                     NOT ECX
005D5CA7  49                        DEC ECX
005D5CA8  8B F9                     MOV EDI,ECX
005D5CAA  83 C9 FF                  OR ECX,0xffffffff
005D5CAD  81 C7 16 ED 80 00         ADD EDI,0x80ed16
005D5CB3  F2 AE                     SCASB.REPNE ES:EDI
005D5CB5  F7 D1                     NOT ECX
005D5CB7  2B F9                     SUB EDI,ECX
005D5CB9  8B C1                     MOV EAX,ECX
005D5CBB  8B F7                     MOV ESI,EDI
005D5CBD  BF 1E EF 80 00            MOV EDI,0x80ef1e
005D5CC2  C1 E9 02                  SHR ECX,0x2
005D5CC5  F3 A5                     MOVSD.REP ES:EDI,ESI
005D5CC7  8B C8                     MOV ECX,EAX
005D5CC9  83 E1 03                  AND ECX,0x3
005D5CCC  F3 A4                     MOVSB.REP ES:EDI,ESI
005D5CCE  8B CB                     MOV ECX,EBX
005D5CD0  E8 EB D9 E2 FF            CALL 0x004036c0
005D5CD5  8B 13                     MOV EDX,dword ptr [EBX]
005D5CD7  8B CB                     MOV ECX,EBX
005D5CD9  C6 83 E5 21 00 00 01      MOV byte ptr [EBX + 0x21e5],0x1
005D5CE0  C6 83 E4 21 00 00 01      MOV byte ptr [EBX + 0x21e4],0x1
005D5CE7  C6 83 E7 21 00 00 01      MOV byte ptr [EBX + 0x21e7],0x1
005D5CEE  C6 83 E2 21 00 00 01      MOV byte ptr [EBX + 0x21e2],0x1
005D5CF5  C6 83 E1 21 00 00 01      MOV byte ptr [EBX + 0x21e1],0x1
005D5CFC  FF 52 08                  CALL dword ptr [EDX + 0x8]
005D5CFF  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005D5D05  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005D5D0B  85 C9                     TEST ECX,ECX
005D5D0D  0F 84 EC 02 00 00         JZ 0x005d5fff
005D5D13  6A 01                     PUSH 0x1
005D5D15  6A 00                     PUSH 0x0
005D5D17  6A 01                     PUSH 0x1
005D5D19  E8 87 C2 E2 FF            CALL 0x00401fa5
005D5D1E  E9 DC 02 00 00            JMP 0x005d5fff
LAB_005d5d23:
005D5D23  8B 83 47 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f47]
005D5D29  85 C0                     TEST EAX,EAX
005D5D2B  0F 85 95 00 00 00         JNZ 0x005d5dc6
005D5D31  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D5D34  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
005D5D37  85 C0                     TEST EAX,EAX
005D5D39  0F 85 87 00 00 00         JNZ 0x005d5dc6
005D5D3F  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005D5D45  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005D5D4B  85 C0                     TEST EAX,EAX
005D5D4D  0F 84 AC 02 00 00         JZ 0x005d5fff
005D5D53  B9 08 00 00 00            MOV ECX,0x8
005D5D58  33 C0                     XOR EAX,EAX
005D5D5A  8D 7D A0                  LEA EDI,[EBP + -0x60]
005D5D5D  6A 00                     PUSH 0x0
005D5D5F  F3 AB                     STOSD.REP ES:EDI
005D5D61  B9 08 00 00 00            MOV ECX,0x8
005D5D66  8D 7D 80                  LEA EDI,[EBP + -0x80]
005D5D69  F3 AB                     STOSD.REP ES:EDI
005D5D6B  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005D5D6E  B9 02 00 00 00            MOV ECX,0x2
005D5D73  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
005D5D76  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
005D5D79  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
005D5D7C  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
005D5D7F  6A 00                     PUSH 0x0
005D5D81  8D 45 80                  LEA EAX,[EBP + -0x80]
005D5D84  6A 00                     PUSH 0x0
005D5D86  8D 4D A0                  LEA ECX,[EBP + -0x60]
005D5D89  50                        PUSH EAX
005D5D8A  51                        PUSH ECX
005D5D8B  C7 45 B0 4A 69 00 00      MOV dword ptr [EBP + -0x50],0x694a
005D5D92  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
005D5D99  C7 45 90 3F 69 00 00      MOV dword ptr [EBP + -0x70],0x693f
005D5DA0  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005D5DA6  6A 01                     PUSH 0x1
005D5DA8  68 1F 25 00 00            PUSH 0x251f
005D5DAD  E8 F6 E1 E2 FF            CALL 0x00403fa8
005D5DB2  85 C0                     TEST EAX,EAX
005D5DB4  0F 84 45 02 00 00         JZ 0x005d5fff
005D5DBA  8B 13                     MOV EDX,dword ptr [EBX]
005D5DBC  8B CB                     MOV ECX,EBX
005D5DBE  FF 52 24                  CALL dword ptr [EDX + 0x24]
005D5DC1  E9 39 02 00 00            JMP 0x005d5fff
LAB_005d5dc6:
005D5DC6  83 C9 FF                  OR ECX,0xffffffff
005D5DC9  BF E4 3D 85 00            MOV EDI,0x853de4
005D5DCE  33 C0                     XOR EAX,EAX
005D5DD0  C6 05 A0 87 80 00 06      MOV byte ptr [0x008087a0],0x6
005D5DD7  F2 AE                     SCASB.REPNE ES:EDI
005D5DD9  F7 D1                     NOT ECX
005D5DDB  2B F9                     SUB EDI,ECX
005D5DDD  C6 05 83 87 80 00 02      MOV byte ptr [0x00808783],0x2
005D5DE4  8B C1                     MOV EAX,ECX
005D5DE6  8B F7                     MOV ESI,EDI
005D5DE8  BF 16 ED 80 00            MOV EDI,0x80ed16
005D5DED  6A 00                     PUSH 0x0
005D5DEF  C1 E9 02                  SHR ECX,0x2
005D5DF2  F3 A5                     MOVSD.REP ES:EDI,ESI
005D5DF4  8B C8                     MOV ECX,EAX
005D5DF6  33 C0                     XOR EAX,EAX
005D5DF8  83 E1 03                  AND ECX,0x3
005D5DFB  6A 00                     PUSH 0x0
005D5DFD  F3 A4                     MOVSB.REP ES:EDI,ESI
005D5DFF  BF 16 ED 80 00            MOV EDI,0x80ed16
005D5E04  83 C9 FF                  OR ECX,0xffffffff
005D5E07  F2 AE                     SCASB.REPNE ES:EDI
005D5E09  F7 D1                     NOT ECX
005D5E0B  2B F9                     SUB EDI,ECX
005D5E0D  68 48 69 00 00            PUSH 0x6948
005D5E12  8B D1                     MOV EDX,ECX
005D5E14  8B F7                     MOV ESI,EDI
005D5E16  BF 1A EE 80 00            MOV EDI,0x80ee1a
005D5E1B  C1 E9 02                  SHR ECX,0x2
005D5E1E  F3 A5                     MOVSD.REP ES:EDI,ESI
005D5E20  8B CA                     MOV ECX,EDX
005D5E22  83 E1 03                  AND ECX,0x3
005D5E25  F3 A4                     MOVSB.REP ES:EDI,ESI
005D5E27  BF 80 76 80 00            MOV EDI,0x807680
005D5E2C  83 C9 FF                  OR ECX,0xffffffff
005D5E2F  F2 AE                     SCASB.REPNE ES:EDI
005D5E31  F7 D1                     NOT ECX
005D5E33  49                        DEC ECX
005D5E34  8B F9                     MOV EDI,ECX
005D5E36  83 C9 FF                  OR ECX,0xffffffff
005D5E39  81 C7 16 ED 80 00         ADD EDI,0x80ed16
005D5E3F  F2 AE                     SCASB.REPNE ES:EDI
005D5E41  F7 D1                     NOT ECX
005D5E43  2B F9                     SUB EDI,ECX
005D5E45  8B C1                     MOV EAX,ECX
005D5E47  8B F7                     MOV ESI,EDI
005D5E49  BF 1E EF 80 00            MOV EDI,0x80ef1e
005D5E4E  C1 E9 02                  SHR ECX,0x2
005D5E51  F3 A5                     MOVSD.REP ES:EDI,ESI
005D5E53  8B C8                     MOV ECX,EAX
005D5E55  83 E1 03                  AND ECX,0x3
005D5E58  F3 A4                     MOVSB.REP ES:EDI,ESI
005D5E5A  8B CB                     MOV ECX,EBX
005D5E5C  E8 5F D8 E2 FF            CALL 0x004036c0
005D5E61  8B 13                     MOV EDX,dword ptr [EBX]
005D5E63  8B CB                     MOV ECX,EBX
005D5E65  C6 83 E5 21 00 00 01      MOV byte ptr [EBX + 0x21e5],0x1
005D5E6C  C6 83 E4 21 00 00 01      MOV byte ptr [EBX + 0x21e4],0x1
005D5E73  C6 83 E7 21 00 00 01      MOV byte ptr [EBX + 0x21e7],0x1
005D5E7A  C6 83 E3 21 00 00 01      MOV byte ptr [EBX + 0x21e3],0x1
005D5E81  C6 83 E1 21 00 00 01      MOV byte ptr [EBX + 0x21e1],0x1
005D5E88  FF 52 08                  CALL dword ptr [EDX + 0x8]
005D5E8B  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005D5E91  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005D5E97  85 C9                     TEST ECX,ECX
005D5E99  0F 84 60 01 00 00         JZ 0x005d5fff
005D5E9F  6A 01                     PUSH 0x1
005D5EA1  6A 00                     PUSH 0x0
005D5EA3  6A 01                     PUSH 0x1
005D5EA5  E8 FB C0 E2 FF            CALL 0x00401fa5
005D5EAA  E9 50 01 00 00            JMP 0x005d5fff
LAB_005d5eaf:
005D5EAF  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005D5EB2  83 FE FF                  CMP ESI,-0x1
005D5EB5  0F 84 44 01 00 00         JZ 0x005d5fff
005D5EBB  8B 93 84 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f84]
005D5EC1  85 D2                     TEST EDX,EDX
005D5EC3  0F 84 36 01 00 00         JZ 0x005d5fff
005D5EC9  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D5ECF  3B 70 0C                  CMP ESI,dword ptr [EAX + 0xc]
005D5ED2  73 0D                     JNC 0x005d5ee1
005D5ED4  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
005D5ED7  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005D5EDA  0F AF FE                  IMUL EDI,ESI
005D5EDD  03 F9                     ADD EDI,ECX
005D5EDF  EB 02                     JMP 0x005d5ee3
LAB_005d5ee1:
005D5EE1  33 FF                     XOR EDI,EDI
LAB_005d5ee3:
005D5EE3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D5EE6  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005D5EE9  8B 49 18                  MOV ECX,dword ptr [ECX + 0x18]
005D5EEC  3B CE                     CMP ECX,ESI
005D5EEE  73 0B                     JNC 0x005d5efb
005D5EF0  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005D5EF3  0F AF C1                  IMUL EAX,ECX
005D5EF6  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005D5EF9  EB 02                     JMP 0x005d5efd
LAB_005d5efb:
005D5EFB  33 C0                     XOR EAX,EAX
LAB_005d5efd:
005D5EFD  85 C0                     TEST EAX,EAX
005D5EFF  0F 84 FA 00 00 00         JZ 0x005d5fff
005D5F05  83 BF 04 01 00 00 02      CMP dword ptr [EDI + 0x104],0x2
005D5F0C  75 4B                     JNZ 0x005d5f59
005D5F0E  33 C9                     XOR ECX,ECX
005D5F10  85 F6                     TEST ESI,ESI
005D5F12  7E 45                     JLE 0x005d5f59
005D5F14  3B CE                     CMP ECX,ESI
LAB_005d5f16:
005D5F16  73 0B                     JNC 0x005d5f23
005D5F18  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005D5F1B  0F AF C1                  IMUL EAX,ECX
005D5F1E  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005D5F21  EB 02                     JMP 0x005d5f25
LAB_005d5f23:
005D5F23  33 C0                     XOR EAX,EAX
LAB_005d5f25:
005D5F25  85 C0                     TEST EAX,EAX
005D5F27  74 06                     JZ 0x005d5f2f
005D5F29  80 78 04 02               CMP byte ptr [EAX + 0x4],0x2
005D5F2D  74 07                     JZ 0x005d5f36
LAB_005d5f2f:
005D5F2F  41                        INC ECX
005D5F30  3B CE                     CMP ECX,ESI
005D5F32  7C E2                     JL 0x005d5f16
005D5F34  EB 23                     JMP 0x005d5f59
LAB_005d5f36:
005D5F36  8A 8B 26 1E 00 00         MOV CL,byte ptr [EBX + 0x1e26]
005D5F3C  80 F9 06                  CMP CL,0x6
005D5F3F  74 10                     JZ 0x005d5f51
005D5F41  80 F9 01                  CMP CL,0x1
005D5F44  74 0B                     JZ 0x005d5f51
005D5F46  80 F9 02                  CMP CL,0x2
005D5F49  74 06                     JZ 0x005d5f51
005D5F4B  C6 40 04 01               MOV byte ptr [EAX + 0x4],0x1
005D5F4F  EB 08                     JMP 0x005d5f59
LAB_005d5f51:
005D5F51  C6 40 04 04               MOV byte ptr [EAX + 0x4],0x4
005D5F55  C6 40 05 00               MOV byte ptr [EAX + 0x5],0x0
LAB_005d5f59:
005D5F59  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005D5F5C  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005D5F62  8B 4A 18                  MOV ECX,dword ptr [EDX + 0x18]
005D5F65  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005D5F68  3B CA                     CMP ECX,EDX
005D5F6A  73 0B                     JNC 0x005d5f77
005D5F6C  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005D5F6F  0F AF F1                  IMUL ESI,ECX
005D5F72  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005D5F75  EB 02                     JMP 0x005d5f79
LAB_005d5f77:
005D5F77  33 F6                     XOR ESI,ESI
LAB_005d5f79:
005D5F79  8A 87 04 01 00 00         MOV AL,byte ptr [EDI + 0x104]
005D5F7F  88 46 04                  MOV byte ptr [ESI + 0x4],AL
005D5F82  8A 8F 08 01 00 00         MOV CL,byte ptr [EDI + 0x108]
005D5F88  84 C0                     TEST AL,AL
005D5F8A  88 4E 05                  MOV byte ptr [ESI + 0x5],CL
005D5F8D  75 16                     JNZ 0x005d5fa5
005D5F8F  8A 46 02                  MOV AL,byte ptr [ESI + 0x2]
005D5F92  3C FF                     CMP AL,0xff
005D5F94  74 0B                     JZ 0x005d5fa1
005D5F96  50                        PUSH EAX
005D5F97  B9 20 76 80 00            MOV ECX,0x807620
005D5F9C  E8 C6 DF E2 FF            CALL 0x00403f67
LAB_005d5fa1:
005D5FA1  C6 46 02 FF               MOV byte ptr [ESI + 0x2],0xff
LAB_005d5fa5:
005D5FA5  C6 05 4D 87 80 00 FF      MOV byte ptr [0x0080874d],0xff
005D5FAC  8B 93 84 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f84]
005D5FB2  33 C9                     XOR ECX,ECX
005D5FB4  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005D5FB7  85 F6                     TEST ESI,ESI
005D5FB9  7E 36                     JLE 0x005d5ff1
005D5FBB  8B 3D 7F 87 80 00         MOV EDI,dword ptr [0x0080877f]
005D5FC1  3B CE                     CMP ECX,ESI
LAB_005d5fc3:
005D5FC3  73 0B                     JNC 0x005d5fd0
005D5FC5  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005D5FC8  0F AF C1                  IMUL EAX,ECX
005D5FCB  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005D5FCE  EB 02                     JMP 0x005d5fd2
LAB_005d5fd0:
005D5FD0  33 C0                     XOR EAX,EAX
LAB_005d5fd2:
005D5FD2  85 C0                     TEST EAX,EAX
005D5FD4  74 0B                     JZ 0x005d5fe1
005D5FD6  80 78 04 02               CMP byte ptr [EAX + 0x4],0x2
005D5FDA  75 05                     JNZ 0x005d5fe1
005D5FDC  39 78 06                  CMP dword ptr [EAX + 0x6],EDI
005D5FDF  74 07                     JZ 0x005d5fe8
LAB_005d5fe1:
005D5FE1  41                        INC ECX
005D5FE2  3B CE                     CMP ECX,ESI
005D5FE4  7C DD                     JL 0x005d5fc3
005D5FE6  EB 09                     JMP 0x005d5ff1
LAB_005d5fe8:
005D5FE8  8A 50 02                  MOV DL,byte ptr [EAX + 0x2]
005D5FEB  88 15 4D 87 80 00         MOV byte ptr [0x0080874d],DL
LAB_005d5ff1:
005D5FF1  8B 03                     MOV EAX,dword ptr [EBX]
005D5FF3  8B CB                     MOV ECX,EBX
005D5FF5  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
LAB_005d5ff8:
005D5FF8  8B CB                     MOV ECX,EBX
005D5FFA  E8 9B CA E2 FF            CALL 0x00402a9a
LAB_005d5fff:
005D5FFF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D6002  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
005D6005  3D FF 69 00 00            CMP EAX,0x69ff
005D600A  0F 82 ED 09 00 00         JC 0x005d69fd
005D6010  3D 7F 6A 00 00            CMP EAX,0x6a7f
005D6015  0F 83 E2 09 00 00         JNC 0x005d69fd
005D601B  80 7B 65 01               CMP byte ptr [EBX + 0x65],0x1
005D601F  0F 85 D8 09 00 00         JNZ 0x005d69fd
005D6025  8B BB 84 1F 00 00         MOV EDI,dword ptr [EBX + 0x1f84]
005D602B  8D 90 01 96 FF FF         LEA EDX,[EAX + 0xffff9601]
005D6031  C1 EA 03                  SHR EDX,0x3
005D6034  40                        INC EAX
005D6035  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005D6038  83 E0 07                  AND EAX,0x7
005D603B  85 FF                     TEST EDI,EDI
005D603D  74 1A                     JZ 0x005d6059
005D603F  8B 8B 88 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f88]
005D6045  8B 77 0C                  MOV ESI,dword ptr [EDI + 0xc]
005D6048  03 CA                     ADD ECX,EDX
005D604A  3B CE                     CMP ECX,ESI
005D604C  73 0B                     JNC 0x005d6059
005D604E  8B 77 08                  MOV ESI,dword ptr [EDI + 0x8]
005D6051  0F AF F1                  IMUL ESI,ECX
005D6054  03 77 1C                  ADD ESI,dword ptr [EDI + 0x1c]
005D6057  EB 02                     JMP 0x005d605b
LAB_005d6059:
005D6059  33 F6                     XOR ESI,ESI
LAB_005d605b:
005D605B  33 C9                     XOR ECX,ECX
005D605D  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
005D6060  3B F1                     CMP ESI,ECX
005D6062  0F 84 95 09 00 00         JZ 0x005d69fd
005D6068  48                        DEC EAX
005D6069  83 F8 04                  CMP EAX,0x4
005D606C  0F 87 8B 09 00 00         JA 0x005d69fd
switchD_005d6072::switchD:
005D6072  FF 24 85 50 70 5D 00      JMP dword ptr [EAX*0x4 + 0x5d7050]
switchD_005d6072::caseD_1:
005D6079  BA 01 01 01 01            MOV EDX,0x1010101
005D607E  33 C9                     XOR ECX,ECX
005D6080  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
005D6083  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
005D6086  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
005D6089  85 D2                     TEST EDX,EDX
005D608B  7E 2E                     JLE 0x005d60bb
005D608D  3B CA                     CMP ECX,EDX
LAB_005d608f:
005D608F  73 0D                     JNC 0x005d609e
005D6091  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005D6094  8B 77 1C                  MOV ESI,dword ptr [EDI + 0x1c]
005D6097  0F AF C1                  IMUL EAX,ECX
005D609A  03 C6                     ADD EAX,ESI
005D609C  EB 02                     JMP 0x005d60a0
LAB_005d609e:
005D609E  33 C0                     XOR EAX,EAX
LAB_005d60a0:
005D60A0  80 38 00                  CMP byte ptr [EAX],0x0
005D60A3  74 11                     JZ 0x005d60b6
005D60A5  8A 40 02                  MOV AL,byte ptr [EAX + 0x2]
005D60A8  3C FF                     CMP AL,0xff
005D60AA  74 0A                     JZ 0x005d60b6
005D60AC  25 FF 00 00 00            AND EAX,0xff
005D60B1  C6 44 05 C4 00            MOV byte ptr [EBP + EAX*0x1 + -0x3c],0x0
LAB_005d60b6:
005D60B6  41                        INC ECX
005D60B7  3B CA                     CMP ECX,EDX
005D60B9  7C D4                     JL 0x005d608f
LAB_005d60bb:
005D60BB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005D60BE  8B 93 88 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f88]
005D60C4  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005D60C7  33 C0                     XOR EAX,EAX
005D60C9  8A 41 02                  MOV AL,byte ptr [ECX + 0x2]
005D60CC  03 D6                     ADD EDX,ESI
005D60CE  33 F6                     XOR ESI,ESI
005D60D0  C7 83 71 21 00 00 02 65 00 00  MOV dword ptr [EBX + 0x2171],0x6502
005D60DA  C6 44 05 C4 01            MOV byte ptr [EBP + EAX*0x1 + -0x3c],0x1
005D60DF  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D60E5  89 93 79 21 00 00         MOV dword ptr [EBX + 0x2179],EDX
005D60EB  C7 83 91 21 00 00 03 65 00 00  MOV dword ptr [EBX + 0x2191],0x6503
005D60F5  89 B3 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ESI
005D60FB  89 70 0C                  MOV dword ptr [EAX + 0xc],ESI
005D60FE  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D6104  8D BB 33 1E 00 00         LEA EDI,[EBX + 0x1e33]
005D610A  57                        PUSH EDI
005D610B  51                        PUSH ECX
005D610C  C7 83 37 1F 00 00 FF 00 00 00  MOV dword ptr [EBX + 0x1f37],0xff
005D6116  E8 A5 80 0D 00            CALL 0x006ae1c0
005D611B  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
LAB_005d611f:
005D611F  8A 44 35 C4               MOV AL,byte ptr [EBP + ESI*0x1 + -0x3c]
005D6123  84 C0                     TEST AL,AL
005D6125  74 31                     JZ 0x005d6158
005D6127  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005D612D  57                        PUSH EDI
005D612E  52                        PUSH EDX
005D612F  89 B3 37 1F 00 00         MOV dword ptr [EBX + 0x1f37],ESI
005D6135  E8 86 80 0D 00            CALL 0x006ae1c0
005D613A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005D613D  33 C0                     XOR EAX,EAX
005D613F  8A 41 02                  MOV AL,byte ptr [ECX + 0x2]
005D6142  3B C6                     CMP EAX,ESI
005D6144  75 0F                     JNZ 0x005d6155
005D6146  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005D6149  81 E2 FF 00 00 00         AND EDX,0xff
005D614F  89 93 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EDX
LAB_005d6155:
005D6155  FE 45 FC                  INC byte ptr [EBP + -0x4]
LAB_005d6158:
005D6158  46                        INC ESI
005D6159  83 FE 08                  CMP ESI,0x8
005D615C  7C C1                     JL 0x005d611f
005D615E  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D6164  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D6167  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D616A  89 8B A9 21 00 00         MOV dword ptr [EBX + 0x21a9],ECX
005D6170  C7 83 C5 21 00 00 24 01 00 00  MOV dword ptr [EBX + 0x21c5],0x124
005D617A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005D617D  C7 83 CD 21 00 00 1E 00 00 00  MOV dword ptr [EBX + 0x21cd],0x1e
005D6187  C7 83 A5 21 00 00 12 00 00 00  MOV dword ptr [EBX + 0x21a5],0x12
005D6191  8D 54 80 41               LEA EDX,[EAX + EAX*0x4 + 0x41]
005D6195  89 93 C9 21 00 00         MOV dword ptr [EBX + 0x21c9],EDX
LAB_005d619b:
005D619B  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005D619E  8D 93 61 21 00 00         LEA EDX,[EBX + 0x2161]
005D61A4  6A 00                     PUSH 0x0
005D61A6  52                        PUSH EDX
005D61A7  8B 01                     MOV EAX,dword ptr [ECX]
005D61A9  6A 00                     PUSH 0x0
005D61AB  6A 00                     PUSH 0x0
005D61AD  68 EF 00 01 00            PUSH 0x100ef
005D61B2  FF 50 08                  CALL dword ptr [EAX + 0x8]
005D61B5  E9 43 08 00 00            JMP 0x005d69fd
switchD_005d6072::caseD_2:
005D61BA  8B 83 88 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f88]
005D61C0  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005D61C3  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D61C9  03 C7                     ADD EAX,EDI
005D61CB  C7 83 71 21 00 00 04 65 00 00  MOV dword ptr [EBX + 0x2171],0x6504
005D61D5  89 83 79 21 00 00         MOV dword ptr [EBX + 0x2179],EAX
005D61DB  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005D61E5  C7 41 0C 00 00 00 00      MOV dword ptr [ECX + 0xc],0x0
005D61EC  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005D61F2  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
005D61F9  52                        PUSH EDX
005D61FA  68 F1 23 00 00            PUSH 0x23f1
005D61FF  E8 3C 9F 0D 00            CALL 0x006b0140
005D6204  8B F8                     MOV EDI,EAX
005D6206  83 C9 FF                  OR ECX,0xffffffff
005D6209  33 C0                     XOR EAX,EAX
005D620B  6A 0A                     PUSH 0xa
005D620D  F2 AE                     SCASB.REPNE ES:EDI
005D620F  F7 D1                     NOT ECX
005D6211  2B F9                     SUB EDI,ECX
005D6213  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D6219  8B D1                     MOV EDX,ECX
005D621B  8B F7                     MOV ESI,EDI
005D621D  8B F8                     MOV EDI,EAX
005D621F  50                        PUSH EAX
005D6220  C1 E9 02                  SHR ECX,0x2
005D6223  F3 A5                     MOVSD.REP ES:EDI,ESI
005D6225  8B CA                     MOV ECX,EDX
005D6227  83 E1 03                  AND ECX,0x3
005D622A  F3 A4                     MOVSB.REP ES:EDI,ESI
005D622C  E8 2F 83 15 00            CALL 0x0072e560
005D6231  83 C4 08                  ADD ESP,0x8
005D6234  85 C0                     TEST EAX,EAX
005D6236  74 12                     JZ 0x005d624a
LAB_005d6238:
005D6238  6A 0A                     PUSH 0xa
005D623A  50                        PUSH EAX
005D623B  C6 00 20                  MOV byte ptr [EAX],0x20
005D623E  E8 1D 83 15 00            CALL 0x0072e560
005D6243  83 C4 08                  ADD ESP,0x8
005D6246  85 C0                     TEST EAX,EAX
005D6248  75 EE                     JNZ 0x005d6238
LAB_005d624a:
005D624A  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D6250  C7 83 37 1F 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1f37],0x1
005D625A  50                        PUSH EAX
005D625B  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D6261  50                        PUSH EAX
005D6262  E8 59 7F 0D 00            CALL 0x006ae1c0
005D6267  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005D626D  51                        PUSH ECX
005D626E  68 F0 23 00 00            PUSH 0x23f0
005D6273  E8 C8 9E 0D 00            CALL 0x006b0140
005D6278  8B F8                     MOV EDI,EAX
005D627A  83 C9 FF                  OR ECX,0xffffffff
005D627D  33 C0                     XOR EAX,EAX
005D627F  6A 0A                     PUSH 0xa
005D6281  F2 AE                     SCASB.REPNE ES:EDI
005D6283  F7 D1                     NOT ECX
005D6285  2B F9                     SUB EDI,ECX
005D6287  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D628D  8B D1                     MOV EDX,ECX
005D628F  8B F7                     MOV ESI,EDI
005D6291  8B F8                     MOV EDI,EAX
005D6293  50                        PUSH EAX
005D6294  C1 E9 02                  SHR ECX,0x2
005D6297  F3 A5                     MOVSD.REP ES:EDI,ESI
005D6299  8B CA                     MOV ECX,EDX
005D629B  83 E1 03                  AND ECX,0x3
005D629E  F3 A4                     MOVSB.REP ES:EDI,ESI
005D62A0  E8 BB 82 15 00            CALL 0x0072e560
005D62A5  83 C4 08                  ADD ESP,0x8
005D62A8  85 C0                     TEST EAX,EAX
005D62AA  74 12                     JZ 0x005d62be
LAB_005d62ac:
005D62AC  6A 0A                     PUSH 0xa
005D62AE  50                        PUSH EAX
005D62AF  C6 00 20                  MOV byte ptr [EAX],0x20
005D62B2  E8 A9 82 15 00            CALL 0x0072e560
005D62B7  83 C4 08                  ADD ESP,0x8
005D62BA  85 C0                     TEST EAX,EAX
005D62BC  75 EE                     JNZ 0x005d62ac
LAB_005d62be:
005D62BE  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D62C4  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005D62CE  50                        PUSH EAX
005D62CF  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D62D5  50                        PUSH EAX
005D62D6  E8 E5 7E 0D 00            CALL 0x006ae1c0
005D62DB  8B 0D D1 7D 80 00         MOV ECX,dword ptr [0x00807dd1]
005D62E1  81 E1 00 00 FF FF         AND ECX,0xffff0000
005D62E7  81 F9 00 00 DD D0         CMP ECX,0xd0dd0000
005D62ED  75 0E                     JNZ 0x005d62fd
005D62EF  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005D62F2  33 C0                     XOR EAX,EAX
005D62F4  80 7A 04 02               CMP byte ptr [EDX + 0x4],0x2
005D62F8  0F 95 C0                  SETNZ AL
005D62FB  EB 03                     JMP 0x005d6300
LAB_005d62fd:
005D62FD  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_005d6300:
005D6300  85 C0                     TEST EAX,EAX
005D6302  74 73                     JZ 0x005d6377
005D6304  A1 18 76 80 00            MOV EAX,[0x00807618]
005D6309  50                        PUSH EAX
005D630A  68 F2 23 00 00            PUSH 0x23f2
005D630F  E8 2C 9E 0D 00            CALL 0x006b0140
005D6314  8B F8                     MOV EDI,EAX
005D6316  83 C9 FF                  OR ECX,0xffffffff
005D6319  33 C0                     XOR EAX,EAX
005D631B  6A 0A                     PUSH 0xa
005D631D  F2 AE                     SCASB.REPNE ES:EDI
005D631F  F7 D1                     NOT ECX
005D6321  2B F9                     SUB EDI,ECX
005D6323  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D6329  8B D1                     MOV EDX,ECX
005D632B  8B F7                     MOV ESI,EDI
005D632D  8B F8                     MOV EDI,EAX
005D632F  50                        PUSH EAX
005D6330  C1 E9 02                  SHR ECX,0x2
005D6333  F3 A5                     MOVSD.REP ES:EDI,ESI
005D6335  8B CA                     MOV ECX,EDX
005D6337  83 E1 03                  AND ECX,0x3
005D633A  F3 A4                     MOVSB.REP ES:EDI,ESI
005D633C  E8 1F 82 15 00            CALL 0x0072e560
005D6341  83 C4 08                  ADD ESP,0x8
005D6344  85 C0                     TEST EAX,EAX
005D6346  74 12                     JZ 0x005d635a
LAB_005d6348:
005D6348  6A 0A                     PUSH 0xa
005D634A  50                        PUSH EAX
005D634B  C6 00 20                  MOV byte ptr [EAX],0x20
005D634E  E8 0D 82 15 00            CALL 0x0072e560
005D6353  83 C4 08                  ADD ESP,0x8
005D6356  85 C0                     TEST EAX,EAX
005D6358  75 EE                     JNZ 0x005d6348
LAB_005d635a:
005D635A  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D6360  C7 83 37 1F 00 00 03 00 00 00  MOV dword ptr [EBX + 0x1f37],0x3
005D636A  50                        PUSH EAX
005D636B  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D6371  50                        PUSH EAX
005D6372  E8 49 7E 0D 00            CALL 0x006ae1c0
LAB_005d6377:
005D6377  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D637D  33 C0                     XOR EAX,EAX
005D637F  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005D6382  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005D6385  89 93 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EDX
005D638B  8A 41 03                  MOV AL,byte ptr [ECX + 0x3]
005D638E  C7 83 C5 21 00 00 43 01 00 00  MOV dword ptr [EBX + 0x21c5],0x143
005D6398  48                        DEC EAX
005D6399  C7 83 CD 21 00 00 78 00 00 00  MOV dword ptr [EBX + 0x21cd],0x78
005D63A3  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
005D63A9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D63AC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005D63AF  8D 54 80 41               LEA EDX,[EAX + EAX*0x4 + 0x41]
005D63B3  89 93 C9 21 00 00         MOV dword ptr [EBX + 0x21c9],EDX
005D63B9  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D63BE  8B 70 34                  MOV ESI,dword ptr [EAX + 0x34]
005D63C1  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005D63C7  85 C0                     TEST EAX,EAX
005D63C9  74 09                     JZ 0x005d63d4
005D63CB  56                        PUSH ESI
005D63CC  E8 BF A3 13 00            CALL 0x00710790
005D63D1  83 C4 04                  ADD ESP,0x4
LAB_005d63d4:
005D63D4  8B 8E 8A 00 00 00         MOV ECX,dword ptr [ESI + 0x8a]
005D63DA  89 8B A5 21 00 00         MOV dword ptr [EBX + 0x21a5],ECX
005D63E0  E9 91 02 00 00            JMP 0x005d6676
switchD_005d6072::caseD_3:
005D63E5  8B 83 88 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f88]
005D63EB  C7 83 71 21 00 00 05 65 00 00  MOV dword ptr [EBX + 0x2171],0x6505
005D63F5  03 C2                     ADD EAX,EDX
005D63F7  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005D63FD  89 83 79 21 00 00         MOV dword ptr [EBX + 0x2179],EAX
005D6403  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005D640D  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
005D6410  8A 06                     MOV AL,byte ptr [ESI]
005D6412  84 C0                     TEST AL,AL
005D6414  0F 84 A3 01 00 00         JZ 0x005d65bd
005D641A  8A 93 26 1E 00 00         MOV DL,byte ptr [EBX + 0x1e26]
005D6420  33 C9                     XOR ECX,ECX
005D6422  80 FA 02                  CMP DL,0x2
005D6425  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D6428  75 0C                     JNZ 0x005d6436
005D642A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005D642D  38 50 04                  CMP byte ptr [EAX + 0x4],DL
005D6430  0F 84 C7 05 00 00         JZ 0x005d69fd
LAB_005d6436:
005D6436  8B B3 84 1F 00 00         MOV ESI,dword ptr [EBX + 0x1f84]
005D643C  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
005D643F  3B CF                     CMP ECX,EDI
005D6441  7D 22                     JGE 0x005d6465
LAB_005d6443:
005D6443  73 0B                     JNC 0x005d6450
005D6445  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D6448  0F AF C1                  IMUL EAX,ECX
005D644B  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
005D644E  EB 02                     JMP 0x005d6452
LAB_005d6450:
005D6450  33 C0                     XOR EAX,EAX
LAB_005d6452:
005D6452  80 38 00                  CMP byte ptr [EAX],0x0
005D6455  74 09                     JZ 0x005d6460
005D6457  80 78 04 00               CMP byte ptr [EAX + 0x4],0x0
005D645B  74 03                     JZ 0x005d6460
005D645D  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_005d6460:
005D6460  41                        INC ECX
005D6461  3B CF                     CMP ECX,EDI
005D6463  7C DE                     JL 0x005d6443
LAB_005d6465:
005D6465  80 FA 02                  CMP DL,0x2
005D6468  74 53                     JZ 0x005d64bd
005D646A  83 7D FC 02               CMP dword ptr [EBP + -0x4],0x2
005D646E  7E 4D                     JLE 0x005d64bd
005D6470  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005D6476  51                        PUSH ECX
005D6477  68 40 1F 00 00            PUSH 0x1f40
005D647C  E8 BF 9C 0D 00            CALL 0x006b0140
005D6481  8B F8                     MOV EDI,EAX
005D6483  83 C9 FF                  OR ECX,0xffffffff
005D6486  33 C0                     XOR EAX,EAX
005D6488  F2 AE                     SCASB.REPNE ES:EDI
005D648A  F7 D1                     NOT ECX
005D648C  2B F9                     SUB EDI,ECX
005D648E  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D6494  8B D1                     MOV EDX,ECX
005D6496  8B F7                     MOV ESI,EDI
005D6498  8B F8                     MOV EDI,EAX
005D649A  50                        PUSH EAX
005D649B  C1 E9 02                  SHR ECX,0x2
005D649E  F3 A5                     MOVSD.REP ES:EDI,ESI
005D64A0  8B CA                     MOV ECX,EDX
005D64A2  83 E1 03                  AND ECX,0x3
005D64A5  F3 A4                     MOVSB.REP ES:EDI,ESI
005D64A7  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D64AD  C7 83 37 1F 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1f37],0x0
005D64B7  50                        PUSH EAX
005D64B8  E8 03 7D 0D 00            CALL 0x006ae1c0
LAB_005d64bd:
005D64BD  80 BB 26 1E 00 00 02      CMP byte ptr [EBX + 0x1e26],0x2
005D64C4  74 75                     JZ 0x005d653b
005D64C6  8B 0D D1 7D 80 00         MOV ECX,dword ptr [0x00807dd1]
005D64CC  B8 01 00 00 00            MOV EAX,0x1
005D64D1  81 E1 00 00 FF FF         AND ECX,0xffff0000
005D64D7  81 F9 00 00 DD D0         CMP ECX,0xd0dd0000
005D64DD  75 0C                     JNZ 0x005d64eb
005D64DF  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005D64E2  33 C0                     XOR EAX,EAX
005D64E4  80 7A 03 03               CMP byte ptr [EDX + 0x3],0x3
005D64E8  0F 95 C0                  SETNZ AL
LAB_005d64eb:
005D64EB  85 C0                     TEST EAX,EAX
005D64ED  74 4C                     JZ 0x005d653b
005D64EF  A1 18 76 80 00            MOV EAX,[0x00807618]
005D64F4  50                        PUSH EAX
005D64F5  68 42 1F 00 00            PUSH 0x1f42
005D64FA  E8 41 9C 0D 00            CALL 0x006b0140
005D64FF  8B F8                     MOV EDI,EAX
005D6501  83 C9 FF                  OR ECX,0xffffffff
005D6504  33 C0                     XOR EAX,EAX
005D6506  F2 AE                     SCASB.REPNE ES:EDI
005D6508  F7 D1                     NOT ECX
005D650A  2B F9                     SUB EDI,ECX
005D650C  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D6512  8B D1                     MOV EDX,ECX
005D6514  8B F7                     MOV ESI,EDI
005D6516  8B F8                     MOV EDI,EAX
005D6518  50                        PUSH EAX
005D6519  C1 E9 02                  SHR ECX,0x2
005D651C  F3 A5                     MOVSD.REP ES:EDI,ESI
005D651E  8B CA                     MOV ECX,EDX
005D6520  83 E1 03                  AND ECX,0x3
005D6523  F3 A4                     MOVSB.REP ES:EDI,ESI
005D6525  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D652B  C7 83 37 1F 00 00 02 00 00 00  MOV dword ptr [EBX + 0x1f37],0x2
005D6535  50                        PUSH EAX
005D6536  E8 85 7C 0D 00            CALL 0x006ae1c0
LAB_005d653b:
005D653B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005D653E  33 D2                     XOR EDX,EDX
005D6540  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005D6543  8B 41 50                  MOV EAX,dword ptr [ECX + 0x50]
005D6546  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D6549  85 C9                     TEST ECX,ECX
005D654B  7E 70                     JLE 0x005d65bd
005D654D  EB 03                     JMP 0x005d6552
LAB_005d654f:
005D654F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_005d6552:
005D6552  3B D1                     CMP EDX,ECX
005D6554  73 0B                     JNC 0x005d6561
005D6556  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005D6559  0F AF CA                  IMUL ECX,EDX
005D655C  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
005D655F  EB 02                     JMP 0x005d6563
LAB_005d6561:
005D6561  33 C9                     XOR ECX,ECX
LAB_005d6563:
005D6563  8D 79 40                  LEA EDI,[ECX + 0x40]
005D6566  83 C9 FF                  OR ECX,0xffffffff
005D6569  33 C0                     XOR EAX,EAX
005D656B  F2 AE                     SCASB.REPNE ES:EDI
005D656D  F7 D1                     NOT ECX
005D656F  2B F9                     SUB EDI,ECX
005D6571  8D 83 33 1E 00 00         LEA EAX,[EBX + 0x1e33]
005D6577  8B D1                     MOV EDX,ECX
005D6579  8B F7                     MOV ESI,EDI
005D657B  8B F8                     MOV EDI,EAX
005D657D  50                        PUSH EAX
005D657E  C1 E9 02                  SHR ECX,0x2
005D6581  F3 A5                     MOVSD.REP ES:EDI,ESI
005D6583  8B CA                     MOV ECX,EDX
005D6585  83 E1 03                  AND ECX,0x3
005D6588  F3 A4                     MOVSB.REP ES:EDI,ESI
005D658A  8B 93 2F 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e2f]
005D6590  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005D6593  52                        PUSH EDX
005D6594  C7 83 37 1F 00 00 04 00 00 00  MOV dword ptr [EBX + 0x1f37],0x4
005D659E  89 8B 3B 1F 00 00         MOV dword ptr [EBX + 0x1f3b],ECX
005D65A4  E8 17 7C 0D 00            CALL 0x006ae1c0
005D65A9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005D65AC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005D65AF  42                        INC EDX
005D65B0  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
005D65B3  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005D65B6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D65B9  3B D1                     CMP EDX,ECX
005D65BB  7C 92                     JL 0x005d654f
LAB_005d65bd:
005D65BD  8B BB 2F 1E 00 00         MOV EDI,dword ptr [EBX + 0x1e2f]
005D65C3  33 F6                     XOR ESI,ESI
005D65C5  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D65C8  85 C0                     TEST EAX,EAX
005D65CA  7E 46                     JLE 0x005d6612
005D65CC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005D65CF  33 D2                     XOR EDX,EDX
005D65D1  3B F0                     CMP ESI,EAX
005D65D3  8A 51 04                  MOV DL,byte ptr [ECX + 0x4]
005D65D6  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
LAB_005d65d9:
005D65D9  73 0D                     JNC 0x005d65e8
005D65DB  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005D65DE  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
005D65E1  0F AF C6                  IMUL EAX,ESI
005D65E4  03 C2                     ADD EAX,EDX
005D65E6  EB 02                     JMP 0x005d65ea
LAB_005d65e8:
005D65E8  33 C0                     XOR EAX,EAX
LAB_005d65ea:
005D65EA  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
005D65ED  39 90 04 01 00 00         CMP dword ptr [EAX + 0x104],EDX
005D65F3  75 0D                     JNZ 0x005d6602
005D65F5  33 D2                     XOR EDX,EDX
005D65F7  8A 51 05                  MOV DL,byte ptr [ECX + 0x5]
005D65FA  39 90 08 01 00 00         CMP dword ptr [EAX + 0x108],EDX
005D6600  74 0A                     JZ 0x005d660c
LAB_005d6602:
005D6602  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D6605  46                        INC ESI
005D6606  3B F0                     CMP ESI,EAX
005D6608  7C CF                     JL 0x005d65d9
005D660A  EB 06                     JMP 0x005d6612
LAB_005d660c:
005D660C  89 B3 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ESI
LAB_005d6612:
005D6612  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D6615  C7 83 C5 21 00 00 5D 01 00 00  MOV dword ptr [EBX + 0x21c5],0x15d
005D661F  89 83 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EAX
005D6625  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D6628  C7 83 CD 21 00 00 5F 00 00 00  MOV dword ptr [EBX + 0x21cd],0x5f
005D6632  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005D6635  8D 4C 80 41               LEA ECX,[EAX + EAX*0x4 + 0x41]
005D6639  89 8B C9 21 00 00         MOV dword ptr [EBX + 0x21c9],ECX
005D663F  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D6645  8B 72 34                  MOV ESI,dword ptr [EDX + 0x34]
005D6648  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005D664E  85 C0                     TEST EAX,EAX
005D6650  74 09                     JZ 0x005d665b
005D6652  56                        PUSH ESI
005D6653  E8 38 A1 13 00            CALL 0x00710790
005D6658  83 C4 04                  ADD ESP,0x4
LAB_005d665b:
005D665B  8B 86 8A 00 00 00         MOV EAX,dword ptr [ESI + 0x8a]
005D6661  89 83 A5 21 00 00         MOV dword ptr [EBX + 0x21a5],EAX
005D6667  8B 83 A9 21 00 00         MOV EAX,dword ptr [EBX + 0x21a9]
005D666D  83 F8 01                  CMP EAX,0x1
005D6670  0F 8E 87 03 00 00         JLE 0x005d69fd
LAB_005d6676:
005D6676  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005D6679  8D 83 61 21 00 00         LEA EAX,[EBX + 0x2161]
005D667F  6A 00                     PUSH 0x0
005D6681  50                        PUSH EAX
005D6682  8B 11                     MOV EDX,dword ptr [ECX]
005D6684  6A 00                     PUSH 0x0
005D6686  6A 00                     PUSH 0x0
005D6688  68 EF 00 01 00            PUSH 0x100ef
005D668D  FF 52 08                  CALL dword ptr [EDX + 0x8]
005D6690  E9 68 03 00 00            JMP 0x005d69fd
switchD_005d6072::caseD_5:
005D6695  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
005D669A  84 C0                     TEST AL,AL
005D669C  0F 84 4F 02 00 00         JZ 0x005d68f1
005D66A2  33 D2                     XOR EDX,EDX
005D66A4  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005D66AB  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
005D66AE  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
005D66B1  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
005D66B4  85 D2                     TEST EDX,EDX
005D66B6  7E 2D                     JLE 0x005d66e5
005D66B8  3B CA                     CMP ECX,EDX
LAB_005d66ba:
005D66BA  73 0D                     JNC 0x005d66c9
005D66BC  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005D66BF  8B 77 1C                  MOV ESI,dword ptr [EDI + 0x1c]
005D66C2  0F AF C1                  IMUL EAX,ECX
005D66C5  03 C6                     ADD EAX,ESI
005D66C7  EB 02                     JMP 0x005d66cb
LAB_005d66c9:
005D66C9  33 C0                     XOR EAX,EAX
LAB_005d66cb:
005D66CB  85 C0                     TEST EAX,EAX
005D66CD  74 11                     JZ 0x005d66e0
005D66CF  8A 40 4A                  MOV AL,byte ptr [EAX + 0x4a]
005D66D2  3C 08                     CMP AL,0x8
005D66D4  73 0A                     JNC 0x005d66e0
005D66D6  25 FF 00 00 00            AND EAX,0xff
005D66DB  C6 44 05 CC 01            MOV byte ptr [EBP + EAX*0x1 + -0x34],0x1
LAB_005d66e0:
005D66E0  41                        INC ECX
005D66E1  3B CA                     CMP ECX,EDX
005D66E3  7C D5                     JL 0x005d66ba
LAB_005d66e5:
005D66E5  32 C9                     XOR CL,CL
005D66E7  33 C0                     XOR EAX,EAX
LAB_005d66e9:
005D66E9  8A 54 05 CC               MOV DL,byte ptr [EBP + EAX*0x1 + -0x34]
005D66ED  84 D2                     TEST DL,DL
005D66EF  74 02                     JZ 0x005d66f3
005D66F1  FE C1                     INC CL
LAB_005d66f3:
005D66F3  40                        INC EAX
005D66F4  83 F8 08                  CMP EAX,0x8
005D66F7  7C F0                     JL 0x005d66e9
005D66F9  8A 93 1C 21 00 00         MOV DL,byte ptr [EBX + 0x211c]
005D66FF  3A CA                     CMP CL,DL
005D6701  73 1C                     JNC 0x005d671f
LAB_005d6703:
005D6703  33 C0                     XOR EAX,EAX
LAB_005d6705:
005D6705  80 7C 05 CC 00            CMP byte ptr [EBP + EAX*0x1 + -0x34],0x0
005D670A  74 08                     JZ 0x005d6714
005D670C  40                        INC EAX
005D670D  83 F8 08                  CMP EAX,0x8
005D6710  7C F3                     JL 0x005d6705
005D6712  EB 07                     JMP 0x005d671b
LAB_005d6714:
005D6714  C6 44 05 CC 01            MOV byte ptr [EBP + EAX*0x1 + -0x34],0x1
005D6719  FE C1                     INC CL
LAB_005d671b:
005D671B  3A CA                     CMP CL,DL
005D671D  72 E4                     JC 0x005d6703
LAB_005d671f:
005D671F  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D6722  33 F6                     XOR ESI,ESI
005D6724  85 C0                     TEST EAX,EAX
005D6726  0F 8E BD 01 00 00         JLE 0x005d68e9
005D672C  8B 83 88 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f88]
005D6732  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D6735  8A 55 DC                  MOV DL,byte ptr [EBP + -0x24]
005D6738  03 C1                     ADD EAX,ECX
005D673A  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
005D673D  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D6740  3B F0                     CMP ESI,EAX
LAB_005d6742:
005D6742  73 0D                     JNC 0x005d6751
005D6744  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
005D6747  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
005D674A  0F AF C6                  IMUL EAX,ESI
005D674D  03 C1                     ADD EAX,ECX
005D674F  EB 02                     JMP 0x005d6753
LAB_005d6751:
005D6751  33 C0                     XOR EAX,EAX
LAB_005d6753:
005D6753  39 75 D8                  CMP dword ptr [EBP + -0x28],ESI
005D6756  74 2C                     JZ 0x005d6784
005D6758  80 38 00                  CMP byte ptr [EAX],0x0
005D675B  74 42                     JZ 0x005d679f
005D675D  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005D6760  84 C9                     TEST CL,CL
005D6762  74 20                     JZ 0x005d6784
005D6764  80 F9 01                  CMP CL,0x1
005D6767  74 1B                     JZ 0x005d6784
005D6769  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005D676C  85 C9                     TEST ECX,ECX
005D676E  74 0C                     JZ 0x005d677c
005D6770  8A 50 4A                  MOV DL,byte ptr [EAX + 0x4a]
005D6773  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005D677A  EB 08                     JMP 0x005d6784
LAB_005d677c:
005D677C  3A 50 4A                  CMP DL,byte ptr [EAX + 0x4a]
005D677F  74 03                     JZ 0x005d6784
005D6781  80 CA FF                  OR DL,0xff
LAB_005d6784:
005D6784  80 38 00                  CMP byte ptr [EAX],0x0
005D6787  74 16                     JZ 0x005d679f
005D6789  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005D678C  84 C9                     TEST CL,CL
005D678E  74 05                     JZ 0x005d6795
005D6790  80 F9 01                  CMP CL,0x1
005D6793  75 0A                     JNZ 0x005d679f
LAB_005d6795:
005D6795  33 C9                     XOR ECX,ECX
005D6797  8A 48 4A                  MOV CL,byte ptr [EAX + 0x4a]
005D679A  C6 44 0D CC 00            MOV byte ptr [EBP + ECX*0x1 + -0x34],0x0
LAB_005d679f:
005D679F  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
005D67A2  46                        INC ESI
005D67A3  3B F0                     CMP ESI,EAX
005D67A5  7C 9B                     JL 0x005d6742
005D67A7  88 55 DC                  MOV byte ptr [EBP + -0x24],DL
LAB_005d67aa:
005D67AA  80 FA FF                  CMP DL,0xff
005D67AD  74 0E                     JZ 0x005d67bd
005D67AF  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
005D67B2  81 E2 FF 00 00 00         AND EDX,0xff
005D67B8  C6 44 15 CC 00            MOV byte ptr [EBP + EDX*0x1 + -0x34],0x0
LAB_005d67bd:
005D67BD  8B 83 88 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f88]
005D67C3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005D67C6  03 C1                     ADD EAX,ECX
005D67C8  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D67CE  33 F6                     XOR ESI,ESI
005D67D0  C7 83 71 21 00 00 01 65 00 00  MOV dword ptr [EBX + 0x2171],0x6501
005D67DA  89 83 79 21 00 00         MOV dword ptr [EBX + 0x2179],EAX
005D67E0  C7 83 91 21 00 00 00 65 00 00  MOV dword ptr [EBX + 0x2191],0x6500
005D67EA  89 B3 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],ESI
005D67F0  89 71 0C                  MOV dword ptr [ECX + 0xc],ESI
005D67F3  8D 4D CC                  LEA ECX,[EBP + -0x34]
005D67F6  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005D67FA  83 E9 41                  SUB ECX,0x41
005D67FD  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_005d6800:
005D6800  8A 54 0E 41               MOV DL,byte ptr [ESI + ECX*0x1 + 0x41]
005D6804  8D 46 41                  LEA EAX,[ESI + 0x41]
005D6807  84 D2                     TEST DL,DL
005D6809  74 60                     JZ 0x005d686b
005D680B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005D6811  50                        PUSH EAX
005D6812  52                        PUSH EDX
005D6813  68 4A 1F 00 00            PUSH 0x1f4a
005D6818  8D BB 33 1E 00 00         LEA EDI,[EBX + 0x1e33]
005D681E  E8 1D 99 0D 00            CALL 0x006b0140
005D6823  50                        PUSH EAX
005D6824  68 08 D5 7C 00            PUSH 0x7cd508
005D6829  57                        PUSH EDI
005D682A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005D6830  8B 83 2F 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e2f]
005D6836  83 C4 10                  ADD ESP,0x10
005D6839  89 B3 37 1F 00 00         MOV dword ptr [EBX + 0x1f37],ESI
005D683F  57                        PUSH EDI
005D6840  50                        PUSH EAX
005D6841  E8 7A 79 0D 00            CALL 0x006ae1c0
005D6846  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005D6849  33 C9                     XOR ECX,ECX
005D684B  8A 4A 4A                  MOV CL,byte ptr [EDX + 0x4a]
005D684E  3B CE                     CMP ECX,ESI
005D6850  75 0E                     JNZ 0x005d6860
005D6852  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005D6855  25 FF 00 00 00            AND EAX,0xff
005D685A  89 83 A1 21 00 00         MOV dword ptr [EBX + 0x21a1],EAX
LAB_005d6860:
005D6860  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005D6863  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
005D6866  FE C0                     INC AL
005D6868  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
LAB_005d686b:
005D686B  46                        INC ESI
005D686C  83 FE 08                  CMP ESI,0x8
005D686F  7C 8F                     JL 0x005d6800
005D6871  8B 8B 2F 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e2f]
005D6877  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005D687D  3C 06                     CMP AL,0x6
005D687F  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005D6882  89 93 A9 21 00 00         MOV dword ptr [EBX + 0x21a9],EDX
005D6888  74 0D                     JZ 0x005d6897
005D688A  3C 01                     CMP AL,0x1
005D688C  74 09                     JZ 0x005d6897
005D688E  3C 02                     CMP AL,0x2
005D6890  B8 6B 02 00 00            MOV EAX,0x26b
005D6895  75 05                     JNZ 0x005d689c
LAB_005d6897:
005D6897  B8 AB 02 00 00            MOV EAX,0x2ab
LAB_005d689c:
005D689C  89 83 C5 21 00 00         MOV dword ptr [EBX + 0x21c5],EAX
005D68A2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005D68A5  C7 83 CD 21 00 00 46 00 00 00  MOV dword ptr [EBX + 0x21cd],0x46
005D68AF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005D68B2  8D 44 80 41               LEA EAX,[EAX + EAX*0x4 + 0x41]
005D68B6  89 83 C9 21 00 00         MOV dword ptr [EBX + 0x21c9],EAX
005D68BC  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D68C2  8B 71 34                  MOV ESI,dword ptr [ECX + 0x34]
005D68C5  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005D68CB  85 C0                     TEST EAX,EAX
005D68CD  74 09                     JZ 0x005d68d8
005D68CF  56                        PUSH ESI
005D68D0  E8 BB 9E 13 00            CALL 0x00710790
005D68D5  83 C4 04                  ADD ESP,0x4
LAB_005d68d8:
005D68D8  8B 96 8A 00 00 00         MOV EDX,dword ptr [ESI + 0x8a]
005D68DE  89 93 A5 21 00 00         MOV dword ptr [EBX + 0x21a5],EDX
005D68E4  E9 B2 F8 FF FF            JMP 0x005d619b
LAB_005d68e9:
005D68E9  8A 55 DC                  MOV DL,byte ptr [EBP + -0x24]
005D68EC  E9 B9 FE FF FF            JMP 0x005d67aa
LAB_005d68f1:
005D68F1  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005D68F7  80 FA FF                  CMP DL,0xff
005D68FA  0F 84 FD 00 00 00         JZ 0x005d69fd
005D6900  8A 4E 02                  MOV CL,byte ptr [ESI + 0x2]
005D6903  80 F9 FF                  CMP CL,0xff
005D6906  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
005D6909  0F 84 EE 00 00 00         JZ 0x005d69fd
005D690F  3A D1                     CMP DL,CL
005D6911  0F 84 E6 00 00 00         JZ 0x005d69fd
005D6917  80 7E 04 04               CMP byte ptr [ESI + 0x4],0x4
005D691B  0F 85 C9 00 00 00         JNZ 0x005d69ea
005D6921  8A C1                     MOV AL,CL
005D6923  3A D0                     CMP DL,AL
005D6925  88 45 D8                  MOV byte ptr [EBP + -0x28],AL
005D6928  75 04                     JNZ 0x005d692e
005D692A  33 C0                     XOR EAX,EAX
005D692C  EB 6D                     JMP 0x005d699b
LAB_005d692e:
005D692E  33 C0                     XOR EAX,EAX
005D6930  8A C2                     MOV AL,DL
005D6932  8B F0                     MOV ESI,EAX
005D6934  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005D6937  25 FF 00 00 00            AND EAX,0xff
005D693C  8A 8C F0 4F 8A 80 00      MOV CL,byte ptr [EAX + ESI*0x8 + 0x808a4f]
005D6943  84 C9                     TEST CL,CL
005D6945  75 10                     JNZ 0x005d6957
005D6947  38 8C C6 4F 8A 80 00      CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],CL
005D694E  75 07                     JNZ 0x005d6957
005D6950  B8 FE FF FF FF            MOV EAX,0xfffffffe
005D6955  EB 41                     JMP 0x005d6998
LAB_005d6957:
005D6957  80 F9 01                  CMP CL,0x1
005D695A  75 0F                     JNZ 0x005d696b
005D695C  80 BC C6 4F 8A 80 00 00   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x0
005D6964  75 05                     JNZ 0x005d696b
005D6966  83 C8 FF                  OR EAX,0xffffffff
005D6969  EB 2D                     JMP 0x005d6998
LAB_005d696b:
005D696B  84 C9                     TEST CL,CL
005D696D  75 11                     JNZ 0x005d6980
005D696F  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
005D6977  75 07                     JNZ 0x005d6980
005D6979  B8 01 00 00 00            MOV EAX,0x1
005D697E  EB 18                     JMP 0x005d6998
LAB_005d6980:
005D6980  80 F9 01                  CMP CL,0x1
005D6983  75 11                     JNZ 0x005d6996
005D6985  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
005D698D  75 07                     JNZ 0x005d6996
005D698F  B8 02 00 00 00            MOV EAX,0x2
005D6994  EB 02                     JMP 0x005d6998
LAB_005d6996:
005D6996  33 C0                     XOR EAX,EAX
LAB_005d6998:
005D6998  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_005d699b:
005D699B  83 C0 02                  ADD EAX,0x2
005D699E  83 F8 04                  CMP EAX,0x4
005D69A1  77 53                     JA 0x005d69f6
switchD_005d69a3::switchD:
005D69A3  FF 24 85 64 70 5D 00      JMP dword ptr [EAX*0x4 + 0x5d7064]
switchD_005d69a3::caseD_fffffffe:
005D69AA  6A 01                     PUSH 0x1
005D69AC  51                        PUSH ECX
005D69AD  52                        PUSH EDX
005D69AE  B9 20 76 80 00            MOV ECX,0x807620
005D69B3  E8 5A A8 E2 FF            CALL 0x00401212
005D69B8  EB 3C                     JMP 0x005d69f6
switchD_005d69a3::caseD_2:
005D69BA  6A 00                     PUSH 0x0
005D69BC  51                        PUSH ECX
005D69BD  52                        PUSH EDX
005D69BE  B9 20 76 80 00            MOV ECX,0x807620
005D69C3  E8 4A A8 E2 FF            CALL 0x00401212
005D69C8  EB 2C                     JMP 0x005d69f6
switchD_005d69a3::caseD_ffffffff:
005D69CA  6A 01                     PUSH 0x1
005D69CC  52                        PUSH EDX
005D69CD  51                        PUSH ECX
005D69CE  B9 20 76 80 00            MOV ECX,0x807620
005D69D3  E8 3A A8 E2 FF            CALL 0x00401212
005D69D8  EB 1C                     JMP 0x005d69f6
switchD_005d69a3::caseD_1:
005D69DA  6A 00                     PUSH 0x0
005D69DC  52                        PUSH EDX
005D69DD  51                        PUSH ECX
005D69DE  B9 20 76 80 00            MOV ECX,0x807620
005D69E3  E8 2A A8 E2 FF            CALL 0x00401212
005D69E8  EB 0C                     JMP 0x005d69f6
LAB_005d69ea:
005D69EA  51                        PUSH ECX
005D69EB  52                        PUSH EDX
005D69EC  B9 20 76 80 00            MOV ECX,0x807620
005D69F1  E8 AA C9 E2 FF            CALL 0x004033a0
switchD_005d69a3::caseD_0:
005D69F6  8B 13                     MOV EDX,dword ptr [EBX]
005D69F8  8B CB                     MOV ECX,EBX
005D69FA  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
switchD_005d6072::caseD_4:
005D69FD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D6A00  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
005D6A03  3D 7F 6A 00 00            CMP EAX,0x6a7f
005D6A08  0F 82 DA 05 00 00         JC 0x005d6fe8
005D6A0E  3D FF 6A 00 00            CMP EAX,0x6aff
005D6A13  0F 83 CF 05 00 00         JNC 0x005d6fe8
005D6A19  8D B0 81 95 FF FF         LEA ESI,[EAX + 0xffff9581]
005D6A1F  C1 EE 03                  SHR ESI,0x3
005D6A22  40                        INC EAX
005D6A23  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
005D6A26  83 E0 07                  AND EAX,0x7
005D6A29  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
005D6A2C  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
005D6A2F  8B C8                     MOV ECX,EAX
005D6A31  8B 11                     MOV EDX,dword ptr [ECX]
005D6A33  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005D6A36  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005D6A39  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005D6A3C  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005D6A3F  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005D6A42  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
005D6A45  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005D6A48  8B 10                     MOV EDX,dword ptr [EAX]
005D6A4A  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005D6A50  81 EA 13 01 00 00         SUB EDX,0x113
005D6A56  85 C9                     TEST ECX,ECX
005D6A58  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
005D6A5B  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
005D6A62  74 1A                     JZ 0x005d6a7e
005D6A64  8B 93 88 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f88]
005D6A6A  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
005D6A6D  03 D6                     ADD EDX,ESI
005D6A6F  3B D7                     CMP EDX,EDI
005D6A71  73 0B                     JNC 0x005d6a7e
005D6A73  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
005D6A76  0F AF FA                  IMUL EDI,EDX
005D6A79  03 79 1C                  ADD EDI,dword ptr [ECX + 0x1c]
005D6A7C  EB 02                     JMP 0x005d6a80
LAB_005d6a7e:
005D6A7E  33 FF                     XOR EDI,EDI
LAB_005d6a80:
005D6A80  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005D6A83  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005D6A86  8B 00                     MOV EAX,dword ptr [EAX]
005D6A88  68 FF 00 00 00            PUSH 0xff
005D6A8D  51                        PUSH ECX
005D6A8E  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6A95  52                        PUSH EDX
005D6A96  2D 13 01 00 00            SUB EAX,0x113
005D6A9B  6A 00                     PUSH 0x0
005D6A9D  50                        PUSH EAX
005D6A9E  6A 00                     PUSH 0x0
005D6AA0  51                        PUSH ECX
005D6AA1  E8 CA D6 0D 00            CALL 0x006b4170
005D6AA6  85 FF                     TEST EDI,EDI
005D6AA8  0F 84 10 05 00 00         JZ 0x005d6fbe
005D6AAE  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
005D6AB1  8D 42 FF                  LEA EAX,[EDX + -0x1]
005D6AB4  83 F8 04                  CMP EAX,0x4
005D6AB7  0F 87 01 05 00 00         JA 0x005d6fbe
switchD_005d6abd::switchD:
005D6ABD  FF 24 85 78 70 5D 00      JMP dword ptr [EAX*0x4 + 0x5d7078]
switchD_005d6abd::caseD_1:
005D6AC4  80 3F 00                  CMP byte ptr [EDI],0x0
005D6AC7  0F 84 F1 04 00 00         JZ 0x005d6fbe
005D6ACD  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005D6AD0  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005D6AD3  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005D6AD6  40                        INC EAX
005D6AD7  42                        INC EDX
005D6AD8  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005D6ADB  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005D6ADE  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005D6AE1  B8 02 00 00 00            MOV EAX,0x2
005D6AE6  6A FF                     PUSH -0x1
005D6AE8  2B C8                     SUB ECX,EAX
005D6AEA  2B D0                     SUB EDX,EAX
005D6AEC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005D6AEF  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005D6AF2  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005D6AF5  8D 55 E0                  LEA EDX,[EBP + -0x20]
005D6AF8  66 8B 48 14               MOV CX,word ptr [EAX + 0x14]
005D6AFC  8B 84 B3 F4 20 00 00      MOV EAX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6B03  66 F7 D9                  NEG CX
005D6B06  1B C9                     SBB ECX,ECX
005D6B08  83 E1 FC                  AND ECX,0xfffffffc
005D6B0B  83 C1 23                  ADD ECX,0x23
005D6B0E  51                        PUSH ECX
005D6B0F  6A 00                     PUSH 0x0
005D6B11  52                        PUSH EDX
005D6B12  50                        PUSH EAX
005D6B13  8B CB                     MOV ECX,EBX
005D6B15  E8 45 E1 E2 FF            CALL 0x00404c5f
005D6B1A  8A 47 02                  MOV AL,byte ptr [EDI + 0x2]
005D6B1D  3C FF                     CMP AL,0xff
005D6B1F  0F 84 99 04 00 00         JZ 0x005d6fbe
005D6B25  25 FF 00 00 00            AND EAX,0xff
005D6B2A  83 F8 07                  CMP EAX,0x7
005D6B2D  77 3F                     JA 0x005d6b6e
switchD_005d6b2f::switchD:
005D6B2F  FF 24 85 8C 70 5D 00      JMP dword ptr [EAX*0x4 + 0x5d708c]
switchD_005d6b2f::caseD_0:
005D6B36  B8 FC 00 00 00            MOV EAX,0xfc
005D6B3B  EB 36                     JMP 0x005d6b73
switchD_005d6b2f::caseD_1:
005D6B3D  B8 FA 00 00 00            MOV EAX,0xfa
005D6B42  EB 2F                     JMP 0x005d6b73
switchD_005d6b2f::caseD_2:
005D6B44  B8 FB 00 00 00            MOV EAX,0xfb
005D6B49  EB 28                     JMP 0x005d6b73
switchD_005d6b2f::caseD_3:
005D6B4B  B8 F9 00 00 00            MOV EAX,0xf9
005D6B50  EB 21                     JMP 0x005d6b73
switchD_005d6b2f::caseD_4:
005D6B52  B8 FD 00 00 00            MOV EAX,0xfd
005D6B57  EB 1A                     JMP 0x005d6b73
switchD_005d6b2f::caseD_5:
005D6B59  B8 FE 00 00 00            MOV EAX,0xfe
005D6B5E  EB 13                     JMP 0x005d6b73
switchD_005d6b2f::caseD_6:
005D6B60  B8 F3 00 00 00            MOV EAX,0xf3
005D6B65  EB 0C                     JMP 0x005d6b73
switchD_005d6b2f::caseD_7:
005D6B67  B8 07 00 00 00            MOV EAX,0x7
005D6B6C  EB 05                     JMP 0x005d6b73
switchD_005d6b2f::default:
005D6B6E  B8 FF 00 00 00            MOV EAX,0xff
LAB_005d6b73:
005D6B73  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005D6B76  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005D6B79  83 C1 FC                  ADD ECX,-0x4
005D6B7C  50                        PUSH EAX
005D6B7D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005D6B80  51                        PUSH ECX
005D6B81  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005D6B84  83 C2 FC                  ADD EDX,-0x4
005D6B87  83 C0 02                  ADD EAX,0x2
005D6B8A  52                        PUSH EDX
005D6B8B  8B 94 B3 F4 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6B92  83 C1 02                  ADD ECX,0x2
005D6B95  50                        PUSH EAX
005D6B96  51                        PUSH ECX
005D6B97  6A 00                     PUSH 0x0
005D6B99  52                        PUSH EDX
005D6B9A  E8 D1 D5 0D 00            CALL 0x006b4170
005D6B9F  E9 1A 04 00 00            JMP 0x005d6fbe
switchD_005d6abd::caseD_2:
005D6BA4  80 3F 00                  CMP byte ptr [EDI],0x0
005D6BA7  0F 84 11 04 00 00         JZ 0x005d6fbe
005D6BAD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005D6BB0  6A 67                     PUSH 0x67
005D6BB2  8D 55 E0                  LEA EDX,[EBP + -0x20]
005D6BB5  66 8B 48 14               MOV CX,word ptr [EAX + 0x14]
005D6BB9  8B 84 B3 F4 20 00 00      MOV EAX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6BC0  66 F7 D9                  NEG CX
005D6BC3  1B C9                     SBB ECX,ECX
005D6BC5  83 E1 FC                  AND ECX,0xfffffffc
005D6BC8  83 C1 23                  ADD ECX,0x23
005D6BCB  51                        PUSH ECX
005D6BCC  6A 02                     PUSH 0x2
005D6BCE  52                        PUSH EDX
005D6BCF  50                        PUSH EAX
005D6BD0  8B CB                     MOV ECX,EBX
005D6BD2  E8 88 E0 E2 FF            CALL 0x00404c5f
005D6BD7  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005D6BDA  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005D6BDD  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005D6BE0  51                        PUSH ECX
005D6BE1  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005D6BE4  52                        PUSH EDX
005D6BE5  8B 94 B3 F4 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6BEC  50                        PUSH EAX
005D6BED  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D6BF2  51                        PUSH ECX
005D6BF3  6A 00                     PUSH 0x0
005D6BF5  52                        PUSH EDX
005D6BF6  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D6BF9  E8 92 9E 13 00            CALL 0x00710a90
005D6BFE  33 C0                     XOR EAX,EAX
005D6C00  8A 47 03                  MOV AL,byte ptr [EDI + 0x3]
005D6C03  48                        DEC EAX
005D6C04  74 2C                     JZ 0x005d6c32
005D6C06  48                        DEC EAX
005D6C07  74 07                     JZ 0x005d6c10
005D6C09  BF 4C A2 7C 00            MOV EDI,0x7ca24c
005D6C0E  EB 27                     JMP 0x005d6c37
LAB_005d6c10:
005D6C10  BF 48 A2 7C 00            MOV EDI,0x7ca248
005D6C15  83 C9 FF                  OR ECX,0xffffffff
005D6C18  33 C0                     XOR EAX,EAX
005D6C1A  F2 AE                     SCASB.REPNE ES:EDI
005D6C1C  F7 D1                     NOT ECX
005D6C1E  2B F9                     SUB EDI,ECX
005D6C20  8B C1                     MOV EAX,ECX
005D6C22  8B F7                     MOV ESI,EDI
005D6C24  BF 3A F3 80 00            MOV EDI,0x80f33a
005D6C29  C1 E9 02                  SHR ECX,0x2
005D6C2C  F3 A5                     MOVSD.REP ES:EDI,ESI
005D6C2E  8B C8                     MOV ECX,EAX
005D6C30  EB 20                     JMP 0x005d6c52
LAB_005d6c32:
005D6C32  BF 50 A2 7C 00            MOV EDI,0x7ca250
LAB_005d6c37:
005D6C37  83 C9 FF                  OR ECX,0xffffffff
005D6C3A  33 C0                     XOR EAX,EAX
005D6C3C  F2 AE                     SCASB.REPNE ES:EDI
005D6C3E  F7 D1                     NOT ECX
005D6C40  2B F9                     SUB EDI,ECX
005D6C42  8B D1                     MOV EDX,ECX
005D6C44  8B F7                     MOV ESI,EDI
005D6C46  BF 3A F3 80 00            MOV EDI,0x80f33a
005D6C4B  C1 E9 02                  SHR ECX,0x2
005D6C4E  F3 A5                     MOVSD.REP ES:EDI,ESI
005D6C50  8B CA                     MOV ECX,EDX
LAB_005d6c52:
005D6C52  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D6C57  83 E1 03                  AND ECX,0x3
005D6C5A  6A 02                     PUSH 0x2
005D6C5C  6A FF                     PUSH -0x1
005D6C5E  F3 A4                     MOVSB.REP ES:EDI,ESI
005D6C60  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D6C63  6A FF                     PUSH -0x1
005D6C65  68 3A F3 80 00            PUSH 0x80f33a
005D6C6A  E8 51 AD 13 00            CALL 0x007119c0
005D6C6F  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
005D6C72  E9 47 03 00 00            JMP 0x005d6fbe
switchD_005d6abd::caseD_3:
005D6C77  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D6C7A  6A 67                     PUSH 0x67
005D6C7C  8D 45 E0                  LEA EAX,[EBP + -0x20]
005D6C7F  66 8B 51 14               MOV DX,word ptr [ECX + 0x14]
005D6C83  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6C8A  66 F7 DA                  NEG DX
005D6C8D  1B D2                     SBB EDX,EDX
005D6C8F  83 E2 FC                  AND EDX,0xfffffffc
005D6C92  83 C2 23                  ADD EDX,0x23
005D6C95  52                        PUSH EDX
005D6C96  6A 02                     PUSH 0x2
005D6C98  50                        PUSH EAX
005D6C99  51                        PUSH ECX
005D6C9A  8B CB                     MOV ECX,EBX
005D6C9C  E8 BE DF E2 FF            CALL 0x00404c5f
005D6CA1  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005D6CA4  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005D6CA7  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005D6CAA  52                        PUSH EDX
005D6CAB  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005D6CAE  50                        PUSH EAX
005D6CAF  8B 84 B3 F4 20 00 00      MOV EAX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6CB6  51                        PUSH ECX
005D6CB7  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D6CBD  52                        PUSH EDX
005D6CBE  6A 00                     PUSH 0x0
005D6CC0  50                        PUSH EAX
005D6CC1  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005D6CC4  E8 C7 9D 13 00            CALL 0x00710a90
005D6CC9  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005D6CCC  6A 02                     PUSH 0x2
005D6CCE  6A FF                     PUSH -0x1
005D6CD0  6A FF                     PUSH -0x1
005D6CD2  52                        PUSH EDX
005D6CD3  68 10 23 7C 00            PUSH 0x7c2310
005D6CD8  57                        PUSH EDI
005D6CD9  8B CB                     MOV ECX,EBX
005D6CDB  E8 2D AF E2 FF            CALL 0x00401c0d
005D6CE0  50                        PUSH EAX
005D6CE1  E9 8A 00 00 00            JMP 0x005d6d70
switchD_005d6abd::caseD_4:
005D6CE6  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6CED  6A 67                     PUSH 0x67
005D6CEF  6A 67                     PUSH 0x67
005D6CF1  8D 45 E0                  LEA EAX,[EBP + -0x20]
005D6CF4  6A 02                     PUSH 0x2
005D6CF6  50                        PUSH EAX
005D6CF7  51                        PUSH ECX
005D6CF8  8B CB                     MOV ECX,EBX
005D6CFA  E8 60 DF E2 FF            CALL 0x00404c5f
005D6CFF  33 C0                     XOR EAX,EAX
005D6D01  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
005D6D04  83 E8 02                  SUB EAX,0x2
005D6D07  0F 84 88 00 00 00         JZ 0x005d6d95
005D6D0D  83 E8 02                  SUB EAX,0x2
005D6D10  0F 85 A8 02 00 00         JNZ 0x005d6fbe
005D6D16  8B 47 50                  MOV EAX,dword ptr [EDI + 0x50]
005D6D19  33 C9                     XOR ECX,ECX
005D6D1B  8A 4F 05                  MOV CL,byte ptr [EDI + 0x5]
005D6D1E  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
005D6D21  73 0B                     JNC 0x005d6d2e
005D6D23  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
005D6D26  0F AF F9                  IMUL EDI,ECX
005D6D29  03 78 1C                  ADD EDI,dword ptr [EAX + 0x1c]
005D6D2C  EB 02                     JMP 0x005d6d30
LAB_005d6d2e:
005D6D2E  33 FF                     XOR EDI,EDI
LAB_005d6d30:
005D6D30  85 FF                     TEST EDI,EDI
005D6D32  0F 84 86 02 00 00         JZ 0x005d6fbe
005D6D38  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005D6D3B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005D6D3E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
005D6D41  52                        PUSH EDX
005D6D42  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
005D6D45  50                        PUSH EAX
005D6D46  8B 84 B3 F4 20 00 00      MOV EAX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6D4D  51                        PUSH ECX
005D6D4E  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D6D54  52                        PUSH EDX
005D6D55  6A 00                     PUSH 0x0
005D6D57  50                        PUSH EAX
005D6D58  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005D6D5B  E8 30 9D 13 00            CALL 0x00710a90
005D6D60  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005D6D63  6A 02                     PUSH 0x2
005D6D65  6A FF                     PUSH -0x1
005D6D67  6A FF                     PUSH -0x1
005D6D69  52                        PUSH EDX
005D6D6A  68 74 72 7C 00            PUSH 0x7c7274
005D6D6F  57                        PUSH EDI
LAB_005d6d70:
005D6D70  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D6D75  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D6D78  51                        PUSH ECX
005D6D79  E8 F1 C4 E2 FF            CALL 0x0040326f
005D6D7E  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D6D84  83 C4 10                  ADD ESP,0x10
005D6D87  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005D6D8A  50                        PUSH EAX
005D6D8B  E8 30 AC 13 00            CALL 0x007119c0
005D6D90  E9 29 02 00 00            JMP 0x005d6fbe
LAB_005d6d95:
005D6D95  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005D6D98  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005D6D9B  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005D6D9E  50                        PUSH EAX
005D6D9F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
005D6DA2  51                        PUSH ECX
005D6DA3  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6DAA  52                        PUSH EDX
005D6DAB  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005D6DB1  50                        PUSH EAX
005D6DB2  6A 00                     PUSH 0x0
005D6DB4  51                        PUSH ECX
005D6DB5  8B 4A 34                  MOV ECX,dword ptr [EDX + 0x34]
005D6DB8  E8 D3 9C 13 00            CALL 0x00710a90
005D6DBD  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005D6DC0  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D6DC6  6A 02                     PUSH 0x2
005D6DC8  6A FF                     PUSH -0x1
005D6DCA  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
005D6DCD  6A FF                     PUSH -0x1
005D6DCF  50                        PUSH EAX
005D6DD0  83 C7 0A                  ADD EDI,0xa
005D6DD3  68 74 72 7C 00            PUSH 0x7c7274
005D6DD8  57                        PUSH EDI
005D6DD9  52                        PUSH EDX
005D6DDA  E8 90 C4 E2 FF            CALL 0x0040326f
005D6DDF  83 C4 10                  ADD ESP,0x10
005D6DE2  50                        PUSH EAX
005D6DE3  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D6DE8  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D6DEB  E8 D0 AB 13 00            CALL 0x007119c0
005D6DF0  E9 C9 01 00 00            JMP 0x005d6fbe
switchD_005d6abd::caseD_5:
005D6DF5  80 3F 00                  CMP byte ptr [EDI],0x0
005D6DF8  0F 84 C0 01 00 00         JZ 0x005d6fbe
005D6DFE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D6E01  6A 67                     PUSH 0x67
005D6E03  8D 45 E0                  LEA EAX,[EBP + -0x20]
005D6E06  66 8B 51 14               MOV DX,word ptr [ECX + 0x14]
005D6E0A  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6E11  66 F7 DA                  NEG DX
005D6E14  1B D2                     SBB EDX,EDX
005D6E16  83 E2 FC                  AND EDX,0xfffffffc
005D6E19  83 C2 23                  ADD EDX,0x23
005D6E1C  52                        PUSH EDX
005D6E1D  6A 02                     PUSH 0x2
005D6E1F  50                        PUSH EAX
005D6E20  51                        PUSH ECX
005D6E21  8B CB                     MOV ECX,EBX
005D6E23  E8 37 DE E2 FF            CALL 0x00404c5f
005D6E28  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
005D6E2B  84 C0                     TEST AL,AL
005D6E2D  0F 84 8B 01 00 00         JZ 0x005d6fbe
005D6E33  A0 8F 8A 80 00            MOV AL,[0x00808a8f]
005D6E38  84 C0                     TEST AL,AL
005D6E3A  74 72                     JZ 0x005d6eae
005D6E3C  A1 18 76 80 00            MOV EAX,[0x00807618]
005D6E41  33 D2                     XOR EDX,EDX
005D6E43  8A 57 4A                  MOV DL,byte ptr [EDI + 0x4a]
005D6E46  83 C2 41                  ADD EDX,0x41
005D6E49  52                        PUSH EDX
005D6E4A  50                        PUSH EAX
005D6E4B  68 4A 1F 00 00            PUSH 0x1f4a
005D6E50  E8 EB 92 0D 00            CALL 0x006b0140
005D6E55  50                        PUSH EAX
005D6E56  68 08 D5 7C 00            PUSH 0x7cd508
005D6E5B  68 3A F3 80 00            PUSH 0x80f33a
005D6E60  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005D6E66  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005D6E69  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005D6E6C  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005D6E6F  83 C4 10                  ADD ESP,0x10
005D6E72  51                        PUSH ECX
005D6E73  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005D6E76  52                        PUSH EDX
005D6E77  8B 94 B3 F4 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6E7E  50                        PUSH EAX
005D6E7F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005D6E84  51                        PUSH ECX
005D6E85  6A 00                     PUSH 0x0
005D6E87  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005D6E8A  52                        PUSH EDX
005D6E8B  E8 00 9C 13 00            CALL 0x00710a90
005D6E90  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005D6E96  6A 02                     PUSH 0x2
005D6E98  6A FF                     PUSH -0x1
005D6E9A  6A FF                     PUSH -0x1
005D6E9C  8B 49 34                  MOV ECX,dword ptr [ECX + 0x34]
005D6E9F  68 3A F3 80 00            PUSH 0x80f33a
005D6EA4  E8 17 AB 13 00            CALL 0x007119c0
005D6EA9  E9 10 01 00 00            JMP 0x005d6fbe
LAB_005d6eae:
005D6EAE  A0 4D 87 80 00            MOV AL,[0x0080874d]
005D6EB3  3C FF                     CMP AL,0xff
005D6EB5  0F 84 03 01 00 00         JZ 0x005d6fbe
005D6EBB  8A 4F 02                  MOV CL,byte ptr [EDI + 0x2]
005D6EBE  80 F9 FF                  CMP CL,0xff
005D6EC1  0F 84 F7 00 00 00         JZ 0x005d6fbe
005D6EC7  3A C1                     CMP AL,CL
005D6EC9  0F 84 EF 00 00 00         JZ 0x005d6fbe
005D6ECF  C7 45 DC FF FF FF FF      MOV dword ptr [EBP + -0x24],0xffffffff
005D6ED6  88 4D D8                  MOV byte ptr [EBP + -0x28],CL
005D6ED9  74 6B                     JZ 0x005d6f46
005D6EDB  33 D2                     XOR EDX,EDX
005D6EDD  8A D0                     MOV DL,AL
005D6EDF  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005D6EE2  8B FA                     MOV EDI,EDX
005D6EE4  25 FF 00 00 00            AND EAX,0xff
005D6EE9  8A 8C F8 4F 8A 80 00      MOV CL,byte ptr [EAX + EDI*0x8 + 0x808a4f]
005D6EF0  84 C9                     TEST CL,CL
005D6EF2  75 12                     JNZ 0x005d6f06
005D6EF4  8A 94 C7 4F 8A 80 00      MOV DL,byte ptr [EDI + EAX*0x8 + 0x808a4f]
005D6EFB  84 D2                     TEST DL,DL
005D6EFD  75 07                     JNZ 0x005d6f06
005D6EFF  B8 FE FF FF FF            MOV EAX,0xfffffffe
005D6F04  EB 42                     JMP 0x005d6f48
LAB_005d6f06:
005D6F06  80 F9 01                  CMP CL,0x1
005D6F09  75 10                     JNZ 0x005d6f1b
005D6F0B  8A 94 C7 4F 8A 80 00      MOV DL,byte ptr [EDI + EAX*0x8 + 0x808a4f]
005D6F12  84 D2                     TEST DL,DL
005D6F14  75 05                     JNZ 0x005d6f1b
005D6F16  83 C8 FF                  OR EAX,0xffffffff
005D6F19  EB 2D                     JMP 0x005d6f48
LAB_005d6f1b:
005D6F1B  84 C9                     TEST CL,CL
005D6F1D  75 11                     JNZ 0x005d6f30
005D6F1F  80 BC C7 4F 8A 80 00 01   CMP byte ptr [EDI + EAX*0x8 + 0x808a4f],0x1
005D6F27  75 07                     JNZ 0x005d6f30
005D6F29  B8 01 00 00 00            MOV EAX,0x1
005D6F2E  EB 18                     JMP 0x005d6f48
LAB_005d6f30:
005D6F30  80 F9 01                  CMP CL,0x1
005D6F33  75 11                     JNZ 0x005d6f46
005D6F35  80 BC C7 4F 8A 80 00 01   CMP byte ptr [EDI + EAX*0x8 + 0x808a4f],0x1
005D6F3D  75 07                     JNZ 0x005d6f46
005D6F3F  B8 02 00 00 00            MOV EAX,0x2
005D6F44  EB 02                     JMP 0x005d6f48
LAB_005d6f46:
005D6F46  33 C0                     XOR EAX,EAX
LAB_005d6f48:
005D6F48  83 C0 02                  ADD EAX,0x2
005D6F4B  83 F8 04                  CMP EAX,0x4
005D6F4E  77 20                     JA 0x005d6f70
switchD_005d6f50::switchD:
005D6F50  FF 24 85 AC 70 5D 00      JMP dword ptr [EAX*0x4 + 0x5d70ac]
switchD_005d6f50::caseD_fffffffe:
005D6F57  33 C0                     XOR EAX,EAX
005D6F59  EB 18                     JMP 0x005d6f73
switchD_005d6f50::caseD_2:
005D6F5B  B8 03 00 00 00            MOV EAX,0x3
005D6F60  EB 11                     JMP 0x005d6f73
switchD_005d6f50::caseD_ffffffff:
005D6F62  B8 02 00 00 00            MOV EAX,0x2
005D6F67  EB 0A                     JMP 0x005d6f73
switchD_005d6f50::caseD_1:
005D6F69  B8 01 00 00 00            MOV EAX,0x1
005D6F6E  EB 03                     JMP 0x005d6f73
switchD_005d6f50::caseD_0:
005D6F70  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
LAB_005d6f73:
005D6F73  48                        DEC EAX
005D6F74  78 48                     JS 0x005d6fbe
005D6F76  50                        PUSH EAX
005D6F77  8B 83 4B 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f4b]
005D6F7D  50                        PUSH EAX
005D6F7E  E8 1D 44 13 00            CALL 0x0070b3a0
005D6F83  8B C8                     MOV ECX,EAX
005D6F85  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005D6F88  51                        PUSH ECX
005D6F89  6A 06                     PUSH 0x6
005D6F8B  2B 41 08                  SUB EAX,dword ptr [ECX + 0x8]
005D6F8E  99                        CDQ
005D6F8F  2B C2                     SUB EAX,EDX
005D6F91  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005D6F94  D1 F8                     SAR EAX,0x1
005D6F96  8D 44 10 01               LEA EAX,[EAX + EDX*0x1 + 0x1]
005D6F9A  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005D6F9D  50                        PUSH EAX
005D6F9E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005D6FA1  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005D6FA4  2B C2                     SUB EAX,EDX
005D6FA6  99                        CDQ
005D6FA7  2B C2                     SUB EAX,EDX
005D6FA9  D1 F8                     SAR EAX,0x1
005D6FAB  03 C1                     ADD EAX,ECX
005D6FAD  8B 8C B3 F4 20 00 00      MOV ECX,dword ptr [EBX + ESI*0x4 + 0x20f4]
005D6FB4  50                        PUSH EAX
005D6FB5  51                        PUSH ECX
005D6FB6  E8 6E C2 E2 FF            CALL 0x00403229
005D6FBB  83 C4 1C                  ADD ESP,0x1c
switchD_005d6abd::default:
005D6FBE  8B 94 B3 CC 20 00 00      MOV EDX,dword ptr [EBX + ESI*0x4 + 0x20cc]
005D6FC5  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005D6FCA  52                        PUSH EDX
005D6FCB  50                        PUSH EAX
005D6FCC  E8 FF C5 0D 00            CALL 0x006b35d0
005D6FD1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D6FD4  66 83 79 14 03            CMP word ptr [ECX + 0x14],0x3
005D6FD9  75 0D                     JNZ 0x005d6fe8
005D6FDB  6A FF                     PUSH -0x1
005D6FDD  6A 01                     PUSH 0x1
005D6FDF  6A 09                     PUSH 0x9
005D6FE1  8B CB                     MOV ECX,EBX
005D6FE3  E8 09 DC E2 FF            CALL 0x00404bf1
LAB_005d6fe8:
005D6FE8  8B 95 3C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff3c]
005D6FEE  33 C0                     XOR EAX,EAX
005D6FF0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D6FF6  5F                        POP EDI
005D6FF7  5E                        POP ESI
005D6FF8  5B                        POP EBX
005D6FF9  8B E5                     MOV ESP,EBP
005D6FFB  5D                        POP EBP
005D6FFC  C2 04 00                  RET 0x4
LAB_005d6fff:
005D6FFF  8B 85 3C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff3c]
005D7005  68 A8 D5 7C 00            PUSH 0x7cd5a8
005D700A  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D700F  56                        PUSH ESI
005D7010  6A 00                     PUSH 0x0
005D7012  68 7D 02 00 00            PUSH 0x27d
005D7017  68 44 D5 7C 00            PUSH 0x7cd544
005D701C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D7021  E8 AA 64 0D 00            CALL 0x006ad4d0
005D7026  83 C4 18                  ADD ESP,0x18
005D7029  85 C0                     TEST EAX,EAX
005D702B  74 01                     JZ 0x005d702e
005D702D  CC                        INT3
LAB_005d702e:
005D702E  68 7D 02 00 00            PUSH 0x27d
005D7033  68 44 D5 7C 00            PUSH 0x7cd544
005D7038  6A 00                     PUSH 0x0
005D703A  56                        PUSH ESI
005D703B  E8 00 EE 0C 00            CALL 0x006a5e40
005D7040  5F                        POP EDI
005D7041  5E                        POP ESI
005D7042  B8 FF FF 00 00            MOV EAX,0xffff
005D7047  5B                        POP EBX
005D7048  8B E5                     MOV ESP,EBP
005D704A  5D                        POP EBP
005D704B  C2 04 00                  RET 0x4
