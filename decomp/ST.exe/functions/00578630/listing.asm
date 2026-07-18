STCrabC::GetMessage:
00578630  55                        PUSH EBP
00578631  8B EC                     MOV EBP,ESP
00578633  83 EC 7C                  SUB ESP,0x7c
00578636  8B 91 39 02 00 00         MOV EDX,dword ptr [ECX + 0x239]
0057863C  B8 03 00 00 00            MOV EAX,0x3
00578641  53                        PUSH EBX
00578642  56                        PUSH ESI
00578643  3B D0                     CMP EDX,EAX
00578645  57                        PUSH EDI
00578646  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00578649  75 13                     JNZ 0x0057865e
0057864B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0057864E  39 41 10                  CMP dword ptr [ECX + 0x10],EAX
00578651  74 0B                     JZ 0x0057865e
00578653  33 C0                     XOR EAX,EAX
00578655  5F                        POP EDI
00578656  5E                        POP ESI
00578657  5B                        POP EBX
00578658  8B E5                     MOV ESP,EBP
0057865A  5D                        POP EBP
0057865B  C2 04 00                  RET 0x4
LAB_0057865e:
0057865E  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00578664  33 FF                     XOR EDI,EDI
00578666  8D 4D 88                  LEA ECX,[EBP + -0x78]
00578669  8D 45 84                  LEA EAX,[EBP + -0x7c]
0057866C  57                        PUSH EDI
0057866D  51                        PUSH ECX
0057866E  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
00578671  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00578676  E8 75 51 1B 00            CALL 0x0072d7f0
0057867B  8B F0                     MOV ESI,EAX
0057867D  83 C4 08                  ADD ESP,0x8
00578680  3B F7                     CMP ESI,EDI
00578682  0F 85 3F 08 00 00         JNZ 0x00578ec7
00578688  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0057868B  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0057868E  56                        PUSH ESI
0057868F  8B CB                     MOV ECX,EBX
00578691  E8 71 C8 E8 FF            CALL 0x00404f07
00578696  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00578699  3D 0F 01 00 00            CMP EAX,0x10f
0057869E  0F 87 82 07 00 00         JA 0x00578e26
005786A4  0F 84 F4 05 00 00         JZ 0x00578c9e
005786AA  2B C7                     SUB EAX,EDI
005786AC  0F 84 C4 05 00 00         JZ 0x00578c76
005786B2  83 E8 02                  SUB EAX,0x2
005786B5  74 32                     JZ 0x005786e9
005786B7  48                        DEC EAX
005786B8  0F 85 F5 07 00 00         JNZ 0x00578eb3
005786BE  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
005786C1  52                        PUSH EDX
005786C2  E8 C2 AA E8 FF            CALL 0x00403189
005786C7  83 C4 04                  ADD ESP,0x4
005786CA  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
005786D0  E8 00 9B E8 FF            CALL 0x004021d5
005786D5  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
005786D8  33 C0                     XOR EAX,EAX
005786DA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005786E0  5F                        POP EDI
005786E1  5E                        POP ESI
005786E2  5B                        POP EBX
005786E3  8B E5                     MOV ESP,EBP
005786E5  5D                        POP EBP
005786E6  C2 04 00                  RET 0x4
LAB_005786e9:
005786E9  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005786EC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005786EF  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005786F2  83 F9 01                  CMP ECX,0x1
005786F5  0F 86 1B 01 00 00         JBE 0x00578816
005786FB  83 F9 02                  CMP ECX,0x2
005786FE  0F 85 4F 05 00 00         JNZ 0x00578c53
00578704  8D BB 59 02 00 00         LEA EDI,[EBX + 0x259]
0057870A  B9 0A 00 00 00            MOV ECX,0xa
0057870F  8B F0                     MOV ESI,EAX
00578711  F3 A5                     MOVSD.REP ES:EDI,ESI
00578713  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
00578716  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00578719  8D 44 01 68               LEA EAX,[ECX + EAX*0x1 + 0x68]
0057871D  8B CB                     MOV ECX,EBX
0057871F  50                        PUSH EAX
00578720  E8 FA CD E8 FF            CALL 0x0040551f
00578725  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00578728  6A 44                     PUSH 0x44
0057872A  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
0057872D  89 8B 39 02 00 00         MOV dword ptr [EBX + 0x239],ECX
00578733  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
00578736  89 93 35 02 00 00         MOV dword ptr [EBX + 0x235],EDX
0057873C  66 8B 46 50               MOV AX,word ptr [ESI + 0x50]
00578740  66 89 43 41               MOV word ptr [EBX + 0x41],AX
00578744  66 8B 4E 52               MOV CX,word ptr [ESI + 0x52]
00578748  66 89 4B 43               MOV word ptr [EBX + 0x43],CX
0057874C  66 8B 56 54               MOV DX,word ptr [ESI + 0x54]
00578750  66 89 53 45               MOV word ptr [EBX + 0x45],DX
00578754  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
00578757  89 83 31 02 00 00         MOV dword ptr [EBX + 0x231],EAX
0057875D  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
00578760  89 8B 45 02 00 00         MOV dword ptr [EBX + 0x245],ECX
00578766  8B 56 4C                  MOV EDX,dword ptr [ESI + 0x4c]
00578769  89 93 4D 02 00 00         MOV dword ptr [EBX + 0x24d],EDX
0057876F  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00578772  89 83 41 02 00 00         MOV dword ptr [EBX + 0x241],EAX
00578778  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0057877B  89 8B 49 02 00 00         MOV dword ptr [EBX + 0x249],ECX
00578781  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
00578784  89 93 51 02 00 00         MOV dword ptr [EBX + 0x251],EDX
0057878A  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0057878D  89 83 55 02 00 00         MOV dword ptr [EBX + 0x255],EAX
00578793  66 8B 4E 56               MOV CX,word ptr [ESI + 0x56]
00578797  66 89 4B 4E               MOV word ptr [EBX + 0x4e],CX
0057879B  66 8B 56 58               MOV DX,word ptr [ESI + 0x58]
0057879F  66 89 53 50               MOV word ptr [EBX + 0x50],DX
005787A3  66 8B 46 5A               MOV AX,word ptr [ESI + 0x5a]
005787A7  66 89 43 6C               MOV word ptr [EBX + 0x6c],AX
005787AB  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
005787AE  89 8B 3D 02 00 00         MOV dword ptr [EBX + 0x23d],ECX
005787B4  E8 B7 24 13 00            CALL 0x006aac70
005787B9  33 D2                     XOR EDX,EDX
005787BB  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
005787BE  3B C2                     CMP EAX,EDX
005787C0  0F 84 8D 04 00 00         JZ 0x00578c53
005787C6  33 C9                     XOR ECX,ECX
005787C8  EB 03                     JMP 0x005787cd
LAB_005787ca:
005787CA  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
LAB_005787cd:
005787CD  8B 3D 6C 67 80 00         MOV EDI,dword ptr [0x0080676c]
005787D3  89 3C 01                  MOV dword ptr [ECX + EAX*0x1],EDI
005787D6  83 C1 04                  ADD ECX,0x4
005787D9  83 F9 44                  CMP ECX,0x44
005787DC  7C EC                     JL 0x005787ca
005787DE  A1 CC 73 80 00            MOV EAX,[0x008073cc]
005787E3  83 C6 64                  ADD ESI,0x64
005787E6  8D 4D C8                  LEA ECX,[EBP + -0x38]
005787E9  56                        PUSH ESI
005787EA  51                        PUSH ECX
005787EB  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
005787F1  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
005787F4  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
005787F7  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005787FA  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
005787FD  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00578800  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00578803  E8 9D C4 E8 FF            CALL 0x00404ca5
00578808  8D 55 C8                  LEA EDX,[EBP + -0x38]
0057880B  52                        PUSH EDX
0057880C  E8 4F 28 13 00            CALL 0x006ab060
00578811  E9 3D 04 00 00            JMP 0x00578c53
LAB_00578816:
00578816  C7 83 39 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x239],0x3
00578820  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00578825  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0057882B  89 BB 3D 02 00 00         MOV dword ptr [EBX + 0x23d],EDI
00578831  83 E9 03                  SUB ECX,0x3
00578834  89 BB 31 02 00 00         MOV dword ptr [EBX + 0x231],EDI
0057883A  89 8B 35 02 00 00         MOV dword ptr [EBX + 0x235],ECX
00578840  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
00578843  B9 0A 00 00 00            MOV ECX,0xa
00578848  8D BB 59 02 00 00         LEA EDI,[EBX + 0x259]
0057884E  F3 A5                     MOVSD.REP ES:EDI,ESI
00578850  8B CB                     MOV ECX,EBX
00578852  E8 AA D1 E8 FF            CALL 0x00405a01
00578857  8B 83 6D 02 00 00         MOV EAX,dword ptr [EBX + 0x26d]
0057885D  85 C0                     TEST EAX,EAX
0057885F  0F 8C DD 03 00 00         JL 0x00578c42
00578865  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0057886C  3B C2                     CMP EAX,EDX
0057886E  0F 8D CE 03 00 00         JGE 0x00578c42
00578874  8B 83 71 02 00 00         MOV EAX,dword ptr [EBX + 0x271]
0057887A  85 C0                     TEST EAX,EAX
0057887C  0F 8C C0 03 00 00         JL 0x00578c42
00578882  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
00578889  3B C1                     CMP EAX,ECX
0057888B  0F 8D B1 03 00 00         JGE 0x00578c42
00578891  8B 83 75 02 00 00         MOV EAX,dword ptr [EBX + 0x275]
00578897  85 C0                     TEST EAX,EAX
00578899  0F 8C A3 03 00 00         JL 0x00578c42
0057889F  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
005788A6  3B C2                     CMP EAX,EDX
005788A8  0F 8D 94 03 00 00         JGE 0x00578c42
005788AE  66 8B 8B 71 02 00 00      MOV CX,word ptr [EBX + 0x271]
005788B5  66 8B 93 6D 02 00 00      MOV DX,word ptr [EBX + 0x26d]
005788BC  50                        PUSH EAX
005788BD  51                        PUSH ECX
005788BE  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005788C4  52                        PUSH EDX
005788C5  E8 71 C4 E8 FF            CALL 0x00404d3b
005788CA  85 C0                     TEST EAX,EAX
005788CC  0F 84 70 03 00 00         JZ 0x00578c42
005788D2  8B 83 79 02 00 00         MOV EAX,dword ptr [EBX + 0x279]
005788D8  05 0E FF FF FF            ADD EAX,0xffffff0e
005788DD  83 F8 05                  CMP EAX,0x5
005788E0  0F 87 7E 02 00 00         JA 0x00578b64
switchD_005788e6::switchD:
005788E6  FF 24 85 14 8F 57 00      JMP dword ptr [EAX*0x4 + 0x578f14]
switchD_005788e6::caseD_f2:
005788ED  A1 6C 67 80 00            MOV EAX,[0x0080676c]
005788F2  6A 1D                     PUSH 0x1d
005788F4  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
005788FA  68 B0 AC 7C 00            PUSH 0x7cacb0
005788FF  50                        PUSH EAX
00578900  6A 0E                     PUSH 0xe
00578902  8B CE                     MOV ECX,ESI
00578904  E8 7A B8 E8 FF            CALL 0x00404183
00578909  85 C0                     TEST EAX,EAX
0057890B  74 18                     JZ 0x00578925
0057890D  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00578913  68 D2 00 00 00            PUSH 0xd2
00578918  68 4C AD 7C 00            PUSH 0x7cad4c
0057891D  51                        PUSH ECX
0057891E  6A FF                     PUSH -0x1
00578920  E8 1B D5 12 00            CALL 0x006a5e40
LAB_00578925:
00578925  8B 15 6C 67 80 00         MOV EDX,dword ptr [0x0080676c]
0057892B  6A 1D                     PUSH 0x1d
0057892D  68 B8 AC 7C 00            PUSH 0x7cacb8
00578932  52                        PUSH EDX
00578933  6A 0D                     PUSH 0xd
00578935  8B CE                     MOV ECX,ESI
00578937  E8 47 B8 E8 FF            CALL 0x00404183
0057893C  85 C0                     TEST EAX,EAX
0057893E  0F 84 20 02 00 00         JZ 0x00578b64
00578944  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00578949  68 D5 00 00 00            PUSH 0xd5
0057894E  68 4C AD 7C 00            PUSH 0x7cad4c
00578953  50                        PUSH EAX
00578954  E9 04 02 00 00            JMP 0x00578b5d
switchD_005788e6::caseD_f3:
00578959  8B 0D 6C 67 80 00         MOV ECX,dword ptr [0x0080676c]
0057895F  6A 1D                     PUSH 0x1d
00578961  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00578967  68 C4 AC 7C 00            PUSH 0x7cacc4
0057896C  51                        PUSH ECX
0057896D  6A 0E                     PUSH 0xe
0057896F  8B CE                     MOV ECX,ESI
00578971  E8 0D B8 E8 FF            CALL 0x00404183
00578976  85 C0                     TEST EAX,EAX
00578978  74 18                     JZ 0x00578992
0057897A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00578980  68 DA 00 00 00            PUSH 0xda
00578985  68 4C AD 7C 00            PUSH 0x7cad4c
0057898A  52                        PUSH EDX
0057898B  6A FF                     PUSH -0x1
0057898D  E8 AE D4 12 00            CALL 0x006a5e40
LAB_00578992:
00578992  A1 6C 67 80 00            MOV EAX,[0x0080676c]
00578997  6A 1D                     PUSH 0x1d
00578999  68 CC AC 7C 00            PUSH 0x7caccc
0057899E  50                        PUSH EAX
0057899F  6A 0D                     PUSH 0xd
005789A1  8B CE                     MOV ECX,ESI
005789A3  E8 DB B7 E8 FF            CALL 0x00404183
005789A8  85 C0                     TEST EAX,EAX
005789AA  0F 84 B4 01 00 00         JZ 0x00578b64
005789B0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
005789B6  68 DD 00 00 00            PUSH 0xdd
005789BB  68 4C AD 7C 00            PUSH 0x7cad4c
005789C0  51                        PUSH ECX
005789C1  E9 97 01 00 00            JMP 0x00578b5d
switchD_005788e6::caseD_f4:
005789C6  8B 15 6C 67 80 00         MOV EDX,dword ptr [0x0080676c]
005789CC  6A 1D                     PUSH 0x1d
005789CE  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
005789D4  68 D8 AC 7C 00            PUSH 0x7cacd8
005789D9  52                        PUSH EDX
005789DA  6A 0E                     PUSH 0xe
005789DC  8B CE                     MOV ECX,ESI
005789DE  E8 A0 B7 E8 FF            CALL 0x00404183
005789E3  85 C0                     TEST EAX,EAX
005789E5  74 17                     JZ 0x005789fe
005789E7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
005789EC  68 E2 00 00 00            PUSH 0xe2
005789F1  68 4C AD 7C 00            PUSH 0x7cad4c
005789F6  50                        PUSH EAX
005789F7  6A FF                     PUSH -0x1
005789F9  E8 42 D4 12 00            CALL 0x006a5e40
LAB_005789fe:
005789FE  8B 0D 6C 67 80 00         MOV ECX,dword ptr [0x0080676c]
00578A04  6A 1D                     PUSH 0x1d
00578A06  68 E0 AC 7C 00            PUSH 0x7cace0
00578A0B  51                        PUSH ECX
00578A0C  6A 0D                     PUSH 0xd
00578A0E  8B CE                     MOV ECX,ESI
00578A10  E8 6E B7 E8 FF            CALL 0x00404183
00578A15  85 C0                     TEST EAX,EAX
00578A17  0F 84 47 01 00 00         JZ 0x00578b64
00578A1D  68 E5 00 00 00            PUSH 0xe5
00578A22  E9 2A 01 00 00            JMP 0x00578b51
switchD_005788e6::caseD_f5:
00578A27  A1 6C 67 80 00            MOV EAX,[0x0080676c]
00578A2C  6A 1D                     PUSH 0x1d
00578A2E  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00578A34  68 EC AC 7C 00            PUSH 0x7cacec
00578A39  50                        PUSH EAX
00578A3A  6A 0E                     PUSH 0xe
00578A3C  8B CE                     MOV ECX,ESI
00578A3E  E8 40 B7 E8 FF            CALL 0x00404183
00578A43  85 C0                     TEST EAX,EAX
00578A45  74 18                     JZ 0x00578a5f
00578A47  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00578A4D  68 EA 00 00 00            PUSH 0xea
00578A52  68 4C AD 7C 00            PUSH 0x7cad4c
00578A57  51                        PUSH ECX
00578A58  6A FF                     PUSH -0x1
00578A5A  E8 E1 D3 12 00            CALL 0x006a5e40
LAB_00578a5f:
00578A5F  8B 15 6C 67 80 00         MOV EDX,dword ptr [0x0080676c]
00578A65  6A 1D                     PUSH 0x1d
00578A67  68 F4 AC 7C 00            PUSH 0x7cacf4
00578A6C  52                        PUSH EDX
00578A6D  6A 0D                     PUSH 0xd
00578A6F  8B CE                     MOV ECX,ESI
00578A71  E8 0D B7 E8 FF            CALL 0x00404183
00578A76  85 C0                     TEST EAX,EAX
00578A78  0F 84 E6 00 00 00         JZ 0x00578b64
00578A7E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00578A83  68 ED 00 00 00            PUSH 0xed
00578A88  68 4C AD 7C 00            PUSH 0x7cad4c
00578A8D  50                        PUSH EAX
00578A8E  E9 CA 00 00 00            JMP 0x00578b5d
switchD_005788e6::caseD_f7:
00578A93  8B 0D 6C 67 80 00         MOV ECX,dword ptr [0x0080676c]
00578A99  6A 1D                     PUSH 0x1d
00578A9B  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00578AA1  68 00 AD 7C 00            PUSH 0x7cad00
00578AA6  51                        PUSH ECX
00578AA7  6A 0E                     PUSH 0xe
00578AA9  8B CE                     MOV ECX,ESI
00578AAB  E8 D3 B6 E8 FF            CALL 0x00404183
00578AB0  85 C0                     TEST EAX,EAX
00578AB2  74 18                     JZ 0x00578acc
00578AB4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00578ABA  68 F2 00 00 00            PUSH 0xf2
00578ABF  68 4C AD 7C 00            PUSH 0x7cad4c
00578AC4  52                        PUSH EDX
00578AC5  6A FF                     PUSH -0x1
00578AC7  E8 74 D3 12 00            CALL 0x006a5e40
LAB_00578acc:
00578ACC  A1 6C 67 80 00            MOV EAX,[0x0080676c]
00578AD1  6A 1D                     PUSH 0x1d
00578AD3  68 08 AD 7C 00            PUSH 0x7cad08
00578AD8  50                        PUSH EAX
00578AD9  6A 0D                     PUSH 0xd
00578ADB  8B CE                     MOV ECX,ESI
00578ADD  E8 A1 B6 E8 FF            CALL 0x00404183
00578AE2  85 C0                     TEST EAX,EAX
00578AE4  74 7E                     JZ 0x00578b64
00578AE6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00578AEC  68 F5 00 00 00            PUSH 0xf5
00578AF1  68 4C AD 7C 00            PUSH 0x7cad4c
00578AF6  51                        PUSH ECX
00578AF7  EB 64                     JMP 0x00578b5d
switchD_005788e6::caseD_f6:
00578AF9  8B 15 6C 67 80 00         MOV EDX,dword ptr [0x0080676c]
00578AFF  6A 1D                     PUSH 0x1d
00578B01  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00578B07  68 14 AD 7C 00            PUSH 0x7cad14
00578B0C  52                        PUSH EDX
00578B0D  6A 0E                     PUSH 0xe
00578B0F  8B CE                     MOV ECX,ESI
00578B11  E8 6D B6 E8 FF            CALL 0x00404183
00578B16  85 C0                     TEST EAX,EAX
00578B18  74 17                     JZ 0x00578b31
00578B1A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00578B1F  68 FA 00 00 00            PUSH 0xfa
00578B24  68 4C AD 7C 00            PUSH 0x7cad4c
00578B29  50                        PUSH EAX
00578B2A  6A FF                     PUSH -0x1
00578B2C  E8 0F D3 12 00            CALL 0x006a5e40
LAB_00578b31:
00578B31  8B 0D 6C 67 80 00         MOV ECX,dword ptr [0x0080676c]
00578B37  6A 1D                     PUSH 0x1d
00578B39  68 1C AD 7C 00            PUSH 0x7cad1c
00578B3E  51                        PUSH ECX
00578B3F  6A 0D                     PUSH 0xd
00578B41  8B CE                     MOV ECX,ESI
00578B43  E8 3B B6 E8 FF            CALL 0x00404183
00578B48  85 C0                     TEST EAX,EAX
00578B4A  74 18                     JZ 0x00578b64
00578B4C  68 FD 00 00 00            PUSH 0xfd
LAB_00578b51:
00578B51  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00578B57  68 4C AD 7C 00            PUSH 0x7cad4c
00578B5C  52                        PUSH EDX
LAB_00578b5d:
00578B5D  6A FF                     PUSH -0x1
00578B5F  E8 DC D2 12 00            CALL 0x006a5e40
switchD_005788e6::default:
00578B64  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00578B6A  6A 0D                     PUSH 0xd
00578B6C  8B CE                     MOV ECX,ESI
00578B6E  E8 8A AF E8 FF            CALL 0x00403afd
00578B73  6A 0E                     PUSH 0xe
00578B75  8B CE                     MOV ECX,ESI
00578B77  E8 2A CF E8 FF            CALL 0x00405aa6
00578B7C  6A 0D                     PUSH 0xd
00578B7E  8B CE                     MOV ECX,ESI
00578B80  E8 21 CF E8 FF            CALL 0x00405aa6
00578B85  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00578B8A  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00578B90  51                        PUSH ECX
00578B91  6A 0E                     PUSH 0xe
00578B93  8B CE                     MOV ECX,ESI
00578B95  E8 A6 C6 E8 FF            CALL 0x00405240
00578B9A  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00578BA0  8B CE                     MOV ECX,ESI
00578BA2  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
00578BA8  50                        PUSH EAX
00578BA9  6A 0D                     PUSH 0xd
00578BAB  E8 90 C6 E8 FF            CALL 0x00405240
00578BB0  66 8B 8B 6D 02 00 00      MOV CX,word ptr [EBX + 0x26d]
00578BB7  66 8B 93 71 02 00 00      MOV DX,word ptr [EBX + 0x271]
00578BBE  66 8B 83 75 02 00 00      MOV AX,word ptr [EBX + 0x275]
00578BC5  66 69 C9 C9 00            IMUL CX,CX,0xc9
00578BCA  66 69 D2 C9 00            IMUL DX,DX,0xc9
00578BCF  66 69 C0 C8 00            IMUL AX,AX,0xc8
00578BD4  83 C1 64                  ADD ECX,0x64
00578BD7  83 C2 64                  ADD EDX,0x64
00578BDA  66 89 4B 41               MOV word ptr [EBX + 0x41],CX
00578BDE  8B 8B 79 02 00 00         MOV ECX,dword ptr [EBX + 0x279]
00578BE4  83 C0 64                  ADD EAX,0x64
00578BE7  81 F9 F6 00 00 00         CMP ECX,0xf6
00578BED  66 89 53 43               MOV word ptr [EBX + 0x43],DX
00578BF1  66 89 43 45               MOV word ptr [EBX + 0x45],AX
00578BF5  7C 0D                     JL 0x00578c04
00578BF7  81 F9 F7 00 00 00         CMP ECX,0xf7
00578BFD  7F 05                     JG 0x00578c04
00578BFF  83 C0 1E                  ADD EAX,0x1e
00578C02  EB 03                     JMP 0x00578c07
LAB_00578c04:
00578C04  83 C0 C4                  ADD EAX,-0x3c
LAB_00578c07:
00578C07  8B B3 7D 02 00 00         MOV ESI,dword ptr [EBX + 0x27d]
00578C0D  66 89 43 45               MOV word ptr [EBX + 0x45],AX
00578C11  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
00578C16  8D 4B 6C                  LEA ECX,[EBX + 0x6c]
00578C19  F7 EE                     IMUL ESI
00578C1B  03 D6                     ADD EDX,ESI
00578C1D  51                        PUSH ECX
00578C1E  C1 FA 05                  SAR EDX,0x5
00578C21  8B C2                     MOV EAX,EDX
00578C23  C1 E8 1F                  SHR EAX,0x1f
00578C26  03 D0                     ADD EDX,EAX
00578C28  66 89 11                  MOV word ptr [ECX],DX
00578C2B  8D 4B 50                  LEA ECX,[EBX + 0x50]
00578C2E  8D 53 4E                  LEA EDX,[EBX + 0x4e]
00578C31  51                        PUSH ECX
00578C32  52                        PUSH EDX
00578C33  8B CB                     MOV ECX,EBX
00578C35  E8 11 84 E8 FF            CALL 0x0040104b
00578C3A  89 83 39 02 00 00         MOV dword ptr [EBX + 0x239],EAX
00578C40  EB 11                     JMP 0x00578c53
LAB_00578c42:
00578C42  8B CB                     MOV ECX,EBX
00578C44  E8 70 C0 E8 FF            CALL 0x00404cb9
00578C49  C7 83 39 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x239],0x2
LAB_00578c53:
00578C53  83 BB 39 02 00 00 03      CMP dword ptr [EBX + 0x239],0x3
00578C5A  0F 84 53 02 00 00         JZ 0x00578eb3
00578C60  53                        PUSH EBX
00578C61  E8 5D 84 E8 FF            CALL 0x004010c3
00578C66  83 C4 04                  ADD ESP,0x4
00578C69  85 C0                     TEST EAX,EAX
00578C6B  0F 85 42 02 00 00         JNZ 0x00578eb3
00578C71  E9 2C 02 00 00            JMP 0x00578ea2
LAB_00578c76:
00578C76  83 BB 39 02 00 00 02      CMP dword ptr [EBX + 0x239],0x2
00578C7D  0F 84 30 02 00 00         JZ 0x00578eb3
00578C83  8B CB                     MOV ECX,EBX
00578C85  E8 48 CF E8 FF            CALL 0x00405bd2
00578C8A  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
00578C8D  33 C0                     XOR EAX,EAX
00578C8F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00578C95  5F                        POP EDI
00578C96  5E                        POP ESI
00578C97  5B                        POP EBX
00578C98  8B E5                     MOV ESP,EBP
00578C9A  5D                        POP EBP
00578C9B  C2 04 00                  RET 0x4
LAB_00578c9e:
00578C9E  8D 45 FC                  LEA EAX,[EBP + -0x4]
00578CA1  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00578CA7  50                        PUSH EAX
00578CA8  E8 27 8C E8 FF            CALL 0x004018d4
00578CAD  8D 4D F4                  LEA ECX,[EBP + -0xc]
00578CB0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00578CB3  51                        PUSH ECX
00578CB4  8B CB                     MOV ECX,EBX
00578CB6  E8 DF 84 E8 FF            CALL 0x0040119a
00578CBB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00578CBE  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00578CC1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00578CC4  8D 4C 02 68               LEA ECX,[EDX + EAX*0x1 + 0x68]
00578CC8  51                        PUSH ECX
00578CC9  E8 A2 1F 13 00            CALL 0x006aac70
00578CCE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00578CD1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00578CD4  3B CF                     CMP ECX,EDI
00578CD6  0F 84 D7 01 00 00         JZ 0x00578eb3
00578CDC  3B C7                     CMP EAX,EDI
00578CDE  0F 84 CF 01 00 00         JZ 0x00578eb3
00578CE4  8D B3 59 02 00 00         LEA ESI,[EBX + 0x259]
00578CEA  B9 0A 00 00 00            MOV ECX,0xa
00578CEF  8B F8                     MOV EDI,EAX
00578CF1  F3 A5                     MOVSD.REP ES:EDI,ESI
00578CF3  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
00578CFA  8B 93 35 02 00 00         MOV EDX,dword ptr [EBX + 0x235]
00578D00  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
00578D03  8B 8B 39 02 00 00         MOV ECX,dword ptr [EBX + 0x239]
00578D09  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
00578D0C  66 8B 53 41               MOV DX,word ptr [EBX + 0x41]
00578D10  66 89 50 50               MOV word ptr [EAX + 0x50],DX
00578D14  66 8B 4B 43               MOV CX,word ptr [EBX + 0x43]
00578D18  66 89 48 52               MOV word ptr [EAX + 0x52],CX
00578D1C  66 8B 53 45               MOV DX,word ptr [EBX + 0x45]
00578D20  66 89 50 54               MOV word ptr [EAX + 0x54],DX
00578D24  8B 8B 31 02 00 00         MOV ECX,dword ptr [EBX + 0x231]
00578D2A  89 48 34                  MOV dword ptr [EAX + 0x34],ECX
00578D2D  8B 93 45 02 00 00         MOV EDX,dword ptr [EBX + 0x245]
00578D33  89 50 48                  MOV dword ptr [EAX + 0x48],EDX
00578D36  8B 8B 4D 02 00 00         MOV ECX,dword ptr [EBX + 0x24d]
00578D3C  89 48 4C                  MOV dword ptr [EAX + 0x4c],ECX
00578D3F  8B 93 41 02 00 00         MOV EDX,dword ptr [EBX + 0x241]
00578D45  89 50 38                  MOV dword ptr [EAX + 0x38],EDX
00578D48  8B 8B 49 02 00 00         MOV ECX,dword ptr [EBX + 0x249]
00578D4E  89 48 3C                  MOV dword ptr [EAX + 0x3c],ECX
00578D51  8B 93 51 02 00 00         MOV EDX,dword ptr [EBX + 0x251]
00578D57  89 50 40                  MOV dword ptr [EAX + 0x40],EDX
00578D5A  8B 8B 55 02 00 00         MOV ECX,dword ptr [EBX + 0x255]
00578D60  89 48 44                  MOV dword ptr [EAX + 0x44],ECX
00578D63  66 8B 53 4E               MOV DX,word ptr [EBX + 0x4e]
00578D67  66 89 50 56               MOV word ptr [EAX + 0x56],DX
00578D6B  66 8B 4B 50               MOV CX,word ptr [EBX + 0x50]
00578D6F  66 89 48 58               MOV word ptr [EAX + 0x58],CX
00578D73  66 8B 53 6C               MOV DX,word ptr [EBX + 0x6c]
00578D77  66 89 50 5A               MOV word ptr [EAX + 0x5a],DX
00578D7B  8B 8B 3D 02 00 00         MOV ECX,dword ptr [EBX + 0x23d]
00578D81  89 48 30                  MOV dword ptr [EAX + 0x30],ECX
00578D84  C7 40 5C 00 00 00 00      MOV dword ptr [EAX + 0x5c],0x0
00578D8B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00578D8E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00578D91  89 50 60                  MOV dword ptr [EAX + 0x60],EDX
00578D94  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00578D97  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00578D9A  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00578D9D  8B C1                     MOV EAX,ECX
00578D9F  8D 7A 64                  LEA EDI,[EDX + 0x64]
00578DA2  C1 E9 02                  SHR ECX,0x2
00578DA5  F3 A5                     MOVSD.REP ES:EDI,ESI
00578DA7  8B C8                     MOV ECX,EAX
00578DA9  83 E1 03                  AND ECX,0x3
00578DAC  F3 A4                     MOVSB.REP ES:EDI,ESI
00578DAE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00578DB1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00578DB4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00578DB7  89 4C 02 64               MOV dword ptr [EDX + EAX*0x1 + 0x64],ECX
00578DBB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00578DBE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00578DC1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00578DC4  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00578DC7  8D 7C 10 68               LEA EDI,[EAX + EDX*0x1 + 0x68]
00578DCB  8B D1                     MOV EDX,ECX
00578DCD  C1 E9 02                  SHR ECX,0x2
00578DD0  F3 A5                     MOVSD.REP ES:EDI,ESI
00578DD2  8B CA                     MOV ECX,EDX
00578DD4  83 E1 03                  AND ECX,0x3
00578DD7  F3 A4                     MOVSB.REP ES:EDI,ESI
00578DD9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00578DDC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00578DDF  8D 54 01 68               LEA EDX,[ECX + EAX*0x1 + 0x68]
00578DE3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00578DE6  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00578DE9  52                        PUSH EDX
00578DEA  50                        PUSH EAX
00578DEB  51                        PUSH ECX
00578DEC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00578DF2  E8 02 98 E8 FF            CALL 0x004025f9
00578DF7  8D 55 F0                  LEA EDX,[EBP + -0x10]
00578DFA  52                        PUSH EDX
00578DFB  E8 60 22 13 00            CALL 0x006ab060
00578E00  8D 45 EC                  LEA EAX,[EBP + -0x14]
00578E03  50                        PUSH EAX
00578E04  E8 57 22 13 00            CALL 0x006ab060
00578E09  8D 4D F8                  LEA ECX,[EBP + -0x8]
00578E0C  51                        PUSH ECX
00578E0D  E8 4E 22 13 00            CALL 0x006ab060
00578E12  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
00578E15  33 C0                     XOR EAX,EAX
00578E17  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00578E1D  5F                        POP EDI
00578E1E  5E                        POP ESI
00578E1F  5B                        POP EBX
00578E20  8B E5                     MOV ESP,EBP
00578E22  5D                        POP EBP
00578E23  C2 04 00                  RET 0x4
LAB_00578e26:
00578E26  3D 28 01 00 00            CMP EAX,0x128
00578E2B  74 5E                     JZ 0x00578e8b
00578E2D  3D 0F 44 00 00            CMP EAX,0x440f
00578E32  75 7F                     JNZ 0x00578eb3
00578E34  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00578E39  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00578E3F  3B C7                     CMP EAX,EDI
00578E41  6A 0E                     PUSH 0xe
00578E43  8B CE                     MOV ECX,ESI
00578E45  74 22                     JZ 0x00578e69
00578E47  E8 08 BA E8 FF            CALL 0x00404854
00578E4C  6A 0D                     PUSH 0xd
00578E4E  8B CE                     MOV ECX,ESI
00578E50  E8 FF B9 E8 FF            CALL 0x00404854
00578E55  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
00578E58  33 C0                     XOR EAX,EAX
00578E5A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00578E60  5F                        POP EDI
00578E61  5E                        POP ESI
00578E62  5B                        POP EBX
00578E63  8B E5                     MOV ESP,EBP
00578E65  5D                        POP EBP
00578E66  C2 04 00                  RET 0x4
LAB_00578e69:
00578E69  E8 F3 98 E8 FF            CALL 0x00402761
00578E6E  6A 0D                     PUSH 0xd
00578E70  8B CE                     MOV ECX,ESI
00578E72  E8 EA 98 E8 FF            CALL 0x00402761
00578E77  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
00578E7A  33 C0                     XOR EAX,EAX
00578E7C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00578E82  5F                        POP EDI
00578E83  5E                        POP ESI
00578E84  5B                        POP EBX
00578E85  8B E5                     MOV ESP,EBP
00578E87  5D                        POP EBP
00578E88  C2 04 00                  RET 0x4
LAB_00578e8b:
00578E8B  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00578E91  E8 36 C4 E8 FF            CALL 0x004052cc
00578E96  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00578E9C  50                        PUSH EAX
00578E9D  E8 BE 1C 17 00            CALL 0x006eab60
LAB_00578ea2:
00578EA2  8B CB                     MOV ECX,EBX
00578EA4  E8 10 BE E8 FF            CALL 0x00404cb9
00578EA9  C7 83 39 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x239],0x2
LAB_00578eb3:
00578EB3  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
00578EB6  33 C0                     XOR EAX,EAX
00578EB8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00578EBE  5F                        POP EDI
00578EBF  5E                        POP ESI
00578EC0  5B                        POP EBX
00578EC1  8B E5                     MOV ESP,EBP
00578EC3  5D                        POP EBP
00578EC4  C2 04 00                  RET 0x4
LAB_00578ec7:
00578EC7  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00578ECA  68 9C AD 7C 00            PUSH 0x7cad9c
00578ECF  68 CC 4C 7A 00            PUSH 0x7a4ccc
00578ED4  56                        PUSH ESI
00578ED5  57                        PUSH EDI
00578ED6  68 B7 01 00 00            PUSH 0x1b7
00578EDB  68 4C AD 7C 00            PUSH 0x7cad4c
00578EE0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00578EE5  E8 E6 45 13 00            CALL 0x006ad4d0
00578EEA  83 C4 18                  ADD ESP,0x18
00578EED  85 C0                     TEST EAX,EAX
00578EEF  74 01                     JZ 0x00578ef2
00578EF1  CC                        INT3
LAB_00578ef2:
00578EF2  68 B8 01 00 00            PUSH 0x1b8
00578EF7  68 4C AD 7C 00            PUSH 0x7cad4c
00578EFC  57                        PUSH EDI
00578EFD  56                        PUSH ESI
00578EFE  E8 3D CF 12 00            CALL 0x006a5e40
00578F03  5F                        POP EDI
00578F04  5E                        POP ESI
00578F05  B8 FF FF 00 00            MOV EAX,0xffff
00578F0A  5B                        POP EBX
00578F0B  8B E5                     MOV ESP,EBP
00578F0D  5D                        POP EBP
00578F0E  C2 04 00                  RET 0x4
