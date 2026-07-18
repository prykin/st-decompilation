FUN_004314e0:
004314E0  55                        PUSH EBP
004314E1  8B EC                     MOV EBP,ESP
004314E3  81 EC 90 00 00 00         SUB ESP,0x90
004314E9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004314EE  53                        PUSH EBX
004314EF  56                        PUSH ESI
004314F0  57                        PUSH EDI
004314F1  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
004314F7  33 FF                     XOR EDI,EDI
004314F9  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
004314FF  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
00431505  57                        PUSH EDI
00431506  52                        PUSH EDX
00431507  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0043150A  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0043150D  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
00431510  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00431513  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00431516  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
00431519  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
0043151C  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
0043151F  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00431522  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00431525  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00431528  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
0043152B  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0043152E  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
00431531  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
00431534  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
0043153A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00431540  E8 AB C2 2F 00            CALL 0x0072d7f0
00431545  8B F0                     MOV ESI,EAX
00431547  83 C4 08                  ADD ESP,0x8
0043154A  3B F7                     CMP ESI,EDI
0043154C  0F 85 D2 1F 00 00         JNZ 0x00433524
00431552  8D 45 CC                  LEA EAX,[EBP + -0x34]
00431555  8D 4D D4                  LEA ECX,[EBP + -0x2c]
00431558  50                        PUSH EAX
00431559  8D 55 DC                  LEA EDX,[EBP + -0x24]
0043155C  51                        PUSH ECX
0043155D  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00431560  52                        PUSH EDX
00431561  8D 4D D8                  LEA ECX,[EBP + -0x28]
00431564  50                        PUSH EAX
00431565  8D 55 D0                  LEA EDX,[EBP + -0x30]
00431568  51                        PUSH ECX
00431569  8D 45 C4                  LEA EAX,[EBP + -0x3c]
0043156C  52                        PUSH EDX
0043156D  8D 4D E8                  LEA ECX,[EBP + -0x18]
00431570  50                        PUSH EAX
00431571  8D 55 F0                  LEA EDX,[EBP + -0x10]
00431574  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00431577  8B B5 70 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff70]
0043157D  51                        PUSH ECX
0043157E  8D 45 C8                  LEA EAX,[EBP + -0x38]
00431581  52                        PUSH EDX
00431582  8D 4D EC                  LEA ECX,[EBP + -0x14]
00431585  50                        PUSH EAX
00431586  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00431589  8D 55 F4                  LEA EDX,[EBP + -0xc]
0043158C  51                        PUSH ECX
0043158D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00431590  52                        PUSH EDX
00431591  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00431594  50                        PUSH EAX
00431595  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00431598  51                        PUSH ECX
00431599  52                        PUSH EDX
0043159A  50                        PUSH EAX
0043159B  53                        PUSH EBX
0043159C  8B CE                     MOV ECX,ESI
0043159E  E8 58 13 FD FF            CALL 0x004028fb
004315A3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004315A6  39 79 0C                  CMP dword ptr [ECX + 0xc],EDI
004315A9  0F 86 2C 03 00 00         JBE 0x004318db
004315AF  0F BE C3                  MOVSX EAX,BL
004315B2  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004315B5  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
004315B8  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
004315BB  C1 E7 04                  SHL EDI,0x4
004315BE  03 F8                     ADD EDI,EAX
004315C0  D1 E7                     SHL EDI,0x1
004315C2  8B 97 23 50 7F 00         MOV EDX,dword ptr [EDI + 0x7f5023]
004315C8  83 EA 00                  SUB EDX,0x0
004315CB  0F 84 19 01 00 00         JZ 0x004316ea
004315D1  4A                        DEC EDX
004315D2  74 2E                     JZ 0x00431602
004315D4  68 D0 6F 7A 00            PUSH 0x7a6fd0
004315D9  68 CC 4C 7A 00            PUSH 0x7a4ccc
004315DE  6A 00                     PUSH 0x0
004315E0  6A 00                     PUSH 0x0
004315E2  68 8C 0A 00 00            PUSH 0xa8c
004315E7  68 04 60 7A 00            PUSH 0x7a6004
004315EC  E8 DF BE 27 00            CALL 0x006ad4d0
004315F1  83 C4 18                  ADD ESP,0x18
004315F4  85 C0                     TEST EAX,EAX
004315F6  0F 84 C3 02 00 00         JZ 0x004318bf
004315FC  CC                        INT3
LAB_00431602:
00431602  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
00431606  0F 84 B3 02 00 00         JZ 0x004318bf
0043160C  6A 00                     PUSH 0x0
0043160E  6A 00                     PUSH 0x0
00431610  6A 01                     PUSH 0x1
00431612  53                        PUSH EBX
00431613  8B CE                     MOV ECX,ESI
00431615  C7 87 23 50 7F 00 00 00 00 00  MOV dword ptr [EDI + 0x7f5023],0x0
0043161F  E8 C3 1C FD FF            CALL 0x004032e7
00431624  8B 87 83 4F 7F 00         MOV EAX,dword ptr [EDI + 0x7f4f83]
0043162A  85 C0                     TEST EAX,EAX
0043162C  0F 84 AE 00 00 00         JZ 0x004316e0
00431632  83 F8 3C                  CMP EAX,0x3c
00431635  74 6F                     JZ 0x004316a6
00431637  3D AE 01 00 00            CMP EAX,0x1ae
0043163C  74 2E                     JZ 0x0043166c
0043163E  68 94 6F 7A 00            PUSH 0x7a6f94
00431643  68 CC 4C 7A 00            PUSH 0x7a4ccc
00431648  6A 00                     PUSH 0x0
0043164A  6A 00                     PUSH 0x0
0043164C  68 88 0A 00 00            PUSH 0xa88
00431651  68 04 60 7A 00            PUSH 0x7a6004
00431656  E8 75 BE 27 00            CALL 0x006ad4d0
0043165B  83 C4 18                  ADD ESP,0x18
0043165E  85 C0                     TEST EAX,EAX
00431660  0F 84 59 02 00 00         JZ 0x004318bf
00431666  CC                        INT3
LAB_0043166c:
0043166C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0043166F  6A 00                     PUSH 0x0
00431671  50                        PUSH EAX
00431672  53                        PUSH EBX
00431673  6A 3C                     PUSH 0x3c
00431675  6A 00                     PUSH 0x0
00431677  53                        PUSH EBX
00431678  8B CE                     MOV ECX,ESI
0043167A  E8 F0 02 FD FF            CALL 0x0040196f
0043167F  85 C0                     TEST EAX,EAX
00431681  7E 10                     JLE 0x00431693
00431683  50                        PUSH EAX
00431684  6A 00                     PUSH 0x0
00431686  53                        PUSH EBX
00431687  8B CE                     MOV ECX,ESI
00431689  E8 F1 1A FD FF            CALL 0x0040317f
0043168E  E9 2C 02 00 00            JMP 0x004318bf
LAB_00431693:
00431693  6A 00                     PUSH 0x0
00431695  53                        PUSH EBX
00431696  8B CE                     MOV ECX,ESI
00431698  E8 83 42 FD FF            CALL 0x00405920
0043169D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004316A0  51                        PUSH ECX
004316A1  E9 03 02 00 00            JMP 0x004318a9
LAB_004316a6:
004316A6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004316A9  6A 00                     PUSH 0x0
004316AB  52                        PUSH EDX
004316AC  53                        PUSH EBX
004316AD  6A 3C                     PUSH 0x3c
004316AF  6A 00                     PUSH 0x0
004316B1  53                        PUSH EBX
004316B2  8B CE                     MOV ECX,ESI
004316B4  E8 B6 02 FD FF            CALL 0x0040196f
004316B9  85 C0                     TEST EAX,EAX
004316BB  7C 10                     JL 0x004316cd
004316BD  50                        PUSH EAX
004316BE  6A 00                     PUSH 0x0
004316C0  53                        PUSH EBX
004316C1  8B CE                     MOV ECX,ESI
004316C3  E8 B7 1A FD FF            CALL 0x0040317f
004316C8  E9 F2 01 00 00            JMP 0x004318bf
LAB_004316cd:
004316CD  6A 00                     PUSH 0x0
004316CF  53                        PUSH EBX
004316D0  8B CE                     MOV ECX,ESI
004316D2  E8 49 42 FD FF            CALL 0x00405920
004316D7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004316DA  50                        PUSH EAX
004316DB  E9 C9 01 00 00            JMP 0x004318a9
LAB_004316e0:
004316E0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004316E3  6A 00                     PUSH 0x0
004316E5  E9 9C 01 00 00            JMP 0x00431886
LAB_004316ea:
004316EA  8B 97 83 4F 7F 00         MOV EDX,dword ptr [EDI + 0x7f4f83]
004316F0  85 D2                     TEST EDX,EDX
004316F2  0F 84 8C 01 00 00         JZ 0x00431884
004316F8  83 FA 3C                  CMP EDX,0x3c
004316FB  0F 84 85 00 00 00         JZ 0x00431786
00431701  81 FA AE 01 00 00         CMP EDX,0x1ae
00431707  74 2E                     JZ 0x00431737
00431709  68 58 6F 7A 00            PUSH 0x7a6f58
0043170E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00431713  6A 00                     PUSH 0x0
00431715  6A 00                     PUSH 0x0
00431717  68 60 0A 00 00            PUSH 0xa60
0043171C  68 04 60 7A 00            PUSH 0x7a6004
00431721  E8 AA BD 27 00            CALL 0x006ad4d0
00431726  83 C4 18                  ADD ESP,0x18
00431729  85 C0                     TEST EAX,EAX
0043172B  0F 84 8E 01 00 00         JZ 0x004318bf
00431731  CC                        INT3
LAB_00431737:
00431737  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
0043173B  0F 84 7E 01 00 00         JZ 0x004318bf
00431741  6A 00                     PUSH 0x0
00431743  51                        PUSH ECX
00431744  53                        PUSH EBX
00431745  6A 3C                     PUSH 0x3c
00431747  6A 00                     PUSH 0x0
00431749  53                        PUSH EBX
0043174A  8B CE                     MOV ECX,ESI
0043174C  E8 1E 02 FD FF            CALL 0x0040196f
00431751  85 C0                     TEST EAX,EAX
00431753  7E 10                     JLE 0x00431765
00431755  50                        PUSH EAX
00431756  6A 00                     PUSH 0x0
00431758  53                        PUSH EBX
00431759  8B CE                     MOV ECX,ESI
0043175B  E8 1F 1A FD FF            CALL 0x0040317f
00431760  E9 5A 01 00 00            JMP 0x004318bf
LAB_00431765:
00431765  6A 00                     PUSH 0x0
00431767  53                        PUSH EBX
00431768  8B CE                     MOV ECX,ESI
0043176A  E8 B1 41 FD FF            CALL 0x00405920
0043176F  6A 00                     PUSH 0x0
00431771  6A 01                     PUSH 0x1
00431773  6A 00                     PUSH 0x0
00431775  53                        PUSH EBX
00431776  8B CE                     MOV ECX,ESI
00431778  E8 6A 1B FD FF            CALL 0x004032e7
0043177D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00431780  50                        PUSH EAX
00431781  E9 23 01 00 00            JMP 0x004318a9
LAB_00431786:
00431786  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
0043178A  75 6C                     JNZ 0x004317f8
0043178C  39 87 87 4F 7F 00         CMP dword ptr [EDI + 0x7f4f87],EAX
00431792  0F 85 27 01 00 00         JNZ 0x004318bf
00431798  8D 55 BC                  LEA EDX,[EBP + -0x44]
0043179B  8D 45 C0                  LEA EAX,[EBP + -0x40]
0043179E  52                        PUSH EDX
0043179F  50                        PUSH EAX
004317A0  6A 00                     PUSH 0x0
004317A2  51                        PUSH ECX
004317A3  6A 00                     PUSH 0x0
004317A5  6A 00                     PUSH 0x0
004317A7  53                        PUSH EBX
004317A8  8B CE                     MOV ECX,ESI
004317AA  E8 27 09 FD FF            CALL 0x004020d6
004317AF  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
004317B2  6A 00                     PUSH 0x0
004317B4  6A 00                     PUSH 0x0
004317B6  51                        PUSH ECX
004317B7  6A 3C                     PUSH 0x3c
004317B9  53                        PUSH EBX
004317BA  8B CE                     MOV ECX,ESI
004317BC  E8 FF 0F FD FF            CALL 0x004027c0
004317C1  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
004317C4  8B CE                     MOV ECX,ESI
004317C6  52                        PUSH EDX
004317C7  6A 00                     PUSH 0x0
004317C9  6A 00                     PUSH 0x0
004317CB  53                        PUSH EBX
004317CC  E8 3C 27 FD FF            CALL 0x00403f0d
004317D1  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
004317D4  8B CE                     MOV ECX,ESI
004317D6  50                        PUSH EAX
004317D7  6A 00                     PUSH 0x0
004317D9  6A 00                     PUSH 0x0
004317DB  53                        PUSH EBX
004317DC  E8 DD 43 FD FF            CALL 0x00405bbe
004317E1  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
004317E4  51                        PUSH ECX
004317E5  E8 26 C9 27 00            CALL 0x006ae110
004317EA  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
004317ED  52                        PUSH EDX
004317EE  E8 1D C9 27 00            CALL 0x006ae110
004317F3  E9 C7 00 00 00            JMP 0x004318bf
LAB_004317f8:
004317F8  6A 00                     PUSH 0x0
004317FA  51                        PUSH ECX
004317FB  53                        PUSH EBX
004317FC  6A 3C                     PUSH 0x3c
004317FE  6A 00                     PUSH 0x0
00431800  53                        PUSH EBX
00431801  8B CE                     MOV ECX,ESI
00431803  E8 67 01 FD FF            CALL 0x0040196f
00431808  85 C0                     TEST EAX,EAX
0043180A  7E 10                     JLE 0x0043181c
0043180C  50                        PUSH EAX
0043180D  6A 00                     PUSH 0x0
0043180F  53                        PUSH EBX
00431810  8B CE                     MOV ECX,ESI
00431812  E8 68 19 FD FF            CALL 0x0040317f
00431817  E9 A3 00 00 00            JMP 0x004318bf
LAB_0043181c:
0043181C  0F 8D 9D 00 00 00         JGE 0x004318bf
00431822  6A 00                     PUSH 0x0
00431824  53                        PUSH EBX
00431825  8B CE                     MOV ECX,ESI
00431827  E8 F4 40 FD FF            CALL 0x00405920
0043182C  8B 8F 97 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4f97]
00431832  6A 00                     PUSH 0x0
00431834  0F BE C3                  MOVSX EAX,BL
00431837  3B C8                     CMP ECX,EAX
00431839  75 37                     JNZ 0x00431872
0043183B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043183E  8D 45 E0                  LEA EAX,[EBP + -0x20]
00431841  6A 00                     PUSH 0x0
00431843  50                        PUSH EAX
00431844  51                        PUSH ECX
00431845  6A 01                     PUSH 0x1
00431847  6A 00                     PUSH 0x0
00431849  53                        PUSH EBX
0043184A  8B CE                     MOV ECX,ESI
0043184C  E8 85 08 FD FF            CALL 0x004020d6
00431851  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00431854  6A 00                     PUSH 0x0
00431856  6A 00                     PUSH 0x0
00431858  52                        PUSH EDX
00431859  6A 3C                     PUSH 0x3c
0043185B  53                        PUSH EBX
0043185C  8B CE                     MOV ECX,ESI
0043185E  E8 5D 0F FD FF            CALL 0x004027c0
00431863  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00431866  50                        PUSH EAX
00431867  E8 A4 C8 27 00            CALL 0x006ae110
0043186C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043186F  51                        PUSH ECX
00431870  EB 37                     JMP 0x004318a9
LAB_00431872:
00431872  6A 01                     PUSH 0x1
00431874  6A 00                     PUSH 0x0
00431876  53                        PUSH EBX
00431877  8B CE                     MOV ECX,ESI
00431879  E8 69 1A FD FF            CALL 0x004032e7
0043187E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00431881  51                        PUSH ECX
00431882  EB 25                     JMP 0x004318a9
LAB_00431884:
00431884  6A 00                     PUSH 0x0
LAB_00431886:
00431886  51                        PUSH ECX
00431887  53                        PUSH EBX
00431888  6A 3C                     PUSH 0x3c
0043188A  6A 00                     PUSH 0x0
0043188C  53                        PUSH EBX
0043188D  8B CE                     MOV ECX,ESI
0043188F  E8 DB 00 FD FF            CALL 0x0040196f
00431894  85 C0                     TEST EAX,EAX
00431896  7E 0D                     JLE 0x004318a5
00431898  50                        PUSH EAX
00431899  6A 00                     PUSH 0x0
0043189B  53                        PUSH EBX
0043189C  8B CE                     MOV ECX,ESI
0043189E  E8 DC 18 FD FF            CALL 0x0040317f
004318A3  EB 10                     JMP 0x004318b5
LAB_004318a5:
004318A5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004318A8  52                        PUSH EDX
LAB_004318a9:
004318A9  6A 00                     PUSH 0x0
004318AB  6A 00                     PUSH 0x0
004318AD  53                        PUSH EBX
004318AE  8B CE                     MOV ECX,ESI
004318B0  E8 09 43 FD FF            CALL 0x00405bbe
LAB_004318b5:
004318B5  C7 87 83 4F 7F 00 3C 00 00 00  MOV dword ptr [EDI + 0x7f4f83],0x3c
LAB_004318bf:
004318BF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004318C4  68 8E 0A 00 00            PUSH 0xa8e
004318C9  68 04 60 7A 00            PUSH 0x7a6004
004318CE  50                        PUSH EAX
004318CF  68 09 00 FE AF            PUSH 0xaffe0009
004318D4  E8 67 45 27 00            CALL 0x006a5e40
004318D9  33 FF                     XOR EDI,EDI
LAB_004318db:
004318DB  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004318DE  39 79 0C                  CMP dword ptr [ECX + 0xc],EDI
004318E1  0F 86 97 01 00 00         JBE 0x00431a7e
004318E7  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
004318EB  75 1B                     JNZ 0x00431908
004318ED  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004318F3  68 92 0A 00 00            PUSH 0xa92
004318F8  68 04 60 7A 00            PUSH 0x7a6004
004318FD  52                        PUSH EDX
004318FE  68 09 00 FE AF            PUSH 0xaffe0009
00431903  E8 38 45 27 00            CALL 0x006a5e40
LAB_00431908:
00431908  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0043190B  8D 45 FC                  LEA EAX,[EBP + -0x4]
0043190E  50                        PUSH EAX
0043190F  33 D2                     XOR EDX,EDX
00431911  E8 5A B3 27 00            CALL 0x006acc70
00431916  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00431919  8D 55 FC                  LEA EDX,[EBP + -0x4]
0043191C  52                        PUSH EDX
0043191D  C7 41 0C 00 00 00 00      MOV dword ptr [ECX + 0xc],0x0
00431924  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00431927  50                        PUSH EAX
00431928  E8 93 C8 27 00            CALL 0x006ae1c0
0043192D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00431930  6A 03                     PUSH 0x3
00431932  51                        PUSH ECX
00431933  6A 00                     PUSH 0x0
00431935  8B CE                     MOV ECX,ESI
00431937  E8 7E 0F FD FF            CALL 0x004028ba
0043193C  8B F8                     MOV EDI,EAX
0043193E  85 FF                     TEST EDI,EDI
00431940  75 1B                     JNZ 0x0043195d
00431942  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00431948  68 95 0A 00 00            PUSH 0xa95
0043194D  68 04 60 7A 00            PUSH 0x7a6004
00431952  52                        PUSH EDX
00431953  68 09 00 FE AF            PUSH 0xaffe0009
00431958  E8 E3 44 27 00            CALL 0x006a5e40
LAB_0043195d:
0043195D  0F BE CB                  MOVSX ECX,BL
00431960  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00431963  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
00431966  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00431969  C1 E0 04                  SHL EAX,0x4
0043196C  03 C1                     ADD EAX,ECX
0043196E  D1 E0                     SHL EAX,0x1
00431970  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00431973  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
00431979  83 E9 00                  SUB ECX,0x0
0043197C  0F 84 38 02 00 00         JZ 0x00431bba
00431982  49                        DEC ECX
00431983  74 2E                     JZ 0x004319b3
00431985  68 0C 6F 7A 00            PUSH 0x7a6f0c
0043198A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043198F  6A 00                     PUSH 0x0
00431991  6A 00                     PUSH 0x0
00431993  68 E2 0A 00 00            PUSH 0xae2
00431998  68 04 60 7A 00            PUSH 0x7a6004
0043199D  E8 2E BB 27 00            CALL 0x006ad4d0
004319A2  83 C4 18                  ADD ESP,0x18
004319A5  85 C0                     TEST EAX,EAX
004319A7  0F 84 B4 00 00 00         JZ 0x00431a61
004319AD  CC                        INT3
LAB_004319b3:
004319B3  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004319B6  6A 00                     PUSH 0x0
004319B8  6A 00                     PUSH 0x0
004319BA  6A 01                     PUSH 0x1
004319BC  53                        PUSH EBX
004319BD  8B CE                     MOV ECX,ESI
004319BF  C7 80 23 50 7F 00 00 00 00 00  MOV dword ptr [EAX + 0x7f5023],0x0
004319C9  E8 19 19 FD FF            CALL 0x004032e7
004319CE  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004319D1  8B 81 83 4F 7F 00         MOV EAX,dword ptr [ECX + 0x7f4f83]
004319D7  85 C0                     TEST EAX,EAX
004319D9  0F 84 AB 01 00 00         JZ 0x00431b8a
004319DF  83 F8 3C                  CMP EAX,0x3c
004319E2  0F 84 72 01 00 00         JZ 0x00431b5a
004319E8  3D AE 01 00 00            CMP EAX,0x1ae
004319ED  74 27                     JZ 0x00431a16
004319EF  68 CC 6E 7A 00            PUSH 0x7a6ecc
004319F4  68 CC 4C 7A 00            PUSH 0x7a4ccc
004319F9  6A 00                     PUSH 0x0
004319FB  6A 00                     PUSH 0x0
004319FD  68 DE 0A 00 00            PUSH 0xade
00431A02  68 04 60 7A 00            PUSH 0x7a6004
00431A07  E8 C4 BA 27 00            CALL 0x006ad4d0
00431A0C  83 C4 18                  ADD ESP,0x18
00431A0F  85 C0                     TEST EAX,EAX
00431A11  74 4E                     JZ 0x00431a61
00431A13  CC                        INT3
LAB_00431a16:
00431A16  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00431A19  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00431A1C  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00431A1F  52                        PUSH EDX
00431A20  6A 00                     PUSH 0x0
00431A22  50                        PUSH EAX
00431A23  51                        PUSH ECX
00431A24  6A 00                     PUSH 0x0
00431A26  53                        PUSH EBX
00431A27  8B CE                     MOV ECX,ESI
00431A29  E8 41 FF FC FF            CALL 0x0040196f
00431A2E  85 C0                     TEST EAX,EAX
00431A30  7C 0D                     JL 0x00431a3f
00431A32  50                        PUSH EAX
00431A33  6A 00                     PUSH 0x0
00431A35  53                        PUSH EBX
00431A36  8B CE                     MOV ECX,ESI
00431A38  E8 42 17 FD FF            CALL 0x0040317f
00431A3D  EB 22                     JMP 0x00431a61
LAB_00431a3f:
00431A3F  6A 00                     PUSH 0x0
00431A41  53                        PUSH EBX
00431A42  8B CE                     MOV ECX,ESI
00431A44  E8 D7 3E FD FF            CALL 0x00405920
LAB_00431a49:
00431A49  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00431A4C  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00431A4F  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00431A52  52                        PUSH EDX
00431A53  50                        PUSH EAX
00431A54  51                        PUSH ECX
00431A55  6A 00                     PUSH 0x0
00431A57  6A 00                     PUSH 0x0
00431A59  53                        PUSH EBX
00431A5A  8B CE                     MOV ECX,ESI
00431A5C  E8 D0 23 FD FF            CALL 0x00403e31
LAB_00431a61:
00431A61  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00431A67  68 E4 0A 00 00            PUSH 0xae4
00431A6C  68 04 60 7A 00            PUSH 0x7a6004
00431A71  52                        PUSH EDX
00431A72  68 09 00 FE AF            PUSH 0xaffe0009
00431A77  E8 C4 43 27 00            CALL 0x006a5e40
00431A7C  33 FF                     XOR EDI,EDI
LAB_00431a7e:
00431A7E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00431A81  39 78 0C                  CMP dword ptr [EAX + 0xc],EDI
00431A84  0F 86 7B 04 00 00         JBE 0x00431f05
00431A8A  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
00431A8E  75 1B                     JNZ 0x00431aab
00431A90  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00431A96  68 E8 0A 00 00            PUSH 0xae8
00431A9B  68 04 60 7A 00            PUSH 0x7a6004
00431AA0  51                        PUSH ECX
00431AA1  68 09 00 FE AF            PUSH 0xaffe0009
00431AA6  E8 95 43 27 00            CALL 0x006a5e40
LAB_00431aab:
00431AAB  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00431AAE  8D 55 FC                  LEA EDX,[EBP + -0x4]
00431AB1  52                        PUSH EDX
00431AB2  33 D2                     XOR EDX,EDX
00431AB4  E8 B7 B1 27 00            CALL 0x006acc70
00431AB9  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00431ABC  8D 4D FC                  LEA ECX,[EBP + -0x4]
00431ABF  51                        PUSH ECX
00431AC0  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
00431AC7  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00431ACA  52                        PUSH EDX
00431ACB  E8 F0 C6 27 00            CALL 0x006ae1c0
00431AD0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00431AD3  6A 02                     PUSH 0x2
00431AD5  50                        PUSH EAX
00431AD6  6A FF                     PUSH -0x1
00431AD8  8B CE                     MOV ECX,ESI
00431ADA  E8 DB 0D FD FF            CALL 0x004028ba
00431ADF  8B F8                     MOV EDI,EAX
00431AE1  85 FF                     TEST EDI,EDI
00431AE3  75 1B                     JNZ 0x00431b00
00431AE5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00431AEB  68 EB 0A 00 00            PUSH 0xaeb
00431AF0  68 04 60 7A 00            PUSH 0x7a6004
00431AF5  51                        PUSH ECX
00431AF6  68 09 00 FE AF            PUSH 0xaffe0009
00431AFB  E8 40 43 27 00            CALL 0x006a5e40
LAB_00431b00:
00431B00  0F BE CB                  MOVSX ECX,BL
00431B03  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
00431B06  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
00431B09  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00431B0C  C1 E0 04                  SHL EAX,0x4
00431B0F  03 C1                     ADD EAX,ECX
00431B11  D1 E0                     SHL EAX,0x1
00431B13  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00431B16  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
00431B1C  83 E9 00                  SUB ECX,0x0
00431B1F  0F 84 A6 02 00 00         JZ 0x00431dcb
00431B25  49                        DEC ECX
00431B26  0F 84 85 01 00 00         JZ 0x00431cb1
00431B2C  68 80 6E 7A 00            PUSH 0x7a6e80
00431B31  68 CC 4C 7A 00            PUSH 0x7a4ccc
00431B36  6A 00                     PUSH 0x0
00431B38  6A 00                     PUSH 0x0
00431B3A  68 3E 0B 00 00            PUSH 0xb3e
00431B3F  68 04 60 7A 00            PUSH 0x7a6004
00431B44  E8 87 B9 27 00            CALL 0x006ad4d0
00431B49  83 C4 18                  ADD ESP,0x18
00431B4C  85 C0                     TEST EAX,EAX
00431B4E  0F 84 95 03 00 00         JZ 0x00431ee9
00431B54  CC                        INT3
LAB_00431b5a:
00431B5A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00431B5D  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00431B60  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00431B63  52                        PUSH EDX
00431B64  6A 00                     PUSH 0x0
00431B66  50                        PUSH EAX
00431B67  51                        PUSH ECX
00431B68  6A 00                     PUSH 0x0
00431B6A  53                        PUSH EBX
00431B6B  8B CE                     MOV ECX,ESI
00431B6D  E8 FD FD FC FF            CALL 0x0040196f
00431B72  85 C0                     TEST EAX,EAX
00431B74  0F 8E C5 FE FF FF         JLE 0x00431a3f
00431B7A  50                        PUSH EAX
00431B7B  6A 00                     PUSH 0x0
00431B7D  53                        PUSH EBX
00431B7E  8B CE                     MOV ECX,ESI
00431B80  E8 FA 15 FD FF            CALL 0x0040317f
00431B85  E9 D7 FE FF FF            JMP 0x00431a61
LAB_00431b8a:
00431B8A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00431B8D  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00431B90  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00431B93  52                        PUSH EDX
00431B94  6A 00                     PUSH 0x0
00431B96  50                        PUSH EAX
00431B97  51                        PUSH ECX
00431B98  6A 00                     PUSH 0x0
00431B9A  53                        PUSH EBX
00431B9B  8B CE                     MOV ECX,ESI
00431B9D  E8 CD FD FC FF            CALL 0x0040196f
00431BA2  85 C0                     TEST EAX,EAX
00431BA4  0F 8E 9F FE FF FF         JLE 0x00431a49
00431BAA  50                        PUSH EAX
00431BAB  6A 00                     PUSH 0x0
00431BAD  53                        PUSH EBX
00431BAE  8B CE                     MOV ECX,ESI
00431BB0  E8 CA 15 FD FF            CALL 0x0040317f
00431BB5  E9 A7 FE FF FF            JMP 0x00431a61
LAB_00431bba:
00431BBA  8B 80 83 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4f83]
00431BC0  85 C0                     TEST EAX,EAX
00431BC2  0F 84 B9 00 00 00         JZ 0x00431c81
00431BC8  83 F8 3C                  CMP EAX,0x3c
00431BCB  0F 84 84 00 00 00         JZ 0x00431c55
00431BD1  3D AE 01 00 00            CMP EAX,0x1ae
00431BD6  74 2E                     JZ 0x00431c06
00431BD8  68 40 6E 7A 00            PUSH 0x7a6e40
00431BDD  68 CC 4C 7A 00            PUSH 0x7a4ccc
00431BE2  6A 00                     PUSH 0x0
00431BE4  6A 00                     PUSH 0x0
00431BE6  68 BA 0A 00 00            PUSH 0xaba
00431BEB  68 04 60 7A 00            PUSH 0x7a6004
00431BF0  E8 DB B8 27 00            CALL 0x006ad4d0
00431BF5  83 C4 18                  ADD ESP,0x18
00431BF8  85 C0                     TEST EAX,EAX
00431BFA  0F 84 61 FE FF FF         JZ 0x00431a61
00431C00  CC                        INT3
LAB_00431c06:
00431C06  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00431C09  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00431C0C  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00431C0F  52                        PUSH EDX
00431C10  6A 00                     PUSH 0x0
00431C12  50                        PUSH EAX
00431C13  51                        PUSH ECX
00431C14  6A 00                     PUSH 0x0
00431C16  53                        PUSH EBX
00431C17  8B CE                     MOV ECX,ESI
00431C19  E8 51 FD FC FF            CALL 0x0040196f
00431C1E  85 C0                     TEST EAX,EAX
00431C20  7E 10                     JLE 0x00431c32
00431C22  50                        PUSH EAX
00431C23  6A 00                     PUSH 0x0
00431C25  53                        PUSH EBX
00431C26  8B CE                     MOV ECX,ESI
00431C28  E8 52 15 FD FF            CALL 0x0040317f
00431C2D  E9 2F FE FF FF            JMP 0x00431a61
LAB_00431c32:
00431C32  0F 8D 29 FE FF FF         JGE 0x00431a61
LAB_00431c38:
00431C38  6A 00                     PUSH 0x0
00431C3A  53                        PUSH EBX
00431C3B  8B CE                     MOV ECX,ESI
00431C3D  E8 DE 3C FD FF            CALL 0x00405920
00431C42  6A 00                     PUSH 0x0
00431C44  6A 01                     PUSH 0x1
00431C46  6A 00                     PUSH 0x0
00431C48  53                        PUSH EBX
00431C49  8B CE                     MOV ECX,ESI
00431C4B  E8 97 16 FD FF            CALL 0x004032e7
00431C50  E9 F4 FD FF FF            JMP 0x00431a49
LAB_00431c55:
00431C55  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00431C58  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00431C5B  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00431C5E  52                        PUSH EDX
00431C5F  6A 00                     PUSH 0x0
00431C61  50                        PUSH EAX
00431C62  51                        PUSH ECX
00431C63  6A 00                     PUSH 0x0
00431C65  53                        PUSH EBX
00431C66  8B CE                     MOV ECX,ESI
00431C68  E8 02 FD FC FF            CALL 0x0040196f
00431C6D  85 C0                     TEST EAX,EAX
00431C6F  7E C7                     JLE 0x00431c38
00431C71  50                        PUSH EAX
00431C72  6A 00                     PUSH 0x0
00431C74  53                        PUSH EBX
00431C75  8B CE                     MOV ECX,ESI
00431C77  E8 03 15 FD FF            CALL 0x0040317f
00431C7C  E9 E0 FD FF FF            JMP 0x00431a61
LAB_00431c81:
00431C81  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00431C84  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00431C87  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00431C8A  52                        PUSH EDX
00431C8B  6A 00                     PUSH 0x0
00431C8D  50                        PUSH EAX
00431C8E  51                        PUSH ECX
00431C8F  6A 00                     PUSH 0x0
00431C91  53                        PUSH EBX
00431C92  8B CE                     MOV ECX,ESI
00431C94  E8 D6 FC FC FF            CALL 0x0040196f
00431C99  85 C0                     TEST EAX,EAX
00431C9B  0F 8E A8 FD FF FF         JLE 0x00431a49
00431CA1  50                        PUSH EAX
00431CA2  6A 00                     PUSH 0x0
00431CA4  53                        PUSH EBX
00431CA5  8B CE                     MOV ECX,ESI
00431CA7  E8 D3 14 FD FF            CALL 0x0040317f
00431CAC  E9 B0 FD FF FF            JMP 0x00431a61
LAB_00431cb1:
00431CB1  8B 80 D3 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4fd3]
00431CB7  3D 9A 01 00 00            CMP EAX,0x19a
00431CBC  7F 78                     JG 0x00431d36
00431CBE  74 4A                     JZ 0x00431d0a
00431CC0  85 C0                     TEST EAX,EAX
00431CC2  74 16                     JZ 0x00431cda
00431CC4  83 F8 5A                  CMP EAX,0x5a
00431CC7  0F 84 A3 00 00 00         JZ 0x00431d70
00431CCD  3D 72 01 00 00            CMP EAX,0x172
00431CD2  0F 84 98 00 00 00         JZ 0x00431d70
00431CD8  EB 68                     JMP 0x00431d42
LAB_00431cda:
00431CDA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00431CDD  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
00431CE0  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00431CE3  51                        PUSH ECX
00431CE4  6A 00                     PUSH 0x0
00431CE6  52                        PUSH EDX
00431CE7  50                        PUSH EAX
00431CE8  6A 01                     PUSH 0x1
00431CEA  53                        PUSH EBX
00431CEB  8B CE                     MOV ECX,ESI
00431CED  E8 7D FC FC FF            CALL 0x0040196f
00431CF2  85 C0                     TEST EAX,EAX
00431CF4  0F 8E C0 00 00 00         JLE 0x00431dba
00431CFA  50                        PUSH EAX
00431CFB  6A 01                     PUSH 0x1
00431CFD  53                        PUSH EBX
00431CFE  8B CE                     MOV ECX,ESI
00431D00  E8 7A 14 FD FF            CALL 0x0040317f
00431D05  E9 DF 01 00 00            JMP 0x00431ee9
LAB_00431d0a:
00431D0A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00431D0D  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
00431D10  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00431D13  51                        PUSH ECX
00431D14  6A 00                     PUSH 0x0
00431D16  52                        PUSH EDX
00431D17  50                        PUSH EAX
00431D18  6A 01                     PUSH 0x1
00431D1A  53                        PUSH EBX
00431D1B  8B CE                     MOV ECX,ESI
00431D1D  E8 4D FC FC FF            CALL 0x0040196f
00431D22  85 C0                     TEST EAX,EAX
00431D24  7E 7C                     JLE 0x00431da2
00431D26  50                        PUSH EAX
00431D27  6A 01                     PUSH 0x1
00431D29  53                        PUSH EBX
00431D2A  8B CE                     MOV ECX,ESI
00431D2C  E8 4E 14 FD FF            CALL 0x0040317f
00431D31  E9 B3 01 00 00            JMP 0x00431ee9
LAB_00431d36:
00431D36  2D A4 01 00 00            SUB EAX,0x1a4
00431D3B  74 33                     JZ 0x00431d70
00431D3D  83 E8 14                  SUB EAX,0x14
00431D40  74 2E                     JZ 0x00431d70
LAB_00431d42:
00431D42  68 00 6E 7A 00            PUSH 0x7a6e00
00431D47  68 CC 4C 7A 00            PUSH 0x7a4ccc
00431D4C  6A 00                     PUSH 0x0
00431D4E  6A 00                     PUSH 0x0
00431D50  68 13 0B 00 00            PUSH 0xb13
00431D55  68 04 60 7A 00            PUSH 0x7a6004
00431D5A  E8 71 B7 27 00            CALL 0x006ad4d0
00431D5F  83 C4 18                  ADD ESP,0x18
00431D62  85 C0                     TEST EAX,EAX
00431D64  0F 84 7F 01 00 00         JZ 0x00431ee9
00431D6A  CC                        INT3
LAB_00431d70:
00431D70  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00431D73  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
00431D76  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00431D79  51                        PUSH ECX
00431D7A  6A 00                     PUSH 0x0
00431D7C  52                        PUSH EDX
00431D7D  50                        PUSH EAX
00431D7E  6A 01                     PUSH 0x1
00431D80  53                        PUSH EBX
00431D81  8B CE                     MOV ECX,ESI
00431D83  E8 E7 FB FC FF            CALL 0x0040196f
00431D88  85 C0                     TEST EAX,EAX
00431D8A  7E 10                     JLE 0x00431d9c
00431D8C  50                        PUSH EAX
00431D8D  6A 01                     PUSH 0x1
00431D8F  53                        PUSH EBX
00431D90  8B CE                     MOV ECX,ESI
00431D92  E8 E8 13 FD FF            CALL 0x0040317f
00431D97  E9 4D 01 00 00            JMP 0x00431ee9
LAB_00431d9c:
00431D9C  0F 8D 47 01 00 00         JGE 0x00431ee9
LAB_00431da2:
00431DA2  6A 01                     PUSH 0x1
00431DA4  53                        PUSH EBX
00431DA5  8B CE                     MOV ECX,ESI
00431DA7  E8 74 3B FD FF            CALL 0x00405920
00431DAC  6A 00                     PUSH 0x0
00431DAE  6A 01                     PUSH 0x1
00431DB0  6A 01                     PUSH 0x1
00431DB2  53                        PUSH EBX
00431DB3  8B CE                     MOV ECX,ESI
00431DB5  E8 2D 15 FD FF            CALL 0x004032e7
LAB_00431dba:
00431DBA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00431DBD  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
00431DC0  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00431DC3  51                        PUSH ECX
00431DC4  52                        PUSH EDX
00431DC5  50                        PUSH EAX
00431DC6  E9 12 01 00 00            JMP 0x00431edd
LAB_00431dcb:
00431DCB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00431DCE  6A 00                     PUSH 0x0
00431DD0  6A 00                     PUSH 0x0
00431DD2  6A 00                     PUSH 0x0
00431DD4  C7 81 23 50 7F 00 01 00 00 00  MOV dword ptr [ECX + 0x7f5023],0x1
00431DDE  53                        PUSH EBX
00431DDF  8B CE                     MOV ECX,ESI
00431DE1  E8 01 15 FD FF            CALL 0x004032e7
00431DE6  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00431DE9  8B 82 D3 4F 7F 00         MOV EAX,dword ptr [EDX + 0x7f4fd3]
00431DEF  3D 9A 01 00 00            CMP EAX,0x19a
00431DF4  7F 75                     JG 0x00431e6b
00431DF6  74 4A                     JZ 0x00431e42
00431DF8  85 C0                     TEST EAX,EAX
00431DFA  74 16                     JZ 0x00431e12
00431DFC  83 F8 5A                  CMP EAX,0x5a
00431DFF  0F 84 99 00 00 00         JZ 0x00431e9e
00431E05  3D 72 01 00 00            CMP EAX,0x172
00431E0A  0F 84 8E 00 00 00         JZ 0x00431e9e
00431E10  EB 65                     JMP 0x00431e77
LAB_00431e12:
00431E12  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00431E15  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00431E18  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00431E1B  50                        PUSH EAX
00431E1C  6A 00                     PUSH 0x0
00431E1E  51                        PUSH ECX
00431E1F  52                        PUSH EDX
00431E20  6A 01                     PUSH 0x1
00431E22  53                        PUSH EBX
00431E23  8B CE                     MOV ECX,ESI
00431E25  E8 45 FB FC FF            CALL 0x0040196f
00431E2A  85 C0                     TEST EAX,EAX
00431E2C  0F 8E 9F 00 00 00         JLE 0x00431ed1
00431E32  50                        PUSH EAX
00431E33  6A 01                     PUSH 0x1
00431E35  53                        PUSH EBX
00431E36  8B CE                     MOV ECX,ESI
00431E38  E8 42 13 FD FF            CALL 0x0040317f
00431E3D  E9 A7 00 00 00            JMP 0x00431ee9
LAB_00431e42:
00431E42  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00431E45  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00431E48  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00431E4B  50                        PUSH EAX
00431E4C  6A 00                     PUSH 0x0
00431E4E  51                        PUSH ECX
00431E4F  52                        PUSH EDX
00431E50  6A 01                     PUSH 0x1
00431E52  53                        PUSH EBX
00431E53  8B CE                     MOV ECX,ESI
00431E55  E8 15 FB FC FF            CALL 0x0040196f
00431E5A  85 C0                     TEST EAX,EAX
00431E5C  7E 69                     JLE 0x00431ec7
00431E5E  50                        PUSH EAX
00431E5F  6A 01                     PUSH 0x1
00431E61  53                        PUSH EBX
00431E62  8B CE                     MOV ECX,ESI
00431E64  E8 16 13 FD FF            CALL 0x0040317f
00431E69  EB 7E                     JMP 0x00431ee9
LAB_00431e6b:
00431E6B  2D A4 01 00 00            SUB EAX,0x1a4
00431E70  74 2C                     JZ 0x00431e9e
00431E72  83 E8 14                  SUB EAX,0x14
00431E75  74 27                     JZ 0x00431e9e
LAB_00431e77:
00431E77  68 C0 6D 7A 00            PUSH 0x7a6dc0
00431E7C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00431E81  6A 00                     PUSH 0x0
00431E83  6A 00                     PUSH 0x0
00431E85  68 3A 0B 00 00            PUSH 0xb3a
00431E8A  68 04 60 7A 00            PUSH 0x7a6004
00431E8F  E8 3C B6 27 00            CALL 0x006ad4d0
00431E94  83 C4 18                  ADD ESP,0x18
00431E97  85 C0                     TEST EAX,EAX
00431E99  74 4E                     JZ 0x00431ee9
00431E9B  CC                        INT3
LAB_00431e9e:
00431E9E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00431EA1  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00431EA4  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00431EA7  50                        PUSH EAX
00431EA8  6A 00                     PUSH 0x0
00431EAA  51                        PUSH ECX
00431EAB  52                        PUSH EDX
00431EAC  6A 01                     PUSH 0x1
00431EAE  53                        PUSH EBX
00431EAF  8B CE                     MOV ECX,ESI
00431EB1  E8 B9 FA FC FF            CALL 0x0040196f
00431EB6  85 C0                     TEST EAX,EAX
00431EB8  7C 0D                     JL 0x00431ec7
00431EBA  50                        PUSH EAX
00431EBB  6A 01                     PUSH 0x1
00431EBD  53                        PUSH EBX
00431EBE  8B CE                     MOV ECX,ESI
00431EC0  E8 BA 12 FD FF            CALL 0x0040317f
00431EC5  EB 22                     JMP 0x00431ee9
LAB_00431ec7:
00431EC7  6A 01                     PUSH 0x1
00431EC9  53                        PUSH EBX
00431ECA  8B CE                     MOV ECX,ESI
00431ECC  E8 4F 3A FD FF            CALL 0x00405920
LAB_00431ed1:
00431ED1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00431ED4  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00431ED7  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00431EDA  50                        PUSH EAX
00431EDB  51                        PUSH ECX
00431EDC  52                        PUSH EDX
LAB_00431edd:
00431EDD  6A 00                     PUSH 0x0
00431EDF  6A 01                     PUSH 0x1
00431EE1  53                        PUSH EBX
00431EE2  8B CE                     MOV ECX,ESI
00431EE4  E8 48 1F FD FF            CALL 0x00403e31
LAB_00431ee9:
00431EE9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00431EEE  68 40 0B 00 00            PUSH 0xb40
00431EF3  68 04 60 7A 00            PUSH 0x7a6004
00431EF8  50                        PUSH EAX
00431EF9  68 09 00 FE AF            PUSH 0xaffe0009
00431EFE  E8 3D 3F 27 00            CALL 0x006a5e40
00431F03  33 FF                     XOR EDI,EDI
LAB_00431f05:
00431F05  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00431F08  39 79 0C                  CMP dword ptr [ECX + 0xc],EDI
00431F0B  0F 86 21 03 00 00         JBE 0x00432232
00431F11  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
00431F15  75 1B                     JNZ 0x00431f32
00431F17  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00431F1D  68 44 0B 00 00            PUSH 0xb44
00431F22  68 04 60 7A 00            PUSH 0x7a6004
00431F27  52                        PUSH EDX
00431F28  68 09 00 FE AF            PUSH 0xaffe0009
00431F2D  E8 0E 3F 27 00            CALL 0x006a5e40
LAB_00431f32:
00431F32  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00431F35  8D 45 FC                  LEA EAX,[EBP + -0x4]
00431F38  50                        PUSH EAX
00431F39  33 D2                     XOR EDX,EDX
00431F3B  E8 30 AD 27 00            CALL 0x006acc70
00431F40  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00431F43  8D 55 FC                  LEA EDX,[EBP + -0x4]
00431F46  52                        PUSH EDX
00431F47  C7 41 0C 00 00 00 00      MOV dword ptr [ECX + 0xc],0x0
00431F4E  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00431F51  50                        PUSH EAX
00431F52  E8 69 C2 27 00            CALL 0x006ae1c0
00431F57  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00431F5A  6A 05                     PUSH 0x5
00431F5C  51                        PUSH ECX
00431F5D  6A FF                     PUSH -0x1
00431F5F  8B CE                     MOV ECX,ESI
00431F61  E8 54 09 FD FF            CALL 0x004028ba
00431F66  8B F8                     MOV EDI,EAX
00431F68  85 FF                     TEST EDI,EDI
00431F6A  75 1B                     JNZ 0x00431f87
00431F6C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00431F72  68 47 0B 00 00            PUSH 0xb47
00431F77  68 04 60 7A 00            PUSH 0x7a6004
00431F7C  52                        PUSH EDX
00431F7D  68 09 00 FE AF            PUSH 0xaffe0009
00431F82  E8 B9 3E 27 00            CALL 0x006a5e40
LAB_00431f87:
00431F87  0F BE CB                  MOVSX ECX,BL
00431F8A  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00431F8D  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
00431F90  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00431F93  C1 E0 04                  SHL EAX,0x4
00431F96  03 C1                     ADD EAX,ECX
00431F98  D1 E0                     SHL EAX,0x1
00431F9A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00431F9D  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
00431FA3  83 E9 00                  SUB ECX,0x0
00431FA6  0F 84 4B 01 00 00         JZ 0x004320f7
00431FAC  49                        DEC ECX
00431FAD  74 2E                     JZ 0x00431fdd
00431FAF  68 74 6D 7A 00            PUSH 0x7a6d74
00431FB4  68 CC 4C 7A 00            PUSH 0x7a4ccc
00431FB9  6A 00                     PUSH 0x0
00431FBB  6A 00                     PUSH 0x0
00431FBD  68 9A 0B 00 00            PUSH 0xb9a
00431FC2  68 04 60 7A 00            PUSH 0x7a6004
00431FC7  E8 04 B5 27 00            CALL 0x006ad4d0
00431FCC  83 C4 18                  ADD ESP,0x18
00431FCF  85 C0                     TEST EAX,EAX
00431FD1  0F 84 3E 02 00 00         JZ 0x00432215
00431FD7  CC                        INT3
LAB_00431fdd:
00431FDD  8B 80 D3 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4fd3]
00431FE3  3D 9A 01 00 00            CMP EAX,0x19a
00431FE8  7F 78                     JG 0x00432062
00431FEA  74 4A                     JZ 0x00432036
00431FEC  85 C0                     TEST EAX,EAX
00431FEE  74 16                     JZ 0x00432006
00431FF0  83 F8 5A                  CMP EAX,0x5a
00431FF3  0F 84 A3 00 00 00         JZ 0x0043209c
00431FF9  3D 72 01 00 00            CMP EAX,0x172
00431FFE  0F 84 98 00 00 00         JZ 0x0043209c
00432004  EB 68                     JMP 0x0043206e
LAB_00432006:
00432006  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00432009  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0043200C  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0043200F  50                        PUSH EAX
00432010  6A 00                     PUSH 0x0
00432012  51                        PUSH ECX
00432013  52                        PUSH EDX
00432014  6A 01                     PUSH 0x1
00432016  53                        PUSH EBX
00432017  8B CE                     MOV ECX,ESI
00432019  E8 51 F9 FC FF            CALL 0x0040196f
0043201E  85 C0                     TEST EAX,EAX
00432020  0F 8E C0 00 00 00         JLE 0x004320e6
00432026  50                        PUSH EAX
00432027  6A 01                     PUSH 0x1
00432029  53                        PUSH EBX
0043202A  8B CE                     MOV ECX,ESI
0043202C  E8 4E 11 FD FF            CALL 0x0040317f
00432031  E9 DF 01 00 00            JMP 0x00432215
LAB_00432036:
00432036  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00432039  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0043203C  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0043203F  50                        PUSH EAX
00432040  6A 00                     PUSH 0x0
00432042  51                        PUSH ECX
00432043  52                        PUSH EDX
00432044  6A 01                     PUSH 0x1
00432046  53                        PUSH EBX
00432047  8B CE                     MOV ECX,ESI
00432049  E8 21 F9 FC FF            CALL 0x0040196f
0043204E  85 C0                     TEST EAX,EAX
00432050  7E 7C                     JLE 0x004320ce
00432052  50                        PUSH EAX
00432053  6A 01                     PUSH 0x1
00432055  53                        PUSH EBX
00432056  8B CE                     MOV ECX,ESI
00432058  E8 22 11 FD FF            CALL 0x0040317f
0043205D  E9 B3 01 00 00            JMP 0x00432215
LAB_00432062:
00432062  2D A4 01 00 00            SUB EAX,0x1a4
00432067  74 33                     JZ 0x0043209c
00432069  83 E8 14                  SUB EAX,0x14
0043206C  74 2E                     JZ 0x0043209c
LAB_0043206e:
0043206E  68 34 6D 7A 00            PUSH 0x7a6d34
00432073  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432078  6A 00                     PUSH 0x0
0043207A  6A 00                     PUSH 0x0
0043207C  68 6F 0B 00 00            PUSH 0xb6f
00432081  68 04 60 7A 00            PUSH 0x7a6004
00432086  E8 45 B4 27 00            CALL 0x006ad4d0
0043208B  83 C4 18                  ADD ESP,0x18
0043208E  85 C0                     TEST EAX,EAX
00432090  0F 84 7F 01 00 00         JZ 0x00432215
00432096  CC                        INT3
LAB_0043209c:
0043209C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043209F  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004320A2  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
004320A5  50                        PUSH EAX
004320A6  6A 00                     PUSH 0x0
004320A8  51                        PUSH ECX
004320A9  52                        PUSH EDX
004320AA  6A 01                     PUSH 0x1
004320AC  53                        PUSH EBX
004320AD  8B CE                     MOV ECX,ESI
004320AF  E8 BB F8 FC FF            CALL 0x0040196f
004320B4  85 C0                     TEST EAX,EAX
004320B6  7E 10                     JLE 0x004320c8
004320B8  50                        PUSH EAX
004320B9  6A 01                     PUSH 0x1
004320BB  53                        PUSH EBX
004320BC  8B CE                     MOV ECX,ESI
004320BE  E8 BC 10 FD FF            CALL 0x0040317f
004320C3  E9 4D 01 00 00            JMP 0x00432215
LAB_004320c8:
004320C8  0F 8D 47 01 00 00         JGE 0x00432215
LAB_004320ce:
004320CE  6A 01                     PUSH 0x1
004320D0  53                        PUSH EBX
004320D1  8B CE                     MOV ECX,ESI
004320D3  E8 48 38 FD FF            CALL 0x00405920
004320D8  6A 00                     PUSH 0x0
004320DA  6A 01                     PUSH 0x1
004320DC  6A 01                     PUSH 0x1
004320DE  53                        PUSH EBX
004320DF  8B CE                     MOV ECX,ESI
004320E1  E8 01 12 FD FF            CALL 0x004032e7
LAB_004320e6:
004320E6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004320E9  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004320EC  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
004320EF  50                        PUSH EAX
004320F0  51                        PUSH ECX
004320F1  52                        PUSH EDX
004320F2  E9 12 01 00 00            JMP 0x00432209
LAB_004320f7:
004320F7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004320FA  6A 00                     PUSH 0x0
004320FC  6A 00                     PUSH 0x0
004320FE  6A 00                     PUSH 0x0
00432100  53                        PUSH EBX
00432101  8B CE                     MOV ECX,ESI
00432103  C7 80 23 50 7F 00 01 00 00 00  MOV dword ptr [EAX + 0x7f5023],0x1
0043210D  E8 D5 11 FD FF            CALL 0x004032e7
00432112  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00432115  8B 81 D3 4F 7F 00         MOV EAX,dword ptr [ECX + 0x7f4fd3]
0043211B  3D 9A 01 00 00            CMP EAX,0x19a
00432120  7F 75                     JG 0x00432197
00432122  74 4A                     JZ 0x0043216e
00432124  85 C0                     TEST EAX,EAX
00432126  74 16                     JZ 0x0043213e
00432128  83 F8 5A                  CMP EAX,0x5a
0043212B  0F 84 99 00 00 00         JZ 0x004321ca
00432131  3D 72 01 00 00            CMP EAX,0x172
00432136  0F 84 8E 00 00 00         JZ 0x004321ca
0043213C  EB 65                     JMP 0x004321a3
LAB_0043213e:
0043213E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00432141  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00432144  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00432147  52                        PUSH EDX
00432148  6A 00                     PUSH 0x0
0043214A  50                        PUSH EAX
0043214B  51                        PUSH ECX
0043214C  6A 01                     PUSH 0x1
0043214E  53                        PUSH EBX
0043214F  8B CE                     MOV ECX,ESI
00432151  E8 19 F8 FC FF            CALL 0x0040196f
00432156  85 C0                     TEST EAX,EAX
00432158  0F 8E 9F 00 00 00         JLE 0x004321fd
0043215E  50                        PUSH EAX
0043215F  6A 01                     PUSH 0x1
00432161  53                        PUSH EBX
00432162  8B CE                     MOV ECX,ESI
00432164  E8 16 10 FD FF            CALL 0x0040317f
00432169  E9 A7 00 00 00            JMP 0x00432215
LAB_0043216e:
0043216E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00432171  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00432174  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00432177  52                        PUSH EDX
00432178  6A 00                     PUSH 0x0
0043217A  50                        PUSH EAX
0043217B  51                        PUSH ECX
0043217C  6A 01                     PUSH 0x1
0043217E  53                        PUSH EBX
0043217F  8B CE                     MOV ECX,ESI
00432181  E8 E9 F7 FC FF            CALL 0x0040196f
00432186  85 C0                     TEST EAX,EAX
00432188  7E 69                     JLE 0x004321f3
0043218A  50                        PUSH EAX
0043218B  6A 01                     PUSH 0x1
0043218D  53                        PUSH EBX
0043218E  8B CE                     MOV ECX,ESI
00432190  E8 EA 0F FD FF            CALL 0x0040317f
00432195  EB 7E                     JMP 0x00432215
LAB_00432197:
00432197  2D A4 01 00 00            SUB EAX,0x1a4
0043219C  74 2C                     JZ 0x004321ca
0043219E  83 E8 14                  SUB EAX,0x14
004321A1  74 27                     JZ 0x004321ca
LAB_004321a3:
004321A3  68 F4 6C 7A 00            PUSH 0x7a6cf4
004321A8  68 CC 4C 7A 00            PUSH 0x7a4ccc
004321AD  6A 00                     PUSH 0x0
004321AF  6A 00                     PUSH 0x0
004321B1  68 96 0B 00 00            PUSH 0xb96
004321B6  68 04 60 7A 00            PUSH 0x7a6004
004321BB  E8 10 B3 27 00            CALL 0x006ad4d0
004321C0  83 C4 18                  ADD ESP,0x18
004321C3  85 C0                     TEST EAX,EAX
004321C5  74 4E                     JZ 0x00432215
004321C7  CC                        INT3
LAB_004321ca:
004321CA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004321CD  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004321D0  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
004321D3  52                        PUSH EDX
004321D4  6A 00                     PUSH 0x0
004321D6  50                        PUSH EAX
004321D7  51                        PUSH ECX
004321D8  6A 01                     PUSH 0x1
004321DA  53                        PUSH EBX
004321DB  8B CE                     MOV ECX,ESI
004321DD  E8 8D F7 FC FF            CALL 0x0040196f
004321E2  85 C0                     TEST EAX,EAX
004321E4  7C 0D                     JL 0x004321f3
004321E6  50                        PUSH EAX
004321E7  6A 01                     PUSH 0x1
004321E9  53                        PUSH EBX
004321EA  8B CE                     MOV ECX,ESI
004321EC  E8 8E 0F FD FF            CALL 0x0040317f
004321F1  EB 22                     JMP 0x00432215
LAB_004321f3:
004321F3  6A 01                     PUSH 0x1
004321F5  53                        PUSH EBX
004321F6  8B CE                     MOV ECX,ESI
004321F8  E8 23 37 FD FF            CALL 0x00405920
LAB_004321fd:
004321FD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00432200  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00432203  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00432206  52                        PUSH EDX
00432207  50                        PUSH EAX
00432208  51                        PUSH ECX
LAB_00432209:
00432209  6A 00                     PUSH 0x0
0043220B  6A 01                     PUSH 0x1
0043220D  53                        PUSH EBX
0043220E  8B CE                     MOV ECX,ESI
00432210  E8 1C 1C FD FF            CALL 0x00403e31
LAB_00432215:
00432215  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0043221B  68 9C 0B 00 00            PUSH 0xb9c
00432220  68 04 60 7A 00            PUSH 0x7a6004
00432225  52                        PUSH EDX
00432226  68 09 00 FE AF            PUSH 0xaffe0009
0043222B  E8 10 3C 27 00            CALL 0x006a5e40
00432230  33 FF                     XOR EDI,EDI
LAB_00432232:
00432232  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00432235  39 78 0C                  CMP dword ptr [EAX + 0xc],EDI
00432238  0F 86 61 03 00 00         JBE 0x0043259f
0043223E  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
00432242  75 1B                     JNZ 0x0043225f
00432244  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0043224A  68 A0 0B 00 00            PUSH 0xba0
0043224F  68 04 60 7A 00            PUSH 0x7a6004
00432254  51                        PUSH ECX
00432255  68 09 00 FE AF            PUSH 0xaffe0009
0043225A  E8 E1 3B 27 00            CALL 0x006a5e40
LAB_0043225f:
0043225F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00432262  8D 55 FC                  LEA EDX,[EBP + -0x4]
00432265  52                        PUSH EDX
00432266  33 D2                     XOR EDX,EDX
00432268  E8 03 AA 27 00            CALL 0x006acc70
0043226D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00432270  8D 4D FC                  LEA ECX,[EBP + -0x4]
00432273  51                        PUSH ECX
00432274  C7 40 0C 00 00 00 00      MOV dword ptr [EAX + 0xc],0x0
0043227B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0043227E  52                        PUSH EDX
0043227F  E8 3C BF 27 00            CALL 0x006ae1c0
00432284  0F BE C3                  MOVSX EAX,BL
00432287  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043228A  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043228D  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
00432290  C1 E7 04                  SHL EDI,0x4
00432293  03 F8                     ADD EDI,EAX
00432295  D1 E7                     SHL EDI,0x1
00432297  8B 87 23 50 7F 00         MOV EAX,dword ptr [EDI + 0x7f5023]
0043229D  83 E8 00                  SUB EAX,0x0
004322A0  0F 84 AB 01 00 00         JZ 0x00432451
004322A6  48                        DEC EAX
004322A7  74 2E                     JZ 0x004322d7
004322A9  68 AC 6C 7A 00            PUSH 0x7a6cac
004322AE  68 CC 4C 7A 00            PUSH 0x7a4ccc
004322B3  6A 00                     PUSH 0x0
004322B5  6A 00                     PUSH 0x0
004322B7  68 FF 0B 00 00            PUSH 0xbff
004322BC  68 04 60 7A 00            PUSH 0x7a6004
004322C1  E8 0A B2 27 00            CALL 0x006ad4d0
004322C6  83 C4 18                  ADD ESP,0x18
004322C9  85 C0                     TEST EAX,EAX
004322CB  0F 84 B1 02 00 00         JZ 0x00432582
004322D1  CC                        INT3
LAB_004322d7:
004322D7  8B 87 D3 4F 7F 00         MOV EAX,dword ptr [EDI + 0x7f4fd3]
004322DD  3D 9A 01 00 00            CMP EAX,0x19a
004322E2  0F 8F E8 00 00 00         JG 0x004323d0
004322E8  74 4B                     JZ 0x00432335
004322EA  85 C0                     TEST EAX,EAX
004322EC  74 19                     JZ 0x00432307
004322EE  83 F8 5A                  CMP EAX,0x5a
004322F1  0F 84 13 01 00 00         JZ 0x0043240a
004322F7  3D 72 01 00 00            CMP EAX,0x172
004322FC  0F 84 08 01 00 00         JZ 0x0043240a
00432302  E9 D5 00 00 00            JMP 0x004323dc
LAB_00432307:
00432307  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043230A  6A 00                     PUSH 0x0
0043230C  50                        PUSH EAX
0043230D  53                        PUSH EBX
0043230E  68 9A 01 00 00            PUSH 0x19a
00432313  6A 01                     PUSH 0x1
00432315  53                        PUSH EBX
00432316  8B CE                     MOV ECX,ESI
00432318  E8 52 F6 FC FF            CALL 0x0040196f
0043231D  85 C0                     TEST EAX,EAX
0043231F  0F 8E D8 01 00 00         JLE 0x004324fd
00432325  50                        PUSH EAX
00432326  6A 01                     PUSH 0x1
00432328  53                        PUSH EBX
00432329  8B CE                     MOV ECX,ESI
0043232B  E8 4F 0E FD FF            CALL 0x0040317f
00432330  E9 43 02 00 00            JMP 0x00432578
LAB_00432335:
00432335  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00432338  6A 00                     PUSH 0x0
0043233A  52                        PUSH EDX
0043233B  53                        PUSH EBX
0043233C  68 9A 01 00 00            PUSH 0x19a
00432341  6A 01                     PUSH 0x1
00432343  53                        PUSH EBX
00432344  8B CE                     MOV ECX,ESI
00432346  E8 24 F6 FC FF            CALL 0x0040196f
0043234B  85 C0                     TEST EAX,EAX
0043234D  7E 10                     JLE 0x0043235f
0043234F  50                        PUSH EAX
00432350  6A 01                     PUSH 0x1
00432352  53                        PUSH EBX
00432353  8B CE                     MOV ECX,ESI
00432355  E8 25 0E FD FF            CALL 0x0040317f
0043235A  E9 23 02 00 00            JMP 0x00432582
LAB_0043235f:
0043235F  0F 8D 1D 02 00 00         JGE 0x00432582
00432365  6A 01                     PUSH 0x1
00432367  53                        PUSH EBX
00432368  8B CE                     MOV ECX,ESI
0043236A  E8 B1 35 FD FF            CALL 0x00405920
0043236F  8B 8F E7 4F 7F 00         MOV ECX,dword ptr [EDI + 0x7f4fe7]
00432375  6A 00                     PUSH 0x0
00432377  0F BE C3                  MOVSX EAX,BL
0043237A  3B C8                     CMP ECX,EAX
0043237C  75 3D                     JNZ 0x004323bb
0043237E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00432381  8D 45 E0                  LEA EAX,[EBP + -0x20]
00432384  6A 00                     PUSH 0x0
00432386  50                        PUSH EAX
00432387  51                        PUSH ECX
00432388  6A 01                     PUSH 0x1
0043238A  6A 01                     PUSH 0x1
0043238C  53                        PUSH EBX
0043238D  8B CE                     MOV ECX,ESI
0043238F  E8 42 FD FC FF            CALL 0x004020d6
00432394  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00432397  6A 00                     PUSH 0x0
00432399  6A 00                     PUSH 0x0
0043239B  52                        PUSH EDX
0043239C  68 9A 01 00 00            PUSH 0x19a
004323A1  53                        PUSH EBX
004323A2  8B CE                     MOV ECX,ESI
004323A4  E8 17 04 FD FF            CALL 0x004027c0
004323A9  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004323AC  50                        PUSH EAX
004323AD  E8 5E BD 27 00            CALL 0x006ae110
004323B2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004323B5  51                        PUSH ECX
004323B6  E9 B0 01 00 00            JMP 0x0043256b
LAB_004323bb:
004323BB  6A 01                     PUSH 0x1
004323BD  6A 01                     PUSH 0x1
004323BF  53                        PUSH EBX
004323C0  8B CE                     MOV ECX,ESI
004323C2  E8 20 0F FD FF            CALL 0x004032e7
004323C7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004323CA  51                        PUSH ECX
004323CB  E9 9B 01 00 00            JMP 0x0043256b
LAB_004323d0:
004323D0  2D A4 01 00 00            SUB EAX,0x1a4
004323D5  74 33                     JZ 0x0043240a
004323D7  83 E8 14                  SUB EAX,0x14
004323DA  74 2E                     JZ 0x0043240a
LAB_004323dc:
004323DC  68 6C 6C 7A 00            PUSH 0x7a6c6c
004323E1  68 CC 4C 7A 00            PUSH 0x7a4ccc
004323E6  6A 00                     PUSH 0x0
004323E8  6A 00                     PUSH 0x0
004323EA  68 D1 0B 00 00            PUSH 0xbd1
004323EF  68 04 60 7A 00            PUSH 0x7a6004
004323F4  E8 D7 B0 27 00            CALL 0x006ad4d0
004323F9  83 C4 18                  ADD ESP,0x18
004323FC  85 C0                     TEST EAX,EAX
004323FE  0F 84 7E 01 00 00         JZ 0x00432582
00432404  CC                        INT3
LAB_0043240a:
0043240A  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0043240D  6A 00                     PUSH 0x0
0043240F  52                        PUSH EDX
00432410  53                        PUSH EBX
00432411  68 9A 01 00 00            PUSH 0x19a
00432416  6A 01                     PUSH 0x1
00432418  53                        PUSH EBX
00432419  8B CE                     MOV ECX,ESI
0043241B  E8 4F F5 FC FF            CALL 0x0040196f
00432420  85 C0                     TEST EAX,EAX
00432422  7E 10                     JLE 0x00432434
00432424  50                        PUSH EAX
00432425  6A 01                     PUSH 0x1
00432427  53                        PUSH EBX
00432428  8B CE                     MOV ECX,ESI
0043242A  E8 50 0D FD FF            CALL 0x0040317f
0043242F  E9 4E 01 00 00            JMP 0x00432582
LAB_00432434:
00432434  6A 01                     PUSH 0x1
00432436  53                        PUSH EBX
00432437  8B CE                     MOV ECX,ESI
00432439  E8 E2 34 FD FF            CALL 0x00405920
0043243E  6A 00                     PUSH 0x0
00432440  6A 01                     PUSH 0x1
00432442  6A 01                     PUSH 0x1
00432444  53                        PUSH EBX
00432445  8B CE                     MOV ECX,ESI
00432447  E8 9B 0E FD FF            CALL 0x004032e7
0043244C  E9 16 01 00 00            JMP 0x00432567
LAB_00432451:
00432451  6A 00                     PUSH 0x0
00432453  6A 00                     PUSH 0x0
00432455  6A 00                     PUSH 0x0
00432457  53                        PUSH EBX
00432458  8B CE                     MOV ECX,ESI
0043245A  C7 87 23 50 7F 00 01 00 00 00  MOV dword ptr [EDI + 0x7f5023],0x1
00432464  E8 7E 0E FD FF            CALL 0x004032e7
00432469  8B 87 D3 4F 7F 00         MOV EAX,dword ptr [EDI + 0x7f4fd3]
0043246F  3D 9A 01 00 00            CMP EAX,0x19a
00432474  0F 8F 89 00 00 00         JG 0x00432503
0043247A  74 4D                     JZ 0x004324c9
0043247C  85 C0                     TEST EAX,EAX
0043247E  74 16                     JZ 0x00432496
00432480  83 F8 5A                  CMP EAX,0x5a
00432483  0F 84 AD 00 00 00         JZ 0x00432536
00432489  3D 72 01 00 00            CMP EAX,0x172
0043248E  0F 84 A2 00 00 00         JZ 0x00432536
00432494  EB 79                     JMP 0x0043250f
LAB_00432496:
00432496  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00432499  6A 00                     PUSH 0x0
0043249B  51                        PUSH ECX
0043249C  53                        PUSH EBX
0043249D  68 9A 01 00 00            PUSH 0x19a
004324A2  6A 01                     PUSH 0x1
004324A4  53                        PUSH EBX
004324A5  8B CE                     MOV ECX,ESI
004324A7  E8 C3 F4 FC FF            CALL 0x0040196f
004324AC  85 C0                     TEST EAX,EAX
004324AE  7E 10                     JLE 0x004324c0
004324B0  50                        PUSH EAX
004324B1  6A 01                     PUSH 0x1
004324B3  53                        PUSH EBX
004324B4  8B CE                     MOV ECX,ESI
004324B6  E8 C4 0C FD FF            CALL 0x0040317f
004324BB  E9 B8 00 00 00            JMP 0x00432578
LAB_004324c0:
004324C0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004324C3  52                        PUSH EDX
004324C4  E9 A2 00 00 00            JMP 0x0043256b
LAB_004324c9:
004324C9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004324CC  6A 00                     PUSH 0x0
004324CE  50                        PUSH EAX
004324CF  53                        PUSH EBX
004324D0  68 9A 01 00 00            PUSH 0x19a
004324D5  6A 01                     PUSH 0x1
004324D7  53                        PUSH EBX
004324D8  8B CE                     MOV ECX,ESI
004324DA  E8 90 F4 FC FF            CALL 0x0040196f
004324DF  85 C0                     TEST EAX,EAX
004324E1  7C 10                     JL 0x004324f3
004324E3  50                        PUSH EAX
004324E4  6A 01                     PUSH 0x1
004324E6  53                        PUSH EBX
004324E7  8B CE                     MOV ECX,ESI
004324E9  E8 91 0C FD FF            CALL 0x0040317f
004324EE  E9 8F 00 00 00            JMP 0x00432582
LAB_004324f3:
004324F3  6A 01                     PUSH 0x1
004324F5  53                        PUSH EBX
004324F6  8B CE                     MOV ECX,ESI
004324F8  E8 23 34 FD FF            CALL 0x00405920
LAB_004324fd:
004324FD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00432500  51                        PUSH ECX
00432501  EB 68                     JMP 0x0043256b
LAB_00432503:
00432503  2D A4 01 00 00            SUB EAX,0x1a4
00432508  74 2C                     JZ 0x00432536
0043250A  83 E8 14                  SUB EAX,0x14
0043250D  74 27                     JZ 0x00432536
LAB_0043250f:
0043250F  68 30 6C 7A 00            PUSH 0x7a6c30
00432514  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432519  6A 00                     PUSH 0x0
0043251B  6A 00                     PUSH 0x0
0043251D  68 FB 0B 00 00            PUSH 0xbfb
00432522  68 04 60 7A 00            PUSH 0x7a6004
00432527  E8 A4 AF 27 00            CALL 0x006ad4d0
0043252C  83 C4 18                  ADD ESP,0x18
0043252F  85 C0                     TEST EAX,EAX
00432531  74 4F                     JZ 0x00432582
00432533  CC                        INT3
LAB_00432536:
00432536  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00432539  6A 00                     PUSH 0x0
0043253B  52                        PUSH EDX
0043253C  53                        PUSH EBX
0043253D  68 9A 01 00 00            PUSH 0x19a
00432542  6A 01                     PUSH 0x1
00432544  53                        PUSH EBX
00432545  8B CE                     MOV ECX,ESI
00432547  E8 23 F4 FC FF            CALL 0x0040196f
0043254C  85 C0                     TEST EAX,EAX
0043254E  7E 0D                     JLE 0x0043255d
00432550  50                        PUSH EAX
00432551  6A 01                     PUSH 0x1
00432553  53                        PUSH EBX
00432554  8B CE                     MOV ECX,ESI
00432556  E8 24 0C FD FF            CALL 0x0040317f
0043255B  EB 25                     JMP 0x00432582
LAB_0043255d:
0043255D  6A 01                     PUSH 0x1
0043255F  53                        PUSH EBX
00432560  8B CE                     MOV ECX,ESI
00432562  E8 B9 33 FD FF            CALL 0x00405920
LAB_00432567:
00432567  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043256A  50                        PUSH EAX
LAB_0043256b:
0043256B  53                        PUSH EBX
0043256C  6A 00                     PUSH 0x0
0043256E  6A 01                     PUSH 0x1
00432570  53                        PUSH EBX
00432571  8B CE                     MOV ECX,ESI
00432573  E8 20 1B FD FF            CALL 0x00404098
LAB_00432578:
00432578  C7 87 D3 4F 7F 00 9A 01 00 00  MOV dword ptr [EDI + 0x7f4fd3],0x19a
LAB_00432582:
00432582  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00432588  68 01 0C 00 00            PUSH 0xc01
0043258D  68 04 60 7A 00            PUSH 0x7a6004
00432592  51                        PUSH ECX
00432593  68 09 00 FE AF            PUSH 0xaffe0009
00432598  E8 A3 38 27 00            CALL 0x006a5e40
0043259D  33 FF                     XOR EDI,EDI
LAB_0043259f:
0043259F  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004325A2  39 7A 0C                  CMP dword ptr [EDX + 0xc],EDI
004325A5  0F 86 1E 03 00 00         JBE 0x004328c9
004325AB  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
004325AF  75 1A                     JNZ 0x004325cb
004325B1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004325B6  68 05 0C 00 00            PUSH 0xc05
004325BB  68 04 60 7A 00            PUSH 0x7a6004
004325C0  50                        PUSH EAX
004325C1  68 09 00 FE AF            PUSH 0xaffe0009
004325C6  E8 75 38 27 00            CALL 0x006a5e40
LAB_004325cb:
004325CB  8D 4D FC                  LEA ECX,[EBP + -0x4]
004325CE  33 D2                     XOR EDX,EDX
004325D0  51                        PUSH ECX
004325D1  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004325D4  E8 97 A6 27 00            CALL 0x006acc70
004325D9  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
004325DC  8D 45 FC                  LEA EAX,[EBP + -0x4]
004325DF  50                        PUSH EAX
004325E0  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
004325E7  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004325EA  51                        PUSH ECX
004325EB  E8 D0 BB 27 00            CALL 0x006ae1c0
004325F0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004325F3  6A 04                     PUSH 0x4
004325F5  52                        PUSH EDX
004325F6  6A FF                     PUSH -0x1
004325F8  8B CE                     MOV ECX,ESI
004325FA  E8 BB 02 FD FF            CALL 0x004028ba
004325FF  8B F8                     MOV EDI,EAX
00432601  85 FF                     TEST EDI,EDI
00432603  75 1A                     JNZ 0x0043261f
00432605  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0043260A  68 08 0C 00 00            PUSH 0xc08
0043260F  68 04 60 7A 00            PUSH 0x7a6004
00432614  50                        PUSH EAX
00432615  68 09 00 FE AF            PUSH 0xaffe0009
0043261A  E8 21 38 27 00            CALL 0x006a5e40
LAB_0043261f:
0043261F  0F BE CB                  MOVSX ECX,BL
00432622  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
00432625  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
00432628  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
0043262B  C1 E0 04                  SHL EAX,0x4
0043262E  03 C1                     ADD EAX,ECX
00432630  D1 E0                     SHL EAX,0x1
00432632  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00432635  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
0043263B  83 E9 00                  SUB ECX,0x0
0043263E  0F 84 4B 01 00 00         JZ 0x0043278f
00432644  49                        DEC ECX
00432645  74 2E                     JZ 0x00432675
00432647  68 E4 6B 7A 00            PUSH 0x7a6be4
0043264C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432651  6A 00                     PUSH 0x0
00432653  6A 00                     PUSH 0x0
00432655  68 5B 0C 00 00            PUSH 0xc5b
0043265A  68 04 60 7A 00            PUSH 0x7a6004
0043265F  E8 6C AE 27 00            CALL 0x006ad4d0
00432664  83 C4 18                  ADD ESP,0x18
00432667  85 C0                     TEST EAX,EAX
00432669  0F 84 3E 02 00 00         JZ 0x004328ad
0043266F  CC                        INT3
LAB_00432675:
00432675  8B 80 D3 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4fd3]
0043267B  3D 9A 01 00 00            CMP EAX,0x19a
00432680  7F 78                     JG 0x004326fa
00432682  74 4A                     JZ 0x004326ce
00432684  85 C0                     TEST EAX,EAX
00432686  74 16                     JZ 0x0043269e
00432688  83 F8 5A                  CMP EAX,0x5a
0043268B  0F 84 A3 00 00 00         JZ 0x00432734
00432691  3D 72 01 00 00            CMP EAX,0x172
00432696  0F 84 98 00 00 00         JZ 0x00432734
0043269C  EB 68                     JMP 0x00432706
LAB_0043269e:
0043269E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004326A1  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
004326A4  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
004326A7  51                        PUSH ECX
004326A8  6A 00                     PUSH 0x0
004326AA  52                        PUSH EDX
004326AB  50                        PUSH EAX
004326AC  6A 01                     PUSH 0x1
004326AE  53                        PUSH EBX
004326AF  8B CE                     MOV ECX,ESI
004326B1  E8 B9 F2 FC FF            CALL 0x0040196f
004326B6  85 C0                     TEST EAX,EAX
004326B8  0F 8E C0 00 00 00         JLE 0x0043277e
004326BE  50                        PUSH EAX
004326BF  6A 01                     PUSH 0x1
004326C1  53                        PUSH EBX
004326C2  8B CE                     MOV ECX,ESI
004326C4  E8 B6 0A FD FF            CALL 0x0040317f
004326C9  E9 DF 01 00 00            JMP 0x004328ad
LAB_004326ce:
004326CE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004326D1  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
004326D4  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
004326D7  51                        PUSH ECX
004326D8  6A 00                     PUSH 0x0
004326DA  52                        PUSH EDX
004326DB  50                        PUSH EAX
004326DC  6A 01                     PUSH 0x1
004326DE  53                        PUSH EBX
004326DF  8B CE                     MOV ECX,ESI
004326E1  E8 89 F2 FC FF            CALL 0x0040196f
004326E6  85 C0                     TEST EAX,EAX
004326E8  7E 7C                     JLE 0x00432766
004326EA  50                        PUSH EAX
004326EB  6A 01                     PUSH 0x1
004326ED  53                        PUSH EBX
004326EE  8B CE                     MOV ECX,ESI
004326F0  E8 8A 0A FD FF            CALL 0x0040317f
004326F5  E9 B3 01 00 00            JMP 0x004328ad
LAB_004326fa:
004326FA  2D A4 01 00 00            SUB EAX,0x1a4
004326FF  74 33                     JZ 0x00432734
00432701  83 E8 14                  SUB EAX,0x14
00432704  74 2E                     JZ 0x00432734
LAB_00432706:
00432706  68 A4 6B 7A 00            PUSH 0x7a6ba4
0043270B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432710  6A 00                     PUSH 0x0
00432712  6A 00                     PUSH 0x0
00432714  68 30 0C 00 00            PUSH 0xc30
00432719  68 04 60 7A 00            PUSH 0x7a6004
0043271E  E8 AD AD 27 00            CALL 0x006ad4d0
00432723  83 C4 18                  ADD ESP,0x18
00432726  85 C0                     TEST EAX,EAX
00432728  0F 84 7F 01 00 00         JZ 0x004328ad
0043272E  CC                        INT3
LAB_00432734:
00432734  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00432737  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
0043273A  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
0043273D  51                        PUSH ECX
0043273E  6A 00                     PUSH 0x0
00432740  52                        PUSH EDX
00432741  50                        PUSH EAX
00432742  6A 01                     PUSH 0x1
00432744  53                        PUSH EBX
00432745  8B CE                     MOV ECX,ESI
00432747  E8 23 F2 FC FF            CALL 0x0040196f
0043274C  85 C0                     TEST EAX,EAX
0043274E  7E 10                     JLE 0x00432760
00432750  50                        PUSH EAX
00432751  6A 01                     PUSH 0x1
00432753  53                        PUSH EBX
00432754  8B CE                     MOV ECX,ESI
00432756  E8 24 0A FD FF            CALL 0x0040317f
0043275B  E9 4D 01 00 00            JMP 0x004328ad
LAB_00432760:
00432760  0F 8D 47 01 00 00         JGE 0x004328ad
LAB_00432766:
00432766  6A 01                     PUSH 0x1
00432768  53                        PUSH EBX
00432769  8B CE                     MOV ECX,ESI
0043276B  E8 B0 31 FD FF            CALL 0x00405920
00432770  6A 00                     PUSH 0x0
00432772  6A 01                     PUSH 0x1
00432774  6A 01                     PUSH 0x1
00432776  53                        PUSH EBX
00432777  8B CE                     MOV ECX,ESI
00432779  E8 69 0B FD FF            CALL 0x004032e7
LAB_0043277e:
0043277E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00432781  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
00432784  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
00432787  51                        PUSH ECX
00432788  52                        PUSH EDX
00432789  50                        PUSH EAX
0043278A  E9 12 01 00 00            JMP 0x004328a1
LAB_0043278f:
0043278F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00432792  6A 00                     PUSH 0x0
00432794  6A 00                     PUSH 0x0
00432796  6A 00                     PUSH 0x0
00432798  C7 81 23 50 7F 00 01 00 00 00  MOV dword ptr [ECX + 0x7f5023],0x1
004327A2  53                        PUSH EBX
004327A3  8B CE                     MOV ECX,ESI
004327A5  E8 3D 0B FD FF            CALL 0x004032e7
004327AA  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004327AD  8B 82 D3 4F 7F 00         MOV EAX,dword ptr [EDX + 0x7f4fd3]
004327B3  3D 9A 01 00 00            CMP EAX,0x19a
004327B8  7F 75                     JG 0x0043282f
004327BA  74 4A                     JZ 0x00432806
004327BC  85 C0                     TEST EAX,EAX
004327BE  74 16                     JZ 0x004327d6
004327C0  83 F8 5A                  CMP EAX,0x5a
004327C3  0F 84 99 00 00 00         JZ 0x00432862
004327C9  3D 72 01 00 00            CMP EAX,0x172
004327CE  0F 84 8E 00 00 00         JZ 0x00432862
004327D4  EB 65                     JMP 0x0043283b
LAB_004327d6:
004327D6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004327D9  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004327DC  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
004327DF  50                        PUSH EAX
004327E0  6A 00                     PUSH 0x0
004327E2  51                        PUSH ECX
004327E3  52                        PUSH EDX
004327E4  6A 01                     PUSH 0x1
004327E6  53                        PUSH EBX
004327E7  8B CE                     MOV ECX,ESI
004327E9  E8 81 F1 FC FF            CALL 0x0040196f
004327EE  85 C0                     TEST EAX,EAX
004327F0  0F 8E 9F 00 00 00         JLE 0x00432895
004327F6  50                        PUSH EAX
004327F7  6A 01                     PUSH 0x1
004327F9  53                        PUSH EBX
004327FA  8B CE                     MOV ECX,ESI
004327FC  E8 7E 09 FD FF            CALL 0x0040317f
00432801  E9 A7 00 00 00            JMP 0x004328ad
LAB_00432806:
00432806  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00432809  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0043280C  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0043280F  50                        PUSH EAX
00432810  6A 00                     PUSH 0x0
00432812  51                        PUSH ECX
00432813  52                        PUSH EDX
00432814  6A 01                     PUSH 0x1
00432816  53                        PUSH EBX
00432817  8B CE                     MOV ECX,ESI
00432819  E8 51 F1 FC FF            CALL 0x0040196f
0043281E  85 C0                     TEST EAX,EAX
00432820  7E 69                     JLE 0x0043288b
00432822  50                        PUSH EAX
00432823  6A 01                     PUSH 0x1
00432825  53                        PUSH EBX
00432826  8B CE                     MOV ECX,ESI
00432828  E8 52 09 FD FF            CALL 0x0040317f
0043282D  EB 7E                     JMP 0x004328ad
LAB_0043282f:
0043282F  2D A4 01 00 00            SUB EAX,0x1a4
00432834  74 2C                     JZ 0x00432862
00432836  83 E8 14                  SUB EAX,0x14
00432839  74 27                     JZ 0x00432862
LAB_0043283b:
0043283B  68 64 6B 7A 00            PUSH 0x7a6b64
00432840  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432845  6A 00                     PUSH 0x0
00432847  6A 00                     PUSH 0x0
00432849  68 57 0C 00 00            PUSH 0xc57
0043284E  68 04 60 7A 00            PUSH 0x7a6004
00432853  E8 78 AC 27 00            CALL 0x006ad4d0
00432858  83 C4 18                  ADD ESP,0x18
0043285B  85 C0                     TEST EAX,EAX
0043285D  74 4E                     JZ 0x004328ad
0043285F  CC                        INT3
LAB_00432862:
00432862  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00432865  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00432868  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0043286B  50                        PUSH EAX
0043286C  6A 00                     PUSH 0x0
0043286E  51                        PUSH ECX
0043286F  52                        PUSH EDX
00432870  6A 01                     PUSH 0x1
00432872  53                        PUSH EBX
00432873  8B CE                     MOV ECX,ESI
00432875  E8 F5 F0 FC FF            CALL 0x0040196f
0043287A  85 C0                     TEST EAX,EAX
0043287C  7C 0D                     JL 0x0043288b
0043287E  50                        PUSH EAX
0043287F  6A 01                     PUSH 0x1
00432881  53                        PUSH EBX
00432882  8B CE                     MOV ECX,ESI
00432884  E8 F6 08 FD FF            CALL 0x0040317f
00432889  EB 22                     JMP 0x004328ad
LAB_0043288b:
0043288B  6A 01                     PUSH 0x1
0043288D  53                        PUSH EBX
0043288E  8B CE                     MOV ECX,ESI
00432890  E8 8B 30 FD FF            CALL 0x00405920
LAB_00432895:
00432895  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00432898  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
0043289B  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
0043289E  50                        PUSH EAX
0043289F  51                        PUSH ECX
004328A0  52                        PUSH EDX
LAB_004328a1:
004328A1  6A 00                     PUSH 0x0
004328A3  6A 01                     PUSH 0x1
004328A5  53                        PUSH EBX
004328A6  8B CE                     MOV ECX,ESI
004328A8  E8 84 15 FD FF            CALL 0x00403e31
LAB_004328ad:
004328AD  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004328B2  68 5D 0C 00 00            PUSH 0xc5d
004328B7  68 04 60 7A 00            PUSH 0x7a6004
004328BC  50                        PUSH EAX
004328BD  68 09 00 FE AF            PUSH 0xaffe0009
004328C2  E8 79 35 27 00            CALL 0x006a5e40
004328C7  33 FF                     XOR EDI,EDI
LAB_004328c9:
004328C9  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
004328CC  39 79 0C                  CMP dword ptr [ECX + 0xc],EDI
004328CF  0F 86 21 03 00 00         JBE 0x00432bf6
004328D5  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
004328D9  75 1B                     JNZ 0x004328f6
004328DB  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004328E1  68 61 0C 00 00            PUSH 0xc61
004328E6  68 04 60 7A 00            PUSH 0x7a6004
004328EB  52                        PUSH EDX
004328EC  68 09 00 FE AF            PUSH 0xaffe0009
004328F1  E8 4A 35 27 00            CALL 0x006a5e40
LAB_004328f6:
004328F6  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
004328F9  8D 45 FC                  LEA EAX,[EBP + -0x4]
004328FC  50                        PUSH EAX
004328FD  33 D2                     XOR EDX,EDX
004328FF  E8 6C A3 27 00            CALL 0x006acc70
00432904  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00432907  8D 55 FC                  LEA EDX,[EBP + -0x4]
0043290A  52                        PUSH EDX
0043290B  C7 41 0C 00 00 00 00      MOV dword ptr [ECX + 0xc],0x0
00432912  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00432915  50                        PUSH EAX
00432916  E8 A5 B8 27 00            CALL 0x006ae1c0
0043291B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043291E  6A 06                     PUSH 0x6
00432920  51                        PUSH ECX
00432921  6A FF                     PUSH -0x1
00432923  8B CE                     MOV ECX,ESI
00432925  E8 90 FF FC FF            CALL 0x004028ba
0043292A  8B F8                     MOV EDI,EAX
0043292C  85 FF                     TEST EDI,EDI
0043292E  75 1B                     JNZ 0x0043294b
00432930  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00432936  68 64 0C 00 00            PUSH 0xc64
0043293B  68 04 60 7A 00            PUSH 0x7a6004
00432940  52                        PUSH EDX
00432941  68 09 00 FE AF            PUSH 0xaffe0009
00432946  E8 F5 34 27 00            CALL 0x006a5e40
LAB_0043294b:
0043294B  0F BE CB                  MOVSX ECX,BL
0043294E  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00432951  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
00432954  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00432957  C1 E0 04                  SHL EAX,0x4
0043295A  03 C1                     ADD EAX,ECX
0043295C  D1 E0                     SHL EAX,0x1
0043295E  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00432961  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
00432967  83 E9 00                  SUB ECX,0x0
0043296A  0F 84 4B 01 00 00         JZ 0x00432abb
00432970  49                        DEC ECX
00432971  74 2E                     JZ 0x004329a1
00432973  68 1C 6B 7A 00            PUSH 0x7a6b1c
00432978  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043297D  6A 00                     PUSH 0x0
0043297F  6A 00                     PUSH 0x0
00432981  68 B7 0C 00 00            PUSH 0xcb7
00432986  68 04 60 7A 00            PUSH 0x7a6004
0043298B  E8 40 AB 27 00            CALL 0x006ad4d0
00432990  83 C4 18                  ADD ESP,0x18
00432993  85 C0                     TEST EAX,EAX
00432995  0F 84 3E 02 00 00         JZ 0x00432bd9
0043299B  CC                        INT3
LAB_004329a1:
004329A1  8B 80 D3 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4fd3]
004329A7  3D 9A 01 00 00            CMP EAX,0x19a
004329AC  7F 78                     JG 0x00432a26
004329AE  74 4A                     JZ 0x004329fa
004329B0  85 C0                     TEST EAX,EAX
004329B2  74 16                     JZ 0x004329ca
004329B4  83 F8 5A                  CMP EAX,0x5a
004329B7  0F 84 A3 00 00 00         JZ 0x00432a60
004329BD  3D 72 01 00 00            CMP EAX,0x172
004329C2  0F 84 98 00 00 00         JZ 0x00432a60
004329C8  EB 68                     JMP 0x00432a32
LAB_004329ca:
004329CA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004329CD  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004329D0  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
004329D3  50                        PUSH EAX
004329D4  6A 00                     PUSH 0x0
004329D6  51                        PUSH ECX
004329D7  52                        PUSH EDX
004329D8  6A 01                     PUSH 0x1
004329DA  53                        PUSH EBX
004329DB  8B CE                     MOV ECX,ESI
004329DD  E8 8D EF FC FF            CALL 0x0040196f
004329E2  85 C0                     TEST EAX,EAX
004329E4  0F 8E C0 00 00 00         JLE 0x00432aaa
004329EA  50                        PUSH EAX
004329EB  6A 01                     PUSH 0x1
004329ED  53                        PUSH EBX
004329EE  8B CE                     MOV ECX,ESI
004329F0  E8 8A 07 FD FF            CALL 0x0040317f
004329F5  E9 DF 01 00 00            JMP 0x00432bd9
LAB_004329fa:
004329FA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004329FD  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00432A00  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00432A03  50                        PUSH EAX
00432A04  6A 00                     PUSH 0x0
00432A06  51                        PUSH ECX
00432A07  52                        PUSH EDX
00432A08  6A 01                     PUSH 0x1
00432A0A  53                        PUSH EBX
00432A0B  8B CE                     MOV ECX,ESI
00432A0D  E8 5D EF FC FF            CALL 0x0040196f
00432A12  85 C0                     TEST EAX,EAX
00432A14  7E 7C                     JLE 0x00432a92
00432A16  50                        PUSH EAX
00432A17  6A 01                     PUSH 0x1
00432A19  53                        PUSH EBX
00432A1A  8B CE                     MOV ECX,ESI
00432A1C  E8 5E 07 FD FF            CALL 0x0040317f
00432A21  E9 B3 01 00 00            JMP 0x00432bd9
LAB_00432a26:
00432A26  2D A4 01 00 00            SUB EAX,0x1a4
00432A2B  74 33                     JZ 0x00432a60
00432A2D  83 E8 14                  SUB EAX,0x14
00432A30  74 2E                     JZ 0x00432a60
LAB_00432a32:
00432A32  68 E0 6A 7A 00            PUSH 0x7a6ae0
00432A37  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432A3C  6A 00                     PUSH 0x0
00432A3E  6A 00                     PUSH 0x0
00432A40  68 8C 0C 00 00            PUSH 0xc8c
00432A45  68 04 60 7A 00            PUSH 0x7a6004
00432A4A  E8 81 AA 27 00            CALL 0x006ad4d0
00432A4F  83 C4 18                  ADD ESP,0x18
00432A52  85 C0                     TEST EAX,EAX
00432A54  0F 84 7F 01 00 00         JZ 0x00432bd9
00432A5A  CC                        INT3
LAB_00432a60:
00432A60  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00432A63  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00432A66  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00432A69  50                        PUSH EAX
00432A6A  6A 00                     PUSH 0x0
00432A6C  51                        PUSH ECX
00432A6D  52                        PUSH EDX
00432A6E  6A 01                     PUSH 0x1
00432A70  53                        PUSH EBX
00432A71  8B CE                     MOV ECX,ESI
00432A73  E8 F7 EE FC FF            CALL 0x0040196f
00432A78  85 C0                     TEST EAX,EAX
00432A7A  7E 10                     JLE 0x00432a8c
00432A7C  50                        PUSH EAX
00432A7D  6A 01                     PUSH 0x1
00432A7F  53                        PUSH EBX
00432A80  8B CE                     MOV ECX,ESI
00432A82  E8 F8 06 FD FF            CALL 0x0040317f
00432A87  E9 4D 01 00 00            JMP 0x00432bd9
LAB_00432a8c:
00432A8C  0F 8D 47 01 00 00         JGE 0x00432bd9
LAB_00432a92:
00432A92  6A 01                     PUSH 0x1
00432A94  53                        PUSH EBX
00432A95  8B CE                     MOV ECX,ESI
00432A97  E8 84 2E FD FF            CALL 0x00405920
00432A9C  6A 00                     PUSH 0x0
00432A9E  6A 01                     PUSH 0x1
00432AA0  6A 01                     PUSH 0x1
00432AA2  53                        PUSH EBX
00432AA3  8B CE                     MOV ECX,ESI
00432AA5  E8 3D 08 FD FF            CALL 0x004032e7
LAB_00432aaa:
00432AAA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00432AAD  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00432AB0  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
00432AB3  50                        PUSH EAX
00432AB4  51                        PUSH ECX
00432AB5  52                        PUSH EDX
00432AB6  E9 12 01 00 00            JMP 0x00432bcd
LAB_00432abb:
00432ABB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00432ABE  6A 00                     PUSH 0x0
00432AC0  6A 00                     PUSH 0x0
00432AC2  6A 00                     PUSH 0x0
00432AC4  53                        PUSH EBX
00432AC5  8B CE                     MOV ECX,ESI
00432AC7  C7 80 23 50 7F 00 01 00 00 00  MOV dword ptr [EAX + 0x7f5023],0x1
00432AD1  E8 11 08 FD FF            CALL 0x004032e7
00432AD6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00432AD9  8B 81 D3 4F 7F 00         MOV EAX,dword ptr [ECX + 0x7f4fd3]
00432ADF  3D 9A 01 00 00            CMP EAX,0x19a
00432AE4  7F 75                     JG 0x00432b5b
00432AE6  74 4A                     JZ 0x00432b32
00432AE8  85 C0                     TEST EAX,EAX
00432AEA  74 16                     JZ 0x00432b02
00432AEC  83 F8 5A                  CMP EAX,0x5a
00432AEF  0F 84 99 00 00 00         JZ 0x00432b8e
00432AF5  3D 72 01 00 00            CMP EAX,0x172
00432AFA  0F 84 8E 00 00 00         JZ 0x00432b8e
00432B00  EB 65                     JMP 0x00432b67
LAB_00432b02:
00432B02  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00432B05  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00432B08  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00432B0B  52                        PUSH EDX
00432B0C  6A 00                     PUSH 0x0
00432B0E  50                        PUSH EAX
00432B0F  51                        PUSH ECX
00432B10  6A 01                     PUSH 0x1
00432B12  53                        PUSH EBX
00432B13  8B CE                     MOV ECX,ESI
00432B15  E8 55 EE FC FF            CALL 0x0040196f
00432B1A  85 C0                     TEST EAX,EAX
00432B1C  0F 8E 9F 00 00 00         JLE 0x00432bc1
00432B22  50                        PUSH EAX
00432B23  6A 01                     PUSH 0x1
00432B25  53                        PUSH EBX
00432B26  8B CE                     MOV ECX,ESI
00432B28  E8 52 06 FD FF            CALL 0x0040317f
00432B2D  E9 A7 00 00 00            JMP 0x00432bd9
LAB_00432b32:
00432B32  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00432B35  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00432B38  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00432B3B  52                        PUSH EDX
00432B3C  6A 00                     PUSH 0x0
00432B3E  50                        PUSH EAX
00432B3F  51                        PUSH ECX
00432B40  6A 01                     PUSH 0x1
00432B42  53                        PUSH EBX
00432B43  8B CE                     MOV ECX,ESI
00432B45  E8 25 EE FC FF            CALL 0x0040196f
00432B4A  85 C0                     TEST EAX,EAX
00432B4C  7E 69                     JLE 0x00432bb7
00432B4E  50                        PUSH EAX
00432B4F  6A 01                     PUSH 0x1
00432B51  53                        PUSH EBX
00432B52  8B CE                     MOV ECX,ESI
00432B54  E8 26 06 FD FF            CALL 0x0040317f
00432B59  EB 7E                     JMP 0x00432bd9
LAB_00432b5b:
00432B5B  2D A4 01 00 00            SUB EAX,0x1a4
00432B60  74 2C                     JZ 0x00432b8e
00432B62  83 E8 14                  SUB EAX,0x14
00432B65  74 27                     JZ 0x00432b8e
LAB_00432b67:
00432B67  68 A4 6A 7A 00            PUSH 0x7a6aa4
00432B6C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432B71  6A 00                     PUSH 0x0
00432B73  6A 00                     PUSH 0x0
00432B75  68 B3 0C 00 00            PUSH 0xcb3
00432B7A  68 04 60 7A 00            PUSH 0x7a6004
00432B7F  E8 4C A9 27 00            CALL 0x006ad4d0
00432B84  83 C4 18                  ADD ESP,0x18
00432B87  85 C0                     TEST EAX,EAX
00432B89  74 4E                     JZ 0x00432bd9
00432B8B  CC                        INT3
LAB_00432b8e:
00432B8E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00432B91  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00432B94  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00432B97  52                        PUSH EDX
00432B98  6A 00                     PUSH 0x0
00432B9A  50                        PUSH EAX
00432B9B  51                        PUSH ECX
00432B9C  6A 01                     PUSH 0x1
00432B9E  53                        PUSH EBX
00432B9F  8B CE                     MOV ECX,ESI
00432BA1  E8 C9 ED FC FF            CALL 0x0040196f
00432BA6  85 C0                     TEST EAX,EAX
00432BA8  7C 0D                     JL 0x00432bb7
00432BAA  50                        PUSH EAX
00432BAB  6A 01                     PUSH 0x1
00432BAD  53                        PUSH EBX
00432BAE  8B CE                     MOV ECX,ESI
00432BB0  E8 CA 05 FD FF            CALL 0x0040317f
00432BB5  EB 22                     JMP 0x00432bd9
LAB_00432bb7:
00432BB7  6A 01                     PUSH 0x1
00432BB9  53                        PUSH EBX
00432BBA  8B CE                     MOV ECX,ESI
00432BBC  E8 5F 2D FD FF            CALL 0x00405920
LAB_00432bc1:
00432BC1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00432BC4  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00432BC7  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00432BCA  52                        PUSH EDX
00432BCB  50                        PUSH EAX
00432BCC  51                        PUSH ECX
LAB_00432bcd:
00432BCD  6A 00                     PUSH 0x0
00432BCF  6A 01                     PUSH 0x1
00432BD1  53                        PUSH EBX
00432BD2  8B CE                     MOV ECX,ESI
00432BD4  E8 58 12 FD FF            CALL 0x00403e31
LAB_00432bd9:
00432BD9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00432BDF  68 B9 0C 00 00            PUSH 0xcb9
00432BE4  68 04 60 7A 00            PUSH 0x7a6004
00432BE9  52                        PUSH EDX
00432BEA  68 09 00 FE AF            PUSH 0xaffe0009
00432BEF  E8 4C 32 27 00            CALL 0x006a5e40
00432BF4  33 FF                     XOR EDI,EDI
LAB_00432bf6:
00432BF6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00432BF9  39 78 0C                  CMP dword ptr [EAX + 0xc],EDI
00432BFC  0F 86 DE 02 00 00         JBE 0x00432ee0
00432C02  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
00432C06  75 1B                     JNZ 0x00432c23
00432C08  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00432C0E  68 BD 0C 00 00            PUSH 0xcbd
00432C13  68 04 60 7A 00            PUSH 0x7a6004
00432C18  51                        PUSH ECX
00432C19  68 09 00 FE AF            PUSH 0xaffe0009
00432C1E  E8 1D 32 27 00            CALL 0x006a5e40
LAB_00432c23:
00432C23  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00432C26  8D 55 FC                  LEA EDX,[EBP + -0x4]
00432C29  52                        PUSH EDX
00432C2A  33 D2                     XOR EDX,EDX
00432C2C  E8 3F A0 27 00            CALL 0x006acc70
00432C31  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00432C34  33 FF                     XOR EDI,EDI
00432C36  8D 4D FC                  LEA ECX,[EBP + -0x4]
00432C39  89 78 0C                  MOV dword ptr [EAX + 0xc],EDI
00432C3C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00432C3F  51                        PUSH ECX
00432C40  52                        PUSH EDX
00432C41  E8 7A B5 27 00            CALL 0x006ae1c0
00432C46  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00432C49  8D 45 F8                  LEA EAX,[EBP + -0x8]
00432C4C  50                        PUSH EAX
00432C4D  33 D2                     XOR EDX,EDX
00432C4F  E8 1C A0 27 00            CALL 0x006acc70
00432C54  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00432C57  8D 55 F8                  LEA EDX,[EBP + -0x8]
00432C5A  52                        PUSH EDX
00432C5B  89 79 0C                  MOV dword ptr [ECX + 0xc],EDI
00432C5E  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00432C61  50                        PUSH EAX
00432C62  E8 59 B5 27 00            CALL 0x006ae1c0
00432C67  0F BE C3                  MOVSX EAX,BL
00432C6A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00432C6D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
00432C70  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
00432C73  C1 E7 04                  SHL EDI,0x4
00432C76  03 F8                     ADD EDI,EAX
00432C78  D1 E7                     SHL EDI,0x1
00432C7A  8B 87 23 50 7F 00         MOV EAX,dword ptr [EDI + 0x7f5023]
00432C80  83 E8 00                  SUB EAX,0x0
00432C83  0F 84 13 01 00 00         JZ 0x00432d9c
00432C89  48                        DEC EAX
00432C8A  74 2E                     JZ 0x00432cba
00432C8C  68 54 6A 7A 00            PUSH 0x7a6a54
00432C91  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432C96  6A 00                     PUSH 0x0
00432C98  6A 00                     PUSH 0x0
00432C9A  68 12 0D 00 00            PUSH 0xd12
00432C9F  68 04 60 7A 00            PUSH 0x7a6004
00432CA4  E8 27 A8 27 00            CALL 0x006ad4d0
00432CA9  83 C4 18                  ADD ESP,0x18
00432CAC  85 C0                     TEST EAX,EAX
00432CAE  0F 84 10 02 00 00         JZ 0x00432ec4
00432CB4  CC                        INT3
LAB_00432cba:
00432CBA  6A 00                     PUSH 0x0
00432CBC  6A 00                     PUSH 0x0
00432CBE  6A 01                     PUSH 0x1
00432CC0  53                        PUSH EBX
00432CC1  8B CE                     MOV ECX,ESI
00432CC3  C7 87 23 50 7F 00 00 00 00 00  MOV dword ptr [EDI + 0x7f5023],0x0
00432CCD  E8 15 06 FD FF            CALL 0x004032e7
00432CD2  8B 87 83 4F 7F 00         MOV EAX,dword ptr [EDI + 0x7f4f83]
00432CD8  85 C0                     TEST EAX,EAX
00432CDA  0F 84 9F 01 00 00         JZ 0x00432e7f
00432CE0  83 F8 3C                  CMP EAX,0x3c
00432CE3  74 76                     JZ 0x00432d5b
00432CE5  3D AE 01 00 00            CMP EAX,0x1ae
00432CEA  74 2E                     JZ 0x00432d1a
00432CEC  68 10 6A 7A 00            PUSH 0x7a6a10
00432CF1  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432CF6  6A 00                     PUSH 0x0
00432CF8  6A 00                     PUSH 0x0
00432CFA  68 0E 0D 00 00            PUSH 0xd0e
00432CFF  68 04 60 7A 00            PUSH 0x7a6004
00432D04  E8 C7 A7 27 00            CALL 0x006ad4d0
00432D09  83 C4 18                  ADD ESP,0x18
00432D0C  85 C0                     TEST EAX,EAX
00432D0E  0F 84 B0 01 00 00         JZ 0x00432ec4
00432D14  CC                        INT3
LAB_00432d1a:
00432D1A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00432D1D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00432D20  6A 00                     PUSH 0x0
00432D22  50                        PUSH EAX
00432D23  51                        PUSH ECX
00432D24  6A 3C                     PUSH 0x3c
00432D26  6A 00                     PUSH 0x0
00432D28  53                        PUSH EBX
00432D29  8B CE                     MOV ECX,ESI
00432D2B  E8 3F EC FC FF            CALL 0x0040196f
00432D30  85 C0                     TEST EAX,EAX
00432D32  7E 10                     JLE 0x00432d44
00432D34  50                        PUSH EAX
00432D35  6A 00                     PUSH 0x0
00432D37  53                        PUSH EBX
00432D38  8B CE                     MOV ECX,ESI
00432D3A  E8 40 04 FD FF            CALL 0x0040317f
00432D3F  E9 80 01 00 00            JMP 0x00432ec4
LAB_00432d44:
00432D44  6A 00                     PUSH 0x0
00432D46  53                        PUSH EBX
00432D47  8B CE                     MOV ECX,ESI
00432D49  E8 D2 2B FD FF            CALL 0x00405920
00432D4E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00432D51  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00432D54  52                        PUSH EDX
00432D55  50                        PUSH EAX
00432D56  E9 53 01 00 00            JMP 0x00432eae
LAB_00432d5b:
00432D5B  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00432D5E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00432D61  6A 00                     PUSH 0x0
00432D63  51                        PUSH ECX
00432D64  52                        PUSH EDX
00432D65  6A 3C                     PUSH 0x3c
00432D67  6A 00                     PUSH 0x0
00432D69  53                        PUSH EBX
00432D6A  8B CE                     MOV ECX,ESI
00432D6C  E8 FE EB FC FF            CALL 0x0040196f
00432D71  85 C0                     TEST EAX,EAX
00432D73  7C 10                     JL 0x00432d85
00432D75  50                        PUSH EAX
00432D76  6A 00                     PUSH 0x0
00432D78  53                        PUSH EBX
00432D79  8B CE                     MOV ECX,ESI
00432D7B  E8 FF 03 FD FF            CALL 0x0040317f
00432D80  E9 3F 01 00 00            JMP 0x00432ec4
LAB_00432d85:
00432D85  6A 00                     PUSH 0x0
00432D87  53                        PUSH EBX
00432D88  8B CE                     MOV ECX,ESI
00432D8A  E8 91 2B FD FF            CALL 0x00405920
00432D8F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00432D92  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00432D95  50                        PUSH EAX
00432D96  51                        PUSH ECX
00432D97  E9 12 01 00 00            JMP 0x00432eae
LAB_00432d9c:
00432D9C  8B 87 83 4F 7F 00         MOV EAX,dword ptr [EDI + 0x7f4f83]
00432DA2  85 C0                     TEST EAX,EAX
00432DA4  0F 84 D5 00 00 00         JZ 0x00432e7f
00432DAA  83 F8 3C                  CMP EAX,0x3c
00432DAD  0F 84 81 00 00 00         JZ 0x00432e34
00432DB3  3D AE 01 00 00            CMP EAX,0x1ae
00432DB8  74 2E                     JZ 0x00432de8
00432DBA  68 CC 69 7A 00            PUSH 0x7a69cc
00432DBF  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432DC4  6A 00                     PUSH 0x0
00432DC6  6A 00                     PUSH 0x0
00432DC8  68 E7 0C 00 00            PUSH 0xce7
00432DCD  68 04 60 7A 00            PUSH 0x7a6004
00432DD2  E8 F9 A6 27 00            CALL 0x006ad4d0
00432DD7  83 C4 18                  ADD ESP,0x18
00432DDA  85 C0                     TEST EAX,EAX
00432DDC  0F 84 E2 00 00 00         JZ 0x00432ec4
00432DE2  CC                        INT3
LAB_00432de8:
00432DE8  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00432DEB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00432DEE  6A 00                     PUSH 0x0
00432DF0  50                        PUSH EAX
00432DF1  51                        PUSH ECX
00432DF2  6A 3C                     PUSH 0x3c
00432DF4  6A 00                     PUSH 0x0
00432DF6  53                        PUSH EBX
00432DF7  8B CE                     MOV ECX,ESI
00432DF9  E8 71 EB FC FF            CALL 0x0040196f
00432DFE  85 C0                     TEST EAX,EAX
00432E00  7E 10                     JLE 0x00432e12
00432E02  50                        PUSH EAX
00432E03  6A 00                     PUSH 0x0
00432E05  53                        PUSH EBX
00432E06  8B CE                     MOV ECX,ESI
00432E08  E8 72 03 FD FF            CALL 0x0040317f
00432E0D  E9 B2 00 00 00            JMP 0x00432ec4
LAB_00432e12:
00432E12  6A 00                     PUSH 0x0
00432E14  53                        PUSH EBX
00432E15  8B CE                     MOV ECX,ESI
00432E17  E8 04 2B FD FF            CALL 0x00405920
00432E1C  6A 00                     PUSH 0x0
00432E1E  6A 01                     PUSH 0x1
00432E20  6A 00                     PUSH 0x0
00432E22  53                        PUSH EBX
00432E23  8B CE                     MOV ECX,ESI
00432E25  E8 BD 04 FD FF            CALL 0x004032e7
00432E2A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00432E2D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00432E30  52                        PUSH EDX
00432E31  50                        PUSH EAX
00432E32  EB 7A                     JMP 0x00432eae
LAB_00432e34:
00432E34  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00432E37  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00432E3A  6A 00                     PUSH 0x0
00432E3C  51                        PUSH ECX
00432E3D  52                        PUSH EDX
00432E3E  6A 3C                     PUSH 0x3c
00432E40  6A 00                     PUSH 0x0
00432E42  53                        PUSH EBX
00432E43  8B CE                     MOV ECX,ESI
00432E45  E8 25 EB FC FF            CALL 0x0040196f
00432E4A  85 C0                     TEST EAX,EAX
00432E4C  7E 0D                     JLE 0x00432e5b
00432E4E  50                        PUSH EAX
00432E4F  6A 00                     PUSH 0x0
00432E51  53                        PUSH EBX
00432E52  8B CE                     MOV ECX,ESI
00432E54  E8 26 03 FD FF            CALL 0x0040317f
00432E59  EB 69                     JMP 0x00432ec4
LAB_00432e5b:
00432E5B  7D 67                     JGE 0x00432ec4
00432E5D  6A 00                     PUSH 0x0
00432E5F  53                        PUSH EBX
00432E60  8B CE                     MOV ECX,ESI
00432E62  E8 B9 2A FD FF            CALL 0x00405920
00432E67  6A 00                     PUSH 0x0
00432E69  6A 01                     PUSH 0x1
00432E6B  6A 00                     PUSH 0x0
00432E6D  53                        PUSH EBX
00432E6E  8B CE                     MOV ECX,ESI
00432E70  E8 72 04 FD FF            CALL 0x004032e7
00432E75  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00432E78  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00432E7B  50                        PUSH EAX
00432E7C  51                        PUSH ECX
00432E7D  EB 2F                     JMP 0x00432eae
LAB_00432e7f:
00432E7F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00432E82  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00432E85  6A 00                     PUSH 0x0
00432E87  52                        PUSH EDX
00432E88  50                        PUSH EAX
00432E89  6A 3C                     PUSH 0x3c
00432E8B  6A 00                     PUSH 0x0
00432E8D  53                        PUSH EBX
00432E8E  8B CE                     MOV ECX,ESI
00432E90  E8 DA EA FC FF            CALL 0x0040196f
00432E95  85 C0                     TEST EAX,EAX
00432E97  7E 0D                     JLE 0x00432ea6
00432E99  50                        PUSH EAX
00432E9A  6A 00                     PUSH 0x0
00432E9C  53                        PUSH EBX
00432E9D  8B CE                     MOV ECX,ESI
00432E9F  E8 DB 02 FD FF            CALL 0x0040317f
00432EA4  EB 14                     JMP 0x00432eba
LAB_00432ea6:
00432EA6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00432EA9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00432EAC  51                        PUSH ECX
00432EAD  52                        PUSH EDX
LAB_00432eae:
00432EAE  6A 00                     PUSH 0x0
00432EB0  6A 00                     PUSH 0x0
00432EB2  53                        PUSH EBX
00432EB3  8B CE                     MOV ECX,ESI
00432EB5  E8 DE 11 FD FF            CALL 0x00404098
LAB_00432eba:
00432EBA  C7 87 83 4F 7F 00 3C 00 00 00  MOV dword ptr [EDI + 0x7f4f83],0x3c
LAB_00432ec4:
00432EC4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00432EC9  68 14 0D 00 00            PUSH 0xd14
00432ECE  68 04 60 7A 00            PUSH 0x7a6004
00432ED3  50                        PUSH EAX
00432ED4  68 09 00 FE AF            PUSH 0xaffe0009
00432ED9  E8 62 2F 27 00            CALL 0x006a5e40
00432EDE  33 FF                     XOR EDI,EDI
LAB_00432ee0:
00432EE0  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00432EE3  39 79 0C                  CMP dword ptr [ECX + 0xc],EDI
00432EE6  0F 86 99 01 00 00         JBE 0x00433085
00432EEC  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
00432EF0  75 1B                     JNZ 0x00432f0d
00432EF2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00432EF8  68 18 0D 00 00            PUSH 0xd18
00432EFD  68 04 60 7A 00            PUSH 0x7a6004
00432F02  52                        PUSH EDX
00432F03  68 09 00 FE AF            PUSH 0xaffe0009
00432F08  E8 33 2F 27 00            CALL 0x006a5e40
LAB_00432f0d:
00432F0D  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00432F10  8D 45 FC                  LEA EAX,[EBP + -0x4]
00432F13  50                        PUSH EAX
00432F14  33 D2                     XOR EDX,EDX
00432F16  E8 55 9D 27 00            CALL 0x006acc70
00432F1B  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00432F1E  8D 55 FC                  LEA EDX,[EBP + -0x4]
00432F21  52                        PUSH EDX
00432F22  C7 41 0C 00 00 00 00      MOV dword ptr [ECX + 0xc],0x0
00432F29  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00432F2C  50                        PUSH EAX
00432F2D  E8 8E B2 27 00            CALL 0x006ae1c0
00432F32  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00432F35  6A 03                     PUSH 0x3
00432F37  51                        PUSH ECX
00432F38  6A 00                     PUSH 0x0
00432F3A  8B CE                     MOV ECX,ESI
00432F3C  E8 79 F9 FC FF            CALL 0x004028ba
00432F41  8B F8                     MOV EDI,EAX
00432F43  85 FF                     TEST EDI,EDI
00432F45  75 1B                     JNZ 0x00432f62
00432F47  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00432F4D  68 1B 0D 00 00            PUSH 0xd1b
00432F52  68 04 60 7A 00            PUSH 0x7a6004
00432F57  52                        PUSH EDX
00432F58  68 09 00 FE AF            PUSH 0xaffe0009
00432F5D  E8 DE 2E 27 00            CALL 0x006a5e40
LAB_00432f62:
00432F62  0F BE CB                  MOVSX ECX,BL
00432F65  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00432F68  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
00432F6B  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
00432F6E  C1 E0 04                  SHL EAX,0x4
00432F71  03 C1                     ADD EAX,ECX
00432F73  D1 E0                     SHL EAX,0x1
00432F75  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00432F78  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
00432F7E  83 E9 00                  SUB ECX,0x0
00432F81  0F 84 26 02 00 00         JZ 0x004331ad
00432F87  49                        DEC ECX
00432F88  74 2E                     JZ 0x00432fb8
00432F8A  68 78 69 7A 00            PUSH 0x7a6978
00432F8F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432F94  6A 00                     PUSH 0x0
00432F96  6A 00                     PUSH 0x0
00432F98  68 6A 0D 00 00            PUSH 0xd6a
00432F9D  68 04 60 7A 00            PUSH 0x7a6004
00432FA2  E8 29 A5 27 00            CALL 0x006ad4d0
00432FA7  83 C4 18                  ADD ESP,0x18
00432FAA  85 C0                     TEST EAX,EAX
00432FAC  0F 84 B6 00 00 00         JZ 0x00433068
00432FB2  CC                        INT3
LAB_00432fb8:
00432FB8  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00432FBB  6A 00                     PUSH 0x0
00432FBD  6A 00                     PUSH 0x0
00432FBF  6A 01                     PUSH 0x1
00432FC1  53                        PUSH EBX
00432FC2  8B CE                     MOV ECX,ESI
00432FC4  C7 80 23 50 7F 00 00 00 00 00  MOV dword ptr [EAX + 0x7f5023],0x0
00432FCE  E8 14 03 FD FF            CALL 0x004032e7
00432FD3  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00432FD6  8B 81 83 4F 7F 00         MOV EAX,dword ptr [ECX + 0x7f4f83]
00432FDC  85 C0                     TEST EAX,EAX
00432FDE  0F 84 99 01 00 00         JZ 0x0043317d
00432FE4  83 F8 3C                  CMP EAX,0x3c
00432FE7  0F 84 60 01 00 00         JZ 0x0043314d
00432FED  3D AE 01 00 00            CMP EAX,0x1ae
00432FF2  74 27                     JZ 0x0043301b
00432FF4  68 30 69 7A 00            PUSH 0x7a6930
00432FF9  68 CC 4C 7A 00            PUSH 0x7a4ccc
00432FFE  6A 00                     PUSH 0x0
00433000  6A 00                     PUSH 0x0
00433002  68 66 0D 00 00            PUSH 0xd66
00433007  68 04 60 7A 00            PUSH 0x7a6004
0043300C  E8 BF A4 27 00            CALL 0x006ad4d0
00433011  83 C4 18                  ADD ESP,0x18
00433014  85 C0                     TEST EAX,EAX
00433016  74 50                     JZ 0x00433068
00433018  CC                        INT3
LAB_0043301b:
0043301B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043301E  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00433021  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00433024  52                        PUSH EDX
00433025  6A 00                     PUSH 0x0
00433027  50                        PUSH EAX
00433028  51                        PUSH ECX
00433029  6A 00                     PUSH 0x0
0043302B  53                        PUSH EBX
0043302C  8B CE                     MOV ECX,ESI
0043302E  E8 3C E9 FC FF            CALL 0x0040196f
00433033  85 C0                     TEST EAX,EAX
00433035  7E 0D                     JLE 0x00433044
00433037  50                        PUSH EAX
00433038  6A 00                     PUSH 0x0
0043303A  53                        PUSH EBX
0043303B  8B CE                     MOV ECX,ESI
0043303D  E8 3D 01 FD FF            CALL 0x0040317f
00433042  EB 24                     JMP 0x00433068
LAB_00433044:
00433044  7D 22                     JGE 0x00433068
LAB_00433046:
00433046  6A 00                     PUSH 0x0
00433048  53                        PUSH EBX
00433049  8B CE                     MOV ECX,ESI
0043304B  E8 D0 28 FD FF            CALL 0x00405920
LAB_00433050:
00433050  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00433053  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00433056  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00433059  52                        PUSH EDX
0043305A  50                        PUSH EAX
0043305B  51                        PUSH ECX
0043305C  6A 00                     PUSH 0x0
0043305E  6A 00                     PUSH 0x0
00433060  53                        PUSH EBX
00433061  8B CE                     MOV ECX,ESI
00433063  E8 C9 0D FD FF            CALL 0x00403e31
LAB_00433068:
00433068  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0043306E  68 6C 0D 00 00            PUSH 0xd6c
00433073  68 04 60 7A 00            PUSH 0x7a6004
00433078  52                        PUSH EDX
00433079  68 09 00 FE AF            PUSH 0xaffe0009
0043307E  E8 BD 2D 27 00            CALL 0x006a5e40
00433083  33 FF                     XOR EDI,EDI
LAB_00433085:
00433085  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00433088  39 78 0C                  CMP dword ptr [EAX + 0xc],EDI
0043308B  0F 86 64 04 00 00         JBE 0x004334f5
00433091  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
00433095  75 1B                     JNZ 0x004330b2
00433097  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0043309D  68 70 0D 00 00            PUSH 0xd70
004330A2  68 04 60 7A 00            PUSH 0x7a6004
004330A7  51                        PUSH ECX
004330A8  68 09 00 FE AF            PUSH 0xaffe0009
004330AD  E8 8E 2D 27 00            CALL 0x006a5e40
LAB_004330b2:
004330B2  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004330B5  8D 55 FC                  LEA EDX,[EBP + -0x4]
004330B8  52                        PUSH EDX
004330B9  33 D2                     XOR EDX,EDX
004330BB  E8 B0 9B 27 00            CALL 0x006acc70
004330C0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004330C3  33 FF                     XOR EDI,EDI
004330C5  8D 4D FC                  LEA ECX,[EBP + -0x4]
004330C8  89 78 0C                  MOV dword ptr [EAX + 0xc],EDI
004330CB  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004330CE  51                        PUSH ECX
004330CF  52                        PUSH EDX
004330D0  E8 EB B0 27 00            CALL 0x006ae1c0
004330D5  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
004330D8  8D 45 F8                  LEA EAX,[EBP + -0x8]
004330DB  50                        PUSH EAX
004330DC  33 D2                     XOR EDX,EDX
004330DE  E8 8D 9B 27 00            CALL 0x006acc70
004330E3  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
004330E6  8D 55 F8                  LEA EDX,[EBP + -0x8]
004330E9  52                        PUSH EDX
004330EA  89 79 0C                  MOV dword ptr [ECX + 0xc],EDI
004330ED  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004330F0  50                        PUSH EAX
004330F1  E8 CA B0 27 00            CALL 0x006ae1c0
004330F6  0F BE C3                  MOVSX EAX,BL
004330F9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004330FC  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004330FF  8D 3C 50                  LEA EDI,[EAX + EDX*0x2]
00433102  C1 E7 04                  SHL EDI,0x4
00433105  03 F8                     ADD EDI,EAX
00433107  D1 E7                     SHL EDI,0x1
00433109  8B 87 23 50 7F 00         MOV EAX,dword ptr [EDI + 0x7f5023]
0043310F  83 E8 00                  SUB EAX,0x0
00433112  0F 84 95 02 00 00         JZ 0x004333ad
00433118  48                        DEC EAX
00433119  0F 84 85 01 00 00         JZ 0x004332a4
0043311F  68 DC 68 7A 00            PUSH 0x7a68dc
00433124  68 CC 4C 7A 00            PUSH 0x7a4ccc
00433129  6A 00                     PUSH 0x0
0043312B  6A 00                     PUSH 0x0
0043312D  68 CB 0D 00 00            PUSH 0xdcb
00433132  68 04 60 7A 00            PUSH 0x7a6004
00433137  E8 94 A3 27 00            CALL 0x006ad4d0
0043313C  83 C4 18                  ADD ESP,0x18
0043313F  85 C0                     TEST EAX,EAX
00433141  0F 84 AE 03 00 00         JZ 0x004334f5
00433147  CC                        INT3
LAB_0043314d:
0043314D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00433150  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00433153  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00433156  52                        PUSH EDX
00433157  6A 00                     PUSH 0x0
00433159  50                        PUSH EAX
0043315A  51                        PUSH ECX
0043315B  6A 00                     PUSH 0x0
0043315D  53                        PUSH EBX
0043315E  8B CE                     MOV ECX,ESI
00433160  E8 0A E8 FC FF            CALL 0x0040196f
00433165  85 C0                     TEST EAX,EAX
00433167  0F 8E D9 FE FF FF         JLE 0x00433046
0043316D  50                        PUSH EAX
0043316E  6A 00                     PUSH 0x0
00433170  53                        PUSH EBX
00433171  8B CE                     MOV ECX,ESI
00433173  E8 07 00 FD FF            CALL 0x0040317f
00433178  E9 EB FE FF FF            JMP 0x00433068
LAB_0043317d:
0043317D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00433180  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
00433183  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00433186  52                        PUSH EDX
00433187  6A 00                     PUSH 0x0
00433189  50                        PUSH EAX
0043318A  51                        PUSH ECX
0043318B  6A 00                     PUSH 0x0
0043318D  53                        PUSH EBX
0043318E  8B CE                     MOV ECX,ESI
00433190  E8 DA E7 FC FF            CALL 0x0040196f
00433195  85 C0                     TEST EAX,EAX
00433197  0F 8E B3 FE FF FF         JLE 0x00433050
0043319D  50                        PUSH EAX
0043319E  6A 00                     PUSH 0x0
004331A0  53                        PUSH EBX
004331A1  8B CE                     MOV ECX,ESI
004331A3  E8 D7 FF FC FF            CALL 0x0040317f
004331A8  E9 BB FE FF FF            JMP 0x00433068
LAB_004331ad:
004331AD  8B 80 83 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4f83]
004331B3  85 C0                     TEST EAX,EAX
004331B5  0F 84 B9 00 00 00         JZ 0x00433274
004331BB  83 F8 3C                  CMP EAX,0x3c
004331BE  0F 84 84 00 00 00         JZ 0x00433248
004331C4  3D AE 01 00 00            CMP EAX,0x1ae
004331C9  74 2E                     JZ 0x004331f9
004331CB  68 94 68 7A 00            PUSH 0x7a6894
004331D0  68 CC 4C 7A 00            PUSH 0x7a4ccc
004331D5  6A 00                     PUSH 0x0
004331D7  6A 00                     PUSH 0x0
004331D9  68 40 0D 00 00            PUSH 0xd40
004331DE  68 04 60 7A 00            PUSH 0x7a6004
004331E3  E8 E8 A2 27 00            CALL 0x006ad4d0
004331E8  83 C4 18                  ADD ESP,0x18
004331EB  85 C0                     TEST EAX,EAX
004331ED  0F 84 75 FE FF FF         JZ 0x00433068
004331F3  CC                        INT3
LAB_004331f9:
004331F9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004331FC  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004331FF  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00433202  52                        PUSH EDX
00433203  6A 00                     PUSH 0x0
00433205  50                        PUSH EAX
00433206  51                        PUSH ECX
00433207  6A 00                     PUSH 0x0
00433209  53                        PUSH EBX
0043320A  8B CE                     MOV ECX,ESI
0043320C  E8 5E E7 FC FF            CALL 0x0040196f
00433211  85 C0                     TEST EAX,EAX
00433213  7E 10                     JLE 0x00433225
00433215  50                        PUSH EAX
00433216  6A 00                     PUSH 0x0
00433218  53                        PUSH EBX
00433219  8B CE                     MOV ECX,ESI
0043321B  E8 5F FF FC FF            CALL 0x0040317f
00433220  E9 43 FE FF FF            JMP 0x00433068
LAB_00433225:
00433225  0F 8D 3D FE FF FF         JGE 0x00433068
LAB_0043322b:
0043322B  6A 00                     PUSH 0x0
0043322D  53                        PUSH EBX
0043322E  8B CE                     MOV ECX,ESI
00433230  E8 EB 26 FD FF            CALL 0x00405920
00433235  6A 00                     PUSH 0x0
00433237  6A 01                     PUSH 0x1
00433239  6A 00                     PUSH 0x0
0043323B  53                        PUSH EBX
0043323C  8B CE                     MOV ECX,ESI
0043323E  E8 A4 00 FD FF            CALL 0x004032e7
00433243  E9 08 FE FF FF            JMP 0x00433050
LAB_00433248:
00433248  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043324B  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0043324E  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
00433251  52                        PUSH EDX
00433252  6A 00                     PUSH 0x0
00433254  50                        PUSH EAX
00433255  51                        PUSH ECX
00433256  6A 00                     PUSH 0x0
00433258  53                        PUSH EBX
00433259  8B CE                     MOV ECX,ESI
0043325B  E8 0F E7 FC FF            CALL 0x0040196f
00433260  85 C0                     TEST EAX,EAX
00433262  7E C7                     JLE 0x0043322b
00433264  50                        PUSH EAX
00433265  6A 00                     PUSH 0x0
00433267  53                        PUSH EBX
00433268  8B CE                     MOV ECX,ESI
0043326A  E8 10 FF FC FF            CALL 0x0040317f
0043326F  E9 F4 FD FF FF            JMP 0x00433068
LAB_00433274:
00433274  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00433277  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0043327A  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
0043327D  52                        PUSH EDX
0043327E  6A 00                     PUSH 0x0
00433280  50                        PUSH EAX
00433281  51                        PUSH ECX
00433282  6A 00                     PUSH 0x0
00433284  53                        PUSH EBX
00433285  8B CE                     MOV ECX,ESI
00433287  E8 E3 E6 FC FF            CALL 0x0040196f
0043328C  85 C0                     TEST EAX,EAX
0043328E  0F 8E BC FD FF FF         JLE 0x00433050
00433294  50                        PUSH EAX
00433295  6A 00                     PUSH 0x0
00433297  53                        PUSH EBX
00433298  8B CE                     MOV ECX,ESI
0043329A  E8 E0 FE FC FF            CALL 0x0040317f
0043329F  E9 C4 FD FF FF            JMP 0x00433068
LAB_004332a4:
004332A4  8B 87 D3 4F 7F 00         MOV EAX,dword ptr [EDI + 0x7f4fd3]
004332AA  3D 9A 01 00 00            CMP EAX,0x19a
004332AF  7F 78                     JG 0x00433329
004332B1  74 1E                     JZ 0x004332d1
004332B3  85 C0                     TEST EAX,EAX
004332B5  0F 84 3A 01 00 00         JZ 0x004333f5
004332BB  83 F8 5A                  CMP EAX,0x5a
004332BE  0F 84 9F 00 00 00         JZ 0x00433363
004332C4  3D 72 01 00 00            CMP EAX,0x172
004332C9  0F 84 94 00 00 00         JZ 0x00433363
004332CF  EB 64                     JMP 0x00433335
LAB_004332d1:
004332D1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
004332D4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004332D7  6A 00                     PUSH 0x0
004332D9  51                        PUSH ECX
004332DA  52                        PUSH EDX
004332DB  68 9A 01 00 00            PUSH 0x19a
004332E0  6A 01                     PUSH 0x1
004332E2  53                        PUSH EBX
004332E3  8B CE                     MOV ECX,ESI
004332E5  E8 85 E6 FC FF            CALL 0x0040196f
004332EA  85 C0                     TEST EAX,EAX
004332EC  7E 10                     JLE 0x004332fe
004332EE  50                        PUSH EAX
004332EF  6A 01                     PUSH 0x1
004332F1  53                        PUSH EBX
004332F2  8B CE                     MOV ECX,ESI
004332F4  E8 86 FE FC FF            CALL 0x0040317f
004332F9  E9 F7 01 00 00            JMP 0x004334f5
LAB_004332fe:
004332FE  0F 8D F1 01 00 00         JGE 0x004334f5
00433304  6A 01                     PUSH 0x1
00433306  53                        PUSH EBX
00433307  8B CE                     MOV ECX,ESI
00433309  E8 12 26 FD FF            CALL 0x00405920
0043330E  6A 00                     PUSH 0x0
00433310  6A 01                     PUSH 0x1
00433312  6A 01                     PUSH 0x1
00433314  53                        PUSH EBX
00433315  8B CE                     MOV ECX,ESI
00433317  E8 CB FF FC FF            CALL 0x004032e7
0043331C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043331F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00433322  50                        PUSH EAX
00433323  51                        PUSH ECX
00433324  E9 B6 01 00 00            JMP 0x004334df
LAB_00433329:
00433329  2D A4 01 00 00            SUB EAX,0x1a4
0043332E  74 33                     JZ 0x00433363
00433330  83 E8 14                  SUB EAX,0x14
00433333  74 2E                     JZ 0x00433363
LAB_00433335:
00433335  68 4C 68 7A 00            PUSH 0x7a684c
0043333A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043333F  6A 00                     PUSH 0x0
00433341  6A 00                     PUSH 0x0
00433343  68 9D 0D 00 00            PUSH 0xd9d
00433348  68 04 60 7A 00            PUSH 0x7a6004
0043334D  E8 7E A1 27 00            CALL 0x006ad4d0
00433352  83 C4 18                  ADD ESP,0x18
00433355  85 C0                     TEST EAX,EAX
00433357  0F 84 98 01 00 00         JZ 0x004334f5
0043335D  CC                        INT3
LAB_00433363:
00433363  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00433366  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00433369  6A 00                     PUSH 0x0
0043336B  52                        PUSH EDX
0043336C  50                        PUSH EAX
0043336D  68 9A 01 00 00            PUSH 0x19a
00433372  6A 01                     PUSH 0x1
00433374  53                        PUSH EBX
00433375  8B CE                     MOV ECX,ESI
00433377  E8 F3 E5 FC FF            CALL 0x0040196f
0043337C  85 C0                     TEST EAX,EAX
0043337E  7E 10                     JLE 0x00433390
00433380  50                        PUSH EAX
00433381  6A 01                     PUSH 0x1
00433383  53                        PUSH EBX
00433384  8B CE                     MOV ECX,ESI
00433386  E8 F4 FD FC FF            CALL 0x0040317f
0043338B  E9 65 01 00 00            JMP 0x004334f5
LAB_00433390:
00433390  6A 01                     PUSH 0x1
00433392  53                        PUSH EBX
00433393  8B CE                     MOV ECX,ESI
00433395  E8 86 25 FD FF            CALL 0x00405920
0043339A  6A 00                     PUSH 0x0
0043339C  6A 01                     PUSH 0x1
0043339E  6A 01                     PUSH 0x1
004333A0  53                        PUSH EBX
004333A1  8B CE                     MOV ECX,ESI
004333A3  E8 3F FF FC FF            CALL 0x004032e7
004333A8  E9 2A 01 00 00            JMP 0x004334d7
LAB_004333ad:
004333AD  6A 00                     PUSH 0x0
004333AF  6A 00                     PUSH 0x0
004333B1  6A 00                     PUSH 0x0
004333B3  53                        PUSH EBX
004333B4  8B CE                     MOV ECX,ESI
004333B6  C7 87 23 50 7F 00 01 00 00 00  MOV dword ptr [EDI + 0x7f5023],0x1
004333C0  E8 22 FF FC FF            CALL 0x004032e7
004333C5  8B 87 D3 4F 7F 00         MOV EAX,dword ptr [EDI + 0x7f4fd3]
004333CB  3D 9A 01 00 00            CMP EAX,0x19a
004333D0  0F 8F 9A 00 00 00         JG 0x00433470
004333D6  74 57                     JZ 0x0043342f
004333D8  85 C0                     TEST EAX,EAX
004333DA  74 19                     JZ 0x004333f5
004333DC  83 F8 5A                  CMP EAX,0x5a
004333DF  0F 84 BE 00 00 00         JZ 0x004334a3
004333E5  3D 72 01 00 00            CMP EAX,0x172
004333EA  0F 84 B3 00 00 00         JZ 0x004334a3
004333F0  E9 87 00 00 00            JMP 0x0043347c
LAB_004333f5:
004333F5  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004333F8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004333FB  6A 00                     PUSH 0x0
004333FD  50                        PUSH EAX
004333FE  51                        PUSH ECX
004333FF  68 9A 01 00 00            PUSH 0x19a
00433404  6A 01                     PUSH 0x1
00433406  53                        PUSH EBX
00433407  8B CE                     MOV ECX,ESI
00433409  E8 61 E5 FC FF            CALL 0x0040196f
0043340E  85 C0                     TEST EAX,EAX
00433410  7E 10                     JLE 0x00433422
00433412  50                        PUSH EAX
00433413  6A 01                     PUSH 0x1
00433415  53                        PUSH EBX
00433416  8B CE                     MOV ECX,ESI
00433418  E8 62 FD FC FF            CALL 0x0040317f
0043341D  E9 C9 00 00 00            JMP 0x004334eb
LAB_00433422:
00433422  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00433425  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00433428  52                        PUSH EDX
00433429  50                        PUSH EAX
0043342A  E9 B0 00 00 00            JMP 0x004334df
LAB_0043342f:
0043342F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00433432  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00433435  6A 00                     PUSH 0x0
00433437  51                        PUSH ECX
00433438  52                        PUSH EDX
00433439  68 9A 01 00 00            PUSH 0x19a
0043343E  6A 01                     PUSH 0x1
00433440  53                        PUSH EBX
00433441  8B CE                     MOV ECX,ESI
00433443  E8 27 E5 FC FF            CALL 0x0040196f
00433448  85 C0                     TEST EAX,EAX
0043344A  7C 10                     JL 0x0043345c
0043344C  50                        PUSH EAX
0043344D  6A 01                     PUSH 0x1
0043344F  53                        PUSH EBX
00433450  8B CE                     MOV ECX,ESI
00433452  E8 28 FD FC FF            CALL 0x0040317f
00433457  E9 99 00 00 00            JMP 0x004334f5
LAB_0043345c:
0043345C  6A 01                     PUSH 0x1
0043345E  53                        PUSH EBX
0043345F  8B CE                     MOV ECX,ESI
00433461  E8 BA 24 FD FF            CALL 0x00405920
00433466  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00433469  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0043346C  50                        PUSH EAX
0043346D  51                        PUSH ECX
0043346E  EB 6F                     JMP 0x004334df
LAB_00433470:
00433470  2D A4 01 00 00            SUB EAX,0x1a4
00433475  74 2C                     JZ 0x004334a3
00433477  83 E8 14                  SUB EAX,0x14
0043347A  74 27                     JZ 0x004334a3
LAB_0043347c:
0043347C  68 04 68 7A 00            PUSH 0x7a6804
00433481  68 CC 4C 7A 00            PUSH 0x7a4ccc
00433486  6A 00                     PUSH 0x0
00433488  6A 00                     PUSH 0x0
0043348A  68 C7 0D 00 00            PUSH 0xdc7
0043348F  68 04 60 7A 00            PUSH 0x7a6004
00433494  E8 37 A0 27 00            CALL 0x006ad4d0
00433499  83 C4 18                  ADD ESP,0x18
0043349C  85 C0                     TEST EAX,EAX
0043349E  74 55                     JZ 0x004334f5
004334A0  CC                        INT3
LAB_004334a3:
004334A3  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004334A6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004334A9  6A 00                     PUSH 0x0
004334AB  52                        PUSH EDX
004334AC  50                        PUSH EAX
004334AD  68 9A 01 00 00            PUSH 0x19a
004334B2  6A 01                     PUSH 0x1
004334B4  53                        PUSH EBX
004334B5  8B CE                     MOV ECX,ESI
004334B7  E8 B3 E4 FC FF            CALL 0x0040196f
004334BC  85 C0                     TEST EAX,EAX
004334BE  7E 0D                     JLE 0x004334cd
004334C0  50                        PUSH EAX
004334C1  6A 01                     PUSH 0x1
004334C3  53                        PUSH EBX
004334C4  8B CE                     MOV ECX,ESI
004334C6  E8 B4 FC FC FF            CALL 0x0040317f
004334CB  EB 28                     JMP 0x004334f5
LAB_004334cd:
004334CD  6A 01                     PUSH 0x1
004334CF  53                        PUSH EBX
004334D0  8B CE                     MOV ECX,ESI
004334D2  E8 49 24 FD FF            CALL 0x00405920
LAB_004334d7:
004334D7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004334DA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004334DD  51                        PUSH ECX
004334DE  52                        PUSH EDX
LAB_004334df:
004334DF  6A 00                     PUSH 0x0
004334E1  6A 01                     PUSH 0x1
004334E3  53                        PUSH EBX
004334E4  8B CE                     MOV ECX,ESI
004334E6  E8 AD 0B FD FF            CALL 0x00404098
LAB_004334eb:
004334EB  C7 87 D3 4F 7F 00 9A 01 00 00  MOV dword ptr [EDI + 0x7f4fd3],0x19a
LAB_004334f5:
004334F5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004334FA  68 CE 0D 00 00            PUSH 0xdce
004334FF  68 04 60 7A 00            PUSH 0x7a6004
00433504  50                        PUSH EAX
00433505  68 09 00 FE AF            PUSH 0xaffe0009
0043350A  E8 31 29 27 00            CALL 0x006a5e40
0043350F  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
00433515  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043351B  5F                        POP EDI
0043351C  5E                        POP ESI
0043351D  5B                        POP EBX
0043351E  8B E5                     MOV ESP,EBP
00433520  5D                        POP EBP
00433521  C2 18 00                  RET 0x18
LAB_00433524:
00433524  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
0043352A  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
00433530  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00433536  74 3D                     JZ 0x00433575
00433538  68 E4 67 7A 00            PUSH 0x7a67e4
0043353D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00433542  56                        PUSH ESI
00433543  57                        PUSH EDI
00433544  68 D1 0D 00 00            PUSH 0xdd1
00433549  68 04 60 7A 00            PUSH 0x7a6004
0043354E  E8 7D 9F 27 00            CALL 0x006ad4d0
00433553  83 C4 18                  ADD ESP,0x18
00433556  85 C0                     TEST EAX,EAX
00433558  74 01                     JZ 0x0043355b
0043355A  CC                        INT3
LAB_0043355b:
0043355B  68 D2 0D 00 00            PUSH 0xdd2
00433560  68 04 60 7A 00            PUSH 0x7a6004
00433565  57                        PUSH EDI
00433566  56                        PUSH ESI
00433567  E8 D4 28 27 00            CALL 0x006a5e40
0043356C  5F                        POP EDI
0043356D  5E                        POP ESI
0043356E  5B                        POP EBX
0043356F  8B E5                     MOV ESP,EBP
00433571  5D                        POP EBP
00433572  C2 18 00                  RET 0x18
LAB_00433575:
00433575  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00433578  3B C7                     CMP EAX,EDI
0043357A  74 06                     JZ 0x00433582
0043357C  50                        PUSH EAX
0043357D  E8 8E AB 27 00            CALL 0x006ae110
LAB_00433582:
00433582  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00433585  3B C7                     CMP EAX,EDI
00433587  74 06                     JZ 0x0043358f
00433589  50                        PUSH EAX
0043358A  E8 81 AB 27 00            CALL 0x006ae110
LAB_0043358f:
0043358F  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00433592  3B C7                     CMP EAX,EDI
00433594  74 06                     JZ 0x0043359c
00433596  50                        PUSH EAX
00433597  E8 74 AB 27 00            CALL 0x006ae110
LAB_0043359c:
0043359C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0043359F  3B C7                     CMP EAX,EDI
004335A1  74 06                     JZ 0x004335a9
004335A3  50                        PUSH EAX
004335A4  E8 67 AB 27 00            CALL 0x006ae110
LAB_004335a9:
004335A9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004335AC  3B C7                     CMP EAX,EDI
004335AE  74 06                     JZ 0x004335b6
004335B0  50                        PUSH EAX
004335B1  E8 5A AB 27 00            CALL 0x006ae110
LAB_004335b6:
004335B6  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004335B9  3B C7                     CMP EAX,EDI
004335BB  74 06                     JZ 0x004335c3
004335BD  50                        PUSH EAX
004335BE  E8 4D AB 27 00            CALL 0x006ae110
LAB_004335c3:
004335C3  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
004335C6  3B C7                     CMP EAX,EDI
004335C8  74 06                     JZ 0x004335d0
004335CA  50                        PUSH EAX
004335CB  E8 40 AB 27 00            CALL 0x006ae110
LAB_004335d0:
004335D0  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004335D3  3B C7                     CMP EAX,EDI
004335D5  74 06                     JZ 0x004335dd
004335D7  50                        PUSH EAX
004335D8  E8 33 AB 27 00            CALL 0x006ae110
LAB_004335dd:
004335DD  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004335E0  3B C7                     CMP EAX,EDI
004335E2  74 06                     JZ 0x004335ea
004335E4  50                        PUSH EAX
004335E5  E8 26 AB 27 00            CALL 0x006ae110
LAB_004335ea:
004335EA  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004335ED  3B C7                     CMP EAX,EDI
004335EF  74 06                     JZ 0x004335f7
004335F1  50                        PUSH EAX
004335F2  E8 19 AB 27 00            CALL 0x006ae110
LAB_004335f7:
004335F7  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004335FA  3B C7                     CMP EAX,EDI
004335FC  74 06                     JZ 0x00433604
004335FE  50                        PUSH EAX
004335FF  E8 0C AB 27 00            CALL 0x006ae110
LAB_00433604:
00433604  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00433607  3B C7                     CMP EAX,EDI
00433609  74 06                     JZ 0x00433611
0043360B  50                        PUSH EAX
0043360C  E8 FF AA 27 00            CALL 0x006ae110
LAB_00433611:
00433611  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
00433617  E8 C2 F1 FC FF            CALL 0x004027de
0043361C  5F                        POP EDI
0043361D  5E                        POP ESI
0043361E  5B                        POP EBX
0043361F  8B E5                     MOV ESP,EBP
00433621  5D                        POP EBP
00433622  C2 18 00                  RET 0x18
