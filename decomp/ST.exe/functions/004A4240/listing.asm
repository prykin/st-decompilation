STGroupBoatC::ChangeMDNotify:
004A4240  55                        PUSH EBP
004A4241  8B EC                     MOV EBP,ESP
004A4243  83 EC 74                  SUB ESP,0x74
004A4246  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004A424B  53                        PUSH EBX
004A424C  56                        PUSH ESI
004A424D  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004A4250  57                        PUSH EDI
004A4251  8D 55 90                  LEA EDX,[EBP + -0x70]
004A4254  8D 4D 8C                  LEA ECX,[EBP + -0x74]
004A4257  6A 00                     PUSH 0x0
004A4259  52                        PUSH EDX
004A425A  C7 45 E8 04 00 00 00      MOV dword ptr [EBP + -0x18],0x4
004A4261  C7 45 D0 38 00 00 00      MOV dword ptr [EBP + -0x30],0x38
004A4268  C7 45 D4 39 00 00 00      MOV dword ptr [EBP + -0x2c],0x39
004A426F  C7 45 D8 4F 00 00 00      MOV dword ptr [EBP + -0x28],0x4f
004A4276  C7 45 DC 5E 00 00 00      MOV dword ptr [EBP + -0x24],0x5e
004A427D  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
004A4280  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A4286  E8 65 95 28 00            CALL 0x0072d7f0
004A428B  8B F0                     MOV ESI,EAX
004A428D  83 C4 08                  ADD ESP,0x8
004A4290  85 F6                     TEST ESI,ESI
004A4292  0F 85 2E 08 00 00         JNZ 0x004a4ac6
004A4298  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
004A429B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004A429E  6A 01                     PUSH 0x1
004A42A0  50                        PUSH EAX
004A42A1  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A42A4  51                        PUSH ECX
004A42A5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A42AB  E8 0A E6 F5 FF            CALL 0x004028ba
004A42B0  8B D8                     MOV EBX,EAX
004A42B2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004A42B5  83 F8 01                  CMP EAX,0x1
004A42B8  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004A42BB  0F 85 70 03 00 00         JNZ 0x004a4631
004A42C1  8B 13                     MOV EDX,dword ptr [EBX]
004A42C3  8B CB                     MOV ECX,EBX
004A42C5  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A42C8  83 F8 3B                  CMP EAX,0x3b
004A42CB  0F 84 AC 01 00 00         JZ 0x004a447d
004A42D1  8B 03                     MOV EAX,dword ptr [EBX]
004A42D3  8B CB                     MOV ECX,EBX
004A42D5  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A42D8  83 F8 60                  CMP EAX,0x60
004A42DB  0F 84 9C 01 00 00         JZ 0x004a447d
004A42E1  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004A42E4  33 FF                     XOR EDI,EDI
004A42E6  85 C0                     TEST EAX,EAX
004A42E8  7E 1D                     JLE 0x004a4307
004A42EA  8D 5D D0                  LEA EBX,[EBP + -0x30]
LAB_004a42ed:
004A42ED  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004A42F0  8B 11                     MOV EDX,dword ptr [ECX]
004A42F2  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A42F5  3B 03                     CMP EAX,dword ptr [EBX]
004A42F7  74 0B                     JZ 0x004a4304
004A42F9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004A42FC  47                        INC EDI
004A42FD  83 C3 04                  ADD EBX,0x4
004A4300  3B F8                     CMP EDI,EAX
004A4302  7C E9                     JL 0x004a42ed
LAB_004a4304:
004A4304  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_004a4307:
004A4307  3B 7D E8                  CMP EDI,dword ptr [EBP + -0x18]
004A430A  75 3F                     JNZ 0x004a434b
004A430C  68 A0 C3 7A 00            PUSH 0x7ac3a0
004A4311  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A4316  6A 00                     PUSH 0x0
004A4318  6A 00                     PUSH 0x0
004A431A  68 0A 12 00 00            PUSH 0x120a
004A431F  68 3C BE 7A 00            PUSH 0x7abe3c
004A4324  E8 A7 91 20 00            CALL 0x006ad4d0
004A4329  83 C4 18                  ADD ESP,0x18
004A432C  85 C0                     TEST EAX,EAX
004A432E  74 01                     JZ 0x004a4331
004A4330  CC                        INT3
LAB_004a4331:
004A4331  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A4336  68 0B 12 00 00            PUSH 0x120b
004A433B  68 3C BE 7A 00            PUSH 0x7abe3c
004A4340  50                        PUSH EAX
004A4341  68 02 00 FE AF            PUSH 0xaffe0002
004A4346  E8 F5 1A 20 00            CALL 0x006a5e40
LAB_004a434b:
004A434B  83 BE 4A 02 00 00 02      CMP dword ptr [ESI + 0x24a],0x2
004A4352  0F 85 5C 07 00 00         JNZ 0x004a4ab4
004A4358  8B 13                     MOV EDX,dword ptr [EBX]
004A435A  8B CB                     MOV ECX,EBX
004A435C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A435F  3B 86 5E 02 00 00         CMP EAX,dword ptr [ESI + 0x25e]
004A4365  0F 85 49 07 00 00         JNZ 0x004a4ab4
004A436B  8B 03                     MOV EAX,dword ptr [EBX]
004A436D  8D 4D F0                  LEA ECX,[EBP + -0x10]
004A4370  51                        PUSH ECX
004A4371  8B CB                     MOV ECX,EBX
004A4373  FF 90 88 00 00 00         CALL dword ptr [EAX + 0x88]
004A4379  85 C0                     TEST EAX,EAX
004A437B  0F 8E 33 07 00 00         JLE 0x004a4ab4
004A4381  8D 55 FE                  LEA EDX,[EBP + -0x2]
004A4384  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A4387  52                        PUSH EDX
004A4388  8D 4D FA                  LEA ECX,[EBP + -0x6]
004A438B  50                        PUSH EAX
004A438C  51                        PUSH ECX
004A438D  8B CB                     MOV ECX,EBX
004A438F  E8 31 D5 F5 FF            CALL 0x004018c5
004A4394  66 8B 86 52 02 00 00      MOV AX,word ptr [ESI + 0x252]
004A439B  66 8B 4D FA               MOV CX,word ptr [EBP + -0x6]
004A439F  66 3B C8                  CMP CX,AX
004A43A2  0F 8C 0C 07 00 00         JL 0x004a4ab4
004A43A8  0F BF 96 58 02 00 00      MOVSX EDX,word ptr [ESI + 0x258]
004A43AF  0F BF C0                  MOVSX EAX,AX
004A43B2  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A43B6  0F BF C1                  MOVSX EAX,CX
004A43B9  3B C2                     CMP EAX,EDX
004A43BB  0F 8F F3 06 00 00         JG 0x004a4ab4
004A43C1  66 8B 86 54 02 00 00      MOV AX,word ptr [ESI + 0x254]
004A43C8  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
004A43CC  66 3B C8                  CMP CX,AX
004A43CF  0F 8C DF 06 00 00         JL 0x004a4ab4
004A43D5  0F BF 96 5A 02 00 00      MOVSX EDX,word ptr [ESI + 0x25a]
004A43DC  0F BF C0                  MOVSX EAX,AX
004A43DF  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A43E3  0F BF C1                  MOVSX EAX,CX
004A43E6  3B C2                     CMP EAX,EDX
004A43E8  0F 8F C6 06 00 00         JG 0x004a4ab4
004A43EE  66 8B 86 56 02 00 00      MOV AX,word ptr [ESI + 0x256]
004A43F5  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
004A43F9  66 3B C8                  CMP CX,AX
004A43FC  0F 8C B2 06 00 00         JL 0x004a4ab4
004A4402  0F BF 96 5C 02 00 00      MOVSX EDX,word ptr [ESI + 0x25c]
004A4409  0F BF C0                  MOVSX EAX,AX
004A440C  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A4410  0F BF C1                  MOVSX EAX,CX
004A4413  3B C2                     CMP EAX,EDX
004A4415  0F 8F 99 06 00 00         JG 0x004a4ab4
004A441B  8B 86 4E 02 00 00         MOV EAX,dword ptr [ESI + 0x24e]
004A4421  85 C0                     TEST EAX,EAX
004A4423  75 1B                     JNZ 0x004a4440
004A4425  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A442B  68 15 12 00 00            PUSH 0x1215
004A4430  68 3C BE 7A 00            PUSH 0x7abe3c
004A4435  51                        PUSH ECX
004A4436  68 09 00 FE AF            PUSH 0xaffe0009
004A443B  E8 00 1A 20 00            CALL 0x006a5e40
LAB_004a4440:
004A4440  8B 96 4E 02 00 00         MOV EDX,dword ptr [ESI + 0x24e]
004A4446  33 FF                     XOR EDI,EDI
004A4448  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
004A444B  85 DB                     TEST EBX,EBX
004A444D  7E 1E                     JLE 0x004a446d
LAB_004a444f:
004A444F  8B 8E 4E 02 00 00         MOV ECX,dword ptr [ESI + 0x24e]
004A4455  8D 45 F4                  LEA EAX,[EBP + -0xc]
004A4458  50                        PUSH EAX
004A4459  8B D7                     MOV EDX,EDI
004A445B  E8 10 88 20 00            CALL 0x006acc70
004A4460  66 81 7D F4 FF FF         CMP word ptr [EBP + -0xc],0xffff
004A4466  74 05                     JZ 0x004a446d
004A4468  47                        INC EDI
004A4469  3B FB                     CMP EDI,EBX
004A446B  7C E2                     JL 0x004a444f
LAB_004a446d:
004A446D  8B 96 4E 02 00 00         MOV EDX,dword ptr [ESI + 0x24e]
004A4473  8D 4D 0C                  LEA ECX,[EBP + 0xc]
004A4476  51                        PUSH ECX
004A4477  57                        PUSH EDI
004A4478  E9 97 01 00 00            JMP 0x004a4614
LAB_004a447d:
004A447D  8B 86 62 02 00 00         MOV EAX,dword ptr [ESI + 0x262]
004A4483  83 F8 01                  CMP EAX,0x1
004A4486  74 08                     JZ 0x004a4490
004A4488  85 C0                     TEST EAX,EAX
004A448A  0F 85 80 00 00 00         JNZ 0x004a4510
LAB_004a4490:
004A4490  8B 86 66 02 00 00         MOV EAX,dword ptr [ESI + 0x266]
004A4496  85 C0                     TEST EAX,EAX
004A4498  75 1A                     JNZ 0x004a44b4
004A449A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A449F  68 F2 11 00 00            PUSH 0x11f2
004A44A4  68 3C BE 7A 00            PUSH 0x7abe3c
004A44A9  50                        PUSH EAX
004A44AA  68 09 00 FE AF            PUSH 0xaffe0009
004A44AF  E8 8C 19 20 00            CALL 0x006a5e40
LAB_004a44b4:
004A44B4  8B 8E 66 02 00 00         MOV ECX,dword ptr [ESI + 0x266]
004A44BA  33 FF                     XOR EDI,EDI
004A44BC  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
004A44BF  85 DB                     TEST EBX,EBX
004A44C1  7E 1E                     JLE 0x004a44e1
LAB_004a44c3:
004A44C3  8B 8E 66 02 00 00         MOV ECX,dword ptr [ESI + 0x266]
004A44C9  8D 55 F4                  LEA EDX,[EBP + -0xc]
004A44CC  52                        PUSH EDX
004A44CD  8B D7                     MOV EDX,EDI
004A44CF  E8 9C 87 20 00            CALL 0x006acc70
004A44D4  66 81 7D F4 FF FF         CMP word ptr [EBP + -0xc],0xffff
004A44DA  74 05                     JZ 0x004a44e1
004A44DC  47                        INC EDI
004A44DD  3B FB                     CMP EDI,EBX
004A44DF  7C E2                     JL 0x004a44c3
LAB_004a44e1:
004A44E1  8B 8E 66 02 00 00         MOV ECX,dword ptr [ESI + 0x266]
004A44E7  8D 45 0C                  LEA EAX,[EBP + 0xc]
004A44EA  50                        PUSH EAX
004A44EB  57                        PUSH EDI
004A44EC  51                        PUSH ECX
004A44ED  E8 4E 9C 20 00            CALL 0x006ae140
004A44F2  8B 56 29                  MOV EDX,dword ptr [ESI + 0x29]
004A44F5  8B 86 66 02 00 00         MOV EAX,dword ptr [ESI + 0x266]
004A44FB  8B 8E 4E 02 00 00         MOV ECX,dword ptr [ESI + 0x24e]
004A4501  52                        PUSH EDX
004A4502  50                        PUSH EAX
004A4503  51                        PUSH ECX
004A4504  6A 00                     PUSH 0x0
004A4506  8B CE                     MOV ECX,ESI
004A4508  E8 30 CF F5 FF            CALL 0x0040143d
004A450D  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_004a4510:
004A4510  83 BE 62 02 00 00 02      CMP dword ptr [ESI + 0x262],0x2
004A4517  0F 85 97 05 00 00         JNZ 0x004a4ab4
004A451D  8D 55 FE                  LEA EDX,[EBP + -0x2]
004A4520  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A4523  52                        PUSH EDX
004A4524  8D 4D FA                  LEA ECX,[EBP + -0x6]
004A4527  50                        PUSH EAX
004A4528  51                        PUSH ECX
004A4529  8B CB                     MOV ECX,EBX
004A452B  E8 95 D3 F5 FF            CALL 0x004018c5
004A4530  66 8B 86 6A 02 00 00      MOV AX,word ptr [ESI + 0x26a]
004A4537  66 8B 4D FA               MOV CX,word ptr [EBP + -0x6]
004A453B  66 3B C8                  CMP CX,AX
004A453E  0F 8C 70 05 00 00         JL 0x004a4ab4
004A4544  0F BF 96 70 02 00 00      MOVSX EDX,word ptr [ESI + 0x270]
004A454B  0F BF C0                  MOVSX EAX,AX
004A454E  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A4552  0F BF C1                  MOVSX EAX,CX
004A4555  3B C2                     CMP EAX,EDX
004A4557  0F 8F 57 05 00 00         JG 0x004a4ab4
004A455D  66 8B 86 6C 02 00 00      MOV AX,word ptr [ESI + 0x26c]
004A4564  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
004A4568  66 3B C8                  CMP CX,AX
004A456B  0F 8C 43 05 00 00         JL 0x004a4ab4
004A4571  0F BF 96 72 02 00 00      MOVSX EDX,word ptr [ESI + 0x272]
004A4578  0F BF C0                  MOVSX EAX,AX
004A457B  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A457F  0F BF C1                  MOVSX EAX,CX
004A4582  3B C2                     CMP EAX,EDX
004A4584  0F 8F 2A 05 00 00         JG 0x004a4ab4
004A458A  66 8B 86 6E 02 00 00      MOV AX,word ptr [ESI + 0x26e]
004A4591  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
004A4595  66 3B C8                  CMP CX,AX
004A4598  0F 8C 16 05 00 00         JL 0x004a4ab4
004A459E  0F BF 96 74 02 00 00      MOVSX EDX,word ptr [ESI + 0x274]
004A45A5  0F BF C0                  MOVSX EAX,AX
004A45A8  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A45AC  0F BF C1                  MOVSX EAX,CX
004A45AF  3B C2                     CMP EAX,EDX
004A45B1  0F 8F FD 04 00 00         JG 0x004a4ab4
004A45B7  8B 86 66 02 00 00         MOV EAX,dword ptr [ESI + 0x266]
004A45BD  85 C0                     TEST EAX,EAX
004A45BF  75 1B                     JNZ 0x004a45dc
004A45C1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A45C7  68 FE 11 00 00            PUSH 0x11fe
004A45CC  68 3C BE 7A 00            PUSH 0x7abe3c
004A45D1  51                        PUSH ECX
004A45D2  68 09 00 FE AF            PUSH 0xaffe0009
004A45D7  E8 64 18 20 00            CALL 0x006a5e40
LAB_004a45dc:
004A45DC  8B 96 66 02 00 00         MOV EDX,dword ptr [ESI + 0x266]
004A45E2  33 FF                     XOR EDI,EDI
004A45E4  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
004A45E7  85 DB                     TEST EBX,EBX
004A45E9  7E 1E                     JLE 0x004a4609
LAB_004a45eb:
004A45EB  8B 8E 66 02 00 00         MOV ECX,dword ptr [ESI + 0x266]
004A45F1  8D 45 F4                  LEA EAX,[EBP + -0xc]
004A45F4  50                        PUSH EAX
004A45F5  8B D7                     MOV EDX,EDI
004A45F7  E8 74 86 20 00            CALL 0x006acc70
004A45FC  66 81 7D F4 FF FF         CMP word ptr [EBP + -0xc],0xffff
004A4602  74 05                     JZ 0x004a4609
004A4604  47                        INC EDI
004A4605  3B FB                     CMP EDI,EBX
004A4607  7C E2                     JL 0x004a45eb
LAB_004a4609:
004A4609  8B 96 66 02 00 00         MOV EDX,dword ptr [ESI + 0x266]
004A460F  8D 4D 0C                  LEA ECX,[EBP + 0xc]
004A4612  51                        PUSH ECX
004A4613  57                        PUSH EDI
LAB_004a4614:
004A4614  52                        PUSH EDX
004A4615  E8 26 9B 20 00            CALL 0x006ae140
004A461A  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
004A461D  8B 8E 66 02 00 00         MOV ECX,dword ptr [ESI + 0x266]
004A4623  8B 96 4E 02 00 00         MOV EDX,dword ptr [ESI + 0x24e]
004A4629  50                        PUSH EAX
004A462A  51                        PUSH ECX
004A462B  52                        PUSH EDX
004A462C  E9 7A 04 00 00            JMP 0x004a4aab
LAB_004a4631:
004A4631  8B 03                     MOV EAX,dword ptr [EBX]
004A4633  8B CB                     MOV ECX,EBX
004A4635  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A4638  83 F8 3B                  CMP EAX,0x3b
004A463B  0F 84 60 02 00 00         JZ 0x004a48a1
004A4641  8B 13                     MOV EDX,dword ptr [EBX]
004A4643  8B CB                     MOV ECX,EBX
004A4645  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A4648  83 F8 60                  CMP EAX,0x60
004A464B  0F 84 50 02 00 00         JZ 0x004a48a1
004A4651  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
004A4654  33 FF                     XOR EDI,EDI
004A4656  85 DB                     TEST EBX,EBX
004A4658  7E 20                     JLE 0x004a467a
004A465A  8D 45 D0                  LEA EAX,[EBP + -0x30]
004A465D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_004a4660:
004A4660  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004A4663  8B 11                     MOV EDX,dword ptr [ECX]
004A4665  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A4668  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004A466B  3B 01                     CMP EAX,dword ptr [ECX]
004A466D  74 0B                     JZ 0x004a467a
004A466F  47                        INC EDI
004A4670  83 C1 04                  ADD ECX,0x4
004A4673  3B FB                     CMP EDI,EBX
004A4675  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004A4678  7C E6                     JL 0x004a4660
LAB_004a467a:
004A467A  3B FB                     CMP EDI,EBX
004A467C  75 40                     JNZ 0x004a46be
004A467E  68 A0 C3 7A 00            PUSH 0x7ac3a0
004A4683  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A4688  6A 00                     PUSH 0x0
004A468A  6A 00                     PUSH 0x0
004A468C  68 46 12 00 00            PUSH 0x1246
004A4691  68 3C BE 7A 00            PUSH 0x7abe3c
004A4696  E8 35 8E 20 00            CALL 0x006ad4d0
004A469B  83 C4 18                  ADD ESP,0x18
004A469E  85 C0                     TEST EAX,EAX
004A46A0  74 01                     JZ 0x004a46a3
004A46A2  CC                        INT3
LAB_004a46a3:
004A46A3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A46A9  68 47 12 00 00            PUSH 0x1247
004A46AE  68 3C BE 7A 00            PUSH 0x7abe3c
004A46B3  52                        PUSH EDX
004A46B4  68 02 00 FE AF            PUSH 0xaffe0002
004A46B9  E8 82 17 20 00            CALL 0x006a5e40
LAB_004a46be:
004A46BE  8B 86 4A 02 00 00         MOV EAX,dword ptr [ESI + 0x24a]
004A46C4  85 C0                     TEST EAX,EAX
004A46C6  0F 85 88 00 00 00         JNZ 0x004a4754
004A46CC  8B 86 4E 02 00 00         MOV EAX,dword ptr [ESI + 0x24e]
004A46D2  85 C0                     TEST EAX,EAX
004A46D4  75 1A                     JNZ 0x004a46f0
004A46D6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A46DB  68 4B 12 00 00            PUSH 0x124b
004A46E0  68 3C BE 7A 00            PUSH 0x7abe3c
004A46E5  50                        PUSH EAX
004A46E6  68 09 00 FE AF            PUSH 0xaffe0009
004A46EB  E8 50 17 20 00            CALL 0x006a5e40
LAB_004a46f0:
004A46F0  8B 8E 4E 02 00 00         MOV ECX,dword ptr [ESI + 0x24e]
004A46F6  33 FF                     XOR EDI,EDI
004A46F8  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
004A46FB  85 DB                     TEST EBX,EBX
004A46FD  7E 3A                     JLE 0x004a4739
LAB_004a46ff:
004A46FF  8B 8E 4E 02 00 00         MOV ECX,dword ptr [ESI + 0x24e]
004A4705  8D 55 F4                  LEA EDX,[EBP + -0xc]
004A4708  52                        PUSH EDX
004A4709  8B D7                     MOV EDX,EDI
004A470B  E8 60 85 20 00            CALL 0x006acc70
004A4710  66 8B 45 F4               MOV AX,word ptr [EBP + -0xc]
004A4714  66 3B 45 0C               CMP AX,word ptr [EBP + 0xc]
004A4718  74 07                     JZ 0x004a4721
004A471A  47                        INC EDI
004A471B  3B FB                     CMP EDI,EBX
004A471D  7C E0                     JL 0x004a46ff
004A471F  EB 18                     JMP 0x004a4739
LAB_004a4721:
004A4721  8B 96 4E 02 00 00         MOV EDX,dword ptr [ESI + 0x24e]
004A4727  8D 4D F4                  LEA ECX,[EBP + -0xc]
004A472A  51                        PUSH ECX
004A472B  57                        PUSH EDI
004A472C  52                        PUSH EDX
004A472D  C7 45 F4 FF FF 00 00      MOV dword ptr [EBP + -0xc],0xffff
004A4734  E8 07 9A 20 00            CALL 0x006ae140
LAB_004a4739:
004A4739  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
004A473C  8B 8E 66 02 00 00         MOV ECX,dword ptr [ESI + 0x266]
004A4742  8B 96 4E 02 00 00         MOV EDX,dword ptr [ESI + 0x24e]
004A4748  50                        PUSH EAX
004A4749  51                        PUSH ECX
004A474A  52                        PUSH EDX
004A474B  6A 00                     PUSH 0x0
004A474D  8B CE                     MOV ECX,ESI
004A474F  E8 E9 CC F5 FF            CALL 0x0040143d
LAB_004a4754:
004A4754  83 BE 4A 02 00 00 02      CMP dword ptr [ESI + 0x24a],0x2
004A475B  0F 85 53 03 00 00         JNZ 0x004a4ab4
004A4761  8D 45 FE                  LEA EAX,[EBP + -0x2]
004A4764  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A4767  50                        PUSH EAX
004A4768  8D 55 FA                  LEA EDX,[EBP + -0x6]
004A476B  51                        PUSH ECX
004A476C  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004A476F  52                        PUSH EDX
004A4770  E8 50 D1 F5 FF            CALL 0x004018c5
004A4775  66 8B 86 52 02 00 00      MOV AX,word ptr [ESI + 0x252]
004A477C  66 8B 4D FA               MOV CX,word ptr [EBP + -0x6]
004A4780  66 3B C8                  CMP CX,AX
004A4783  0F 8C 2B 03 00 00         JL 0x004a4ab4
004A4789  0F BF 96 58 02 00 00      MOVSX EDX,word ptr [ESI + 0x258]
004A4790  0F BF C0                  MOVSX EAX,AX
004A4793  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A4797  0F BF C1                  MOVSX EAX,CX
004A479A  3B C2                     CMP EAX,EDX
004A479C  0F 8F 12 03 00 00         JG 0x004a4ab4
004A47A2  66 8B 86 54 02 00 00      MOV AX,word ptr [ESI + 0x254]
004A47A9  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
004A47AD  66 3B C8                  CMP CX,AX
004A47B0  0F 8C FE 02 00 00         JL 0x004a4ab4
004A47B6  0F BF 96 5A 02 00 00      MOVSX EDX,word ptr [ESI + 0x25a]
004A47BD  0F BF C0                  MOVSX EAX,AX
004A47C0  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A47C4  0F BF C1                  MOVSX EAX,CX
004A47C7  3B C2                     CMP EAX,EDX
004A47C9  0F 8F E5 02 00 00         JG 0x004a4ab4
004A47CF  66 8B 86 56 02 00 00      MOV AX,word ptr [ESI + 0x256]
004A47D6  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
004A47DA  66 3B C8                  CMP CX,AX
004A47DD  0F 8C D1 02 00 00         JL 0x004a4ab4
004A47E3  0F BF 96 5C 02 00 00      MOVSX EDX,word ptr [ESI + 0x25c]
004A47EA  0F BF C0                  MOVSX EAX,AX
004A47ED  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A47F1  0F BF C1                  MOVSX EAX,CX
004A47F4  3B C2                     CMP EAX,EDX
004A47F6  0F 8F B8 02 00 00         JG 0x004a4ab4
004A47FC  8B 86 4E 02 00 00         MOV EAX,dword ptr [ESI + 0x24e]
004A4802  85 C0                     TEST EAX,EAX
004A4804  75 1B                     JNZ 0x004a4821
004A4806  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A480C  68 59 12 00 00            PUSH 0x1259
004A4811  68 3C BE 7A 00            PUSH 0x7abe3c
004A4816  51                        PUSH ECX
004A4817  68 09 00 FE AF            PUSH 0xaffe0009
004A481C  E8 1F 16 20 00            CALL 0x006a5e40
LAB_004a4821:
004A4821  8B 96 4E 02 00 00         MOV EDX,dword ptr [ESI + 0x24e]
004A4827  33 FF                     XOR EDI,EDI
004A4829  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
004A482C  85 DB                     TEST EBX,EBX
004A482E  7E 3A                     JLE 0x004a486a
LAB_004a4830:
004A4830  8B 8E 4E 02 00 00         MOV ECX,dword ptr [ESI + 0x24e]
004A4836  8D 45 F4                  LEA EAX,[EBP + -0xc]
004A4839  50                        PUSH EAX
004A483A  8B D7                     MOV EDX,EDI
004A483C  E8 2F 84 20 00            CALL 0x006acc70
004A4841  66 8B 4D F4               MOV CX,word ptr [EBP + -0xc]
004A4845  66 3B 4D 0C               CMP CX,word ptr [EBP + 0xc]
004A4849  74 07                     JZ 0x004a4852
004A484B  47                        INC EDI
004A484C  3B FB                     CMP EDI,EBX
004A484E  7C E0                     JL 0x004a4830
004A4850  EB 18                     JMP 0x004a486a
LAB_004a4852:
004A4852  8B 86 4E 02 00 00         MOV EAX,dword ptr [ESI + 0x24e]
004A4858  8D 55 F4                  LEA EDX,[EBP + -0xc]
004A485B  52                        PUSH EDX
004A485C  57                        PUSH EDI
004A485D  50                        PUSH EAX
004A485E  C7 45 F4 FF FF 00 00      MOV dword ptr [EBP + -0xc],0xffff
004A4865  E8 D6 98 20 00            CALL 0x006ae140
LAB_004a486a:
004A486A  3B FB                     CMP EDI,EBX
004A486C  0F 85 27 02 00 00         JNZ 0x004a4a99
004A4872  68 6C C3 7A 00            PUSH 0x7ac36c
004A4877  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A487C  6A 00                     PUSH 0x0
004A487E  6A 00                     PUSH 0x0
004A4880  68 60 12 00 00            PUSH 0x1260
004A4885  68 3C BE 7A 00            PUSH 0x7abe3c
004A488A  E8 41 8C 20 00            CALL 0x006ad4d0
004A488F  83 C4 18                  ADD ESP,0x18
004A4892  85 C0                     TEST EAX,EAX
004A4894  74 01                     JZ 0x004a4897
004A4896  CC                        INT3
LAB_004a4897:
004A4897  68 61 12 00 00            PUSH 0x1261
004A489C  E9 E2 01 00 00            JMP 0x004a4a83
LAB_004a48a1:
004A48A1  8B 86 62 02 00 00         MOV EAX,dword ptr [ESI + 0x262]
004A48A7  83 F8 01                  CMP EAX,0x1
004A48AA  74 08                     JZ 0x004a48b4
004A48AC  85 C0                     TEST EAX,EAX
004A48AE  0F 85 8C 00 00 00         JNZ 0x004a4940
LAB_004a48b4:
004A48B4  8B 86 66 02 00 00         MOV EAX,dword ptr [ESI + 0x266]
004A48BA  85 C0                     TEST EAX,EAX
004A48BC  75 1B                     JNZ 0x004a48d9
004A48BE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A48C4  68 26 12 00 00            PUSH 0x1226
004A48C9  68 3C BE 7A 00            PUSH 0x7abe3c
004A48CE  52                        PUSH EDX
004A48CF  68 09 00 FE AF            PUSH 0xaffe0009
004A48D4  E8 67 15 20 00            CALL 0x006a5e40
LAB_004a48d9:
004A48D9  8B 86 66 02 00 00         MOV EAX,dword ptr [ESI + 0x266]
004A48DF  33 FF                     XOR EDI,EDI
004A48E1  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
004A48E4  85 DB                     TEST EBX,EBX
004A48E6  7E 3A                     JLE 0x004a4922
LAB_004a48e8:
004A48E8  8D 4D F4                  LEA ECX,[EBP + -0xc]
004A48EB  8B D7                     MOV EDX,EDI
004A48ED  51                        PUSH ECX
004A48EE  8B 8E 66 02 00 00         MOV ECX,dword ptr [ESI + 0x266]
004A48F4  E8 77 83 20 00            CALL 0x006acc70
004A48F9  66 8B 55 F4               MOV DX,word ptr [EBP + -0xc]
004A48FD  66 3B 55 0C               CMP DX,word ptr [EBP + 0xc]
004A4901  74 07                     JZ 0x004a490a
004A4903  47                        INC EDI
004A4904  3B FB                     CMP EDI,EBX
004A4906  7C E0                     JL 0x004a48e8
004A4908  EB 18                     JMP 0x004a4922
LAB_004a490a:
004A490A  8B 8E 66 02 00 00         MOV ECX,dword ptr [ESI + 0x266]
004A4910  8D 45 F4                  LEA EAX,[EBP + -0xc]
004A4913  50                        PUSH EAX
004A4914  57                        PUSH EDI
004A4915  51                        PUSH ECX
004A4916  C7 45 F4 FF FF 00 00      MOV dword ptr [EBP + -0xc],0xffff
004A491D  E8 1E 98 20 00            CALL 0x006ae140
LAB_004a4922:
004A4922  8B 56 29                  MOV EDX,dword ptr [ESI + 0x29]
004A4925  8B 86 66 02 00 00         MOV EAX,dword ptr [ESI + 0x266]
004A492B  8B 8E 4E 02 00 00         MOV ECX,dword ptr [ESI + 0x24e]
004A4931  52                        PUSH EDX
004A4932  50                        PUSH EAX
004A4933  51                        PUSH ECX
004A4934  6A 00                     PUSH 0x0
004A4936  8B CE                     MOV ECX,ESI
004A4938  E8 00 CB F5 FF            CALL 0x0040143d
004A493D  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_004a4940:
004A4940  83 BE 62 02 00 00 02      CMP dword ptr [ESI + 0x262],0x2
004A4947  0F 85 67 01 00 00         JNZ 0x004a4ab4
004A494D  8D 55 FE                  LEA EDX,[EBP + -0x2]
004A4950  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A4953  52                        PUSH EDX
004A4954  8D 4D FA                  LEA ECX,[EBP + -0x6]
004A4957  50                        PUSH EAX
004A4958  51                        PUSH ECX
004A4959  8B CB                     MOV ECX,EBX
004A495B  E8 65 CF F5 FF            CALL 0x004018c5
004A4960  66 8B 86 6A 02 00 00      MOV AX,word ptr [ESI + 0x26a]
004A4967  66 8B 4D FA               MOV CX,word ptr [EBP + -0x6]
004A496B  66 3B C8                  CMP CX,AX
004A496E  0F 8C 40 01 00 00         JL 0x004a4ab4
004A4974  0F BF 96 70 02 00 00      MOVSX EDX,word ptr [ESI + 0x270]
004A497B  0F BF C0                  MOVSX EAX,AX
004A497E  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A4982  0F BF C1                  MOVSX EAX,CX
004A4985  3B C2                     CMP EAX,EDX
004A4987  0F 8F 27 01 00 00         JG 0x004a4ab4
004A498D  66 8B 86 6C 02 00 00      MOV AX,word ptr [ESI + 0x26c]
004A4994  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
004A4998  66 3B C8                  CMP CX,AX
004A499B  0F 8C 13 01 00 00         JL 0x004a4ab4
004A49A1  0F BF 96 72 02 00 00      MOVSX EDX,word ptr [ESI + 0x272]
004A49A8  0F BF C0                  MOVSX EAX,AX
004A49AB  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A49AF  0F BF C1                  MOVSX EAX,CX
004A49B2  3B C2                     CMP EAX,EDX
004A49B4  0F 8F FA 00 00 00         JG 0x004a4ab4
004A49BA  66 8B 86 6E 02 00 00      MOV AX,word ptr [ESI + 0x26e]
004A49C1  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
004A49C5  66 3B C8                  CMP CX,AX
004A49C8  0F 8C E6 00 00 00         JL 0x004a4ab4
004A49CE  0F BF 96 74 02 00 00      MOVSX EDX,word ptr [ESI + 0x274]
004A49D5  0F BF C0                  MOVSX EAX,AX
004A49D8  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
004A49DC  0F BF C1                  MOVSX EAX,CX
004A49DF  3B C2                     CMP EAX,EDX
004A49E1  0F 8F CD 00 00 00         JG 0x004a4ab4
004A49E7  8B 86 66 02 00 00         MOV EAX,dword ptr [ESI + 0x266]
004A49ED  85 C0                     TEST EAX,EAX
004A49EF  75 1B                     JNZ 0x004a4a0c
004A49F1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A49F7  68 34 12 00 00            PUSH 0x1234
004A49FC  68 3C BE 7A 00            PUSH 0x7abe3c
004A4A01  51                        PUSH ECX
004A4A02  68 09 00 FE AF            PUSH 0xaffe0009
004A4A07  E8 34 14 20 00            CALL 0x006a5e40
LAB_004a4a0c:
004A4A0C  8B 96 66 02 00 00         MOV EDX,dword ptr [ESI + 0x266]
004A4A12  33 FF                     XOR EDI,EDI
004A4A14  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
004A4A17  85 DB                     TEST EBX,EBX
004A4A19  7E 3A                     JLE 0x004a4a55
LAB_004a4a1b:
004A4A1B  8B 8E 66 02 00 00         MOV ECX,dword ptr [ESI + 0x266]
004A4A21  8D 45 F4                  LEA EAX,[EBP + -0xc]
004A4A24  50                        PUSH EAX
004A4A25  8B D7                     MOV EDX,EDI
004A4A27  E8 44 82 20 00            CALL 0x006acc70
004A4A2C  66 8B 4D F4               MOV CX,word ptr [EBP + -0xc]
004A4A30  66 3B 4D 0C               CMP CX,word ptr [EBP + 0xc]
004A4A34  74 07                     JZ 0x004a4a3d
004A4A36  47                        INC EDI
004A4A37  3B FB                     CMP EDI,EBX
004A4A39  7C E0                     JL 0x004a4a1b
004A4A3B  EB 18                     JMP 0x004a4a55
LAB_004a4a3d:
004A4A3D  8B 86 66 02 00 00         MOV EAX,dword ptr [ESI + 0x266]
004A4A43  8D 55 F4                  LEA EDX,[EBP + -0xc]
004A4A46  52                        PUSH EDX
004A4A47  57                        PUSH EDI
004A4A48  50                        PUSH EAX
004A4A49  C7 45 F4 FF FF 00 00      MOV dword ptr [EBP + -0xc],0xffff
004A4A50  E8 EB 96 20 00            CALL 0x006ae140
LAB_004a4a55:
004A4A55  3B FB                     CMP EDI,EBX
004A4A57  75 40                     JNZ 0x004a4a99
004A4A59  68 34 C3 7A 00            PUSH 0x7ac334
004A4A5E  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A4A63  6A 00                     PUSH 0x0
004A4A65  6A 00                     PUSH 0x0
004A4A67  68 3B 12 00 00            PUSH 0x123b
004A4A6C  68 3C BE 7A 00            PUSH 0x7abe3c
004A4A71  E8 5A 8A 20 00            CALL 0x006ad4d0
004A4A76  83 C4 18                  ADD ESP,0x18
004A4A79  85 C0                     TEST EAX,EAX
004A4A7B  74 01                     JZ 0x004a4a7e
004A4A7D  CC                        INT3
LAB_004a4a7e:
004A4A7E  68 3C 12 00 00            PUSH 0x123c
LAB_004a4a83:
004A4A83  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A4A89  68 3C BE 7A 00            PUSH 0x7abe3c
004A4A8E  51                        PUSH ECX
004A4A8F  68 02 00 FE AF            PUSH 0xaffe0002
004A4A94  E8 A7 13 20 00            CALL 0x006a5e40
LAB_004a4a99:
004A4A99  8B 56 29                  MOV EDX,dword ptr [ESI + 0x29]
004A4A9C  8B 86 66 02 00 00         MOV EAX,dword ptr [ESI + 0x266]
004A4AA2  8B 8E 4E 02 00 00         MOV ECX,dword ptr [ESI + 0x24e]
004A4AA8  52                        PUSH EDX
004A4AA9  50                        PUSH EAX
004A4AAA  51                        PUSH ECX
LAB_004a4aab:
004A4AAB  6A 00                     PUSH 0x0
004A4AAD  8B CE                     MOV ECX,ESI
004A4AAF  E8 89 C9 F5 FF            CALL 0x0040143d
LAB_004a4ab4:
004A4AB4  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
004A4AB7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A4ABD  5F                        POP EDI
004A4ABE  5E                        POP ESI
004A4ABF  5B                        POP EBX
004A4AC0  8B E5                     MOV ESP,EBP
004A4AC2  5D                        POP EBP
004A4AC3  C2 08 00                  RET 0x8
LAB_004a4ac6:
004A4AC6  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
004A4AC9  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004A4ACF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A4AD4  74 36                     JZ 0x004a4b0c
004A4AD6  68 10 C3 7A 00            PUSH 0x7ac310
004A4ADB  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A4AE0  56                        PUSH ESI
004A4AE1  6A 00                     PUSH 0x0
004A4AE3  68 6A 12 00 00            PUSH 0x126a
004A4AE8  68 3C BE 7A 00            PUSH 0x7abe3c
004A4AED  E8 DE 89 20 00            CALL 0x006ad4d0
004A4AF2  83 C4 18                  ADD ESP,0x18
004A4AF5  85 C0                     TEST EAX,EAX
004A4AF7  74 01                     JZ 0x004a4afa
004A4AF9  CC                        INT3
LAB_004a4afa:
004A4AFA  68 6B 12 00 00            PUSH 0x126b
004A4AFF  68 3C BE 7A 00            PUSH 0x7abe3c
004A4B04  6A 00                     PUSH 0x0
004A4B06  56                        PUSH ESI
004A4B07  E8 34 13 20 00            CALL 0x006a5e40
LAB_004a4b0c:
004A4B0C  5F                        POP EDI
004A4B0D  5E                        POP ESI
004A4B0E  5B                        POP EBX
004A4B0F  8B E5                     MOV ESP,EBP
004A4B11  5D                        POP EBP
004A4B12  C2 08 00                  RET 0x8
