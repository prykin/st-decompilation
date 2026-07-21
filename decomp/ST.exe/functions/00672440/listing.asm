SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0064A970::FUN_00672440:
00672440  55                        PUSH EBP
00672441  8B EC                     MOV EBP,ESP
00672443  83 EC 60                  SUB ESP,0x60
00672446  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00672449  53                        PUSH EBX
0067244A  56                        PUSH ESI
0067244B  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0067244E  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00672454  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00672457  57                        PUSH EDI
00672458  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0067245B  83 CE FF                  OR ESI,0xffffffff
0067245E  8D 55 A0                  LEA EDX,[EBP + -0x60]
00672461  6A 00                     PUSH 0x0
00672463  50                        PUSH EAX
00672464  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00672467  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0067246E  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
00672471  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00672477  E8 74 B3 0B 00            CALL 0x0072d7f0
0067247C  83 C4 08                  ADD ESP,0x8
0067247F  85 C0                     TEST EAX,EAX
00672481  0F 85 48 03 00 00         JNZ 0x006727cf
00672487  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0067248A  6A 7F                     PUSH 0x7f
0067248C  68 A0 16 80 00            PUSH 0x8016a0
00672491  8D 4B 04                  LEA ECX,[EBX + 0x4]
00672494  51                        PUSH ECX
00672495  E8 A6 BE 0B 00            CALL 0x0072e340
0067249A  89 B3 84 00 00 00         MOV dword ptr [EBX + 0x84],ESI
006724A0  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006724A3  83 C4 0C                  ADD ESP,0xc
006724A6  85 F6                     TEST ESI,ESI
006724A8  74 0D                     JZ 0x006724b7
006724AA  B9 40 00 00 00            MOV ECX,0x40
006724AF  33 C0                     XOR EAX,EAX
006724B1  8B FE                     MOV EDI,ESI
006724B3  F3 AB                     STOSD.REP ES:EDI
006724B5  66 AB                     STOSW ES:EDI
LAB_006724b7:
006724B7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006724BA  85 C0                     TEST EAX,EAX
006724BC  0F 85 F9 02 00 00         JNZ 0x006727bb
LAB_006724c2:
006724C2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006724C5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006724C8  52                        PUSH EDX
006724C9  50                        PUSH EAX
006724CA  E8 AA 12 D9 FF            CALL 0x00403779
006724CF  8B F8                     MOV EDI,EAX
006724D1  83 C4 08                  ADD ESP,0x8
006724D4  85 FF                     TEST EDI,EDI
006724D6  0F 84 B5 02 00 00         JZ 0x00672791
006724DC  33 C0                     XOR EAX,EAX
006724DE  8A 07                     MOV AL,byte ptr [EDI]
006724E0  83 C0 F8                  ADD EAX,-0x8
006724E3  83 F8 03                  CMP EAX,0x3
006724E6  0F 87 38 01 00 00         JA 0x00672624
switchD_006724ec::switchD:
006724EC  FF 24 85 EC 27 67 00      JMP dword ptr [EAX*0x4 + 0x6727ec]
switchD_006724ec::caseD_b:
006724F3  0F BF 4F 01               MOVSX ECX,word ptr [EDI + 0x1]
006724F7  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006724FA  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
00672501  E9 AA 02 00 00            JMP 0x006727b0
switchD_006724ec::caseD_8:
00672506  85 F6                     TEST ESI,ESI
00672508  74 45                     JZ 0x0067254f
0067250A  66 83 3E 32               CMP word ptr [ESI],0x32
0067250E  7C 1F                     JL 0x0067252f
00672510  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0067251A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00672520  6A 79                     PUSH 0x79
00672522  68 24 2A 7D 00            PUSH 0x7d2a24
00672527  52                        PUSH EDX
00672528  6A 9A                     PUSH -0x66
0067252A  E8 11 39 03 00            CALL 0x006a5e40
LAB_0067252f:
0067252F  0F BF 06                  MOVSX EAX,word ptr [ESI]
00672532  57                        PUSH EDI
00672533  8B CB                     MOV ECX,EBX
00672535  C6 84 30 D0 00 00 00 08   MOV byte ptr [EAX + ESI*0x1 + 0xd0],0x8
0067253D  8B 13                     MOV EDX,dword ptr [EBX]
0067253F  FF 12                     CALL dword ptr [EDX]
00672541  0F BF 0E                  MOVSX ECX,word ptr [ESI]
00672544  89 44 8E 08               MOV dword ptr [ESI + ECX*0x4 + 0x8],EAX
00672548  66 FF 06                  INC word ptr [ESI]
0067254B  66 FF 46 04               INC word ptr [ESI + 0x4]
LAB_0067254f:
0067254F  FF 45 FC                  INC dword ptr [EBP + -0x4]
00672552  E9 59 02 00 00            JMP 0x006727b0
switchD_006724ec::caseD_9:
00672557  85 F6                     TEST ESI,ESI
00672559  74 46                     JZ 0x006725a1
0067255B  66 83 3E 32               CMP word ptr [ESI],0x32
0067255F  7C 1F                     JL 0x00672580
00672561  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0067256B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00672571  6A 79                     PUSH 0x79
00672573  68 24 2A 7D 00            PUSH 0x7d2a24
00672578  52                        PUSH EDX
00672579  6A 9A                     PUSH -0x66
0067257B  E8 C0 38 03 00            CALL 0x006a5e40
LAB_00672580:
00672580  0F BF 06                  MOVSX EAX,word ptr [ESI]
00672583  57                        PUSH EDI
00672584  8B CB                     MOV ECX,EBX
00672586  C6 84 30 D0 00 00 00 09   MOV byte ptr [EAX + ESI*0x1 + 0xd0],0x9
0067258E  8B 13                     MOV EDX,dword ptr [EBX]
00672590  FF 52 04                  CALL dword ptr [EDX + 0x4]
00672593  0F BF 06                  MOVSX EAX,word ptr [ESI]
00672596  D9 5C 86 08               FSTP float ptr [ESI + EAX*0x4 + 0x8]
0067259A  66 FF 06                  INC word ptr [ESI]
0067259D  66 FF 46 06               INC word ptr [ESI + 0x6]
LAB_006725a1:
006725A1  FF 45 FC                  INC dword ptr [EBP + -0x4]
006725A4  E9 07 02 00 00            JMP 0x006727b0
switchD_006724ec::caseD_a:
006725A9  85 F6                     TEST ESI,ESI
006725AB  74 6F                     JZ 0x0067261c
006725AD  66 83 3E 32               CMP word ptr [ESI],0x32
006725B1  7C 1F                     JL 0x006725d2
006725B3  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
006725BD  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006725C3  6A 79                     PUSH 0x79
006725C5  68 24 2A 7D 00            PUSH 0x7d2a24
006725CA  51                        PUSH ECX
006725CB  6A 9A                     PUSH -0x66
006725CD  E8 6E 38 03 00            CALL 0x006a5e40
LAB_006725d2:
006725D2  0F BF 16                  MOVSX EDX,word ptr [ESI]
006725D5  57                        PUSH EDI
006725D6  8B CB                     MOV ECX,EBX
006725D8  C6 84 32 D0 00 00 00 0A   MOV byte ptr [EDX + ESI*0x1 + 0xd0],0xa
006725E0  8B 03                     MOV EAX,dword ptr [EBX]
006725E2  FF 50 08                  CALL dword ptr [EAX + 0x8]
006725E5  0F BF 0E                  MOVSX ECX,word ptr [ESI]
006725E8  89 44 8E 08               MOV dword ptr [ESI + ECX*0x4 + 0x8],EAX
006725EC  0F BF 16                  MOVSX EDX,word ptr [ESI]
006725EF  8B 44 96 08               MOV EAX,dword ptr [ESI + EDX*0x4 + 0x8]
006725F3  85 C0                     TEST EAX,EAX
006725F5  75 1E                     JNZ 0x00672615
006725F7  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
00672601  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00672606  6A 79                     PUSH 0x79
00672608  68 24 2A 7D 00            PUSH 0x7d2a24
0067260D  50                        PUSH EAX
0067260E  6A 95                     PUSH -0x6b
00672610  E8 2B 38 03 00            CALL 0x006a5e40
LAB_00672615:
00672615  66 FF 06                  INC word ptr [ESI]
00672618  66 FF 46 02               INC word ptr [ESI + 0x2]
LAB_0067261c:
0067261C  FF 45 FC                  INC dword ptr [EBP + -0x4]
0067261F  E9 8C 01 00 00            JMP 0x006727b0
switchD_006724ec::default:
00672624  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00672627  8D 55 F0                  LEA EDX,[EBP + -0x10]
0067262A  51                        PUSH ECX
0067262B  52                        PUSH EDX
0067262C  57                        PUSH EDI
0067262D  8B CB                     MOV ECX,EBX
0067262F  E8 2B F9 D8 FF            CALL 0x00401f5f
00672634  85 C0                     TEST EAX,EAX
00672636  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00672639  0F 84 14 01 00 00         JZ 0x00672753
0067263F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00672642  8B C1                     MOV EAX,ECX
00672644  48                        DEC EAX
00672645  0F 84 BF 00 00 00         JZ 0x0067270a
0067264B  48                        DEC EAX
0067264C  74 70                     JZ 0x006726be
0067264E  48                        DEC EAX
0067264F  74 1D                     JZ 0x0067266e
00672651  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0067265B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00672660  6A 79                     PUSH 0x79
00672662  68 24 2A 7D 00            PUSH 0x7d2a24
00672667  50                        PUSH EAX
00672668  51                        PUSH ECX
00672669  E9 01 01 00 00            JMP 0x0067276f
LAB_0067266e:
0067266E  85 F6                     TEST ESI,ESI
00672670  0F 84 FE 00 00 00         JZ 0x00672774
00672676  66 83 3E 32               CMP word ptr [ESI],0x32
0067267A  7C 1F                     JL 0x0067269b
0067267C  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
00672686  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0067268C  6A 79                     PUSH 0x79
0067268E  68 24 2A 7D 00            PUSH 0x7d2a24
00672693  51                        PUSH ECX
00672694  6A 9A                     PUSH -0x66
00672696  E8 A5 37 03 00            CALL 0x006a5e40
LAB_0067269b:
0067269B  0F BF 16                  MOVSX EDX,word ptr [ESI]
0067269E  C6 84 32 D0 00 00 00 0A   MOV byte ptr [EDX + ESI*0x1 + 0xd0],0xa
006726A6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006726A9  0F BF 06                  MOVSX EAX,word ptr [ESI]
006726AC  8B 11                     MOV EDX,dword ptr [ECX]
006726AE  89 54 86 08               MOV dword ptr [ESI + EAX*0x4 + 0x8],EDX
006726B2  66 FF 06                  INC word ptr [ESI]
006726B5  66 FF 46 02               INC word ptr [ESI + 0x2]
006726B9  E9 B6 00 00 00            JMP 0x00672774
LAB_006726be:
006726BE  85 F6                     TEST ESI,ESI
006726C0  0F 84 AE 00 00 00         JZ 0x00672774
006726C6  66 83 3E 32               CMP word ptr [ESI],0x32
006726CA  7C 1E                     JL 0x006726ea
006726CC  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
006726D6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006726DB  6A 79                     PUSH 0x79
006726DD  68 24 2A 7D 00            PUSH 0x7d2a24
006726E2  50                        PUSH EAX
006726E3  6A 9A                     PUSH -0x66
006726E5  E8 56 37 03 00            CALL 0x006a5e40
LAB_006726ea:
006726EA  0F BF 0E                  MOVSX ECX,word ptr [ESI]
006726ED  C6 84 31 D0 00 00 00 09   MOV byte ptr [ECX + ESI*0x1 + 0xd0],0x9
006726F5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006726F8  0F BF 16                  MOVSX EDX,word ptr [ESI]
006726FB  8B 08                     MOV ECX,dword ptr [EAX]
006726FD  89 4C 96 08               MOV dword ptr [ESI + EDX*0x4 + 0x8],ECX
00672701  66 FF 06                  INC word ptr [ESI]
00672704  66 FF 46 06               INC word ptr [ESI + 0x6]
00672708  EB 6A                     JMP 0x00672774
LAB_0067270a:
0067270A  85 F6                     TEST ESI,ESI
0067270C  74 66                     JZ 0x00672774
0067270E  66 83 3E 32               CMP word ptr [ESI],0x32
00672712  7C 1F                     JL 0x00672733
00672714  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0067271E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00672724  6A 79                     PUSH 0x79
00672726  68 24 2A 7D 00            PUSH 0x7d2a24
0067272B  52                        PUSH EDX
0067272C  6A 9A                     PUSH -0x66
0067272E  E8 0D 37 03 00            CALL 0x006a5e40
LAB_00672733:
00672733  0F BF 06                  MOVSX EAX,word ptr [ESI]
00672736  C6 84 30 D0 00 00 00 08   MOV byte ptr [EAX + ESI*0x1 + 0xd0],0x8
0067273E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00672741  0F BF 0E                  MOVSX ECX,word ptr [ESI]
00672744  8B 02                     MOV EAX,dword ptr [EDX]
00672746  89 44 8E 08               MOV dword ptr [ESI + ECX*0x4 + 0x8],EAX
0067274A  66 FF 06                  INC word ptr [ESI]
0067274D  66 FF 46 04               INC word ptr [ESI + 0x4]
00672751  EB 21                     JMP 0x00672774
LAB_00672753:
00672753  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00672756  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
00672760  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00672766  6A 79                     PUSH 0x79
00672768  68 24 2A 7D 00            PUSH 0x7d2a24
0067276D  51                        PUSH ECX
0067276E  52                        PUSH EDX
LAB_0067276f:
0067276F  E8 CC 36 03 00            CALL 0x006a5e40
LAB_00672774:
00672774  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00672777  85 C0                     TEST EAX,EAX
00672779  74 09                     JZ 0x00672784
0067277B  8D 45 F8                  LEA EAX,[EBP + -0x8]
0067277E  50                        PUSH EAX
0067277F  E8 DC 88 03 00            CALL 0x006ab060
LAB_00672784:
00672784  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00672787  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067278A  03 C1                     ADD EAX,ECX
0067278C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067278F  EB 1F                     JMP 0x006727b0
LAB_00672791:
00672791  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
0067279B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006727A1  6A 79                     PUSH 0x79
006727A3  68 24 2A 7D 00            PUSH 0x7d2a24
006727A8  52                        PUSH EDX
006727A9  6A FC                     PUSH -0x4
006727AB  E8 90 36 03 00            CALL 0x006a5e40
LAB_006727b0:
006727B0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006727B3  85 C0                     TEST EAX,EAX
006727B5  0F 84 07 FD FF FF         JZ 0x006724c2
LAB_006727bb:
006727BB  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
006727BE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006727C3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006727C6  5F                        POP EDI
006727C7  5E                        POP ESI
006727C8  5B                        POP EBX
006727C9  8B E5                     MOV ESP,EBP
006727CB  5D                        POP EBP
006727CC  C2 0C 00                  RET 0xc
LAB_006727cf:
006727CF  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006727D2  85 C0                     TEST EAX,EAX
006727D4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006727DA  7E 05                     JLE 0x006727e1
006727DC  B8 95 FF FF FF            MOV EAX,0xffffff95
LAB_006727e1:
006727E1  5F                        POP EDI
006727E2  5E                        POP ESI
006727E3  5B                        POP EBX
006727E4  8B E5                     MOV ESP,EBP
006727E6  5D                        POP EBP
006727E7  C2 0C 00                  RET 0xc
