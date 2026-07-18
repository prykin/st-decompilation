STAllPlayersC::RestoreTmp:
00439100  55                        PUSH EBP
00439101  8B EC                     MOV EBP,ESP
00439103  83 EC 6C                  SUB ESP,0x6c
00439106  A0 4D 87 80 00            MOV AL,[0x0080874d]
0043910B  53                        PUSH EBX
0043910C  56                        PUSH ESI
0043910D  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00439110  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00439116  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00439119  33 DB                     XOR EBX,EBX
0043911B  57                        PUSH EDI
0043911C  8D 45 98                  LEA EAX,[EBP + -0x68]
0043911F  8D 55 94                  LEA EDX,[EBP + -0x6c]
00439122  53                        PUSH EBX
00439123  50                        PUSH EAX
00439124  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00439127  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0043912A  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0043912D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00439133  E8 B8 46 2F 00            CALL 0x0072d7f0
00439138  8B F0                     MOV ESI,EAX
0043913A  83 C4 08                  ADD ESP,0x8
0043913D  3B F3                     CMP ESI,EBX
0043913F  0F 85 27 14 00 00         JNZ 0x0043a56c
00439145  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00439148  3B FB                     CMP EDI,EBX
0043914A  7C 05                     JL 0x00439151
0043914C  83 FF 09                  CMP EDI,0x9
0043914F  7E 1B                     JLE 0x0043916c
LAB_00439151:
00439151  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00439157  68 0E 17 00 00            PUSH 0x170e
0043915C  68 04 60 7A 00            PUSH 0x7a6004
00439161  51                        PUSH ECX
00439162  68 09 00 FE AF            PUSH 0xaffe0009
00439167  E8 D4 CC 26 00            CALL 0x006a5e40
LAB_0043916c:
0043916C  0F BE 45 FC               MOVSX EAX,byte ptr [EBP + -0x4]
00439170  C1 E7 04                  SHL EDI,0x4
00439173  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00439176  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
00439179  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0043917C  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0043917F  8D 1C 48                  LEA EBX,[EAX + ECX*0x2]
00439182  C1 E3 04                  SHL EBX,0x4
00439185  03 D8                     ADD EBX,EAX
00439187  D1 E3                     SHL EBX,0x1
00439189  8B 84 1F 27 50 7F 00      MOV EAX,dword ptr [EDI + EBX*0x1 + 0x7f5027]
00439190  8D BC 1F 27 50 7F 00      LEA EDI,[EDI + EBX*0x1 + 0x7f5027]
00439197  3D 9A 01 00 00            CMP EAX,0x19a
0043919C  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
0043919F  0F 8F 3D 0B 00 00         JG 0x00439ce2
004391A5  3D 9A 01 00 00            CMP EAX,0x19a
004391AA  0F 84 F2 07 00 00         JZ 0x004399a2
004391B0  83 F8 5A                  CMP EAX,0x5a
004391B3  0F 8F BB 05 00 00         JG 0x00439774
004391B9  0F 84 C2 03 00 00         JZ 0x00439581
004391BF  85 C0                     TEST EAX,EAX
004391C1  74 0A                     JZ 0x004391cd
004391C3  83 F8 3C                  CMP EAX,0x3c
004391C6  74 20                     JZ 0x004391e8
004391C8  E9 2E 0B 00 00            JMP 0x00439cfb
LAB_004391cd:
004391CD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004391D3  68 13 17 00 00            PUSH 0x1713
004391D8  68 04 60 7A 00            PUSH 0x7a6004
004391DD  52                        PUSH EDX
004391DE  68 09 00 FE AF            PUSH 0xaffe0009
004391E3  E8 58 CC 26 00            CALL 0x006a5e40
LAB_004391e8:
004391E8  8B 83 23 50 7F 00         MOV EAX,dword ptr [EBX + 0x7f5023]
004391EE  83 E8 00                  SUB EAX,0x0
004391F1  0F 84 B0 01 00 00         JZ 0x004393a7
004391F7  48                        DEC EAX
004391F8  74 2E                     JZ 0x00439228
004391FA  68 AC 79 7A 00            PUSH 0x7a79ac
004391FF  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439204  6A 00                     PUSH 0x0
00439206  6A 00                     PUSH 0x0
00439208  68 78 17 00 00            PUSH 0x1778
0043920D  68 04 60 7A 00            PUSH 0x7a6004
00439212  E8 B9 42 27 00            CALL 0x006ad4d0
00439217  83 C4 18                  ADD ESP,0x18
0043921A  85 C0                     TEST EAX,EAX
0043921C  0F 84 5A 12 00 00         JZ 0x0043a47c
00439222  CC                        INT3
LAB_00439228:
00439228  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043922B  6A 00                     PUSH 0x0
0043922D  6A 00                     PUSH 0x0
0043922F  6A 01                     PUSH 0x1
00439231  50                        PUSH EAX
00439232  8B CE                     MOV ECX,ESI
00439234  C7 83 23 50 7F 00 00 00 00 00  MOV dword ptr [EBX + 0x7f5023],0x0
0043923E  E8 A4 A0 FC FF            CALL 0x004032e7
00439243  8B 83 83 4F 7F 00         MOV EAX,dword ptr [EBX + 0x7f4f83]
00439249  85 C0                     TEST EAX,EAX
0043924B  0F 84 18 01 00 00         JZ 0x00439369
00439251  83 F8 3C                  CMP EAX,0x3c
00439254  0F 84 A2 00 00 00         JZ 0x004392fc
0043925A  3D AE 01 00 00            CMP EAX,0x1ae
0043925F  74 2E                     JZ 0x0043928f
00439261  68 70 79 7A 00            PUSH 0x7a7970
00439266  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043926B  6A 00                     PUSH 0x0
0043926D  6A 00                     PUSH 0x0
0043926F  68 74 17 00 00            PUSH 0x1774
00439274  68 04 60 7A 00            PUSH 0x7a6004
00439279  E8 52 42 27 00            CALL 0x006ad4d0
0043927E  83 C4 18                  ADD ESP,0x18
00439281  85 C0                     TEST EAX,EAX
00439283  0F 84 F3 11 00 00         JZ 0x0043a47c
00439289  CC                        INT3
LAB_0043928f:
0043928F  8B 4F 0A                  MOV ECX,dword ptr [EDI + 0xa]
00439292  8A 57 04                  MOV DL,byte ptr [EDI + 0x4]
00439295  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00439298  6A 00                     PUSH 0x0
0043929A  51                        PUSH ECX
0043929B  52                        PUSH EDX
0043929C  6A 3C                     PUSH 0x3c
0043929E  6A 00                     PUSH 0x0
004392A0  50                        PUSH EAX
004392A1  8B CE                     MOV ECX,ESI
004392A3  E8 C7 86 FC FF            CALL 0x0040196f
004392A8  85 C0                     TEST EAX,EAX
004392AA  7E 13                     JLE 0x004392bf
004392AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004392AF  50                        PUSH EAX
004392B0  6A 00                     PUSH 0x0
004392B2  51                        PUSH ECX
004392B3  8B CE                     MOV ECX,ESI
004392B5  E8 C5 9E FC FF            CALL 0x0040317f
004392BA  E9 BD 11 00 00            JMP 0x0043a47c
LAB_004392bf:
004392BF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004392C2  6A 00                     PUSH 0x0
004392C4  52                        PUSH EDX
004392C5  8B CE                     MOV ECX,ESI
004392C7  E8 54 C6 FC FF            CALL 0x00405920
004392CC  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004392CF  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
004392D2  3B C8                     CMP ECX,EAX
004392D4  0F 85 8F 01 00 00         JNZ 0x00439469
004392DA  8B 4F 0A                  MOV ECX,dword ptr [EDI + 0xa]
004392DD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004392E0  51                        PUSH ECX
004392E1  6A 00                     PUSH 0x0
004392E3  6A 00                     PUSH 0x0
004392E5  52                        PUSH EDX
004392E6  8B CE                     MOV ECX,ESI
004392E8  E8 D1 C8 FC FF            CALL 0x00405bbe
004392ED  C7 83 83 4F 7F 00 3C 00 00 00  MOV dword ptr [EBX + 0x7f4f83],0x3c
004392F7  E9 80 11 00 00            JMP 0x0043a47c
LAB_004392fc:
004392FC  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
004392FF  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00439302  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439305  6A 00                     PUSH 0x0
00439307  52                        PUSH EDX
00439308  50                        PUSH EAX
00439309  6A 3C                     PUSH 0x3c
0043930B  6A 00                     PUSH 0x0
0043930D  51                        PUSH ECX
0043930E  8B CE                     MOV ECX,ESI
00439310  E8 5A 86 FC FF            CALL 0x0040196f
00439315  85 C0                     TEST EAX,EAX
00439317  7C 13                     JL 0x0043932c
00439319  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043931C  50                        PUSH EAX
0043931D  6A 00                     PUSH 0x0
0043931F  52                        PUSH EDX
00439320  8B CE                     MOV ECX,ESI
00439322  E8 58 9E FC FF            CALL 0x0040317f
00439327  E9 50 11 00 00            JMP 0x0043a47c
LAB_0043932c:
0043932C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043932F  6A 00                     PUSH 0x0
00439331  50                        PUSH EAX
00439332  8B CE                     MOV ECX,ESI
00439334  E8 E7 C5 FC FF            CALL 0x00405920
00439339  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0043933C  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0043933F  3B C1                     CMP EAX,ECX
00439341  0F 85 1F 02 00 00         JNZ 0x00439566
00439347  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
0043934A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043934D  52                        PUSH EDX
0043934E  6A 00                     PUSH 0x0
00439350  6A 00                     PUSH 0x0
00439352  50                        PUSH EAX
00439353  8B CE                     MOV ECX,ESI
00439355  E8 64 C8 FC FF            CALL 0x00405bbe
0043935A  C7 83 83 4F 7F 00 3C 00 00 00  MOV dword ptr [EBX + 0x7f4f83],0x3c
00439364  E9 13 11 00 00            JMP 0x0043a47c
LAB_00439369:
00439369  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
0043936C  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
0043936F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439372  6A 00                     PUSH 0x0
00439374  50                        PUSH EAX
00439375  51                        PUSH ECX
00439376  6A 3C                     PUSH 0x3c
00439378  6A 00                     PUSH 0x0
0043937A  52                        PUSH EDX
0043937B  8B CE                     MOV ECX,ESI
0043937D  E8 ED 85 FC FF            CALL 0x0040196f
00439382  85 C0                     TEST EAX,EAX
00439384  0F 8E B0 01 00 00         JLE 0x0043953a
0043938A  50                        PUSH EAX
0043938B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043938E  6A 00                     PUSH 0x0
00439390  50                        PUSH EAX
00439391  8B CE                     MOV ECX,ESI
00439393  E8 E7 9D FC FF            CALL 0x0040317f
00439398  C7 83 83 4F 7F 00 3C 00 00 00  MOV dword ptr [EBX + 0x7f4f83],0x3c
004393A2  E9 D5 10 00 00            JMP 0x0043a47c
LAB_004393a7:
004393A7  8B 83 83 4F 7F 00         MOV EAX,dword ptr [EBX + 0x7f4f83]
004393AD  85 C0                     TEST EAX,EAX
004393AF  74 B8                     JZ 0x00439369
004393B1  83 F8 3C                  CMP EAX,0x3c
004393B4  0F 84 DB 00 00 00         JZ 0x00439495
004393BA  3D AE 01 00 00            CMP EAX,0x1ae
004393BF  74 2E                     JZ 0x004393ef
004393C1  68 34 79 7A 00            PUSH 0x7a7934
004393C6  68 CC 4C 7A 00            PUSH 0x7a4ccc
004393CB  6A 00                     PUSH 0x0
004393CD  6A 00                     PUSH 0x0
004393CF  68 48 17 00 00            PUSH 0x1748
004393D4  68 04 60 7A 00            PUSH 0x7a6004
004393D9  E8 F2 40 27 00            CALL 0x006ad4d0
004393DE  83 C4 18                  ADD ESP,0x18
004393E1  85 C0                     TEST EAX,EAX
004393E3  0F 84 93 10 00 00         JZ 0x0043a47c
004393E9  CC                        INT3
LAB_004393ef:
004393EF  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
004393F2  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
004393F5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004393F8  6A 00                     PUSH 0x0
004393FA  50                        PUSH EAX
004393FB  51                        PUSH ECX
004393FC  6A 3C                     PUSH 0x3c
004393FE  6A 00                     PUSH 0x0
00439400  52                        PUSH EDX
00439401  8B CE                     MOV ECX,ESI
00439403  E8 67 85 FC FF            CALL 0x0040196f
00439408  85 C0                     TEST EAX,EAX
0043940A  7E 13                     JLE 0x0043941f
0043940C  50                        PUSH EAX
0043940D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00439410  6A 00                     PUSH 0x0
00439412  50                        PUSH EAX
00439413  8B CE                     MOV ECX,ESI
00439415  E8 65 9D FC FF            CALL 0x0040317f
0043941A  E9 5D 10 00 00            JMP 0x0043a47c
LAB_0043941f:
0043941F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439422  6A 00                     PUSH 0x0
00439424  51                        PUSH ECX
00439425  8B CE                     MOV ECX,ESI
00439427  E8 F4 C4 FC FF            CALL 0x00405920
0043942C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043942F  6A 00                     PUSH 0x0
00439431  6A 01                     PUSH 0x1
00439433  6A 00                     PUSH 0x0
00439435  52                        PUSH EDX
00439436  8B CE                     MOV ECX,ESI
00439438  E8 AA 9E FC FF            CALL 0x004032e7
0043943D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00439440  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
00439443  3B C8                     CMP ECX,EAX
00439445  75 22                     JNZ 0x00439469
00439447  8B 4F 0A                  MOV ECX,dword ptr [EDI + 0xa]
0043944A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043944D  51                        PUSH ECX
0043944E  6A 00                     PUSH 0x0
00439450  6A 00                     PUSH 0x0
00439452  52                        PUSH EDX
00439453  8B CE                     MOV ECX,ESI
00439455  E8 64 C7 FC FF            CALL 0x00405bbe
0043945A  C7 83 83 4F 7F 00 3C 00 00 00  MOV dword ptr [EBX + 0x7f4f83],0x3c
00439464  E9 13 10 00 00            JMP 0x0043a47c
LAB_00439469:
00439469  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
0043946C  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0043946F  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00439472  66 8B 11                  MOV DX,word ptr [ECX]
00439475  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439478  52                        PUSH EDX
00439479  50                        PUSH EAX
0043947A  6A 00                     PUSH 0x0
0043947C  6A 00                     PUSH 0x0
0043947E  51                        PUSH ECX
LAB_0043947f:
0043947F  8B CE                     MOV ECX,ESI
00439481  E8 12 AC FC FF            CALL 0x00404098
00439486  C7 83 83 4F 7F 00 3C 00 00 00  MOV dword ptr [EBX + 0x7f4f83],0x3c
00439490  E9 E7 0F 00 00            JMP 0x0043a47c
LAB_00439495:
00439495  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
00439498  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
0043949B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043949E  6A 00                     PUSH 0x0
004394A0  52                        PUSH EDX
004394A1  50                        PUSH EAX
004394A2  6A 3C                     PUSH 0x3c
004394A4  6A 00                     PUSH 0x0
004394A6  51                        PUSH ECX
004394A7  8B CE                     MOV ECX,ESI
004394A9  E8 C1 84 FC FF            CALL 0x0040196f
004394AE  85 C0                     TEST EAX,EAX
004394B0  7E 13                     JLE 0x004394c5
004394B2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004394B5  50                        PUSH EAX
004394B6  6A 00                     PUSH 0x0
004394B8  52                        PUSH EDX
004394B9  8B CE                     MOV ECX,ESI
004394BB  E8 BF 9C FC FF            CALL 0x0040317f
004394C0  E9 B7 0F 00 00            JMP 0x0043a47c
LAB_004394c5:
004394C5  0F 8D 3C 0C 00 00         JGE 0x0043a107
004394CB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004394CE  6A 00                     PUSH 0x0
004394D0  50                        PUSH EAX
004394D1  8B CE                     MOV ECX,ESI
004394D3  E8 48 C4 FC FF            CALL 0x00405920
004394D8  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004394DB  8B 83 97 4F 7F 00         MOV EAX,dword ptr [EBX + 0x7f4f97]
004394E1  3B C1                     CMP EAX,ECX
004394E3  75 44                     JNZ 0x00439529
004394E5  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
004394E8  8B D1                     MOV EDX,ECX
004394EA  3B C2                     CMP EAX,EDX
004394EC  75 3B                     JNZ 0x00439529
004394EE  8B 4F 0A                  MOV ECX,dword ptr [EDI + 0xa]
004394F1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004394F4  6A 00                     PUSH 0x0
004394F6  8D 45 F8                  LEA EAX,[EBP + -0x8]
004394F9  6A 00                     PUSH 0x0
004394FB  50                        PUSH EAX
004394FC  51                        PUSH ECX
004394FD  6A 01                     PUSH 0x1
004394FF  6A 00                     PUSH 0x0
00439501  52                        PUSH EDX
00439502  8B CE                     MOV ECX,ESI
00439504  E8 CD 8B FC FF            CALL 0x004020d6
00439509  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043950C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043950F  6A 00                     PUSH 0x0
00439511  6A 00                     PUSH 0x0
00439513  50                        PUSH EAX
00439514  6A 3C                     PUSH 0x3c
00439516  51                        PUSH ECX
00439517  8B CE                     MOV ECX,ESI
00439519  E8 A2 92 FC FF            CALL 0x004027c0
0043951E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00439521  52                        PUSH EDX
00439522  E8 E9 4B 27 00            CALL 0x006ae110
00439527  EB 11                     JMP 0x0043953a
LAB_00439529:
00439529  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043952C  6A 00                     PUSH 0x0
0043952E  6A 01                     PUSH 0x1
00439530  6A 00                     PUSH 0x0
00439532  50                        PUSH EAX
00439533  8B CE                     MOV ECX,ESI
00439535  E8 AD 9D FC FF            CALL 0x004032e7
LAB_0043953a:
0043953A  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0043953D  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00439540  3B C1                     CMP EAX,ECX
00439542  75 22                     JNZ 0x00439566
00439544  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
00439547  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043954A  52                        PUSH EDX
0043954B  6A 00                     PUSH 0x0
0043954D  6A 00                     PUSH 0x0
0043954F  50                        PUSH EAX
00439550  8B CE                     MOV ECX,ESI
00439552  E8 67 C6 FC FF            CALL 0x00405bbe
00439557  C7 83 83 4F 7F 00 3C 00 00 00  MOV dword ptr [EBX + 0x7f4f83],0x3c
00439561  E9 16 0F 00 00            JMP 0x0043a47c
LAB_00439566:
00439566  8B 4F 0A                  MOV ECX,dword ptr [EDI + 0xa]
00439569  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0043956C  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
0043956F  66 8B 02                  MOV AX,word ptr [EDX]
00439572  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439575  50                        PUSH EAX
00439576  51                        PUSH ECX
00439577  6A 00                     PUSH 0x0
00439579  6A 00                     PUSH 0x0
0043957B  52                        PUSH EDX
0043957C  E9 FE FE FF FF            JMP 0x0043947f
LAB_00439581:
00439581  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00439584  6A 04                     PUSH 0x4
00439586  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
0043958A  51                        PUSH ECX
0043958B  6A FF                     PUSH -0x1
0043958D  8B CE                     MOV ECX,ESI
0043958F  E8 26 93 FC FF            CALL 0x004028ba
00439594  8B F8                     MOV EDI,EAX
00439596  8B 83 23 50 7F 00         MOV EAX,dword ptr [EBX + 0x7f5023]
0043959C  83 E8 00                  SUB EAX,0x0
0043959F  0F 84 EA 00 00 00         JZ 0x0043968f
004395A5  48                        DEC EAX
004395A6  74 2E                     JZ 0x004395d6
004395A8  68 E8 78 7A 00            PUSH 0x7a78e8
004395AD  68 CC 4C 7A 00            PUSH 0x7a4ccc
004395B2  6A 00                     PUSH 0x0
004395B4  6A 00                     PUSH 0x0
004395B6  68 85 18 00 00            PUSH 0x1885
004395BB  68 04 60 7A 00            PUSH 0x7a6004
004395C0  E8 0B 3F 27 00            CALL 0x006ad4d0
004395C5  83 C4 18                  ADD ESP,0x18
004395C8  85 C0                     TEST EAX,EAX
004395CA  0F 84 AC 0E 00 00         JZ 0x0043a47c
004395D0  CC                        INT3
LAB_004395d6:
004395D6  8B 9B D3 4F 7F 00         MOV EBX,dword ptr [EBX + 0x7f4fd3]
004395DC  81 FB 9A 01 00 00         CMP EBX,0x19a
004395E2  7F 1D                     JG 0x00439601
004395E4  0F 84 11 02 00 00         JZ 0x004397fb
004395EA  85 DB                     TEST EBX,EBX
004395EC  0F 84 A2 0D 00 00         JZ 0x0043a394
004395F2  83 FB 5A                  CMP EBX,0x5a
004395F5  74 45                     JZ 0x0043963c
004395F7  81 FB 72 01 00 00         CMP EBX,0x172
004395FD  74 3D                     JZ 0x0043963c
004395FF  EB 0D                     JMP 0x0043960e
LAB_00439601:
00439601  81 EB A4 01 00 00         SUB EBX,0x1a4
00439607  74 33                     JZ 0x0043963c
00439609  83 EB 14                  SUB EBX,0x14
0043960C  74 2E                     JZ 0x0043963c
LAB_0043960e:
0043960E  68 A8 78 7A 00            PUSH 0x7a78a8
00439613  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439618  6A 00                     PUSH 0x0
0043961A  6A 00                     PUSH 0x0
0043961C  68 5A 18 00 00            PUSH 0x185a
00439621  68 04 60 7A 00            PUSH 0x7a6004
00439626  E8 A5 3E 27 00            CALL 0x006ad4d0
0043962B  83 C4 18                  ADD ESP,0x18
0043962E  85 C0                     TEST EAX,EAX
00439630  0F 84 46 0E 00 00         JZ 0x0043a47c
00439636  CC                        INT3
LAB_0043963c:
0043963C  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
00439640  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00439643  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00439646  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00439649  52                        PUSH EDX
0043964A  6A 00                     PUSH 0x0
0043964C  50                        PUSH EAX
0043964D  51                        PUSH ECX
0043964E  6A 01                     PUSH 0x1
00439650  53                        PUSH EBX
00439651  8B CE                     MOV ECX,ESI
00439653  E8 17 83 FC FF            CALL 0x0040196f
00439658  85 C0                     TEST EAX,EAX
0043965A  7E 10                     JLE 0x0043966c
0043965C  50                        PUSH EAX
0043965D  6A 01                     PUSH 0x1
0043965F  53                        PUSH EBX
00439660  8B CE                     MOV ECX,ESI
00439662  E8 18 9B FC FF            CALL 0x0040317f
00439667  E9 10 0E 00 00            JMP 0x0043a47c
LAB_0043966c:
0043966C  0F 8D 95 0A 00 00         JGE 0x0043a107
LAB_00439672:
00439672  6A 01                     PUSH 0x1
00439674  53                        PUSH EBX
00439675  8B CE                     MOV ECX,ESI
00439677  E8 A4 C2 FC FF            CALL 0x00405920
0043967C  6A 00                     PUSH 0x0
0043967E  6A 01                     PUSH 0x1
00439680  6A 01                     PUSH 0x1
00439682  53                        PUSH EBX
00439683  8B CE                     MOV ECX,ESI
00439685  E8 5D 9C FC FF            CALL 0x004032e7
0043968A  E9 D4 0D 00 00            JMP 0x0043a463
LAB_0043968f:
0043968F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439692  6A 00                     PUSH 0x0
00439694  6A 00                     PUSH 0x0
00439696  6A 00                     PUSH 0x0
00439698  52                        PUSH EDX
00439699  8B CE                     MOV ECX,ESI
0043969B  C7 83 23 50 7F 00 01 00 00 00  MOV dword ptr [EBX + 0x7f5023],0x1
004396A5  E8 3D 9C FC FF            CALL 0x004032e7
004396AA  8B 9B D3 4F 7F 00         MOV EBX,dword ptr [EBX + 0x7f4fd3]
004396B0  81 FB 9A 01 00 00         CMP EBX,0x19a
004396B6  7F 4D                     JG 0x00439705
004396B8  74 17                     JZ 0x004396d1
004396BA  85 DB                     TEST EBX,EBX
004396BC  0F 84 25 02 00 00         JZ 0x004398e7
004396C2  83 FB 5A                  CMP EBX,0x5a
004396C5  74 79                     JZ 0x00439740
004396C7  81 FB 72 01 00 00         CMP EBX,0x172
004396CD  74 71                     JZ 0x00439740
004396CF  EB 41                     JMP 0x00439712
LAB_004396d1:
004396D1  66 8B 47 32               MOV AX,word ptr [EDI + 0x32]
004396D5  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004396D8  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
004396DB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004396DE  50                        PUSH EAX
004396DF  6A 00                     PUSH 0x0
004396E1  51                        PUSH ECX
004396E2  52                        PUSH EDX
004396E3  6A 01                     PUSH 0x1
004396E5  53                        PUSH EBX
004396E6  8B CE                     MOV ECX,ESI
004396E8  E8 82 82 FC FF            CALL 0x0040196f
004396ED  85 C0                     TEST EAX,EAX
004396EF  0F 8E 91 02 00 00         JLE 0x00439986
004396F5  50                        PUSH EAX
004396F6  6A 01                     PUSH 0x1
004396F8  53                        PUSH EBX
004396F9  8B CE                     MOV ECX,ESI
004396FB  E8 7F 9A FC FF            CALL 0x0040317f
00439700  E9 77 0D 00 00            JMP 0x0043a47c
LAB_00439705:
00439705  81 EB A4 01 00 00         SUB EBX,0x1a4
0043970B  74 33                     JZ 0x00439740
0043970D  83 EB 14                  SUB EBX,0x14
00439710  74 2E                     JZ 0x00439740
LAB_00439712:
00439712  68 68 78 7A 00            PUSH 0x7a7868
00439717  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043971C  6A 00                     PUSH 0x0
0043971E  6A 00                     PUSH 0x0
00439720  68 81 18 00 00            PUSH 0x1881
00439725  68 04 60 7A 00            PUSH 0x7a6004
0043972A  E8 A1 3D 27 00            CALL 0x006ad4d0
0043972F  83 C4 18                  ADD ESP,0x18
00439732  85 C0                     TEST EAX,EAX
00439734  0F 84 42 0D 00 00         JZ 0x0043a47c
0043973A  CC                        INT3
LAB_00439740:
00439740  66 8B 47 32               MOV AX,word ptr [EDI + 0x32]
00439744  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00439747  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0043974A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043974D  50                        PUSH EAX
0043974E  6A 00                     PUSH 0x0
00439750  51                        PUSH ECX
00439751  52                        PUSH EDX
00439752  6A 01                     PUSH 0x1
00439754  53                        PUSH EBX
00439755  8B CE                     MOV ECX,ESI
00439757  E8 13 82 FC FF            CALL 0x0040196f
0043975C  85 C0                     TEST EAX,EAX
0043975E  0F 8C 22 02 00 00         JL 0x00439986
00439764  50                        PUSH EAX
00439765  6A 01                     PUSH 0x1
00439767  53                        PUSH EBX
00439768  8B CE                     MOV ECX,ESI
0043976A  E8 10 9A FC FF            CALL 0x0040317f
0043976F  E9 08 0D 00 00            JMP 0x0043a47c
LAB_00439774:
00439774  3D 72 01 00 00            CMP EAX,0x172
00439779  0F 85 7C 05 00 00         JNZ 0x00439cfb
0043977F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00439782  6A 02                     PUSH 0x2
00439784  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
00439788  51                        PUSH ECX
00439789  6A FF                     PUSH -0x1
0043978B  8B CE                     MOV ECX,ESI
0043978D  E8 28 91 FC FF            CALL 0x004028ba
00439792  8B F8                     MOV EDI,EAX
00439794  8B 83 23 50 7F 00         MOV EAX,dword ptr [EBX + 0x7f5023]
0043979A  83 E8 00                  SUB EAX,0x0
0043979D  0F 84 02 01 00 00         JZ 0x004398a5
004397A3  48                        DEC EAX
004397A4  74 2E                     JZ 0x004397d4
004397A6  68 1C 78 7A 00            PUSH 0x7a781c
004397AB  68 CC 4C 7A 00            PUSH 0x7a4ccc
004397B0  6A 00                     PUSH 0x0
004397B2  6A 00                     PUSH 0x0
004397B4  68 DF 18 00 00            PUSH 0x18df
004397B9  68 04 60 7A 00            PUSH 0x7a6004
004397BE  E8 0D 3D 27 00            CALL 0x006ad4d0
004397C3  83 C4 18                  ADD ESP,0x18
004397C6  85 C0                     TEST EAX,EAX
004397C8  0F 84 AE 0C 00 00         JZ 0x0043a47c
004397CE  CC                        INT3
LAB_004397d4:
004397D4  8B 9B D3 4F 7F 00         MOV EBX,dword ptr [EBX + 0x7f4fd3]
004397DA  81 FB 9A 01 00 00         CMP EBX,0x19a
004397E0  7F 4D                     JG 0x0043982f
004397E2  74 17                     JZ 0x004397fb
004397E4  85 DB                     TEST EBX,EBX
004397E6  0F 84 A8 0B 00 00         JZ 0x0043a394
004397EC  83 FB 5A                  CMP EBX,0x5a
004397EF  74 79                     JZ 0x0043986a
004397F1  81 FB 72 01 00 00         CMP EBX,0x172
004397F7  74 71                     JZ 0x0043986a
004397F9  EB 41                     JMP 0x0043983c
LAB_004397fb:
004397FB  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
004397FF  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00439802  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00439805  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00439808  52                        PUSH EDX
00439809  6A 00                     PUSH 0x0
0043980B  50                        PUSH EAX
0043980C  51                        PUSH ECX
0043980D  6A 01                     PUSH 0x1
0043980F  53                        PUSH EBX
00439810  8B CE                     MOV ECX,ESI
00439812  E8 58 81 FC FF            CALL 0x0040196f
00439817  85 C0                     TEST EAX,EAX
00439819  0F 8E 53 FE FF FF         JLE 0x00439672
0043981F  50                        PUSH EAX
00439820  6A 01                     PUSH 0x1
00439822  53                        PUSH EBX
00439823  8B CE                     MOV ECX,ESI
00439825  E8 55 99 FC FF            CALL 0x0040317f
0043982A  E9 4D 0C 00 00            JMP 0x0043a47c
LAB_0043982f:
0043982F  81 EB A4 01 00 00         SUB EBX,0x1a4
00439835  74 33                     JZ 0x0043986a
00439837  83 EB 14                  SUB EBX,0x14
0043983A  74 2E                     JZ 0x0043986a
LAB_0043983c:
0043983C  68 DC 77 7A 00            PUSH 0x7a77dc
00439841  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439846  6A 00                     PUSH 0x0
00439848  6A 00                     PUSH 0x0
0043984A  68 B4 18 00 00            PUSH 0x18b4
0043984F  68 04 60 7A 00            PUSH 0x7a6004
00439854  E8 77 3C 27 00            CALL 0x006ad4d0
00439859  83 C4 18                  ADD ESP,0x18
0043985C  85 C0                     TEST EAX,EAX
0043985E  0F 84 18 0C 00 00         JZ 0x0043a47c
00439864  CC                        INT3
LAB_0043986a:
0043986A  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
0043986E  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00439871  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00439874  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00439877  52                        PUSH EDX
00439878  6A 00                     PUSH 0x0
0043987A  50                        PUSH EAX
0043987B  51                        PUSH ECX
0043987C  6A 01                     PUSH 0x1
0043987E  53                        PUSH EBX
0043987F  8B CE                     MOV ECX,ESI
00439881  E8 E9 80 FC FF            CALL 0x0040196f
00439886  85 C0                     TEST EAX,EAX
00439888  7E 10                     JLE 0x0043989a
0043988A  50                        PUSH EAX
0043988B  6A 01                     PUSH 0x1
0043988D  53                        PUSH EBX
0043988E  8B CE                     MOV ECX,ESI
00439890  E8 EA 98 FC FF            CALL 0x0040317f
00439895  E9 E2 0B 00 00            JMP 0x0043a47c
LAB_0043989a:
0043989A  0F 8D 67 08 00 00         JGE 0x0043a107
004398A0  E9 CD FD FF FF            JMP 0x00439672
LAB_004398a5:
004398A5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004398A8  6A 00                     PUSH 0x0
004398AA  6A 00                     PUSH 0x0
004398AC  6A 00                     PUSH 0x0
004398AE  52                        PUSH EDX
004398AF  8B CE                     MOV ECX,ESI
004398B1  C7 83 23 50 7F 00 01 00 00 00  MOV dword ptr [EBX + 0x7f5023],0x1
004398BB  E8 27 9A FC FF            CALL 0x004032e7
004398C0  8B 9B D3 4F 7F 00         MOV EBX,dword ptr [EBX + 0x7f4fd3]
004398C6  81 FB 9A 01 00 00         CMP EBX,0x19a
004398CC  7F 4D                     JG 0x0043991b
004398CE  0F 84 FD FD FF FF         JZ 0x004396d1
004398D4  85 DB                     TEST EBX,EBX
004398D6  74 0F                     JZ 0x004398e7
004398D8  83 FB 5A                  CMP EBX,0x5a
004398DB  74 79                     JZ 0x00439956
004398DD  81 FB 72 01 00 00         CMP EBX,0x172
004398E3  74 71                     JZ 0x00439956
004398E5  EB 41                     JMP 0x00439928
LAB_004398e7:
004398E7  66 8B 47 32               MOV AX,word ptr [EDI + 0x32]
004398EB  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004398EE  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
004398F1  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004398F4  50                        PUSH EAX
004398F5  6A 00                     PUSH 0x0
004398F7  51                        PUSH ECX
004398F8  52                        PUSH EDX
004398F9  6A 01                     PUSH 0x1
004398FB  53                        PUSH EBX
004398FC  8B CE                     MOV ECX,ESI
004398FE  E8 6C 80 FC FF            CALL 0x0040196f
00439903  85 C0                     TEST EAX,EAX
00439905  0F 8E 85 00 00 00         JLE 0x00439990
0043990B  50                        PUSH EAX
0043990C  6A 01                     PUSH 0x1
0043990E  53                        PUSH EBX
0043990F  8B CE                     MOV ECX,ESI
00439911  E8 69 98 FC FF            CALL 0x0040317f
00439916  E9 61 0B 00 00            JMP 0x0043a47c
LAB_0043991b:
0043991B  81 EB A4 01 00 00         SUB EBX,0x1a4
00439921  74 33                     JZ 0x00439956
00439923  83 EB 14                  SUB EBX,0x14
00439926  74 2E                     JZ 0x00439956
LAB_00439928:
00439928  68 9C 77 7A 00            PUSH 0x7a779c
0043992D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439932  6A 00                     PUSH 0x0
00439934  6A 00                     PUSH 0x0
00439936  68 DB 18 00 00            PUSH 0x18db
0043993B  68 04 60 7A 00            PUSH 0x7a6004
00439940  E8 8B 3B 27 00            CALL 0x006ad4d0
00439945  83 C4 18                  ADD ESP,0x18
00439948  85 C0                     TEST EAX,EAX
0043994A  0F 84 2C 0B 00 00         JZ 0x0043a47c
00439950  CC                        INT3
LAB_00439956:
00439956  66 8B 47 32               MOV AX,word ptr [EDI + 0x32]
0043995A  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0043995D  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00439960  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00439963  50                        PUSH EAX
00439964  6A 00                     PUSH 0x0
00439966  51                        PUSH ECX
00439967  52                        PUSH EDX
00439968  6A 01                     PUSH 0x1
0043996A  53                        PUSH EBX
0043996B  8B CE                     MOV ECX,ESI
0043996D  E8 FD 7F FC FF            CALL 0x0040196f
00439972  85 C0                     TEST EAX,EAX
00439974  7C 10                     JL 0x00439986
00439976  50                        PUSH EAX
00439977  6A 01                     PUSH 0x1
00439979  53                        PUSH EBX
0043997A  8B CE                     MOV ECX,ESI
0043997C  E8 FE 97 FC FF            CALL 0x0040317f
00439981  E9 F6 0A 00 00            JMP 0x0043a47c
LAB_00439986:
00439986  6A 01                     PUSH 0x1
00439988  53                        PUSH EBX
00439989  8B CE                     MOV ECX,ESI
0043998B  E8 90 BF FC FF            CALL 0x00405920
LAB_00439990:
00439990  66 8B 47 32               MOV AX,word ptr [EDI + 0x32]
00439994  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00439997  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0043999A  50                        PUSH EAX
0043999B  51                        PUSH ECX
0043999C  52                        PUSH EDX
0043999D  E9 CE 0A 00 00            JMP 0x0043a470
LAB_004399a2:
004399A2  8B 83 23 50 7F 00         MOV EAX,dword ptr [EBX + 0x7f5023]
004399A8  83 E8 00                  SUB EAX,0x0
004399AB  0F 84 B5 01 00 00         JZ 0x00439b66
004399B1  48                        DEC EAX
004399B2  74 2E                     JZ 0x004399e2
004399B4  68 50 77 7A 00            PUSH 0x7a7750
004399B9  68 CC 4C 7A 00            PUSH 0x7a4ccc
004399BE  6A 00                     PUSH 0x0
004399C0  6A 00                     PUSH 0x0
004399C2  68 D7 17 00 00            PUSH 0x17d7
004399C7  68 04 60 7A 00            PUSH 0x7a6004
004399CC  E8 FF 3A 27 00            CALL 0x006ad4d0
004399D1  83 C4 18                  ADD ESP,0x18
004399D4  85 C0                     TEST EAX,EAX
004399D6  0F 84 A0 0A 00 00         JZ 0x0043a47c
004399DC  CC                        INT3
LAB_004399e2:
004399E2  8B 83 D3 4F 7F 00         MOV EAX,dword ptr [EBX + 0x7f4fd3]
004399E8  3D 9A 01 00 00            CMP EAX,0x19a
004399ED  0F 8F E3 00 00 00         JG 0x00439ad6
004399F3  74 5E                     JZ 0x00439a53
004399F5  85 C0                     TEST EAX,EAX
004399F7  74 19                     JZ 0x00439a12
004399F9  83 F8 5A                  CMP EAX,0x5a
004399FC  0F 84 0E 01 00 00         JZ 0x00439b10
00439A02  3D 72 01 00 00            CMP EAX,0x172
00439A07  0F 84 03 01 00 00         JZ 0x00439b10
00439A0D  E9 D0 00 00 00            JMP 0x00439ae2
LAB_00439a12:
00439A12  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
00439A15  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
00439A18  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439A1B  6A 00                     PUSH 0x0
00439A1D  50                        PUSH EAX
00439A1E  51                        PUSH ECX
00439A1F  68 9A 01 00 00            PUSH 0x19a
00439A24  6A 01                     PUSH 0x1
00439A26  52                        PUSH EDX
00439A27  8B CE                     MOV ECX,ESI
00439A29  E8 41 7F FC FF            CALL 0x0040196f
00439A2E  85 C0                     TEST EAX,EAX
00439A30  0F 8E FC 01 00 00         JLE 0x00439c32
00439A36  50                        PUSH EAX
00439A37  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00439A3A  6A 01                     PUSH 0x1
00439A3C  50                        PUSH EAX
00439A3D  8B CE                     MOV ECX,ESI
00439A3F  E8 3B 97 FC FF            CALL 0x0040317f
00439A44  C7 83 D3 4F 7F 00 9A 01 00 00  MOV dword ptr [EBX + 0x7f4fd3],0x19a
00439A4E  E9 29 0A 00 00            JMP 0x0043a47c
LAB_00439a53:
00439A53  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
00439A56  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
00439A59  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439A5C  6A 00                     PUSH 0x0
00439A5E  50                        PUSH EAX
00439A5F  51                        PUSH ECX
00439A60  68 9A 01 00 00            PUSH 0x19a
00439A65  6A 01                     PUSH 0x1
00439A67  52                        PUSH EDX
00439A68  8B CE                     MOV ECX,ESI
00439A6A  E8 00 7F FC FF            CALL 0x0040196f
00439A6F  85 C0                     TEST EAX,EAX
00439A71  7E 13                     JLE 0x00439a86
00439A73  50                        PUSH EAX
00439A74  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00439A77  6A 01                     PUSH 0x1
00439A79  50                        PUSH EAX
00439A7A  8B CE                     MOV ECX,ESI
00439A7C  E8 FE 96 FC FF            CALL 0x0040317f
00439A81  E9 F6 09 00 00            JMP 0x0043a47c
LAB_00439a86:
00439A86  0F 8D 7B 06 00 00         JGE 0x0043a107
00439A8C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439A8F  6A 01                     PUSH 0x1
00439A91  51                        PUSH ECX
00439A92  8B CE                     MOV ECX,ESI
00439A94  E8 87 BE FC FF            CALL 0x00405920
00439A99  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439A9C  6A 00                     PUSH 0x0
00439A9E  6A 01                     PUSH 0x1
00439AA0  6A 01                     PUSH 0x1
00439AA2  52                        PUSH EDX
00439AA3  8B CE                     MOV ECX,ESI
00439AA5  E8 3D 98 FC FF            CALL 0x004032e7
LAB_00439aaa:
00439AAA  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
00439AAD  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00439AB0  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00439AB3  66 8B 11                  MOV DX,word ptr [ECX]
00439AB6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439AB9  52                        PUSH EDX
00439ABA  50                        PUSH EAX
00439ABB  6A 00                     PUSH 0x0
00439ABD  6A 01                     PUSH 0x1
00439ABF  51                        PUSH ECX
LAB_00439ac0:
00439AC0  8B CE                     MOV ECX,ESI
00439AC2  E8 D1 A5 FC FF            CALL 0x00404098
00439AC7  C7 83 D3 4F 7F 00 9A 01 00 00  MOV dword ptr [EBX + 0x7f4fd3],0x19a
00439AD1  E9 A6 09 00 00            JMP 0x0043a47c
LAB_00439ad6:
00439AD6  2D A4 01 00 00            SUB EAX,0x1a4
00439ADB  74 33                     JZ 0x00439b10
00439ADD  83 E8 14                  SUB EAX,0x14
00439AE0  74 2E                     JZ 0x00439b10
LAB_00439ae2:
00439AE2  68 10 77 7A 00            PUSH 0x7a7710
00439AE7  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439AEC  6A 00                     PUSH 0x0
00439AEE  6A 00                     PUSH 0x0
00439AF0  68 A9 17 00 00            PUSH 0x17a9
00439AF5  68 04 60 7A 00            PUSH 0x7a6004
00439AFA  E8 D1 39 27 00            CALL 0x006ad4d0
00439AFF  83 C4 18                  ADD ESP,0x18
00439B02  85 C0                     TEST EAX,EAX
00439B04  0F 84 72 09 00 00         JZ 0x0043a47c
00439B0A  CC                        INT3
LAB_00439b10:
00439B10  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
00439B13  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00439B16  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439B19  6A 00                     PUSH 0x0
00439B1B  52                        PUSH EDX
00439B1C  50                        PUSH EAX
00439B1D  68 9A 01 00 00            PUSH 0x19a
00439B22  6A 01                     PUSH 0x1
00439B24  51                        PUSH ECX
00439B25  8B CE                     MOV ECX,ESI
00439B27  E8 43 7E FC FF            CALL 0x0040196f
00439B2C  85 C0                     TEST EAX,EAX
00439B2E  7E 13                     JLE 0x00439b43
00439B30  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439B33  50                        PUSH EAX
00439B34  6A 01                     PUSH 0x1
00439B36  52                        PUSH EDX
00439B37  8B CE                     MOV ECX,ESI
00439B39  E8 41 96 FC FF            CALL 0x0040317f
00439B3E  E9 39 09 00 00            JMP 0x0043a47c
LAB_00439b43:
00439B43  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00439B46  6A 01                     PUSH 0x1
00439B48  50                        PUSH EAX
00439B49  8B CE                     MOV ECX,ESI
00439B4B  E8 D0 BD FC FF            CALL 0x00405920
00439B50  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439B53  6A 00                     PUSH 0x0
00439B55  6A 01                     PUSH 0x1
00439B57  6A 01                     PUSH 0x1
00439B59  51                        PUSH ECX
00439B5A  8B CE                     MOV ECX,ESI
00439B5C  E8 86 97 FC FF            CALL 0x004032e7
00439B61  E9 61 01 00 00            JMP 0x00439cc7
LAB_00439b66:
00439B66  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439B69  6A 00                     PUSH 0x0
00439B6B  6A 00                     PUSH 0x0
00439B6D  6A 00                     PUSH 0x0
00439B6F  51                        PUSH ECX
00439B70  8B CE                     MOV ECX,ESI
00439B72  C7 83 23 50 7F 00 01 00 00 00  MOV dword ptr [EBX + 0x7f5023],0x1
00439B7C  E8 66 97 FC FF            CALL 0x004032e7
00439B81  8B 83 D3 4F 7F 00         MOV EAX,dword ptr [EBX + 0x7f4fd3]
00439B87  3D 9A 01 00 00            CMP EAX,0x19a
00439B8C  0F 8F BB 00 00 00         JG 0x00439c4d
00439B92  74 5E                     JZ 0x00439bf2
00439B94  85 C0                     TEST EAX,EAX
00439B96  74 19                     JZ 0x00439bb1
00439B98  83 F8 5A                  CMP EAX,0x5a
00439B9B  0F 84 E6 00 00 00         JZ 0x00439c87
00439BA1  3D 72 01 00 00            CMP EAX,0x172
00439BA6  0F 84 DB 00 00 00         JZ 0x00439c87
00439BAC  E9 A8 00 00 00            JMP 0x00439c59
LAB_00439bb1:
00439BB1  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
00439BB4  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00439BB7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439BBA  6A 00                     PUSH 0x0
00439BBC  52                        PUSH EDX
00439BBD  50                        PUSH EAX
00439BBE  68 9A 01 00 00            PUSH 0x19a
00439BC3  6A 01                     PUSH 0x1
00439BC5  51                        PUSH ECX
00439BC6  8B CE                     MOV ECX,ESI
00439BC8  E8 A2 7D FC FF            CALL 0x0040196f
00439BCD  85 C0                     TEST EAX,EAX
00439BCF  0F 8E D5 FE FF FF         JLE 0x00439aaa
00439BD5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439BD8  50                        PUSH EAX
00439BD9  6A 01                     PUSH 0x1
00439BDB  52                        PUSH EDX
00439BDC  8B CE                     MOV ECX,ESI
00439BDE  E8 9C 95 FC FF            CALL 0x0040317f
00439BE3  C7 83 D3 4F 7F 00 9A 01 00 00  MOV dword ptr [EBX + 0x7f4fd3],0x19a
00439BED  E9 8A 08 00 00            JMP 0x0043a47c
LAB_00439bf2:
00439BF2  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
00439BF5  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00439BF8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439BFB  6A 00                     PUSH 0x0
00439BFD  52                        PUSH EDX
00439BFE  50                        PUSH EAX
00439BFF  68 9A 01 00 00            PUSH 0x19a
00439C04  6A 01                     PUSH 0x1
00439C06  51                        PUSH ECX
00439C07  8B CE                     MOV ECX,ESI
00439C09  E8 61 7D FC FF            CALL 0x0040196f
00439C0E  85 C0                     TEST EAX,EAX
00439C10  7C 13                     JL 0x00439c25
00439C12  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439C15  50                        PUSH EAX
00439C16  6A 01                     PUSH 0x1
00439C18  52                        PUSH EDX
00439C19  8B CE                     MOV ECX,ESI
00439C1B  E8 5F 95 FC FF            CALL 0x0040317f
00439C20  E9 57 08 00 00            JMP 0x0043a47c
LAB_00439c25:
00439C25  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00439C28  6A 01                     PUSH 0x1
00439C2A  50                        PUSH EAX
00439C2B  8B CE                     MOV ECX,ESI
00439C2D  E8 EE BC FC FF            CALL 0x00405920
LAB_00439c32:
00439C32  8B 4F 0A                  MOV ECX,dword ptr [EDI + 0xa]
00439C35  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00439C38  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
00439C3B  66 8B 02                  MOV AX,word ptr [EDX]
00439C3E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439C41  50                        PUSH EAX
00439C42  51                        PUSH ECX
00439C43  6A 00                     PUSH 0x0
00439C45  6A 01                     PUSH 0x1
00439C47  52                        PUSH EDX
00439C48  E9 73 FE FF FF            JMP 0x00439ac0
LAB_00439c4d:
00439C4D  2D A4 01 00 00            SUB EAX,0x1a4
00439C52  74 33                     JZ 0x00439c87
00439C54  83 E8 14                  SUB EAX,0x14
00439C57  74 2E                     JZ 0x00439c87
LAB_00439c59:
00439C59  68 D0 76 7A 00            PUSH 0x7a76d0
00439C5E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439C63  6A 00                     PUSH 0x0
00439C65  6A 00                     PUSH 0x0
00439C67  68 D3 17 00 00            PUSH 0x17d3
00439C6C  68 04 60 7A 00            PUSH 0x7a6004
00439C71  E8 5A 38 27 00            CALL 0x006ad4d0
00439C76  83 C4 18                  ADD ESP,0x18
00439C79  85 C0                     TEST EAX,EAX
00439C7B  0F 84 FB 07 00 00         JZ 0x0043a47c
00439C81  CC                        INT3
LAB_00439c87:
00439C87  8B 47 0A                  MOV EAX,dword ptr [EDI + 0xa]
00439C8A  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
00439C8D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00439C90  6A 00                     PUSH 0x0
00439C92  50                        PUSH EAX
00439C93  51                        PUSH ECX
00439C94  68 9A 01 00 00            PUSH 0x19a
00439C99  6A 01                     PUSH 0x1
00439C9B  52                        PUSH EDX
00439C9C  8B CE                     MOV ECX,ESI
00439C9E  E8 CC 7C FC FF            CALL 0x0040196f
00439CA3  85 C0                     TEST EAX,EAX
00439CA5  7E 13                     JLE 0x00439cba
00439CA7  50                        PUSH EAX
00439CA8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00439CAB  6A 01                     PUSH 0x1
00439CAD  50                        PUSH EAX
00439CAE  8B CE                     MOV ECX,ESI
00439CB0  E8 CA 94 FC FF            CALL 0x0040317f
00439CB5  E9 C2 07 00 00            JMP 0x0043a47c
LAB_00439cba:
00439CBA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439CBD  6A 01                     PUSH 0x1
00439CBF  51                        PUSH ECX
00439CC0  8B CE                     MOV ECX,ESI
00439CC2  E8 59 BC FC FF            CALL 0x00405920
LAB_00439cc7:
00439CC7  8B 57 0A                  MOV EDX,dword ptr [EDI + 0xa]
00439CCA  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
00439CCD  8A 57 04                  MOV DL,byte ptr [EDI + 0x4]
00439CD0  66 8B 08                  MOV CX,word ptr [EAX]
00439CD3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00439CD6  51                        PUSH ECX
00439CD7  52                        PUSH EDX
00439CD8  6A 00                     PUSH 0x0
00439CDA  6A 01                     PUSH 0x1
00439CDC  50                        PUSH EAX
00439CDD  E9 DE FD FF FF            JMP 0x00439ac0
LAB_00439ce2:
00439CE2  2D A4 01 00 00            SUB EAX,0x1a4
00439CE7  0F 84 D6 04 00 00         JZ 0x0043a1c3
00439CED  83 E8 0A                  SUB EAX,0xa
00439CF0  0F 84 F5 01 00 00         JZ 0x00439eeb
00439CF6  83 E8 0A                  SUB EAX,0xa
00439CF9  74 45                     JZ 0x00439d40
LAB_00439cfb:
00439CFB  68 9C 76 7A 00            PUSH 0x7a769c
00439D00  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439D05  6A 00                     PUSH 0x0
00439D07  6A 00                     PUSH 0x0
00439D09  68 98 19 00 00            PUSH 0x1998
00439D0E  68 04 60 7A 00            PUSH 0x7a6004
00439D13  E8 B8 37 27 00            CALL 0x006ad4d0
00439D18  83 C4 18                  ADD ESP,0x18
00439D1B  85 C0                     TEST EAX,EAX
00439D1D  74 01                     JZ 0x00439d20
00439D1F  CC                        INT3
LAB_00439d20:
00439D20  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00439D26  68 99 19 00 00            PUSH 0x1999
00439D2B  68 04 60 7A 00            PUSH 0x7a6004
00439D30  51                        PUSH ECX
00439D31  68 09 00 FE AF            PUSH 0xaffe0009
00439D36  E8 05 C1 26 00            CALL 0x006a5e40
00439D3B  E9 3C 07 00 00            JMP 0x0043a47c
LAB_00439d40:
00439D40  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00439D43  6A 06                     PUSH 0x6
00439D45  8B CE                     MOV ECX,ESI
00439D47  66 8B 42 08               MOV AX,word ptr [EDX + 0x8]
00439D4B  50                        PUSH EAX
00439D4C  6A FF                     PUSH -0x1
00439D4E  E8 67 8B FC FF            CALL 0x004028ba
00439D53  8B F8                     MOV EDI,EAX
00439D55  8B 83 23 50 7F 00         MOV EAX,dword ptr [EBX + 0x7f5023]
00439D5B  83 E8 00                  SUB EAX,0x0
00439D5E  0F 84 D2 00 00 00         JZ 0x00439e36
00439D64  48                        DEC EAX
00439D65  74 2E                     JZ 0x00439d95
00439D67  68 50 76 7A 00            PUSH 0x7a7650
00439D6C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439D71  6A 00                     PUSH 0x0
00439D73  6A 00                     PUSH 0x0
00439D75  68 93 19 00 00            PUSH 0x1993
00439D7A  68 04 60 7A 00            PUSH 0x7a6004
00439D7F  E8 4C 37 27 00            CALL 0x006ad4d0
00439D84  83 C4 18                  ADD ESP,0x18
00439D87  85 C0                     TEST EAX,EAX
00439D89  0F 84 ED 06 00 00         JZ 0x0043a47c
00439D8F  CC                        INT3
LAB_00439d95:
00439D95  8B 9B D3 4F 7F 00         MOV EBX,dword ptr [EBX + 0x7f4fd3]
00439D9B  81 FB 9A 01 00 00         CMP EBX,0x19a
00439DA1  7F 1D                     JG 0x00439dc0
00439DA3  0F 84 D2 04 00 00         JZ 0x0043a27b
00439DA9  85 DB                     TEST EBX,EBX
00439DAB  0F 84 96 04 00 00         JZ 0x0043a247
00439DB1  83 FB 5A                  CMP EBX,0x5a
00439DB4  74 45                     JZ 0x00439dfb
00439DB6  81 FB 72 01 00 00         CMP EBX,0x172
00439DBC  74 3D                     JZ 0x00439dfb
00439DBE  EB 0D                     JMP 0x00439dcd
LAB_00439dc0:
00439DC0  81 EB A4 01 00 00         SUB EBX,0x1a4
00439DC6  74 33                     JZ 0x00439dfb
00439DC8  83 EB 14                  SUB EBX,0x14
00439DCB  74 2E                     JZ 0x00439dfb
LAB_00439dcd:
00439DCD  68 0C 76 7A 00            PUSH 0x7a760c
00439DD2  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439DD7  6A 00                     PUSH 0x0
00439DD9  6A 00                     PUSH 0x0
00439DDB  68 68 19 00 00            PUSH 0x1968
00439DE0  68 04 60 7A 00            PUSH 0x7a6004
00439DE5  E8 E6 36 27 00            CALL 0x006ad4d0
00439DEA  83 C4 18                  ADD ESP,0x18
00439DED  85 C0                     TEST EAX,EAX
00439DEF  0F 84 87 06 00 00         JZ 0x0043a47c
00439DF5  CC                        INT3
LAB_00439dfb:
00439DFB  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
00439DFF  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
00439E02  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00439E05  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00439E08  51                        PUSH ECX
00439E09  6A 00                     PUSH 0x0
00439E0B  52                        PUSH EDX
00439E0C  50                        PUSH EAX
00439E0D  6A 01                     PUSH 0x1
00439E0F  53                        PUSH EBX
00439E10  8B CE                     MOV ECX,ESI
00439E12  E8 58 7B FC FF            CALL 0x0040196f
00439E17  85 C0                     TEST EAX,EAX
00439E19  7E 10                     JLE 0x00439e2b
00439E1B  50                        PUSH EAX
00439E1C  6A 01                     PUSH 0x1
00439E1E  53                        PUSH EBX
00439E1F  8B CE                     MOV ECX,ESI
00439E21  E8 59 93 FC FF            CALL 0x0040317f
00439E26  E9 51 06 00 00            JMP 0x0043a47c
LAB_00439e2b:
00439E2B  0F 8D D6 02 00 00         JGE 0x0043a107
00439E31  E9 EA 04 00 00            JMP 0x0043a320
LAB_00439e36:
00439E36  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439E39  6A 00                     PUSH 0x0
00439E3B  6A 00                     PUSH 0x0
00439E3D  6A 00                     PUSH 0x0
00439E3F  51                        PUSH ECX
00439E40  8B CE                     MOV ECX,ESI
00439E42  C7 83 23 50 7F 00 01 00 00 00  MOV dword ptr [EBX + 0x7f5023],0x1
00439E4C  E8 96 94 FC FF            CALL 0x004032e7
00439E51  8B 9B D3 4F 7F 00         MOV EBX,dword ptr [EBX + 0x7f4fd3]
00439E57  81 FB 9A 01 00 00         CMP EBX,0x19a
00439E5D  7F 1D                     JG 0x00439e7c
00439E5F  0F 84 63 05 00 00         JZ 0x0043a3c8
00439E65  85 DB                     TEST EBX,EBX
00439E67  0F 84 27 05 00 00         JZ 0x0043a394
00439E6D  83 FB 5A                  CMP EBX,0x5a
00439E70  74 45                     JZ 0x00439eb7
00439E72  81 FB 72 01 00 00         CMP EBX,0x172
00439E78  74 3D                     JZ 0x00439eb7
00439E7A  EB 0D                     JMP 0x00439e89
LAB_00439e7c:
00439E7C  81 EB A4 01 00 00         SUB EBX,0x1a4
00439E82  74 33                     JZ 0x00439eb7
00439E84  83 EB 14                  SUB EBX,0x14
00439E87  74 2E                     JZ 0x00439eb7
LAB_00439e89:
00439E89  68 CC 75 7A 00            PUSH 0x7a75cc
00439E8E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439E93  6A 00                     PUSH 0x0
00439E95  6A 00                     PUSH 0x0
00439E97  68 8F 19 00 00            PUSH 0x198f
00439E9C  68 04 60 7A 00            PUSH 0x7a6004
00439EA1  E8 2A 36 27 00            CALL 0x006ad4d0
00439EA6  83 C4 18                  ADD ESP,0x18
00439EA9  85 C0                     TEST EAX,EAX
00439EAB  0F 84 CB 05 00 00         JZ 0x0043a47c
00439EB1  CC                        INT3
LAB_00439eb7:
00439EB7  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
00439EBB  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00439EBE  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00439EC1  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00439EC4  52                        PUSH EDX
00439EC5  6A 00                     PUSH 0x0
00439EC7  50                        PUSH EAX
00439EC8  51                        PUSH ECX
00439EC9  6A 01                     PUSH 0x1
00439ECB  53                        PUSH EBX
00439ECC  8B CE                     MOV ECX,ESI
00439ECE  E8 9C 7A FC FF            CALL 0x0040196f
00439ED3  85 C0                     TEST EAX,EAX
00439ED5  0F 8C 7E 05 00 00         JL 0x0043a459
00439EDB  50                        PUSH EAX
00439EDC  6A 01                     PUSH 0x1
00439EDE  53                        PUSH EBX
00439EDF  8B CE                     MOV ECX,ESI
00439EE1  E8 99 92 FC FF            CALL 0x0040317f
00439EE6  E9 91 05 00 00            JMP 0x0043a47c
LAB_00439eeb:
00439EEB  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
00439EEF  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00439EF2  6A 03                     PUSH 0x3
00439EF4  52                        PUSH EDX
00439EF5  50                        PUSH EAX
00439EF6  8B CE                     MOV ECX,ESI
00439EF8  E8 BD 89 FC FF            CALL 0x004028ba
00439EFD  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00439F00  8B 83 23 50 7F 00         MOV EAX,dword ptr [EBX + 0x7f5023]
00439F06  83 E8 00                  SUB EAX,0x0
00439F09  0F 84 45 01 00 00         JZ 0x0043a054
00439F0F  48                        DEC EAX
00439F10  74 2E                     JZ 0x00439f40
00439F12  68 80 75 7A 00            PUSH 0x7a7580
00439F17  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439F1C  6A 00                     PUSH 0x0
00439F1E  6A 00                     PUSH 0x0
00439F20  68 2B 18 00 00            PUSH 0x182b
00439F25  68 04 60 7A 00            PUSH 0x7a6004
00439F2A  E8 A1 35 27 00            CALL 0x006ad4d0
00439F2F  83 C4 18                  ADD ESP,0x18
00439F32  85 C0                     TEST EAX,EAX
00439F34  0F 84 42 05 00 00         JZ 0x0043a47c
00439F3A  CC                        INT3
LAB_00439f40:
00439F40  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00439F43  6A 00                     PUSH 0x0
00439F45  6A 00                     PUSH 0x0
00439F47  6A 01                     PUSH 0x1
00439F49  51                        PUSH ECX
00439F4A  8B CE                     MOV ECX,ESI
00439F4C  C7 83 23 50 7F 00 00 00 00 00  MOV dword ptr [EBX + 0x7f5023],0x0
00439F56  E8 8C 93 FC FF            CALL 0x004032e7
00439F5B  8B 9B 83 4F 7F 00         MOV EBX,dword ptr [EBX + 0x7f4f83]
00439F61  85 DB                     TEST EBX,EBX
00439F63  0F 84 0E 02 00 00         JZ 0x0043a177
00439F69  83 FB 3C                  CMP EBX,0x3c
00439F6C  0F 84 8C 00 00 00         JZ 0x00439ffe
00439F72  81 FB AE 01 00 00         CMP EBX,0x1ae
00439F78  74 2E                     JZ 0x00439fa8
00439F7A  68 40 75 7A 00            PUSH 0x7a7540
00439F7F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00439F84  6A 00                     PUSH 0x0
00439F86  6A 00                     PUSH 0x0
00439F88  68 27 18 00 00            PUSH 0x1827
00439F8D  68 04 60 7A 00            PUSH 0x7a6004
00439F92  E8 39 35 27 00            CALL 0x006ad4d0
00439F97  83 C4 18                  ADD ESP,0x18
00439F9A  85 C0                     TEST EAX,EAX
00439F9C  0F 84 DA 04 00 00         JZ 0x0043a47c
00439FA2  CC                        INT3
LAB_00439fa8:
00439FA8  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
00439FAC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00439FAF  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
00439FB2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00439FB5  52                        PUSH EDX
00439FB6  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
00439FB9  6A 00                     PUSH 0x0
00439FBB  50                        PUSH EAX
00439FBC  52                        PUSH EDX
00439FBD  6A 00                     PUSH 0x0
00439FBF  53                        PUSH EBX
00439FC0  8B CE                     MOV ECX,ESI
00439FC2  E8 A8 79 FC FF            CALL 0x0040196f
00439FC7  85 C0                     TEST EAX,EAX
00439FC9  7C 10                     JL 0x00439fdb
00439FCB  50                        PUSH EAX
00439FCC  6A 00                     PUSH 0x0
00439FCE  53                        PUSH EBX
00439FCF  8B CE                     MOV ECX,ESI
00439FD1  E8 A9 91 FC FF            CALL 0x0040317f
00439FD6  E9 A1 04 00 00            JMP 0x0043a47c
LAB_00439fdb:
00439FDB  6A 00                     PUSH 0x0
00439FDD  53                        PUSH EBX
00439FDE  8B CE                     MOV ECX,ESI
00439FE0  E8 3B B9 FC FF            CALL 0x00405920
00439FE5  66 8B 47 08               MOV AX,word ptr [EDI + 0x8]
00439FE9  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00439FEC  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
00439FEF  50                        PUSH EAX
00439FF0  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
00439FF3  51                        PUSH ECX
00439FF4  50                        PUSH EAX
00439FF5  6A 00                     PUSH 0x0
00439FF7  6A 00                     PUSH 0x0
00439FF9  E9 76 04 00 00            JMP 0x0043a474
LAB_00439ffe:
00439FFE  66 8B 4F 08               MOV CX,word ptr [EDI + 0x8]
0043A002  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0043A005  8A 57 04                  MOV DL,byte ptr [EDI + 0x4]
0043A008  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043A00B  51                        PUSH ECX
0043A00C  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0043A00F  6A 00                     PUSH 0x0
0043A011  52                        PUSH EDX
0043A012  51                        PUSH ECX
0043A013  6A 00                     PUSH 0x0
0043A015  53                        PUSH EBX
0043A016  8B CE                     MOV ECX,ESI
0043A018  E8 52 79 FC FF            CALL 0x0040196f
0043A01D  85 C0                     TEST EAX,EAX
0043A01F  7E 10                     JLE 0x0043a031
0043A021  50                        PUSH EAX
0043A022  6A 00                     PUSH 0x0
0043A024  53                        PUSH EBX
0043A025  8B CE                     MOV ECX,ESI
0043A027  E8 53 91 FC FF            CALL 0x0040317f
0043A02C  E9 4B 04 00 00            JMP 0x0043a47c
LAB_0043a031:
0043A031  6A 00                     PUSH 0x0
0043A033  53                        PUSH EBX
0043A034  8B CE                     MOV ECX,ESI
0043A036  E8 E5 B8 FC FF            CALL 0x00405920
0043A03B  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
0043A03F  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0043A042  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
0043A045  52                        PUSH EDX
0043A046  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
0043A049  50                        PUSH EAX
0043A04A  52                        PUSH EDX
0043A04B  6A 00                     PUSH 0x0
0043A04D  6A 00                     PUSH 0x0
0043A04F  E9 20 04 00 00            JMP 0x0043a474
LAB_0043a054:
0043A054  8B 9B 83 4F 7F 00         MOV EBX,dword ptr [EBX + 0x7f4f83]
0043A05A  85 DB                     TEST EBX,EBX
0043A05C  0F 84 15 01 00 00         JZ 0x0043a177
0043A062  83 FB 3C                  CMP EBX,0x3c
0043A065  0F 84 A8 00 00 00         JZ 0x0043a113
0043A06B  81 FB AE 01 00 00         CMP EBX,0x1ae
0043A071  74 2E                     JZ 0x0043a0a1
0043A073  68 00 75 7A 00            PUSH 0x7a7500
0043A078  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043A07D  6A 00                     PUSH 0x0
0043A07F  6A 00                     PUSH 0x0
0043A081  68 03 18 00 00            PUSH 0x1803
0043A086  68 04 60 7A 00            PUSH 0x7a6004
0043A08B  E8 40 34 27 00            CALL 0x006ad4d0
0043A090  83 C4 18                  ADD ESP,0x18
0043A093  85 C0                     TEST EAX,EAX
0043A095  0F 84 E1 03 00 00         JZ 0x0043a47c
0043A09B  CC                        INT3
LAB_0043a0a1:
0043A0A1  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
0043A0A5  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0043A0A8  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
0043A0AB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043A0AE  52                        PUSH EDX
0043A0AF  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
0043A0B2  6A 00                     PUSH 0x0
0043A0B4  50                        PUSH EAX
0043A0B5  52                        PUSH EDX
0043A0B6  6A 00                     PUSH 0x0
0043A0B8  53                        PUSH EBX
0043A0B9  8B CE                     MOV ECX,ESI
0043A0BB  E8 AF 78 FC FF            CALL 0x0040196f
0043A0C0  85 C0                     TEST EAX,EAX
0043A0C2  7E 10                     JLE 0x0043a0d4
0043A0C4  50                        PUSH EAX
0043A0C5  6A 00                     PUSH 0x0
0043A0C7  53                        PUSH EBX
0043A0C8  8B CE                     MOV ECX,ESI
0043A0CA  E8 B0 90 FC FF            CALL 0x0040317f
0043A0CF  E9 A8 03 00 00            JMP 0x0043a47c
LAB_0043a0d4:
0043A0D4  7D 31                     JGE 0x0043a107
0043A0D6  6A 00                     PUSH 0x0
0043A0D8  53                        PUSH EBX
0043A0D9  8B CE                     MOV ECX,ESI
0043A0DB  E8 40 B8 FC FF            CALL 0x00405920
0043A0E0  6A 00                     PUSH 0x0
0043A0E2  6A 01                     PUSH 0x1
0043A0E4  6A 00                     PUSH 0x0
0043A0E6  53                        PUSH EBX
0043A0E7  8B CE                     MOV ECX,ESI
0043A0E9  E8 F9 91 FC FF            CALL 0x004032e7
0043A0EE  66 8B 47 08               MOV AX,word ptr [EDI + 0x8]
0043A0F2  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0043A0F5  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
0043A0F8  50                        PUSH EAX
0043A0F9  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
0043A0FC  51                        PUSH ECX
0043A0FD  50                        PUSH EAX
0043A0FE  6A 00                     PUSH 0x0
0043A100  6A 00                     PUSH 0x0
0043A102  E9 6D 03 00 00            JMP 0x0043a474
LAB_0043a107:
0043A107  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
0043A10E  E9 69 03 00 00            JMP 0x0043a47c
LAB_0043a113:
0043A113  66 8B 4F 08               MOV CX,word ptr [EDI + 0x8]
0043A117  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0043A11A  8A 57 04                  MOV DL,byte ptr [EDI + 0x4]
0043A11D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043A120  51                        PUSH ECX
0043A121  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0043A124  6A 00                     PUSH 0x0
0043A126  52                        PUSH EDX
0043A127  51                        PUSH ECX
0043A128  6A 00                     PUSH 0x0
0043A12A  53                        PUSH EBX
0043A12B  8B CE                     MOV ECX,ESI
0043A12D  E8 3D 78 FC FF            CALL 0x0040196f
0043A132  85 C0                     TEST EAX,EAX
0043A134  7E 10                     JLE 0x0043a146
0043A136  50                        PUSH EAX
0043A137  6A 00                     PUSH 0x0
0043A139  53                        PUSH EBX
0043A13A  8B CE                     MOV ECX,ESI
0043A13C  E8 3E 90 FC FF            CALL 0x0040317f
0043A141  E9 36 03 00 00            JMP 0x0043a47c
LAB_0043a146:
0043A146  6A 00                     PUSH 0x0
0043A148  53                        PUSH EBX
0043A149  8B CE                     MOV ECX,ESI
0043A14B  E8 D0 B7 FC FF            CALL 0x00405920
0043A150  6A 00                     PUSH 0x0
0043A152  6A 01                     PUSH 0x1
0043A154  6A 00                     PUSH 0x0
0043A156  53                        PUSH EBX
0043A157  8B CE                     MOV ECX,ESI
0043A159  E8 89 91 FC FF            CALL 0x004032e7
0043A15E  66 8B 57 08               MOV DX,word ptr [EDI + 0x8]
0043A162  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0043A165  8A 47 04                  MOV AL,byte ptr [EDI + 0x4]
0043A168  52                        PUSH EDX
0043A169  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
0043A16C  50                        PUSH EAX
0043A16D  52                        PUSH EDX
0043A16E  6A 00                     PUSH 0x0
0043A170  6A 00                     PUSH 0x0
0043A172  E9 FD 02 00 00            JMP 0x0043a474
LAB_0043a177:
0043A177  66 8B 47 08               MOV AX,word ptr [EDI + 0x8]
0043A17B  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0043A17E  8A 4F 04                  MOV CL,byte ptr [EDI + 0x4]
0043A181  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043A184  50                        PUSH EAX
0043A185  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
0043A188  6A 00                     PUSH 0x0
0043A18A  51                        PUSH ECX
0043A18B  50                        PUSH EAX
0043A18C  6A 00                     PUSH 0x0
0043A18E  53                        PUSH EBX
0043A18F  8B CE                     MOV ECX,ESI
0043A191  E8 D9 77 FC FF            CALL 0x0040196f
0043A196  85 C0                     TEST EAX,EAX
0043A198  7E 10                     JLE 0x0043a1aa
0043A19A  50                        PUSH EAX
0043A19B  6A 00                     PUSH 0x0
0043A19D  53                        PUSH EBX
0043A19E  8B CE                     MOV ECX,ESI
0043A1A0  E8 DA 8F FC FF            CALL 0x0040317f
0043A1A5  E9 D2 02 00 00            JMP 0x0043a47c
LAB_0043a1aa:
0043A1AA  66 8B 4F 08               MOV CX,word ptr [EDI + 0x8]
0043A1AE  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0043A1B1  8A 57 04                  MOV DL,byte ptr [EDI + 0x4]
0043A1B4  51                        PUSH ECX
0043A1B5  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0043A1B8  52                        PUSH EDX
0043A1B9  51                        PUSH ECX
0043A1BA  6A 00                     PUSH 0x0
0043A1BC  6A 00                     PUSH 0x0
0043A1BE  E9 B1 02 00 00            JMP 0x0043a474
LAB_0043a1c3:
0043A1C3  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0043A1C6  6A 05                     PUSH 0x5
0043A1C8  8B CE                     MOV ECX,ESI
0043A1CA  66 8B 42 08               MOV AX,word ptr [EDX + 0x8]
0043A1CE  50                        PUSH EAX
0043A1CF  6A FF                     PUSH -0x1
0043A1D1  E8 E4 86 FC FF            CALL 0x004028ba
0043A1D6  8B F8                     MOV EDI,EAX
0043A1D8  8B 83 23 50 7F 00         MOV EAX,dword ptr [EBX + 0x7f5023]
0043A1DE  83 E8 00                  SUB EAX,0x0
0043A1E1  0F 84 63 01 00 00         JZ 0x0043a34a
0043A1E7  48                        DEC EAX
0043A1E8  74 2E                     JZ 0x0043a218
0043A1EA  68 50 76 7A 00            PUSH 0x7a7650
0043A1EF  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043A1F4  6A 00                     PUSH 0x0
0043A1F6  6A 00                     PUSH 0x0
0043A1F8  68 39 19 00 00            PUSH 0x1939
0043A1FD  68 04 60 7A 00            PUSH 0x7a6004
0043A202  E8 C9 32 27 00            CALL 0x006ad4d0
0043A207  83 C4 18                  ADD ESP,0x18
0043A20A  85 C0                     TEST EAX,EAX
0043A20C  0F 84 6A 02 00 00         JZ 0x0043a47c
0043A212  CC                        INT3
LAB_0043a218:
0043A218  8B 9B D3 4F 7F 00         MOV EBX,dword ptr [EBX + 0x7f4fd3]
0043A21E  81 FB 9A 01 00 00         CMP EBX,0x19a
0043A224  0F 8F 85 00 00 00         JG 0x0043a2af
0043A22A  74 4F                     JZ 0x0043a27b
0043A22C  85 DB                     TEST EBX,EBX
0043A22E  74 17                     JZ 0x0043a247
0043A230  83 FB 5A                  CMP EBX,0x5a
0043A233  0F 84 B1 00 00 00         JZ 0x0043a2ea
0043A239  81 FB 72 01 00 00         CMP EBX,0x172
0043A23F  0F 84 A5 00 00 00         JZ 0x0043a2ea
0043A245  EB 75                     JMP 0x0043a2bc
LAB_0043a247:
0043A247  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
0043A24B  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
0043A24E  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0043A251  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043A254  51                        PUSH ECX
0043A255  6A 00                     PUSH 0x0
0043A257  52                        PUSH EDX
0043A258  50                        PUSH EAX
0043A259  6A 01                     PUSH 0x1
0043A25B  53                        PUSH EBX
0043A25C  8B CE                     MOV ECX,ESI
0043A25E  E8 0C 77 FC FF            CALL 0x0040196f
0043A263  85 C0                     TEST EAX,EAX
0043A265  0F 8E CD 00 00 00         JLE 0x0043a338
0043A26B  50                        PUSH EAX
0043A26C  6A 01                     PUSH 0x1
0043A26E  53                        PUSH EBX
0043A26F  8B CE                     MOV ECX,ESI
0043A271  E8 09 8F FC FF            CALL 0x0040317f
0043A276  E9 01 02 00 00            JMP 0x0043a47c
LAB_0043a27b:
0043A27B  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
0043A27F  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
0043A282  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0043A285  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043A288  51                        PUSH ECX
0043A289  6A 00                     PUSH 0x0
0043A28B  52                        PUSH EDX
0043A28C  50                        PUSH EAX
0043A28D  6A 01                     PUSH 0x1
0043A28F  53                        PUSH EBX
0043A290  8B CE                     MOV ECX,ESI
0043A292  E8 D8 76 FC FF            CALL 0x0040196f
0043A297  85 C0                     TEST EAX,EAX
0043A299  0F 8E 81 00 00 00         JLE 0x0043a320
0043A29F  50                        PUSH EAX
0043A2A0  6A 01                     PUSH 0x1
0043A2A2  53                        PUSH EBX
0043A2A3  8B CE                     MOV ECX,ESI
0043A2A5  E8 D5 8E FC FF            CALL 0x0040317f
0043A2AA  E9 CD 01 00 00            JMP 0x0043a47c
LAB_0043a2af:
0043A2AF  81 EB A4 01 00 00         SUB EBX,0x1a4
0043A2B5  74 33                     JZ 0x0043a2ea
0043A2B7  83 EB 14                  SUB EBX,0x14
0043A2BA  74 2E                     JZ 0x0043a2ea
LAB_0043a2bc:
0043A2BC  68 0C 76 7A 00            PUSH 0x7a760c
0043A2C1  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043A2C6  6A 00                     PUSH 0x0
0043A2C8  6A 00                     PUSH 0x0
0043A2CA  68 0E 19 00 00            PUSH 0x190e
0043A2CF  68 04 60 7A 00            PUSH 0x7a6004
0043A2D4  E8 F7 31 27 00            CALL 0x006ad4d0
0043A2D9  83 C4 18                  ADD ESP,0x18
0043A2DC  85 C0                     TEST EAX,EAX
0043A2DE  0F 84 98 01 00 00         JZ 0x0043a47c
0043A2E4  CC                        INT3
LAB_0043a2ea:
0043A2EA  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
0043A2EE  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
0043A2F1  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0043A2F4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043A2F7  51                        PUSH ECX
0043A2F8  6A 00                     PUSH 0x0
0043A2FA  52                        PUSH EDX
0043A2FB  50                        PUSH EAX
0043A2FC  6A 01                     PUSH 0x1
0043A2FE  53                        PUSH EBX
0043A2FF  8B CE                     MOV ECX,ESI
0043A301  E8 69 76 FC FF            CALL 0x0040196f
0043A306  85 C0                     TEST EAX,EAX
0043A308  7E 10                     JLE 0x0043a31a
0043A30A  50                        PUSH EAX
0043A30B  6A 01                     PUSH 0x1
0043A30D  53                        PUSH EBX
0043A30E  8B CE                     MOV ECX,ESI
0043A310  E8 6A 8E FC FF            CALL 0x0040317f
0043A315  E9 62 01 00 00            JMP 0x0043a47c
LAB_0043a31a:
0043A31A  0F 8D E7 FD FF FF         JGE 0x0043a107
LAB_0043a320:
0043A320  6A 01                     PUSH 0x1
0043A322  53                        PUSH EBX
0043A323  8B CE                     MOV ECX,ESI
0043A325  E8 F6 B5 FC FF            CALL 0x00405920
0043A32A  6A 00                     PUSH 0x0
0043A32C  6A 01                     PUSH 0x1
0043A32E  6A 01                     PUSH 0x1
0043A330  53                        PUSH EBX
0043A331  8B CE                     MOV ECX,ESI
0043A333  E8 AF 8F FC FF            CALL 0x004032e7
LAB_0043a338:
0043A338  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
0043A33C  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
0043A33F  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0043A342  51                        PUSH ECX
0043A343  52                        PUSH EDX
0043A344  50                        PUSH EAX
0043A345  E9 26 01 00 00            JMP 0x0043a470
LAB_0043a34a:
0043A34A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043A34D  6A 00                     PUSH 0x0
0043A34F  6A 00                     PUSH 0x0
0043A351  6A 00                     PUSH 0x0
0043A353  51                        PUSH ECX
0043A354  8B CE                     MOV ECX,ESI
0043A356  C7 83 23 50 7F 00 01 00 00 00  MOV dword ptr [EBX + 0x7f5023],0x1
0043A360  E8 82 8F FC FF            CALL 0x004032e7
0043A365  8B 9B D3 4F 7F 00         MOV EBX,dword ptr [EBX + 0x7f4fd3]
0043A36B  81 FB 9A 01 00 00         CMP EBX,0x19a
0043A371  0F 8F 81 00 00 00         JG 0x0043a3f8
0043A377  74 4F                     JZ 0x0043a3c8
0043A379  85 DB                     TEST EBX,EBX
0043A37B  74 17                     JZ 0x0043a394
0043A37D  83 FB 5A                  CMP EBX,0x5a
0043A380  0F 84 A6 00 00 00         JZ 0x0043a42c
0043A386  81 FB 72 01 00 00         CMP EBX,0x172
0043A38C  0F 84 9A 00 00 00         JZ 0x0043a42c
0043A392  EB 71                     JMP 0x0043a405
LAB_0043a394:
0043A394  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
0043A398  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0043A39B  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
0043A39E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043A3A1  52                        PUSH EDX
0043A3A2  6A 00                     PUSH 0x0
0043A3A4  50                        PUSH EAX
0043A3A5  51                        PUSH ECX
0043A3A6  6A 01                     PUSH 0x1
0043A3A8  53                        PUSH EBX
0043A3A9  8B CE                     MOV ECX,ESI
0043A3AB  E8 BF 75 FC FF            CALL 0x0040196f
0043A3B0  85 C0                     TEST EAX,EAX
0043A3B2  0F 8E AB 00 00 00         JLE 0x0043a463
0043A3B8  50                        PUSH EAX
0043A3B9  6A 01                     PUSH 0x1
0043A3BB  53                        PUSH EBX
0043A3BC  8B CE                     MOV ECX,ESI
0043A3BE  E8 BC 8D FC FF            CALL 0x0040317f
0043A3C3  E9 B4 00 00 00            JMP 0x0043a47c
LAB_0043a3c8:
0043A3C8  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
0043A3CC  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0043A3CF  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
0043A3D2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043A3D5  52                        PUSH EDX
0043A3D6  6A 00                     PUSH 0x0
0043A3D8  50                        PUSH EAX
0043A3D9  51                        PUSH ECX
0043A3DA  6A 01                     PUSH 0x1
0043A3DC  53                        PUSH EBX
0043A3DD  8B CE                     MOV ECX,ESI
0043A3DF  E8 8B 75 FC FF            CALL 0x0040196f
0043A3E4  85 C0                     TEST EAX,EAX
0043A3E6  7E 71                     JLE 0x0043a459
0043A3E8  50                        PUSH EAX
0043A3E9  6A 01                     PUSH 0x1
0043A3EB  53                        PUSH EBX
0043A3EC  8B CE                     MOV ECX,ESI
0043A3EE  E8 8C 8D FC FF            CALL 0x0040317f
0043A3F3  E9 84 00 00 00            JMP 0x0043a47c
LAB_0043a3f8:
0043A3F8  81 EB A4 01 00 00         SUB EBX,0x1a4
0043A3FE  74 2C                     JZ 0x0043a42c
0043A400  83 EB 14                  SUB EBX,0x14
0043A403  74 27                     JZ 0x0043a42c
LAB_0043a405:
0043A405  68 CC 75 7A 00            PUSH 0x7a75cc
0043A40A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043A40F  6A 00                     PUSH 0x0
0043A411  6A 00                     PUSH 0x0
0043A413  68 35 19 00 00            PUSH 0x1935
0043A418  68 04 60 7A 00            PUSH 0x7a6004
0043A41D  E8 AE 30 27 00            CALL 0x006ad4d0
0043A422  83 C4 18                  ADD ESP,0x18
0043A425  85 C0                     TEST EAX,EAX
0043A427  74 53                     JZ 0x0043a47c
0043A429  CC                        INT3
LAB_0043a42c:
0043A42C  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
0043A430  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0043A433  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
0043A436  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043A439  52                        PUSH EDX
0043A43A  6A 00                     PUSH 0x0
0043A43C  50                        PUSH EAX
0043A43D  51                        PUSH ECX
0043A43E  6A 01                     PUSH 0x1
0043A440  53                        PUSH EBX
0043A441  8B CE                     MOV ECX,ESI
0043A443  E8 27 75 FC FF            CALL 0x0040196f
0043A448  85 C0                     TEST EAX,EAX
0043A44A  7C 0D                     JL 0x0043a459
0043A44C  50                        PUSH EAX
0043A44D  6A 01                     PUSH 0x1
0043A44F  53                        PUSH EBX
0043A450  8B CE                     MOV ECX,ESI
0043A452  E8 28 8D FC FF            CALL 0x0040317f
0043A457  EB 23                     JMP 0x0043a47c
LAB_0043a459:
0043A459  6A 01                     PUSH 0x1
0043A45B  53                        PUSH EBX
0043A45C  8B CE                     MOV ECX,ESI
0043A45E  E8 BD B4 FC FF            CALL 0x00405920
LAB_0043a463:
0043A463  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
0043A467  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0043A46A  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
0043A46D  52                        PUSH EDX
0043A46E  50                        PUSH EAX
0043A46F  51                        PUSH ECX
LAB_0043a470:
0043A470  6A 00                     PUSH 0x0
0043A472  6A 01                     PUSH 0x1
LAB_0043a474:
0043A474  53                        PUSH EBX
0043A475  8B CE                     MOV ECX,ESI
0043A477  E8 B5 99 FC FF            CALL 0x00403e31
LAB_0043a47c:
0043A47C  83 7D E0 01               CMP dword ptr [EBP + -0x20],0x1
0043A480  0F 85 CE 00 00 00         JNZ 0x0043a554
0043A486  8D 55 E8                  LEA EDX,[EBP + -0x18]
0043A489  8D 45 F4                  LEA EAX,[EBP + -0xc]
0043A48C  52                        PUSH EDX
0043A48D  50                        PUSH EAX
0043A48E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0043A491  8D 4D F0                  LEA ECX,[EBP + -0x10]
0043A494  8D 55 EC                  LEA EDX,[EBP + -0x14]
0043A497  51                        PUSH ECX
0043A498  66 8B 48 08               MOV CX,word ptr [EAX + 0x8]
0043A49C  52                        PUSH EDX
0043A49D  8B 50 0A                  MOV EDX,dword ptr [EAX + 0xa]
0043A4A0  51                        PUSH ECX
0043A4A1  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
0043A4A4  52                        PUSH EDX
0043A4A5  8B 10                     MOV EDX,dword ptr [EAX]
0043A4A7  51                        PUSH ECX
0043A4A8  52                        PUSH EDX
0043A4A9  8B CE                     MOV ECX,ESI
0043A4AB  E8 40 80 FC FF            CALL 0x004024f0
0043A4B0  85 C0                     TEST EAX,EAX
0043A4B2  0F 85 9C 00 00 00         JNZ 0x0043a554
0043A4B8  A1 1C 74 80 00            MOV EAX,[0x0080741c]
0043A4BD  8B 0D 18 74 80 00         MOV ECX,dword ptr [0x00807418]
0043A4C3  8B 15 14 74 80 00         MOV EDX,dword ptr [0x00807414]
0043A4C9  50                        PUSH EAX
0043A4CA  A1 10 74 80 00            MOV EAX,[0x00807410]
0043A4CF  51                        PUSH ECX
0043A4D0  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0043A4D3  52                        PUSH EDX
0043A4D4  50                        PUSH EAX
0043A4D5  51                        PUSH ECX
0043A4D6  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0043A4DC  E8 4F 0D 2B 00            CALL 0x006eb230
0043A4E1  83 F8 01                  CMP EAX,0x1
0043A4E4  74 6E                     JZ 0x0043a554
0043A4E6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0043A4E9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043A4EC  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0043A4EF  52                        PUSH EDX
0043A4F0  50                        PUSH EAX
0043A4F1  51                        PUSH ECX
0043A4F2  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043A4F8  E8 71 93 FC FF            CALL 0x0040386e
0043A4FD  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0043A503  6A 01                     PUSH 0x1
0043A505  E8 3D B0 FC FF            CALL 0x00405547
0043A50A  8B 15 3C 74 80 00         MOV EDX,dword ptr [0x0080743c]
0043A510  A1 FC 73 80 00            MOV EAX,[0x008073fc]
0043A515  8B 0D DC 73 80 00         MOV ECX,dword ptr [0x008073dc]
0043A51B  81 E2 FF 00 00 00         AND EDX,0xff
0043A521  52                        PUSH EDX
0043A522  8B 15 D8 73 80 00         MOV EDX,dword ptr [0x008073d8]
0043A528  50                        PUSH EAX
0043A529  51                        PUSH ECX
0043A52A  52                        PUSH EDX
0043A52B  B9 58 76 80 00            MOV ECX,0x807658
0043A530  E8 9F 91 FC FF            CALL 0x004036d4
0043A535  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0043A53B  E8 18 8B FC FF            CALL 0x00403058
0043A540  C7 05 4C 67 80 00 02 00 00 00  MOV dword ptr [0x0080674c],0x2
0043A54A  C7 05 5D 74 80 00 00 00 00 00  MOV dword ptr [0x0080745d],0x0
LAB_0043a554:
0043A554  8B CE                     MOV ECX,ESI
0043A556  E8 83 82 FC FF            CALL 0x004027de
0043A55B  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
0043A55E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0043A563  5F                        POP EDI
0043A564  5E                        POP ESI
0043A565  5B                        POP EBX
0043A566  8B E5                     MOV ESP,EBP
0043A568  5D                        POP EBP
0043A569  C2 04 00                  RET 0x4
LAB_0043a56c:
0043A56C  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0043A56F  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0043A575  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043A57B  74 34                     JZ 0x0043a5b1
0043A57D  68 E0 74 7A 00            PUSH 0x7a74e0
0043A582  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043A587  53                        PUSH EBX
0043A588  53                        PUSH EBX
0043A589  68 AB 19 00 00            PUSH 0x19ab
0043A58E  68 04 60 7A 00            PUSH 0x7a6004
0043A593  E8 38 2F 27 00            CALL 0x006ad4d0
0043A598  83 C4 18                  ADD ESP,0x18
0043A59B  85 C0                     TEST EAX,EAX
0043A59D  74 01                     JZ 0x0043a5a0
0043A59F  CC                        INT3
LAB_0043a5a0:
0043A5A0  68 AC 19 00 00            PUSH 0x19ac
0043A5A5  68 04 60 7A 00            PUSH 0x7a6004
0043A5AA  53                        PUSH EBX
0043A5AB  56                        PUSH ESI
0043A5AC  E8 8F B8 26 00            CALL 0x006a5e40
LAB_0043a5b1:
0043A5B1  5F                        POP EDI
0043A5B2  5E                        POP ESI
0043A5B3  5B                        POP EBX
0043A5B4  8B E5                     MOV ESP,EBP
0043A5B6  5D                        POP EBP
0043A5B7  C2 04 00                  RET 0x4
