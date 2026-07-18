FUN_005a4350:
005A4350  55                        PUSH EBP
005A4351  8B EC                     MOV EBP,ESP
005A4353  81 EC B4 06 00 00         SUB ESP,0x6b4
005A4359  53                        PUSH EBX
005A435A  56                        PUSH ESI
005A435B  8B F1                     MOV ESI,ECX
005A435D  57                        PUSH EDI
005A435E  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
005A4361  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005A4364  E8 47 0E 14 00            CALL 0x006e51b0
005A4369  33 FF                     XOR EDI,EDI
005A436B  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005A436E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A4373  8D 95 EC FD FF FF         LEA EDX,[EBP + 0xfffffdec]
005A4379  8D 8D E8 FD FF FF         LEA ECX,[EBP + 0xfffffde8]
005A437F  57                        PUSH EDI
005A4380  52                        PUSH EDX
005A4381  89 85 E8 FD FF FF         MOV dword ptr [EBP + 0xfffffde8],EAX
005A4387  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A438D  E8 5E 94 18 00            CALL 0x0072d7f0
005A4392  8B F0                     MOV ESI,EAX
005A4394  83 C4 08                  ADD ESP,0x8
005A4397  3B F7                     CMP ESI,EDI
005A4399  0F 85 27 49 00 00         JNZ 0x005a8cc6
005A439F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005A43A2  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
005A43A5  56                        PUSH ESI
005A43A6  8B CB                     MOV ECX,EBX
005A43A8  E8 B6 E1 E5 FF            CALL 0x00402563
005A43AD  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005A43B0  3D 49 69 00 00            CMP EAX,0x6949
005A43B5  0F 87 27 1F 00 00         JA 0x005a62e2
005A43BB  0F 84 A3 1E 00 00         JZ 0x005a6264
005A43C1  3D FF 63 00 00            CMP EAX,0x63ff
005A43C6  0F 87 83 0F 00 00         JA 0x005a534f
005A43CC  0F 84 CC 09 00 00         JZ 0x005a4d9e
005A43D2  3D 51 61 00 00            CMP EAX,0x6151
005A43D7  0F 87 B3 03 00 00         JA 0x005a4790
005A43DD  0F 84 BE 02 00 00         JZ 0x005a46a1
005A43E3  3D 05 61 00 00            CMP EAX,0x6105
005A43E8  77 72                     JA 0x005a445c
005A43EA  74 48                     JZ 0x005a4434
005A43EC  83 F8 05                  CMP EAX,0x5
005A43EF  0F 87 B2 48 00 00         JA 0x005a8ca7
switchD_005a43f5::switchD:
005A43F5  FF 24 85 14 8D 5A 00      JMP dword ptr [EAX*0x4 + 0x5a8d14]
switchD_005a43f5::caseD_2:
005A43FC  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A43FF  8A 48 14                  MOV CL,byte ptr [EAX + 0x14]
005A4402  51                        PUSH ECX
005A4403  8B CB                     MOV ECX,EBX
005A4405  E8 43 01 E6 FF            CALL 0x0040454d
005A440A  E9 98 48 00 00            JMP 0x005a8ca7
switchD_005a43f5::caseD_3:
005A440F  8B CB                     MOV ECX,EBX
005A4411  E8 0B D3 E5 FF            CALL 0x00401721
005A4416  E9 8C 48 00 00            JMP 0x005a8ca7
switchD_005a43f5::caseD_5:
005A441B  57                        PUSH EDI
005A441C  8B CB                     MOV ECX,EBX
005A441E  E8 2A F7 E5 FF            CALL 0x00403b4d
005A4423  E9 7F 48 00 00            JMP 0x005a8ca7
switchD_005a43f5::caseD_0:
005A4428  8B CB                     MOV ECX,EBX
005A442A  E8 96 0B E6 FF            CALL 0x00404fc5
005A442F  E9 73 48 00 00            JMP 0x005a8ca7
LAB_005a4434:
005A4434  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005A443B  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005A443E  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
005A4441  89 53 4D                  MOV dword ptr [EBX + 0x4d],EDX
005A4444  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A4447  89 43 51                  MOV dword ptr [EBX + 0x51],EAX
005A444A  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005A444D  89 4B 55                  MOV dword ptr [EBX + 0x55],ECX
005A4450  8B CB                     MOV ECX,EBX
005A4452  E8 61 09 E6 FF            CALL 0x00404db8
005A4457  E9 4B 48 00 00            JMP 0x005a8ca7
LAB_005a445c:
005A445C  05 F7 9E FF FF            ADD EAX,0xffff9ef7
005A4461  83 F8 47                  CMP EAX,0x47
005A4464  0F 87 3D 48 00 00         JA 0x005a8ca7
005A446A  33 D2                     XOR EDX,EDX
005A446C  8A 90 3C 8D 5A 00         MOV DL,byte ptr [EAX + 0x5a8d3c]
switchD_005a4472::switchD:
005A4472  FF 24 95 2C 8D 5A 00      JMP dword ptr [EDX*0x4 + 0x5a8d2c]
switchD_005a4472::caseD_6109:
005A4479  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005A447F  E8 8C 10 E6 FF            CALL 0x00405510
005A4484  C7 43 45 00 02 00 00      MOV dword ptr [EBX + 0x45],0x200
005A448B  89 7B 49                  MOV dword ptr [EBX + 0x49],EDI
005A448E  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005A4491  89 43 4D                  MOV dword ptr [EBX + 0x4d],EAX
005A4494  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005A4497  89 4B 51                  MOV dword ptr [EBX + 0x51],ECX
005A449A  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005A449D  8B CB                     MOV ECX,EBX
005A449F  89 53 55                  MOV dword ptr [EBX + 0x55],EDX
005A44A2  E8 11 09 E6 FF            CALL 0x00404db8
005A44A7  E9 FB 47 00 00            JMP 0x005a8ca7
switchD_005a4472::caseD_614f:
005A44AC  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005A44B1  3B C7                     CMP EAX,EDI
005A44B3  74 4F                     JZ 0x005a4504
005A44B5  8B F8                     MOV EDI,EAX
005A44B7  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005A44BE  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A44C7  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005A44CD  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005A44D3  50                        PUSH EAX
005A44D4  51                        PUSH ECX
005A44D5  6A 00                     PUSH 0x0
005A44D7  8B CF                     MOV ECX,EDI
005A44D9  E8 A0 0B E6 FF            CALL 0x0040507e
005A44DE  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005A44E4  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005A44EA  52                        PUSH EDX
005A44EB  50                        PUSH EAX
005A44EC  8B CF                     MOV ECX,EDI
005A44EE  E8 2B DF E5 FF            CALL 0x0040241e
005A44F3  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005A44FA  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005a4504:
005A4504  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A450A  B9 08 00 00 00            MOV ECX,0x8
005A450F  33 C0                     XOR EAX,EAX
005A4511  8D BD 68 FE FF FF         LEA EDI,[EBP + 0xfffffe68]
005A4517  F3 AB                     STOSD.REP ES:EDI
005A4519  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
005A451C  C7 85 74 FE FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffe74],0x2
005A4526  89 8D 70 FE FF FF         MOV dword ptr [EBP + 0xfffffe70],ECX
005A452C  C7 85 78 FE FF FF 41 69 00 00  MOV dword ptr [EBP + 0xfffffe78],0x6941
005A4536  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A453C  85 C9                     TEST ECX,ECX
005A453E  74 25                     JZ 0x005a4565
005A4540  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A4543  68 99 25 00 00            PUSH 0x2599
005A4548  50                        PUSH EAX
005A4549  6A 00                     PUSH 0x0
005A454B  8D 95 68 FE FF FF         LEA EDX,[EBP + 0xfffffe68]
005A4551  6A 00                     PUSH 0x0
005A4553  52                        PUSH EDX
005A4554  6A 00                     PUSH 0x0
005A4556  68 93 25 00 00            PUSH 0x2593
005A455B  E8 48 FA E5 FF            CALL 0x00403fa8
005A4560  E9 42 47 00 00            JMP 0x005a8ca7
LAB_005a4565:
005A4565  8B 03                     MOV EAX,dword ptr [EBX]
005A4567  8D 8D 68 FE FF FF         LEA ECX,[EBP + 0xfffffe68]
005A456D  51                        PUSH ECX
005A456E  8B CB                     MOV ECX,EBX
005A4570  FF 10                     CALL dword ptr [EAX]
005A4572  E9 30 47 00 00            JMP 0x005a8ca7
switchD_005a4472::caseD_6150:
005A4577  80 BB 5F 1A 00 00 01      CMP byte ptr [EBX + 0x1a5f],0x1
005A457E  0F 85 23 47 00 00         JNZ 0x005a8ca7
005A4584  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005A458A  85 FF                     TEST EDI,EDI
005A458C  74 4D                     JZ 0x005a45db
005A458E  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005A4595  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A459E  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005A45A4  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005A45AA  52                        PUSH EDX
005A45AB  50                        PUSH EAX
005A45AC  6A 00                     PUSH 0x0
005A45AE  8B CF                     MOV ECX,EDI
005A45B0  E8 C9 0A E6 FF            CALL 0x0040507e
005A45B5  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005A45BB  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005A45C1  51                        PUSH ECX
005A45C2  52                        PUSH EDX
005A45C3  8B CF                     MOV ECX,EDI
005A45C5  E8 54 DE E5 FF            CALL 0x0040241e
005A45CA  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005A45D1  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005a45db:
005A45DB  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005A45DE  B9 08 00 00 00            MOV ECX,0x8
005A45E3  33 C0                     XOR EAX,EAX
005A45E5  8D BD A4 FE FF FF         LEA EDI,[EBP + 0xfffffea4]
005A45EB  F3 AB                     STOSD.REP ES:EDI
005A45ED  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005A45F0  C7 85 B0 FE FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffeb0],0x2
005A45FA  89 85 AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],EAX
005A4600  8D 46 FF                  LEA EAX,[ESI + -0x1]
005A4603  83 F8 03                  CMP EAX,0x3
005A4606  C7 85 B4 FE FF FF 41 69 00 00  MOV dword ptr [EBP + 0xfffffeb4],0x6941
005A4610  77 23                     JA 0x005a4635
switchD_005a4612::switchD:
005A4612  FF 24 85 84 8D 5A 00      JMP dword ptr [EAX*0x4 + 0x5a8d84]
switchD_005a4612::caseD_1:
005A4619  B8 80 25 00 00            MOV EAX,0x2580
005A461E  EB 1A                     JMP 0x005a463a
switchD_005a4612::caseD_2:
005A4620  B8 81 25 00 00            MOV EAX,0x2581
005A4625  EB 13                     JMP 0x005a463a
switchD_005a4612::caseD_3:
005A4627  B8 82 25 00 00            MOV EAX,0x2582
005A462C  EB 0C                     JMP 0x005a463a
switchD_005a4612::caseD_4:
005A462E  B8 83 25 00 00            MOV EAX,0x2583
005A4633  EB 05                     JMP 0x005a463a
switchD_005a4612::default:
005A4635  B8 84 25 00 00            MOV EAX,0x2584
LAB_005a463a:
005A463A  85 C0                     TEST EAX,EAX
005A463C  74 51                     JZ 0x005a468f
005A463E  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005A4644  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005A464A  85 C9                     TEST ECX,ECX
005A464C  74 41                     JZ 0x005a468f
005A464E  3D 84 25 00 00            CMP EAX,0x2584
005A4653  75 1E                     JNZ 0x005a4673
005A4655  68 99 25 00 00            PUSH 0x2599
005A465A  56                        PUSH ESI
005A465B  6A 00                     PUSH 0x0
005A465D  8D 95 A4 FE FF FF         LEA EDX,[EBP + 0xfffffea4]
005A4663  6A 00                     PUSH 0x0
005A4665  52                        PUSH EDX
005A4666  6A 00                     PUSH 0x0
005A4668  50                        PUSH EAX
005A4669  E8 3A F9 E5 FF            CALL 0x00403fa8
005A466E  E9 34 46 00 00            JMP 0x005a8ca7
LAB_005a4673:
005A4673  6A 00                     PUSH 0x0
005A4675  6A 00                     PUSH 0x0
005A4677  6A 00                     PUSH 0x0
005A4679  8D 95 A4 FE FF FF         LEA EDX,[EBP + 0xfffffea4]
005A467F  6A 00                     PUSH 0x0
005A4681  52                        PUSH EDX
005A4682  6A 00                     PUSH 0x0
005A4684  50                        PUSH EAX
005A4685  E8 1E F9 E5 FF            CALL 0x00403fa8
005A468A  E9 18 46 00 00            JMP 0x005a8ca7
LAB_005a468f:
005A468F  8B 03                     MOV EAX,dword ptr [EBX]
005A4691  8D 8D A4 FE FF FF         LEA ECX,[EBP + 0xfffffea4]
005A4697  51                        PUSH ECX
005A4698  8B CB                     MOV ECX,EBX
005A469A  FF 10                     CALL dword ptr [EAX]
005A469C  E9 06 46 00 00            JMP 0x005a8ca7
LAB_005a46a1:
005A46A1  80 BB 5F 1A 00 00 01      CMP byte ptr [EBX + 0x1a5f],0x1
005A46A8  0F 85 F9 45 00 00         JNZ 0x005a8ca7
005A46AE  B9 90 2A 80 00            MOV ECX,0x802a90
005A46B3  FF 15 6C C0 85 00         CALL dword ptr [0x0085c06c]
005A46B9  80 3D D1 7D 80 00 01      CMP byte ptr [0x00807dd1],0x1
005A46C0  0F 84 91 26 00 00         JZ 0x005a6d57
005A46C6  8B 15 D1 7D 80 00         MOV EDX,dword ptr [0x00807dd1]
005A46CC  81 E2 00 00 FF FF         AND EDX,0xffff0000
005A46D2  81 FA 00 00 DD D0         CMP EDX,0xd0dd0000
005A46D8  0F 84 79 26 00 00         JZ 0x005a6d57
005A46DE  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A46E4  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005A46E7  3B F7                     CMP ESI,EDI
005A46E9  75 1A                     JNZ 0x005a4705
005A46EB  33 F6                     XOR ESI,ESI
005A46ED  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
005A46F1  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
005A46F5  83 C6 1F                  ADD ESI,0x1f
005A46F8  C1 EE 03                  SHR ESI,0x3
005A46FB  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
005A4701  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_005a4705:
005A4705  50                        PUSH EAX
005A4706  E8 95 08 11 00            CALL 0x006b4fa0
005A470B  8B CE                     MOV ECX,ESI
005A470D  8B F8                     MOV EDI,EAX
005A470F  8B D1                     MOV EDX,ECX
005A4711  83 C8 FF                  OR EAX,0xffffffff
005A4714  C1 E9 02                  SHR ECX,0x2
005A4717  F3 AB                     STOSD.REP ES:EDI
005A4719  8B CA                     MOV ECX,EDX
005A471B  68 F0 00 00 00            PUSH 0xf0
005A4720  83 E1 03                  AND ECX,0x3
005A4723  68 B8 01 00 00            PUSH 0x1b8
005A4728  F3 AA                     STOSB.REP ES:EDI
005A472A  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A4730  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A4736  6A 16                     PUSH 0x16
005A4738  6A 00                     PUSH 0x0
005A473A  6A 00                     PUSH 0x0
005A473C  50                        PUSH EAX
005A473D  E8 4E C3 16 00            CALL 0x00710a90
005A4742  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A4748  6A FF                     PUSH -0x1
005A474A  6A FF                     PUSH -0x1
005A474C  6A 02                     PUSH 0x2
005A474E  6A FF                     PUSH -0x1
005A4750  6A FF                     PUSH -0x1
005A4752  51                        PUSH ECX
005A4753  68 B6 25 00 00            PUSH 0x25b6
005A4758  E8 E3 B9 10 00            CALL 0x006b0140
005A475D  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A4763  50                        PUSH EAX
005A4764  E8 07 D4 16 00            CALL 0x00711b70
005A4769  8B 93 BC 1A 00 00         MOV EDX,dword ptr [EBX + 0x1abc]
005A476F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A4774  52                        PUSH EDX
005A4775  50                        PUSH EAX
005A4776  E8 55 EE 10 00            CALL 0x006b35d0
005A477B  68 6C C6 7C 00            PUSH 0x7cc66c
005A4780  B9 90 2A 80 00            MOV ECX,0x802a90
005A4785  FF 15 68 C0 85 00         CALL dword ptr [0x0085c068]
005A478B  E9 17 45 00 00            JMP 0x005a8ca7
LAB_005a4790:
005A4790  3D 33 63 00 00            CMP EAX,0x6333
005A4795  0F 87 96 05 00 00         JA 0x005a4d31
005A479B  0F 84 7B 05 00 00         JZ 0x005a4d1c
005A47A1  05 AE 9E FF FF            ADD EAX,0xffff9eae
005A47A6  83 F8 04                  CMP EAX,0x4
005A47A9  0F 87 F8 44 00 00         JA 0x005a8ca7
switchD_005a47af::switchD:
005A47AF  FF 24 85 94 8D 5A 00      JMP dword ptr [EAX*0x4 + 0x5a8d94]
switchD_005a47af::caseD_6152:
005A47B6  80 BB 5F 1A 00 00 02      CMP byte ptr [EBX + 0x1a5f],0x2
005A47BD  0F 85 E4 44 00 00         JNZ 0x005a8ca7
005A47C3  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005A47C8  3B C7                     CMP EAX,EDI
005A47CA  74 4F                     JZ 0x005a481b
005A47CC  8B F8                     MOV EDI,EAX
005A47CE  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005A47D5  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A47DE  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005A47E4  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005A47EA  51                        PUSH ECX
005A47EB  52                        PUSH EDX
005A47EC  6A 00                     PUSH 0x0
005A47EE  8B CF                     MOV ECX,EDI
005A47F0  E8 89 08 E6 FF            CALL 0x0040507e
005A47F5  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005A47FB  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005A4801  50                        PUSH EAX
005A4802  51                        PUSH ECX
005A4803  8B CF                     MOV ECX,EDI
005A4805  E8 14 DC E5 FF            CALL 0x0040241e
005A480A  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005A4811  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005a481b:
005A481B  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A4821  B9 06 00 00 00            MOV ECX,0x6
005A4826  B8 01 00 01 00            MOV EAX,0x10001
005A482B  8D BD 3C FD FF FF         LEA EDI,[EBP + 0xfffffd3c]
005A4831  F3 AB                     STOSD.REP ES:EDI
005A4833  66 AB                     STOSW ES:EDI
005A4835  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A483B  85 C9                     TEST ECX,ECX
005A483D  74 0C                     JZ 0x005a484b
005A483F  8D 85 3C FD FF FF         LEA EAX,[EBP + 0xfffffd3c]
005A4845  50                        PUSH EAX
005A4846  E8 06 03 E6 FF            CALL 0x00404b51
LAB_005a484b:
005A484B  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005A484E  8D 46 FE                  LEA EAX,[ESI + -0x2]
005A4851  83 F8 05                  CMP EAX,0x5
005A4854  77 23                     JA 0x005a4879
switchD_005a4856::switchD:
005A4856  FF 24 85 A8 8D 5A 00      JMP dword ptr [EAX*0x4 + 0x5a8da8]
switchD_005a4856::caseD_2:
005A485D  B8 8B 25 00 00            MOV EAX,0x258b
005A4862  EB 1A                     JMP 0x005a487e
switchD_005a4856::caseD_3:
005A4864  B8 8C 25 00 00            MOV EAX,0x258c
005A4869  EB 13                     JMP 0x005a487e
switchD_005a4856::caseD_4:
005A486B  B8 8D 25 00 00            MOV EAX,0x258d
005A4870  EB 0C                     JMP 0x005a487e
switchD_005a4856::caseD_7:
005A4872  B8 C2 25 00 00            MOV EAX,0x25c2
005A4877  EB 05                     JMP 0x005a487e
switchD_005a4856::caseD_5:
005A4879  B8 89 25 00 00            MOV EAX,0x2589
LAB_005a487e:
005A487E  85 C0                     TEST EAX,EAX
005A4880  0F 84 21 44 00 00         JZ 0x005a8ca7
005A4886  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005A488C  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005A4892  85 C9                     TEST ECX,ECX
005A4894  0F 84 0D 44 00 00         JZ 0x005a8ca7
005A489A  3D 89 25 00 00            CMP EAX,0x2589
005A489F  0F 85 C0 03 00 00         JNZ 0x005a4c65
005A48A5  68 99 25 00 00            PUSH 0x2599
005A48AA  56                        PUSH ESI
005A48AB  6A 00                     PUSH 0x0
005A48AD  6A 00                     PUSH 0x0
005A48AF  6A 00                     PUSH 0x0
005A48B1  6A 00                     PUSH 0x0
005A48B3  50                        PUSH EAX
005A48B4  E8 EF F6 E5 FF            CALL 0x00403fa8
005A48B9  E9 E9 43 00 00            JMP 0x005a8ca7
switchD_005a47af::caseD_6153:
005A48BE  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005A48C4  3C 02                     CMP AL,0x2
005A48C6  74 08                     JZ 0x005a48d0
005A48C8  3C 04                     CMP AL,0x4
005A48CA  0F 85 D7 43 00 00         JNZ 0x005a8ca7
LAB_005a48d0:
005A48D0  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A48D6  3B F7                     CMP ESI,EDI
005A48D8  74 4C                     JZ 0x005a4926
005A48DA  C6 86 93 04 00 00 01      MOV byte ptr [ESI + 0x493],0x1
005A48E1  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A48EA  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A48F0  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A48F6  52                        PUSH EDX
005A48F7  50                        PUSH EAX
005A48F8  57                        PUSH EDI
005A48F9  8B CE                     MOV ECX,ESI
005A48FB  E8 7E 07 E6 FF            CALL 0x0040507e
005A4900  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
005A4906  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
005A490C  51                        PUSH ECX
005A490D  52                        PUSH EDX
005A490E  8B CE                     MOV ECX,ESI
005A4910  E8 09 DB E5 FF            CALL 0x0040241e
005A4915  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A491C  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a4926:
005A4926  80 BB 5F 1A 00 00 02      CMP byte ptr [EBX + 0x1a5f],0x2
005A492D  BE A8 C1 7C 00            MOV ESI,0x7cc1a8
005A4932  BA 98 C1 7C 00            MOV EDX,0x7cc198
005A4937  B9 84 C1 7C 00            MOV ECX,0x7cc184
005A493C  B8 6C C1 7C 00            MOV EAX,0x7cc16c
005A4941  89 B5 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],ESI
005A4947  89 95 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EDX
005A494D  89 8D 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],ECX
005A4953  89 85 10 FF FF FF         MOV dword ptr [EBP + 0xffffff10],EAX
005A4959  75 1B                     JNZ 0x005a4976
005A495B  8D 85 04 FF FF FF         LEA EAX,[EBP + 0xffffff04]
005A4961  B9 90 2A 80 00            MOV ECX,0x802a90
005A4966  50                        PUSH EAX
005A4967  6A 04                     PUSH 0x4
005A4969  68 1D 7E 80 00            PUSH 0x807e1d
005A496E  FF 15 20 C0 85 00         CALL dword ptr [0x0085c020]
005A4974  EB 5D                     JMP 0x005a49d3
LAB_005a4976:
005A4976  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
005A497C  89 8D EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],ECX
005A4982  8B 0D D4 30 80 00         MOV ECX,dword ptr [0x008030d4]
005A4988  89 85 F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EAX
005A498E  8D 95 D4 FE FF FF         LEA EDX,[EBP + 0xfffffed4]
005A4994  8D 85 E4 FE FF FF         LEA EAX,[EBP + 0xfffffee4]
005A499A  52                        PUSH EDX
005A499B  89 8D E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],ECX
005A49A1  50                        PUSH EAX
005A49A2  6A 04                     PUSH 0x4
005A49A4  B9 90 2A 80 00            MOV ECX,0x802a90
005A49A9  89 B5 E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],ESI
005A49AF  C7 85 D4 FE FF FF D4 2A 80 00  MOV dword ptr [EBP + 0xfffffed4],0x802ad4
005A49B9  C7 85 D8 FE FF FF D4 2C 80 00  MOV dword ptr [EBP + 0xfffffed8],0x802cd4
005A49C3  C7 85 DC FE FF FF D4 2E 80 00  MOV dword ptr [EBP + 0xfffffedc],0x802ed4
005A49CD  FF 15 28 C0 85 00         CALL dword ptr [0x0085c028]
LAB_005a49d3:
005A49D3  8B 8B 67 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a67]
005A49D9  51                        PUSH ECX
005A49DA  B9 90 2A 80 00            MOV ECX,0x802a90
005A49DF  E8 BF CD E5 FF            CALL 0x004017a3
005A49E4  8B 83 9E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e9e]
005A49EA  3B C7                     CMP EAX,EDI
005A49EC  74 06                     JZ 0x005a49f4
005A49EE  50                        PUSH EAX
005A49EF  E8 7C 0B 11 00            CALL 0x006b5570
LAB_005a49f4:
005A49F4  6A 64                     PUSH 0x64
005A49F6  6A 64                     PUSH 0x64
005A49F8  57                        PUSH EDI
005A49F9  E8 F2 0A 11 00            CALL 0x006b54f0
005A49FE  89 83 9E 1E 00 00         MOV dword ptr [EBX + 0x1e9e],EAX
005A4A04  8B 13                     MOV EDX,dword ptr [EBX]
005A4A06  8B CB                     MOV ECX,EBX
005A4A08  FF 52 08                  CALL dword ptr [EDX + 0x8]
005A4A0B  C6 83 61 1A 00 00 06      MOV byte ptr [EBX + 0x1a61],0x6
005A4A12  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A4A18  39 B8 E6 02 00 00         CMP dword ptr [EAX + 0x2e6],EDI
005A4A1E  0F 84 83 42 00 00         JZ 0x005a8ca7
005A4A24  33 C9                     XOR ECX,ECX
005A4A26  8D 95 54 FF FF FF         LEA EDX,[EBP + 0xffffff54]
005A4A2C  89 8D 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],ECX
005A4A32  C6 85 56 FF FF FF 01      MOV byte ptr [EBP + 0xffffff56],0x1
005A4A39  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
005A4A3F  C6 85 55 FF FF FF 01      MOV byte ptr [EBP + 0xffffff55],0x1
005A4A46  89 8D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ECX
005A4A4C  C6 85 54 FF FF FF 01      MOV byte ptr [EBP + 0xffffff54],0x1
005A4A53  88 8D 60 FF FF FF         MOV byte ptr [EBP + 0xffffff60],CL
005A4A59  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A4A5F  52                        PUSH EDX
005A4A60  E8 36 D0 E5 FF            CALL 0x00401a9b
005A4A65  E9 3D 42 00 00            JMP 0x005a8ca7
switchD_005a47af::caseD_6154:
005A4A6A  80 BB 5F 1A 00 00 05      CMP byte ptr [EBX + 0x1a5f],0x5
005A4A71  0F 85 30 42 00 00         JNZ 0x005a8ca7
005A4A77  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005A4A7C  3B C7                     CMP EAX,EDI
005A4A7E  74 51                     JZ 0x005a4ad1
005A4A80  8B F8                     MOV EDI,EAX
005A4A82  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005A4A89  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A4A92  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005A4A98  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005A4A9E  50                        PUSH EAX
005A4A9F  51                        PUSH ECX
005A4AA0  6A 00                     PUSH 0x0
005A4AA2  8B CF                     MOV ECX,EDI
005A4AA4  E8 D5 05 E6 FF            CALL 0x0040507e
005A4AA9  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005A4AAF  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005A4AB5  52                        PUSH EDX
005A4AB6  50                        PUSH EAX
005A4AB7  8B CF                     MOV ECX,EDI
005A4AB9  E8 60 D9 E5 FF            CALL 0x0040241e
005A4ABE  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005A4AC5  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
005A4ACF  33 FF                     XOR EDI,EDI
LAB_005a4ad1:
005A4AD1  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A4AD4  3B C7                     CMP EAX,EDI
005A4AD6  74 7B                     JZ 0x005a4b53
005A4AD8  0F 86 C9 41 00 00         JBE 0x005a8ca7
005A4ADE  83 F8 02                  CMP EAX,0x2
005A4AE1  0F 87 C0 41 00 00         JA 0x005a8ca7
005A4AE7  B9 06 00 00 00            MOV ECX,0x6
005A4AEC  B8 01 00 01 00            MOV EAX,0x10001
005A4AF1  8D BD 04 FD FF FF         LEA EDI,[EBP + 0xfffffd04]
005A4AF7  F3 AB                     STOSD.REP ES:EDI
005A4AF9  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005A4AFF  66 AB                     STOSW ES:EDI
005A4B01  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005A4B07  85 C9                     TEST ECX,ECX
005A4B09  74 0C                     JZ 0x005a4b17
005A4B0B  8D 95 04 FD FF FF         LEA EDX,[EBP + 0xfffffd04]
005A4B11  52                        PUSH EDX
005A4B12  E8 3A 00 E6 FF            CALL 0x00404b51
LAB_005a4b17:
005A4B17  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A4B1D  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A4B23  85 C9                     TEST ECX,ECX
005A4B25  0F 84 7C 41 00 00         JZ 0x005a8ca7
005A4B2B  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005A4B2E  6A 00                     PUSH 0x0
005A4B30  4A                        DEC EDX
005A4B31  6A 00                     PUSH 0x0
005A4B33  F7 DA                     NEG EDX
005A4B35  1B D2                     SBB EDX,EDX
005A4B37  6A 00                     PUSH 0x0
005A4B39  83 E2 0A                  AND EDX,0xa
005A4B3C  6A 00                     PUSH 0x0
005A4B3E  6A 00                     PUSH 0x0
005A4B40  81 C2 8E 25 00 00         ADD EDX,0x258e
005A4B46  6A 00                     PUSH 0x0
005A4B48  52                        PUSH EDX
005A4B49  E8 5A F4 E5 FF            CALL 0x00403fa8
005A4B4E  E9 54 41 00 00            JMP 0x005a8ca7
LAB_005a4b53:
005A4B53  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005A4B56  C7 43 2D 52 69 00 00      MOV dword ptr [EBX + 0x2d],0x6952
005A4B5D  8B 03                     MOV EAX,dword ptr [EBX]
005A4B5F  51                        PUSH ECX
005A4B60  8B CB                     MOV ECX,EBX
005A4B62  FF 10                     CALL dword ptr [EAX]
005A4B64  E9 3E 41 00 00            JMP 0x005a8ca7
switchD_005a47af::caseD_6155:
005A4B69  80 BB 5F 1A 00 00 04      CMP byte ptr [EBX + 0x1a5f],0x4
005A4B70  0F 85 31 41 00 00         JNZ 0x005a8ca7
005A4B76  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005A4B7C  85 FF                     TEST EDI,EDI
005A4B7E  74 4D                     JZ 0x005a4bcd
005A4B80  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005A4B87  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A4B90  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005A4B96  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005A4B9C  52                        PUSH EDX
005A4B9D  50                        PUSH EAX
005A4B9E  6A 00                     PUSH 0x0
005A4BA0  8B CF                     MOV ECX,EDI
005A4BA2  E8 D7 04 E6 FF            CALL 0x0040507e
005A4BA7  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005A4BAD  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005A4BB3  51                        PUSH ECX
005A4BB4  52                        PUSH EDX
005A4BB5  8B CF                     MOV ECX,EDI
005A4BB7  E8 62 D8 E5 FF            CALL 0x0040241e
005A4BBC  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005A4BC3  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005a4bcd:
005A4BCD  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A4BD0  85 C0                     TEST EAX,EAX
005A4BD2  0F 84 09 1C 00 00         JZ 0x005a67e1
005A4BD8  0F 86 C9 40 00 00         JBE 0x005a8ca7
005A4BDE  83 F8 06                  CMP EAX,0x6
005A4BE1  0F 87 C0 40 00 00         JA 0x005a8ca7
005A4BE7  B9 06 00 00 00            MOV ECX,0x6
005A4BEC  B8 01 00 01 00            MOV EAX,0x10001
005A4BF1  8D BD B0 FC FF FF         LEA EDI,[EBP + 0xfffffcb0]
005A4BF7  F3 AB                     STOSD.REP ES:EDI
005A4BF9  66 AB                     STOSW ES:EDI
005A4BFB  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A4C01  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A4C07  85 C9                     TEST ECX,ECX
005A4C09  74 0C                     JZ 0x005a4c17
005A4C0B  8D 95 B0 FC FF FF         LEA EDX,[EBP + 0xfffffcb0]
005A4C11  52                        PUSH EDX
005A4C12  E8 3A FF E5 FF            CALL 0x00404b51
LAB_005a4c17:
005A4C17  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A4C1D  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A4C23  85 C9                     TEST ECX,ECX
005A4C25  0F 84 7C 40 00 00         JZ 0x005a8ca7
005A4C2B  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005A4C2E  8D 46 FE                  LEA EAX,[ESI + -0x2]
005A4C31  83 F8 04                  CMP EAX,0x4
005A4C34  77 2A                     JA 0x005a4c60
switchD_005a4c36::switchD:
005A4C36  FF 24 85 C0 8D 5A 00      JMP dword ptr [EAX*0x4 + 0x5a8dc0]
switchD_005a4c36::caseD_2:
005A4C3D  B8 97 25 00 00            MOV EAX,0x2597
005A4C42  EB 21                     JMP 0x005a4c65
switchD_005a4c36::caseD_3:
005A4C44  B8 96 25 00 00            MOV EAX,0x2596
005A4C49  EB 1A                     JMP 0x005a4c65
switchD_005a4c36::caseD_4:
005A4C4B  B8 C3 25 00 00            MOV EAX,0x25c3
005A4C50  EB 13                     JMP 0x005a4c65
switchD_005a4c36::caseD_5:
005A4C52  B8 C4 25 00 00            MOV EAX,0x25c4
005A4C57  EB 0C                     JMP 0x005a4c65
switchD_005a4c36::caseD_6:
005A4C59  B8 C5 25 00 00            MOV EAX,0x25c5
005A4C5E  EB 05                     JMP 0x005a4c65
switchD_005a4c36::default:
005A4C60  B8 8F 25 00 00            MOV EAX,0x258f
LAB_005a4c65:
005A4C65  6A 00                     PUSH 0x0
005A4C67  6A 00                     PUSH 0x0
005A4C69  6A 00                     PUSH 0x0
005A4C6B  6A 00                     PUSH 0x0
005A4C6D  6A 00                     PUSH 0x0
005A4C6F  6A 00                     PUSH 0x0
005A4C71  50                        PUSH EAX
005A4C72  E8 31 F3 E5 FF            CALL 0x00403fa8
005A4C77  E9 2B 40 00 00            JMP 0x005a8ca7
switchD_005a47af::caseD_6156:
005A4C7C  80 BB 5F 1A 00 00 06      CMP byte ptr [EBX + 0x1a5f],0x6
005A4C83  0F 85 1E 40 00 00         JNZ 0x005a8ca7
005A4C89  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005A4C8F  85 FF                     TEST EDI,EDI
005A4C91  74 4D                     JZ 0x005a4ce0
005A4C93  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005A4C9A  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A4CA3  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005A4CA9  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005A4CAF  51                        PUSH ECX
005A4CB0  52                        PUSH EDX
005A4CB1  6A 00                     PUSH 0x0
005A4CB3  8B CF                     MOV ECX,EDI
005A4CB5  E8 C4 03 E6 FF            CALL 0x0040507e
005A4CBA  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005A4CC0  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005A4CC6  50                        PUSH EAX
005A4CC7  51                        PUSH ECX
005A4CC8  8B CF                     MOV ECX,EDI
005A4CCA  E8 4F D7 E5 FF            CALL 0x0040241e
005A4CCF  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005A4CD6  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005a4ce0:
005A4CE0  8B 76 14                  MOV ESI,dword ptr [ESI + 0x14]
005A4CE3  33 C0                     XOR EAX,EAX
005A4CE5  83 EE 0D                  SUB ESI,0xd
005A4CE8  74 0C                     JZ 0x005a4cf6
005A4CEA  83 EE 02                  SUB ESI,0x2
005A4CED  75 0C                     JNZ 0x005a4cfb
005A4CEF  B8 91 25 00 00            MOV EAX,0x2591
005A4CF4  EB 05                     JMP 0x005a4cfb
LAB_005a4cf6:
005A4CF6  B8 90 25 00 00            MOV EAX,0x2590
LAB_005a4cfb:
005A4CFB  85 C0                     TEST EAX,EAX
005A4CFD  0F 84 A4 3F 00 00         JZ 0x005a8ca7
005A4D03  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A4D09  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A4D0F  85 C9                     TEST ECX,ECX
005A4D11  0F 84 90 3F 00 00         JZ 0x005a8ca7
005A4D17  E9 49 FF FF FF            JMP 0x005a4c65
LAB_005a4d1c:
005A4D1C  57                        PUSH EDI
005A4D1D  8D 83 28 1B 00 00         LEA EAX,[EBX + 0x1b28]
005A4D23  56                        PUSH ESI
005A4D24  50                        PUSH EAX
005A4D25  8B CB                     MOV ECX,EBX
005A4D27  E8 A8 E4 E5 FF            CALL 0x004031d4
005A4D2C  E9 76 3F 00 00            JMP 0x005a8ca7
LAB_005a4d31:
005A4D31  2D 34 63 00 00            SUB EAX,0x6334
005A4D36  74 51                     JZ 0x005a4d89
005A4D38  48                        DEC EAX
005A4D39  0F 85 68 3F 00 00         JNZ 0x005a8ca7
005A4D3F  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005A4D42  33 D2                     XOR EDX,EDX
005A4D44  66 8B 56 16               MOV DX,word ptr [ESI + 0x16]
005A4D48  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005A4D4B  03 C2                     ADD EAX,EDX
005A4D4D  89 83 6A 1C 00 00         MOV dword ptr [EBX + 0x1c6a],EAX
005A4D53  8B 83 4E 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c4e]
005A4D59  83 F8 FF                  CMP EAX,-0x1
005A4D5C  0F 84 45 3F 00 00         JZ 0x005a8ca7
005A4D62  8B 8B 6A 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c6a]
005A4D68  8B 93 66 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c66]
005A4D6E  51                        PUSH ECX
005A4D6F  8B 8B 52 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c52]
005A4D75  52                        PUSH EDX
005A4D76  8B 93 92 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c92]
005A4D7C  51                        PUSH ECX
005A4D7D  50                        PUSH EAX
005A4D7E  52                        PUSH EDX
005A4D7F  E8 AC E9 10 00            CALL 0x006b3730
005A4D84  E9 1E 3F 00 00            JMP 0x005a8ca7
LAB_005a4d89:
005A4D89  57                        PUSH EDI
005A4D8A  8D 83 B9 1B 00 00         LEA EAX,[EBX + 0x1bb9]
005A4D90  56                        PUSH ESI
005A4D91  50                        PUSH EAX
005A4D92  8B CB                     MOV ECX,EBX
005A4D94  E8 3B E4 E5 FF            CALL 0x004031d4
005A4D99  E9 09 3F 00 00            JMP 0x005a8ca7
LAB_005a4d9e:
005A4D9E  33 C0                     XOR EAX,EAX
005A4DA0  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005A4DA6  83 E8 03                  SUB EAX,0x3
005A4DA9  0F 84 41 05 00 00         JZ 0x005a52f0
005A4DAF  83 E8 04                  SUB EAX,0x4
005A4DB2  0F 84 83 03 00 00         JZ 0x005a513b
005A4DB8  48                        DEC EAX
005A4DB9  0F 85 E8 3E 00 00         JNZ 0x005a8ca7
005A4DBF  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A4DC5  3B F7                     CMP ESI,EDI
005A4DC7  74 0D                     JZ 0x005a4dd6
005A4DC9  80 BE 93 04 00 00 05      CMP byte ptr [ESI + 0x493],0x5
005A4DD0  0F 84 D1 3E 00 00         JZ 0x005a8ca7
LAB_005a4dd6:
005A4DD6  39 BB BE 1E 00 00         CMP dword ptr [EBX + 0x1ebe],EDI
005A4DDC  0F 84 C5 3E 00 00         JZ 0x005a8ca7
005A4DE2  3B F7                     CMP ESI,EDI
005A4DE4  74 4C                     JZ 0x005a4e32
005A4DE6  C6 86 93 04 00 00 05      MOV byte ptr [ESI + 0x493],0x5
005A4DED  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A4DF6  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
005A4DFC  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
005A4E02  51                        PUSH ECX
005A4E03  52                        PUSH EDX
005A4E04  57                        PUSH EDI
005A4E05  8B CE                     MOV ECX,ESI
005A4E07  E8 72 02 E6 FF            CALL 0x0040507e
005A4E0C  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A4E12  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A4E18  50                        PUSH EAX
005A4E19  51                        PUSH ECX
005A4E1A  8B CE                     MOV ECX,ESI
005A4E1C  E8 FD D5 E5 FF            CALL 0x0040241e
005A4E21  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A4E28  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a4e32:
005A4E32  C7 43 2D 26 00 00 00      MOV dword ptr [EBX + 0x2d],0x26
005A4E39  8B 83 20 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b20]
005A4E3F  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005A4E42  8B CB                     MOV ECX,EBX
005A4E44  52                        PUSH EDX
005A4E45  50                        PUSH EAX
005A4E46  6A 02                     PUSH 0x2
005A4E48  E8 33 12 14 00            CALL 0x006e6080
005A4E4D  8B 83 BE 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ebe]
005A4E53  8B 4B 31                  MOV ECX,dword ptr [EBX + 0x31]
005A4E56  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
005A4E59  0F 83 48 3E 00 00         JNC 0x005a8ca7
005A4E5F  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A4E62  C6 45 EF 01               MOV byte ptr [EBP + -0x11],0x1
005A4E66  0F AF F1                  IMUL ESI,ECX
005A4E69  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005A4E6C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005A4E6F  0F 84 32 3E 00 00         JZ 0x005a8ca7
005A4E75  8D 56 4C                  LEA EDX,[ESI + 0x4c]
005A4E78  83 C9 FF                  OR ECX,0xffffffff
005A4E7B  8B FA                     MOV EDI,EDX
005A4E7D  33 C0                     XOR EAX,EAX
005A4E7F  F2 AE                     SCASB.REPNE ES:EDI
005A4E81  F7 D1                     NOT ECX
005A4E83  49                        DEC ECX
005A4E84  0F 84 C9 00 00 00         JZ 0x005a4f53
005A4E8A  8B 83 EC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1aec]
005A4E90  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A4E93  85 C9                     TEST ECX,ECX
005A4E95  7E 07                     JLE 0x005a4e9e
005A4E97  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005A4E9A  8B 31                     MOV ESI,dword ptr [ECX]
005A4E9C  EB 02                     JMP 0x005a4ea0
LAB_005a4e9e:
005A4E9E  33 F6                     XOR ESI,ESI
LAB_005a4ea0:
005A4EA0  8B FA                     MOV EDI,EDX
LAB_005a4ea2:
005A4EA2  8A 17                     MOV DL,byte ptr [EDI]
005A4EA4  8A 0E                     MOV CL,byte ptr [ESI]
005A4EA6  8A C2                     MOV AL,DL
005A4EA8  3A D1                     CMP DL,CL
005A4EAA  75 1E                     JNZ 0x005a4eca
005A4EAC  84 C0                     TEST AL,AL
005A4EAE  74 16                     JZ 0x005a4ec6
005A4EB0  8A 4F 01                  MOV CL,byte ptr [EDI + 0x1]
005A4EB3  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005A4EB6  8A C1                     MOV AL,CL
005A4EB8  3A CA                     CMP CL,DL
005A4EBA  75 0E                     JNZ 0x005a4eca
005A4EBC  83 C7 02                  ADD EDI,0x2
005A4EBF  83 C6 02                  ADD ESI,0x2
005A4EC2  84 C0                     TEST AL,AL
005A4EC4  75 DC                     JNZ 0x005a4ea2
LAB_005a4ec6:
005A4EC6  33 C0                     XOR EAX,EAX
005A4EC8  EB 05                     JMP 0x005a4ecf
LAB_005a4eca:
005A4ECA  1B C0                     SBB EAX,EAX
005A4ECC  83 D8 FF                  SBB EAX,-0x1
LAB_005a4ecf:
005A4ECF  85 C0                     TEST EAX,EAX
005A4ED1  74 7D                     JZ 0x005a4f50
005A4ED3  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005A4ED9  C6 45 EF 00               MOV byte ptr [EBP + -0x11],0x0
005A4EDD  8B CF                     MOV ECX,EDI
005A4EDF  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005A4EE6  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A4EEF  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005A4EF5  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005A4EFB  52                        PUSH EDX
005A4EFC  50                        PUSH EAX
005A4EFD  6A 00                     PUSH 0x0
005A4EFF  E8 7A 01 E6 FF            CALL 0x0040507e
005A4F04  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005A4F0A  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005A4F10  51                        PUSH ECX
005A4F11  52                        PUSH EDX
005A4F12  8B CF                     MOV ECX,EDI
005A4F14  E8 05 D5 E5 FF            CALL 0x0040241e
005A4F19  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005A4F20  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
005A4F2A  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A4F30  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A4F36  85 C9                     TEST ECX,ECX
005A4F38  74 16                     JZ 0x005a4f50
005A4F3A  6A 00                     PUSH 0x0
005A4F3C  6A 00                     PUSH 0x0
005A4F3E  6A 00                     PUSH 0x0
005A4F40  6A 00                     PUSH 0x0
005A4F42  6A 00                     PUSH 0x0
005A4F44  6A 00                     PUSH 0x0
005A4F46  68 8B 25 00 00            PUSH 0x258b
005A4F4B  E8 58 F0 E5 FF            CALL 0x00403fa8
LAB_005a4f50:
005A4F50  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_005a4f53:
005A4F53  8A 45 EF                  MOV AL,byte ptr [EBP + -0x11]
005A4F56  84 C0                     TEST AL,AL
005A4F58  0F 84 49 3D 00 00         JZ 0x005a8ca7
005A4F5E  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005A4F64  E8 8B E5 E5 FF            CALL 0x004034f4
005A4F69  83 C6 5C                  ADD ESI,0x5c
005A4F6C  8D 8D D8 FD FF FF         LEA ECX,[EBP + 0xfffffdd8]
005A4F72  56                        PUSH ESI
005A4F73  51                        PUSH ECX
005A4F74  E8 27 12 11 00            CALL 0x006b61a0
005A4F79  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
005A4F7F  8D 8D 54 FC FF FF         LEA ECX,[EBP + 0xfffffc54]
005A4F85  8D 85 50 FC FF FF         LEA EAX,[EBP + 0xfffffc50]
005A4F8B  6A 00                     PUSH 0x0
005A4F8D  51                        PUSH ECX
005A4F8E  89 95 50 FC FF FF         MOV dword ptr [EBP + 0xfffffc50],EDX
005A4F94  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A4F99  E8 52 88 18 00            CALL 0x0072d7f0
005A4F9E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005A4FA1  83 C4 08                  ADD ESP,0x8
005A4FA4  85 C0                     TEST EAX,EAX
005A4FA6  75 28                     JNZ 0x005a4fd0
005A4FA8  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
005A4FAB  8D 95 D8 FD FF FF         LEA EDX,[EBP + 0xfffffdd8]
005A4FB1  52                        PUSH EDX
005A4FB2  50                        PUSH EAX
005A4FB3  68 F0 D6 7C 00            PUSH 0x7cd6f0
005A4FB8  68 64 17 81 00            PUSH 0x811764
005A4FBD  E8 8E 1A 11 00            CALL 0x006b6a50
005A4FC2  8B 8D 50 FC FF FF         MOV ECX,dword ptr [EBP + 0xfffffc50]
005A4FC8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A4FCE  EB 0C                     JMP 0x005a4fdc
LAB_005a4fd0:
005A4FD0  8B 95 50 FC FF FF         MOV EDX,dword ptr [EBP + 0xfffffc50]
005A4FD6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_005a4fdc:
005A4FDC  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005A4FE2  85 FF                     TEST EDI,EDI
005A4FE4  74 4D                     JZ 0x005a5033
005A4FE6  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005A4FEC  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005A4FF2  50                        PUSH EAX
005A4FF3  51                        PUSH ECX
005A4FF4  6A 00                     PUSH 0x0
005A4FF6  8B CF                     MOV ECX,EDI
005A4FF8  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005A4FFF  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A5008  E8 71 00 E6 FF            CALL 0x0040507e
005A500D  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005A5013  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005A5019  52                        PUSH EDX
005A501A  50                        PUSH EAX
005A501B  8B CF                     MOV ECX,EDI
005A501D  E8 FC D3 E5 FF            CALL 0x0040241e
005A5022  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005A5029  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005a5033:
005A5033  A1 64 17 81 00            MOV EAX,[0x00811764]
005A5038  85 C0                     TEST EAX,EAX
005A503A  0F 84 C9 00 00 00         JZ 0x005a5109
005A5040  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005A5043  51                        PUSH ECX
005A5044  B9 90 2A 80 00            MOV ECX,0x802a90
005A5049  FF 15 14 C0 85 00         CALL dword ptr [0x0085c014]
005A504F  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005A5055  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
005A5058  8B 42 38                  MOV EAX,dword ptr [EDX + 0x38]
005A505B  C6 05 7E 87 80 00 00      MOV byte ptr [0x0080877e],0x0
005A5062  A3 7F 87 80 00            MOV [0x0080877f],EAX
005A5067  C7 05 BE 87 80 00 00 00 00 00  MOV dword ptr [0x008087be],0x0
005A5071  C6 83 61 1A 00 00 00      MOV byte ptr [EBX + 0x1a61],0x0
005A5078  C6 05 A0 67 80 00 01      MOV byte ptr [0x008067a0],0x1
005A507F  8B 83 C2 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ec2]
005A5085  3D 01 05 00 00            CMP EAX,0x501
005A508A  77 2B                     JA 0x005a50b7
005A508C  74 20                     JZ 0x005a50ae
005A508E  3D 00 02 00 00            CMP EAX,0x200
005A5093  74 10                     JZ 0x005a50a5
005A5095  3D 00 04 00 00            CMP EAX,0x400
005A509A  75 22                     JNZ 0x005a50be
005A509C  C6 05 00 34 80 00 15      MOV byte ptr [0x00803400],0x15
005A50A3  EB 29                     JMP 0x005a50ce
LAB_005a50a5:
005A50A5  C6 05 00 34 80 00 14      MOV byte ptr [0x00803400],0x14
005A50AC  EB 20                     JMP 0x005a50ce
LAB_005a50ae:
005A50AE  C6 05 00 34 80 00 05      MOV byte ptr [0x00803400],0x5
005A50B5  EB 17                     JMP 0x005a50ce
LAB_005a50b7:
005A50B7  3D 02 05 00 00            CMP EAX,0x502
005A50BC  74 09                     JZ 0x005a50c7
LAB_005a50be:
005A50BE  C6 05 00 34 80 00 04      MOV byte ptr [0x00803400],0x4
005A50C5  EB 07                     JMP 0x005a50ce
LAB_005a50c7:
005A50C7  C6 05 00 34 80 00 0C      MOV byte ptr [0x00803400],0xc
LAB_005a50ce:
005A50CE  6A 01                     PUSH 0x1
005A50D0  6A 00                     PUSH 0x0
005A50D2  68 09 61 00 00            PUSH 0x6109
005A50D7  8B CB                     MOV ECX,EBX
005A50D9  E8 E2 E5 E5 FF            CALL 0x004036c0
005A50DE  8B 13                     MOV EDX,dword ptr [EBX]
005A50E0  8B CB                     MOV ECX,EBX
005A50E2  FF 52 08                  CALL dword ptr [EDX + 0x8]
005A50E5  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A50EB  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A50F1  85 C9                     TEST ECX,ECX
005A50F3  0F 84 AE 3B 00 00         JZ 0x005a8ca7
005A50F9  6A 01                     PUSH 0x1
005A50FB  6A 00                     PUSH 0x0
005A50FD  6A 01                     PUSH 0x1
005A50FF  E8 A1 CE E5 FF            CALL 0x00401fa5
005A5104  E9 9E 3B 00 00            JMP 0x005a8ca7
LAB_005a5109:
005A5109  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
005A510C  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005A5112  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005A5118  85 C9                     TEST ECX,ECX
005A511A  0F 84 87 3B 00 00         JZ 0x005a8ca7
005A5120  6A 00                     PUSH 0x0
005A5122  6A 00                     PUSH 0x0
005A5124  6A 00                     PUSH 0x0
005A5126  6A 00                     PUSH 0x0
005A5128  6A 00                     PUSH 0x0
005A512A  6A 00                     PUSH 0x0
005A512C  68 95 25 00 00            PUSH 0x2595
005A5131  E8 72 EE E5 FF            CALL 0x00403fa8
005A5136  E9 6C 3B 00 00            JMP 0x005a8ca7
LAB_005a513b:
005A513B  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005A5140  3B C7                     CMP EAX,EDI
005A5142  74 0D                     JZ 0x005a5151
005A5144  80 B8 93 04 00 00 05      CMP byte ptr [EAX + 0x493],0x5
005A514B  0F 84 56 3B 00 00         JZ 0x005a8ca7
LAB_005a5151:
005A5151  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005A5157  E8 98 E3 E5 FF            CALL 0x004034f4
005A515C  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
005A5162  8D 8D 78 FD FF FF         LEA ECX,[EBP + 0xfffffd78]
005A5168  8D 85 74 FD FF FF         LEA EAX,[EBP + 0xfffffd74]
005A516E  57                        PUSH EDI
005A516F  51                        PUSH ECX
005A5170  89 95 74 FD FF FF         MOV dword ptr [EBP + 0xfffffd74],EDX
005A5176  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A517B  E8 70 86 18 00            CALL 0x0072d7f0
005A5180  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
005A5183  83 C4 08                  ADD ESP,0x8
005A5186  3B C7                     CMP EAX,EDI
005A5188  75 43                     JNZ 0x005a51cd
005A518A  33 D2                     XOR EDX,EDX
005A518C  8A 15 62 73 80 00         MOV DL,byte ptr [0x00807362]
005A5192  52                        PUSH EDX
005A5193  E8 B8 0F 11 00            CALL 0x006b6150
005A5198  8B 83 E8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ae8]
005A519E  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005A51A1  7E 07                     JLE 0x005a51aa
005A51A3  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005A51A6  8B 00                     MOV EAX,dword ptr [EAX]
005A51A8  EB 02                     JMP 0x005a51ac
LAB_005a51aa:
005A51AA  33 C0                     XOR EAX,EAX
LAB_005a51ac:
005A51AC  6A 20                     PUSH 0x20
005A51AE  50                        PUSH EAX
005A51AF  57                        PUSH EDI
005A51B0  68 F0 D6 7C 00            PUSH 0x7cd6f0
005A51B5  68 64 17 81 00            PUSH 0x811764
005A51BA  E8 F1 17 11 00            CALL 0x006b69b0
005A51BF  8B 8D 74 FD FF FF         MOV ECX,dword ptr [EBP + 0xfffffd74]
005A51C5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A51CB  EB 2F                     JMP 0x005a51fc
LAB_005a51cd:
005A51CD  8B 95 74 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffd74]
005A51D3  68 38 C6 7C 00            PUSH 0x7cc638
005A51D8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A51DD  50                        PUSH EAX
005A51DE  57                        PUSH EDI
005A51DF  68 08 0C 00 00            PUSH 0xc08
005A51E4  68 70 BF 7C 00            PUSH 0x7cbf70
005A51E9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A51EF  E8 DC 82 10 00            CALL 0x006ad4d0
005A51F4  83 C4 18                  ADD ESP,0x18
005A51F7  85 C0                     TEST EAX,EAX
005A51F9  74 01                     JZ 0x005a51fc
005A51FB  CC                        INT3
LAB_005a51fc:
005A51FC  A1 64 17 81 00            MOV EAX,[0x00811764]
005A5201  3B C7                     CMP EAX,EDI
005A5203  0F 84 BE 00 00 00         JZ 0x005a52c7
005A5209  83 C0 18                  ADD EAX,0x18
005A520C  50                        PUSH EAX
005A520D  8D 85 4C F9 FF FF         LEA EAX,[EBP + 0xfffff94c]
005A5213  50                        PUSH EAX
005A5214  E8 47 0F 11 00            CALL 0x006b6160
005A5219  8B 83 EC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1aec]
005A521F  C6 85 6C F9 FF FF 00      MOV byte ptr [EBP + 0xfffff96c],0x0
005A5226  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005A5229  7E 07                     JLE 0x005a5232
005A522B  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005A522E  8B 09                     MOV ECX,dword ptr [ECX]
005A5230  EB 02                     JMP 0x005a5234
LAB_005a5232:
005A5232  33 C9                     XOR ECX,ECX
LAB_005a5234:
005A5234  8B 83 E8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ae8]
005A523A  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005A523D  7E 07                     JLE 0x005a5246
005A523F  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005A5242  8B 02                     MOV EAX,dword ptr [EDX]
005A5244  EB 02                     JMP 0x005a5248
LAB_005a5246:
005A5246  33 C0                     XOR EAX,EAX
LAB_005a5248:
005A5248  8D 95 4C F9 FF FF         LEA EDX,[EBP + 0xfffff94c]
005A524E  52                        PUSH EDX
005A524F  51                        PUSH ECX
005A5250  50                        PUSH EAX
005A5251  8B 83 C2 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ec2]
005A5257  68 E0 17 00 00            PUSH 0x17e0
005A525C  50                        PUSH EAX
005A525D  B9 90 2A 80 00            MOV ECX,0x802a90
005A5262  FF 15 3C C0 85 00         CALL dword ptr [0x0085c03c]
005A5268  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A526E  3B F7                     CMP ESI,EDI
005A5270  0F 84 31 3A 00 00         JZ 0x005a8ca7
005A5276  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
005A527C  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
005A5282  51                        PUSH ECX
005A5283  52                        PUSH EDX
005A5284  57                        PUSH EDI
005A5285  8B CE                     MOV ECX,ESI
005A5287  C6 86 93 04 00 00 05      MOV byte ptr [ESI + 0x493],0x5
005A528E  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A5297  E8 E2 FD E5 FF            CALL 0x0040507e
005A529C  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A52A2  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A52A8  50                        PUSH EAX
005A52A9  51                        PUSH ECX
LAB_005a52aa:
005A52AA  8B CE                     MOV ECX,ESI
005A52AC  E8 6D D1 E5 FF            CALL 0x0040241e
005A52B1  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A52B8  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
005A52C2  E9 E0 39 00 00            JMP 0x005a8ca7
LAB_005a52c7:
005A52C7  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A52CD  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A52D3  3B CF                     CMP ECX,EDI
005A52D5  0F 84 CC 39 00 00         JZ 0x005a8ca7
005A52DB  57                        PUSH EDI
005A52DC  57                        PUSH EDI
005A52DD  57                        PUSH EDI
005A52DE  57                        PUSH EDI
005A52DF  57                        PUSH EDI
005A52E0  57                        PUSH EDI
005A52E1  68 94 25 00 00            PUSH 0x2594
005A52E6  E8 BD EC E5 FF            CALL 0x00403fa8
005A52EB  E9 B7 39 00 00            JMP 0x005a8ca7
LAB_005a52f0:
005A52F0  8B 03                     MOV EAX,dword ptr [EBX]
005A52F2  8B CB                     MOV ECX,EBX
005A52F4  FF 50 08                  CALL dword ptr [EAX + 0x8]
005A52F7  C6 83 61 1A 00 00 04      MOV byte ptr [EBX + 0x1a61],0x4
005A52FE  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A5304  39 B8 E6 02 00 00         CMP dword ptr [EAX + 0x2e6],EDI
005A530A  0F 84 97 39 00 00         JZ 0x005a8ca7
005A5310  33 C9                     XOR ECX,ECX
005A5312  8D 95 24 FF FF FF         LEA EDX,[EBP + 0xffffff24]
005A5318  89 8D 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],ECX
005A531E  52                        PUSH EDX
005A531F  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
005A5325  C6 85 25 FF FF FF 01      MOV byte ptr [EBP + 0xffffff25],0x1
005A532C  89 8D 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],ECX
005A5332  C6 85 24 FF FF FF 01      MOV byte ptr [EBP + 0xffffff24],0x1
005A5339  88 8D 30 FF FF FF         MOV byte ptr [EBP + 0xffffff30],CL
005A533F  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A5345  E8 51 C7 E5 FF            CALL 0x00401a9b
005A534A  E9 58 39 00 00            JMP 0x005a8ca7
LAB_005a534f:
005A534F  3D 06 69 00 00            CMP EAX,0x6906
005A5354  0F 87 11 0A 00 00         JA 0x005a5d6b
005A535A  0F 84 D6 08 00 00         JZ 0x005a5c36
005A5360  3D 02 69 00 00            CMP EAX,0x6902
005A5365  0F 87 29 04 00 00         JA 0x005a5794
005A536B  0F 84 0D 04 00 00         JZ 0x005a577e
005A5371  3D 00 69 00 00            CMP EAX,0x6900
005A5376  0F 87 05 03 00 00         JA 0x005a5681
005A537C  0F 84 CF 02 00 00         JZ 0x005a5651
005A5382  3D 06 65 00 00            CMP EAX,0x6506
005A5387  74 41                     JZ 0x005a53ca
005A5389  3D FF 68 00 00            CMP EAX,0x68ff
005A538E  0F 85 13 39 00 00         JNZ 0x005a8ca7
005A5394  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A5397  2B C7                     SUB EAX,EDI
005A5399  74 14                     JZ 0x005a53af
005A539B  48                        DEC EAX
005A539C  0F 85 05 39 00 00         JNZ 0x005a8ca7
005A53A2  8B 06                     MOV EAX,dword ptr [ESI]
005A53A4  89 83 B7 1A 00 00         MOV dword ptr [EBX + 0x1ab7],EAX
005A53AA  E9 F8 38 00 00            JMP 0x005a8ca7
LAB_005a53af:
005A53AF  8B 8B B7 1A 00 00         MOV ECX,dword ptr [EBX + 0x1ab7]
005A53B5  8B 06                     MOV EAX,dword ptr [ESI]
005A53B7  3B C8                     CMP ECX,EAX
005A53B9  0F 85 E8 38 00 00         JNZ 0x005a8ca7
005A53BF  89 BB B7 1A 00 00         MOV dword ptr [EBX + 0x1ab7],EDI
005A53C5  E9 DD 38 00 00            JMP 0x005a8ca7
LAB_005a53ca:
005A53CA  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A53D0  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005A53D3  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
005A53D6  0F 83 CB 38 00 00         JNC 0x005a8ca7
005A53DC  8A 8B 5F 1A 00 00         MOV CL,byte ptr [EBX + 0x1a5f]
005A53E2  80 F9 09                  CMP CL,0x9
005A53E5  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005A53E8  0F 85 BC 00 00 00         JNZ 0x005a54aa
005A53EE  3B 8B B6 1E 00 00         CMP ECX,dword ptr [EBX + 0x1eb6]
005A53F4  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A53F7  75 3B                     JNZ 0x005a5434
005A53F9  0F AF CA                  IMUL ECX,EDX
005A53FC  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005A53FF  6A 0F                     PUSH 0xf
005A5401  8B 84 11 04 01 00 00      MOV EAX,dword ptr [ECX + EDX*0x1 + 0x104]
005A5408  8B 0D 48 31 80 00         MOV ECX,dword ptr [0x00803148]
005A540E  51                        PUSH ECX
005A540F  57                        PUSH EDI
005A5410  50                        PUSH EAX
005A5411  B9 90 2A 80 00            MOV ECX,0x802a90
005A5416  A3 40 31 80 00            MOV [0x00803140],EAX
005A541B  FF 15 24 C0 85 00         CALL dword ptr [0x0085c024]
005A5421  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005A5427  85 FF                     TEST EDI,EDI
005A5429  0F 84 05 02 00 00         JZ 0x005a5634
005A542F  E9 B3 01 00 00            JMP 0x005a55e7
LAB_005a5434:
005A5434  0F AF CA                  IMUL ECX,EDX
005A5437  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005A543A  6A 0F                     PUSH 0xf
005A543C  8B 84 11 04 01 00 00      MOV EAX,dword ptr [ECX + EDX*0x1 + 0x104]
005A5443  8B 0D 48 31 80 00         MOV ECX,dword ptr [0x00803148]
005A5449  8B 15 40 31 80 00         MOV EDX,dword ptr [0x00803140]
005A544F  51                        PUSH ECX
005A5450  57                        PUSH EDI
005A5451  52                        PUSH EDX
005A5452  B9 90 2A 80 00            MOV ECX,0x802a90
005A5457  A3 44 31 80 00            MOV [0x00803144],EAX
005A545C  FF 15 24 C0 85 00         CALL dword ptr [0x0085c024]
005A5462  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005A5468  85 FF                     TEST EDI,EDI
005A546A  0F 84 C4 01 00 00         JZ 0x005a5634
005A5470  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005A5476  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005A547C  50                        PUSH EAX
005A547D  51                        PUSH ECX
005A547E  6A 00                     PUSH 0x0
005A5480  8B CF                     MOV ECX,EDI
005A5482  C6 87 93 04 00 00 05      MOV byte ptr [EDI + 0x493],0x5
005A5489  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A5492  E8 E7 FB E5 FF            CALL 0x0040507e
005A5497  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005A549D  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005A54A3  52                        PUSH EDX
005A54A4  50                        PUSH EAX
005A54A5  E9 72 01 00 00            JMP 0x005a561c
LAB_005a54aa:
005A54AA  3B 8B B6 1E 00 00         CMP ECX,dword ptr [EBX + 0x1eb6]
005A54B0  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A54B3  0F 85 E5 00 00 00         JNZ 0x005a559e
005A54B9  0F AF CA                  IMUL ECX,EDX
005A54BC  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005A54BF  8B 84 11 04 01 00 00      MOV EAX,dword ptr [ECX + EDX*0x1 + 0x104]
005A54C6  89 83 C2 1E 00 00         MOV dword ptr [EBX + 0x1ec2],EAX
005A54CC  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005A54D2  3C 08                     CMP AL,0x8
005A54D4  0F 85 5A 01 00 00         JNZ 0x005a5634
005A54DA  8B 93 C2 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ec2]
005A54E0  B9 08 00 00 00            MOV ECX,0x8
005A54E5  33 C0                     XOR EAX,EAX
005A54E7  8D BD B8 FD FF FF         LEA EDI,[EBP + 0xfffffdb8]
005A54ED  F3 AB                     STOSD.REP ES:EDI
005A54EF  8B 83 BA 1E 00 00         MOV EAX,dword ptr [EBX + 0x1eba]
005A54F5  33 C9                     XOR ECX,ECX
005A54F7  81 FA 00 01 00 00         CMP EDX,0x100
005A54FD  C7 83 C6 1E 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x1ec6],0xffffffff
005A5507  0F 94 C1                  SETZ CL
005A550A  85 C0                     TEST EAX,EAX
005A550C  C7 83 CA 1E 00 00 00 00 00 00  MOV dword ptr [EBX + 0x1eca],0x0
005A5516  C7 85 C8 FD FF FF 20 00 00 00  MOV dword ptr [EBP + 0xfffffdc8],0x20
005A5520  89 8D CC FD FF FF         MOV dword ptr [EBP + 0xfffffdcc],ECX
005A5526  74 11                     JZ 0x005a5539
005A5528  8D 95 B8 FD FF FF         LEA EDX,[EBP + 0xfffffdb8]
005A552E  8B CB                     MOV ECX,EBX
005A5530  52                        PUSH EDX
005A5531  50                        PUSH EAX
005A5532  6A 02                     PUSH 0x2
005A5534  E8 47 0B 14 00            CALL 0x006e6080
LAB_005a5539:
005A5539  8B 83 C2 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ec2]
005A553F  6A 00                     PUSH 0x0
005A5541  50                        PUSH EAX
005A5542  B9 90 2A 80 00            MOV ECX,0x802a90
005A5547  FF 15 1C C0 85 00         CALL dword ptr [0x0085c01c]
005A554D  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005A5553  89 83 63 1A 00 00         MOV dword ptr [EBX + 0x1a63],EAX
005A5559  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005A555F  85 FF                     TEST EDI,EDI
005A5561  0F 84 CD 00 00 00         JZ 0x005a5634
005A5567  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005A556D  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005A5573  51                        PUSH ECX
005A5574  52                        PUSH EDX
005A5575  6A 00                     PUSH 0x0
005A5577  8B CF                     MOV ECX,EDI
005A5579  C6 87 93 04 00 00 05      MOV byte ptr [EDI + 0x493],0x5
005A5580  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A5589  E8 F0 FA E5 FF            CALL 0x0040507e
005A558E  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005A5594  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005A559A  50                        PUSH EAX
005A559B  51                        PUSH ECX
005A559C  EB 7E                     JMP 0x005a561c
LAB_005a559e:
005A559E  0F AF CA                  IMUL ECX,EDX
005A55A1  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005A55A4  57                        PUSH EDI
005A55A5  03 CA                     ADD ECX,EDX
005A55A7  8B 91 04 01 00 00         MOV EDX,dword ptr [ECX + 0x104]
005A55AD  89 93 C6 1E 00 00         MOV dword ptr [EBX + 0x1ec6],EDX
005A55B3  8B 81 08 01 00 00         MOV EAX,dword ptr [ECX + 0x108]
005A55B9  8B 8B C2 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ec2]
005A55BF  89 83 CA 1E 00 00         MOV dword ptr [EBX + 0x1eca],EAX
005A55C5  51                        PUSH ECX
005A55C6  B9 90 2A 80 00            MOV ECX,0x802a90
005A55CB  FF 15 1C C0 85 00         CALL dword ptr [0x0085c01c]
005A55D1  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005A55D7  89 83 63 1A 00 00         MOV dword ptr [EBX + 0x1a63],EAX
005A55DD  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005A55E3  85 FF                     TEST EDI,EDI
005A55E5  74 4D                     JZ 0x005a5634
LAB_005a55e7:
005A55E7  C6 87 93 04 00 00 05      MOV byte ptr [EDI + 0x493],0x5
005A55EE  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A55F7  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005A55FD  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005A5603  52                        PUSH EDX
005A5604  50                        PUSH EAX
005A5605  6A 00                     PUSH 0x0
005A5607  8B CF                     MOV ECX,EDI
005A5609  E8 70 FA E5 FF            CALL 0x0040507e
005A560E  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005A5614  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005A561A  51                        PUSH ECX
005A561B  52                        PUSH EDX
LAB_005a561c:
005A561C  8B CF                     MOV ECX,EDI
005A561E  E8 FB CD E5 FF            CALL 0x0040241e
005A5623  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005A562A  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005a5634:
005A5634  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005A563B  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005A563E  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005A5641  50                        PUSH EAX
005A5642  51                        PUSH ECX
005A5643  6A 02                     PUSH 0x2
005A5645  8B CB                     MOV ECX,EBX
005A5647  E8 34 0A 14 00            CALL 0x006e6080
005A564C  E9 56 36 00 00            JMP 0x005a8ca7
LAB_005a5651:
005A5651  A0 5F 73 80 00            MOV AL,[0x0080735f]
005A5656  84 C0                     TEST AL,AL
005A5658  0F 94 C2                  SETZ DL
005A565B  88 15 5F 73 80 00         MOV byte ptr [0x0080735f],DL
005A5661  C7 43 2D 05 00 00 00      MOV dword ptr [EBX + 0x2d],0x5
005A5668  8B 8B D0 1A 00 00         MOV ECX,dword ptr [EBX + 0x1ad0]
005A566E  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005A5671  50                        PUSH EAX
005A5672  51                        PUSH ECX
005A5673  6A 02                     PUSH 0x2
005A5675  8B CB                     MOV ECX,EBX
005A5677  E8 04 0A 14 00            CALL 0x006e6080
005A567C  E9 26 36 00 00            JMP 0x005a8ca7
LAB_005a5681:
005A5681  3D 01 69 00 00            CMP EAX,0x6901
005A5686  0F 85 1B 36 00 00         JNZ 0x005a8ca7
005A568C  8A 83 60 1A 00 00         MOV AL,byte ptr [EBX + 0x1a60]
005A5692  84 C0                     TEST AL,AL
005A5694  0F 85 0D 36 00 00         JNZ 0x005a8ca7
005A569A  C7 43 2D 26 00 00 00      MOV dword ptr [EBX + 0x2d],0x26
005A56A1  8B 93 20 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b20]
005A56A7  8D 7B 1D                  LEA EDI,[EBX + 0x1d]
005A56AA  8B CB                     MOV ECX,EBX
005A56AC  57                        PUSH EDI
005A56AD  52                        PUSH EDX
005A56AE  6A 02                     PUSH 0x2
005A56B0  E8 CB 09 14 00            CALL 0x006e6080
005A56B5  8B 8B A6 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ea6]
005A56BB  33 C0                     XOR EAX,EAX
005A56BD  66 8B 43 31               MOV AX,word ptr [EBX + 0x31]
005A56C1  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
005A56C4  73 0B                     JNC 0x005a56d1
005A56C6  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
005A56C9  0F AF F0                  IMUL ESI,EAX
005A56CC  03 71 1C                  ADD ESI,dword ptr [ECX + 0x1c]
005A56CF  EB 02                     JMP 0x005a56d3
LAB_005a56d1:
005A56D1  33 F6                     XOR ESI,ESI
LAB_005a56d3:
005A56D3  85 F6                     TEST ESI,ESI
005A56D5  0F 84 CC 35 00 00         JZ 0x005a8ca7
005A56DB  8B 83 10 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b10]
005A56E1  57                        PUSH EDI
005A56E2  50                        PUSH EAX
005A56E3  6A 02                     PUSH 0x2
005A56E5  8B CB                     MOV ECX,EBX
005A56E7  C7 43 2D 32 00 00 00      MOV dword ptr [EBX + 0x2d],0x32
005A56EE  E8 8D 09 14 00            CALL 0x006e6080
005A56F3  8B 43 31                  MOV EAX,dword ptr [EBX + 0x31]
005A56F6  85 C0                     TEST EAX,EAX
005A56F8  0F 84 A9 35 00 00         JZ 0x005a8ca7
005A56FE  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A5701  85 C9                     TEST ECX,ECX
005A5703  7E 07                     JLE 0x005a570c
005A5705  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005A5708  8B 01                     MOV EAX,dword ptr [ECX]
005A570A  EB 02                     JMP 0x005a570e
LAB_005a570c:
005A570C  33 C0                     XOR EAX,EAX
LAB_005a570e:
005A570E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005A5714  50                        PUSH EAX
005A5715  56                        PUSH ESI
005A5716  52                        PUSH EDX
005A5717  68 68 25 00 00            PUSH 0x2568
005A571C  E8 1F AA 10 00            CALL 0x006b0140
005A5721  50                        PUSH EAX
005A5722  68 2C C6 7C 00            PUSH 0x7cc62c
005A5727  68 3A F3 80 00            PUSH 0x80f33a
005A572C  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A5732  83 C4 14                  ADD ESP,0x14
005A5735  B9 90 2A 80 00            MOV ECX,0x802a90
005A573A  68 3A F3 80 00            PUSH 0x80f33a
005A573F  FF 15 64 C0 85 00         CALL dword ptr [0x0085c064]
005A5745  8B 83 A2 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea2]
005A574B  68 A0 16 80 00            PUSH 0x8016a0
005A5750  6A 00                     PUSH 0x0
005A5752  50                        PUSH EAX
005A5753  E8 C8 08 11 00            CALL 0x006b6020
005A5758  8B 8B A2 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ea2]
005A575E  8B 93 10 1B 00 00         MOV EDX,dword ptr [EBX + 0x1b10]
005A5764  C7 43 2D 33 00 00 00      MOV dword ptr [EBX + 0x2d],0x33
005A576B  57                        PUSH EDI
005A576C  89 4B 31                  MOV dword ptr [EBX + 0x31],ECX
005A576F  52                        PUSH EDX
005A5770  6A 02                     PUSH 0x2
005A5772  8B CB                     MOV ECX,EBX
005A5774  E8 07 09 14 00            CALL 0x006e6080
005A5779  E9 29 35 00 00            JMP 0x005a8ca7
LAB_005a577e:
005A577E  8B 93 E8 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ae8]
005A5784  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
005A5787  3B F7                     CMP ESI,EDI
005A5789  0F 8E 07 34 00 00         JLE 0x005a8b96
005A578F  E9 FD 33 00 00            JMP 0x005a8b91
LAB_005a5794:
005A5794  2D 03 69 00 00            SUB EAX,0x6903
005A5799  0F 84 F5 03 00 00         JZ 0x005a5b94
005A579F  48                        DEC EAX
005A57A0  0F 84 66 01 00 00         JZ 0x005a590c
005A57A6  48                        DEC EAX
005A57A7  0F 85 FA 34 00 00         JNZ 0x005a8ca7
005A57AD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005A57B0  8B 93 B3 1F 00 00         MOV EDX,dword ptr [EBX + 0x1fb3]
005A57B6  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005A57B9  C7 83 43 1F 00 00 06 65 00 00  MOV dword ptr [EBX + 0x1f43],0x6506
005A57C3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005A57C6  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A57C9  C7 83 63 1F 00 00 8C 69 00 00  MOV dword ptr [EBX + 0x1f63],0x698c
005A57D3  89 8B 4B 1F 00 00         MOV dword ptr [EBX + 0x1f4b],ECX
005A57D9  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
005A57E0  C7 83 BB 20 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x20bb],0xffffffff
005A57EA  A1 18 76 80 00            MOV EAX,[0x00807618]
005A57EF  50                        PUSH EAX
005A57F0  68 5C 23 00 00            PUSH 0x235c
005A57F5  E8 46 A9 10 00            CALL 0x006b0140
005A57FA  8B F8                     MOV EDI,EAX
005A57FC  83 C9 FF                  OR ECX,0xffffffff
005A57FF  33 C0                     XOR EAX,EAX
005A5801  F2 AE                     SCASB.REPNE ES:EDI
005A5803  F7 D1                     NOT ECX
005A5805  2B F9                     SUB EDI,ECX
005A5807  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A580D  8B D1                     MOV EDX,ECX
005A580F  8B F7                     MOV ESI,EDI
005A5811  8B F8                     MOV EDI,EAX
005A5813  50                        PUSH EAX
005A5814  C1 E9 02                  SHR ECX,0x2
005A5817  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5819  8B CA                     MOV ECX,EDX
005A581B  83 E1 03                  AND ECX,0x3
005A581E  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5820  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5826  33 F6                     XOR ESI,ESI
005A5828  50                        PUSH EAX
005A5829  89 B3 BF 20 00 00         MOV dword ptr [EBX + 0x20bf],ESI
005A582F  E8 8C 89 10 00            CALL 0x006ae1c0
005A5834  8B 0D 02 C5 80 00         MOV ECX,dword ptr [0x0080c502]
005A583A  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005A583D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005A5840  3B C6                     CMP EAX,ESI
005A5842  76 72                     JBE 0x005a58b6
005A5844  8B D6                     MOV EDX,ESI
005A5846  3B D0                     CMP EDX,EAX
005A5848  73 0D                     JNC 0x005a5857
LAB_005a584a:
005A584A  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
005A584D  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005A5850  0F AF FA                  IMUL EDI,EDX
005A5853  03 F8                     ADD EDI,EAX
005A5855  EB 02                     JMP 0x005a5859
LAB_005a5857:
005A5857  33 FF                     XOR EDI,EDI
LAB_005a5859:
005A5859  85 FF                     TEST EDI,EDI
005A585B  74 4E                     JZ 0x005a58ab
005A585D  8B 8F 90 00 00 00         MOV ECX,dword ptr [EDI + 0x90]
005A5863  33 C0                     XOR EAX,EAX
005A5865  89 8B BB 20 00 00         MOV dword ptr [EBX + 0x20bb],ECX
005A586B  83 C9 FF                  OR ECX,0xffffffff
005A586E  F2 AE                     SCASB.REPNE ES:EDI
005A5870  F7 D1                     NOT ECX
005A5872  2B F9                     SUB EDI,ECX
005A5874  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A587A  8B D1                     MOV EDX,ECX
005A587C  8B F7                     MOV ESI,EDI
005A587E  8B F8                     MOV EDI,EAX
005A5880  50                        PUSH EAX
005A5881  C1 E9 02                  SHR ECX,0x2
005A5884  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5886  8B CA                     MOV ECX,EDX
005A5888  83 E1 03                  AND ECX,0x3
005A588B  F3 A4                     MOVSB.REP ES:EDI,ESI
005A588D  8B 93 B3 1F 00 00         MOV EDX,dword ptr [EBX + 0x1fb3]
005A5893  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005A5896  52                        PUSH EDX
005A5897  89 8B BF 20 00 00         MOV dword ptr [EBX + 0x20bf],ECX
005A589D  E8 1E 89 10 00            CALL 0x006ae1c0
005A58A2  8B 0D 02 C5 80 00         MOV ECX,dword ptr [0x0080c502]
005A58A8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_005a58ab:
005A58AB  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005A58AE  42                        INC EDX
005A58AF  3B D0                     CMP EDX,EAX
005A58B1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005A58B4  72 94                     JC 0x005a584a
LAB_005a58b6:
005A58B6  8B 93 B3 1F 00 00         MOV EDX,dword ptr [EBX + 0x1fb3]
005A58BC  33 C9                     XOR ECX,ECX
005A58BE  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005A58C1  89 8B 73 1F 00 00         MOV dword ptr [EBX + 0x1f73],ECX
005A58C7  89 83 7B 1F 00 00         MOV dword ptr [EBX + 0x1f7b],EAX
005A58CD  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005A58D0  3B CE                     CMP ECX,ESI
005A58D2  73 30                     JNC 0x005a5904
005A58D4  8B BB C6 1E 00 00         MOV EDI,dword ptr [EBX + 0x1ec6]
005A58DA  73 0B                     JNC 0x005a58e7
LAB_005a58dc:
005A58DC  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005A58DF  0F AF C1                  IMUL EAX,ECX
005A58E2  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005A58E5  EB 02                     JMP 0x005a58e9
LAB_005a58e7:
005A58E7  33 C0                     XOR EAX,EAX
LAB_005a58e9:
005A58E9  3B B8 04 01 00 00         CMP EDI,dword ptr [EAX + 0x104]
005A58EF  74 0D                     JZ 0x005a58fe
005A58F1  41                        INC ECX
005A58F2  3B CE                     CMP ECX,ESI
005A58F4  72 E6                     JC 0x005a58dc
005A58F6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005A58F9  E9 5C 02 00 00            JMP 0x005a5b5a
LAB_005a58fe:
005A58FE  89 8B 73 1F 00 00         MOV dword ptr [EBX + 0x1f73],ECX
LAB_005a5904:
005A5904  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005A5907  E9 4E 02 00 00            JMP 0x005a5b5a
LAB_005a590c:
005A590C  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
005A590F  8B 8B B3 1F 00 00         MOV ECX,dword ptr [EBX + 0x1fb3]
005A5915  C7 83 43 1F 00 00 06 65 00 00  MOV dword ptr [EBX + 0x1f43],0x6506
005A591F  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005A5922  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005A5925  C7 83 63 1F 00 00 8C 69 00 00  MOV dword ptr [EBX + 0x1f63],0x698c
005A592F  89 83 4B 1F 00 00         MOV dword ptr [EBX + 0x1f4b],EAX
005A5935  89 79 0C                  MOV dword ptr [ECX + 0xc],EDI
005A5938  80 BB 5F 1A 00 00 08      CMP byte ptr [EBX + 0x1a5f],0x8
005A593F  75 4D                     JNZ 0x005a598e
005A5941  C7 83 BB 20 00 00 00 00 00 00  MOV dword ptr [EBX + 0x20bb],0x0
005A594B  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005A5951  52                        PUSH EDX
005A5952  68 5C 23 00 00            PUSH 0x235c
005A5957  E8 E4 A7 10 00            CALL 0x006b0140
005A595C  8B F8                     MOV EDI,EAX
005A595E  83 C9 FF                  OR ECX,0xffffffff
005A5961  33 C0                     XOR EAX,EAX
005A5963  F2 AE                     SCASB.REPNE ES:EDI
005A5965  F7 D1                     NOT ECX
005A5967  2B F9                     SUB EDI,ECX
005A5969  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A596F  8B D1                     MOV EDX,ECX
005A5971  8B F7                     MOV ESI,EDI
005A5973  8B F8                     MOV EDI,EAX
005A5975  50                        PUSH EAX
005A5976  C1 E9 02                  SHR ECX,0x2
005A5979  F3 A5                     MOVSD.REP ES:EDI,ESI
005A597B  8B CA                     MOV ECX,EDX
005A597D  83 E1 03                  AND ECX,0x3
005A5980  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5982  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5988  50                        PUSH EAX
005A5989  E8 32 88 10 00            CALL 0x006ae1c0
LAB_005a598e:
005A598E  C7 83 BB 20 00 00 00 01 00 00  MOV dword ptr [EBX + 0x20bb],0x100
005A5998  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A599E  51                        PUSH ECX
005A599F  68 41 23 00 00            PUSH 0x2341
005A59A4  E8 97 A7 10 00            CALL 0x006b0140
005A59A9  8B F8                     MOV EDI,EAX
005A59AB  83 C9 FF                  OR ECX,0xffffffff
005A59AE  33 C0                     XOR EAX,EAX
005A59B0  F2 AE                     SCASB.REPNE ES:EDI
005A59B2  F7 D1                     NOT ECX
005A59B4  2B F9                     SUB EDI,ECX
005A59B6  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A59BC  8B D1                     MOV EDX,ECX
005A59BE  8B F7                     MOV ESI,EDI
005A59C0  8B F8                     MOV EDI,EAX
005A59C2  50                        PUSH EAX
005A59C3  C1 E9 02                  SHR ECX,0x2
005A59C6  F3 A5                     MOVSD.REP ES:EDI,ESI
005A59C8  8B CA                     MOV ECX,EDX
005A59CA  83 E1 03                  AND ECX,0x3
005A59CD  F3 A4                     MOVSB.REP ES:EDI,ESI
005A59CF  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A59D5  50                        PUSH EAX
005A59D6  E8 E5 87 10 00            CALL 0x006ae1c0
005A59DB  C7 83 BB 20 00 00 01 05 00 00  MOV dword ptr [EBX + 0x20bb],0x501
005A59E5  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A59EB  51                        PUSH ECX
005A59EC  68 42 23 00 00            PUSH 0x2342
005A59F1  E8 4A A7 10 00            CALL 0x006b0140
005A59F6  8B F8                     MOV EDI,EAX
005A59F8  83 C9 FF                  OR ECX,0xffffffff
005A59FB  33 C0                     XOR EAX,EAX
005A59FD  F2 AE                     SCASB.REPNE ES:EDI
005A59FF  F7 D1                     NOT ECX
005A5A01  2B F9                     SUB EDI,ECX
005A5A03  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A5A09  8B D1                     MOV EDX,ECX
005A5A0B  8B F7                     MOV ESI,EDI
005A5A0D  8B F8                     MOV EDI,EAX
005A5A0F  50                        PUSH EAX
005A5A10  C1 E9 02                  SHR ECX,0x2
005A5A13  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5A15  8B CA                     MOV ECX,EDX
005A5A17  83 E1 03                  AND ECX,0x3
005A5A1A  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5A1C  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5A22  50                        PUSH EAX
005A5A23  E8 98 87 10 00            CALL 0x006ae1c0
005A5A28  C7 83 BB 20 00 00 00 02 00 00  MOV dword ptr [EBX + 0x20bb],0x200
005A5A32  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A5A38  51                        PUSH ECX
005A5A39  68 5A 23 00 00            PUSH 0x235a
005A5A3E  E8 FD A6 10 00            CALL 0x006b0140
005A5A43  8B F8                     MOV EDI,EAX
005A5A45  83 C9 FF                  OR ECX,0xffffffff
005A5A48  33 C0                     XOR EAX,EAX
005A5A4A  F2 AE                     SCASB.REPNE ES:EDI
005A5A4C  F7 D1                     NOT ECX
005A5A4E  2B F9                     SUB EDI,ECX
005A5A50  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A5A56  8B D1                     MOV EDX,ECX
005A5A58  8B F7                     MOV ESI,EDI
005A5A5A  8B F8                     MOV EDI,EAX
005A5A5C  50                        PUSH EAX
005A5A5D  C1 E9 02                  SHR ECX,0x2
005A5A60  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5A62  8B CA                     MOV ECX,EDX
005A5A64  83 E1 03                  AND ECX,0x3
005A5A67  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5A69  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5A6F  50                        PUSH EAX
005A5A70  E8 4B 87 10 00            CALL 0x006ae1c0
005A5A75  C7 83 BB 20 00 00 00 04 00 00  MOV dword ptr [EBX + 0x20bb],0x400
005A5A7F  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A5A85  51                        PUSH ECX
005A5A86  68 5B 23 00 00            PUSH 0x235b
005A5A8B  E8 B0 A6 10 00            CALL 0x006b0140
005A5A90  8B F8                     MOV EDI,EAX
005A5A92  83 C9 FF                  OR ECX,0xffffffff
005A5A95  33 C0                     XOR EAX,EAX
005A5A97  F2 AE                     SCASB.REPNE ES:EDI
005A5A99  F7 D1                     NOT ECX
005A5A9B  2B F9                     SUB EDI,ECX
005A5A9D  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A5AA3  8B D1                     MOV EDX,ECX
005A5AA5  8B F7                     MOV ESI,EDI
005A5AA7  8B F8                     MOV EDI,EAX
005A5AA9  50                        PUSH EAX
005A5AAA  C1 E9 02                  SHR ECX,0x2
005A5AAD  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5AAF  8B CA                     MOV ECX,EDX
005A5AB1  83 E1 03                  AND ECX,0x3
005A5AB4  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5AB6  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5ABC  50                        PUSH EAX
005A5ABD  E8 FE 86 10 00            CALL 0x006ae1c0
005A5AC2  C7 83 BB 20 00 00 02 05 00 00  MOV dword ptr [EBX + 0x20bb],0x502
005A5ACC  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A5AD2  51                        PUSH ECX
005A5AD3  68 5D 23 00 00            PUSH 0x235d
005A5AD8  E8 63 A6 10 00            CALL 0x006b0140
005A5ADD  8B F8                     MOV EDI,EAX
005A5ADF  83 C9 FF                  OR ECX,0xffffffff
005A5AE2  33 C0                     XOR EAX,EAX
005A5AE4  F2 AE                     SCASB.REPNE ES:EDI
005A5AE6  F7 D1                     NOT ECX
005A5AE8  2B F9                     SUB EDI,ECX
005A5AEA  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A5AF0  8B D1                     MOV EDX,ECX
005A5AF2  8B F7                     MOV ESI,EDI
005A5AF4  8B F8                     MOV EDI,EAX
005A5AF6  50                        PUSH EAX
005A5AF7  C1 E9 02                  SHR ECX,0x2
005A5AFA  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5AFC  8B CA                     MOV ECX,EDX
005A5AFE  83 E1 03                  AND ECX,0x3
005A5B01  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5B03  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5B09  50                        PUSH EAX
005A5B0A  E8 B1 86 10 00            CALL 0x006ae1c0
005A5B0F  8B 8B B3 1F 00 00         MOV ECX,dword ptr [EBX + 0x1fb3]
005A5B15  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005A5B18  89 93 7B 1F 00 00         MOV dword ptr [EBX + 0x1f7b],EDX
005A5B1E  33 D2                     XOR EDX,EDX
005A5B20  89 93 73 1F 00 00         MOV dword ptr [EBX + 0x1f73],EDX
005A5B26  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
005A5B29  3B D6                     CMP EDX,ESI
005A5B2B  73 2A                     JNC 0x005a5b57
005A5B2D  8B BB C2 1E 00 00         MOV EDI,dword ptr [EBX + 0x1ec2]
005A5B33  73 0B                     JNC 0x005a5b40
LAB_005a5b35:
005A5B35  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005A5B38  0F AF C2                  IMUL EAX,EDX
005A5B3B  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005A5B3E  EB 02                     JMP 0x005a5b42
LAB_005a5b40:
005A5B40  33 C0                     XOR EAX,EAX
LAB_005a5b42:
005A5B42  3B B8 04 01 00 00         CMP EDI,dword ptr [EAX + 0x104]
005A5B48  74 07                     JZ 0x005a5b51
005A5B4A  42                        INC EDX
005A5B4B  3B D6                     CMP EDX,ESI
005A5B4D  72 E6                     JC 0x005a5b35
005A5B4F  EB 06                     JMP 0x005a5b57
LAB_005a5b51:
005A5B51  89 93 73 1F 00 00         MOV dword ptr [EBX + 0x1f73],EDX
LAB_005a5b57:
005A5B57  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_005a5b5a:
005A5B5A  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
005A5B5D  8B B3 73 1A 00 00         MOV ESI,dword ptr [EBX + 0x1a73]
005A5B63  89 8B 97 1F 00 00         MOV dword ptr [EBX + 0x1f97],ECX
005A5B69  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
005A5B6C  83 C2 0A                  ADD EDX,0xa
005A5B6F  89 93 9F 1F 00 00         MOV dword ptr [EBX + 0x1f9f],EDX
005A5B75  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005A5B78  03 48 28                  ADD ECX,dword ptr [EAX + 0x28]
005A5B7B  89 8B 9B 1F 00 00         MOV dword ptr [EBX + 0x1f9b],ECX
005A5B81  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005A5B87  85 C0                     TEST EAX,EAX
005A5B89  0F 84 08 04 00 00         JZ 0x005a5f97
005A5B8F  E9 FA 03 00 00            JMP 0x005a5f8e
LAB_005a5b94:
005A5B94  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A5B9A  3B F7                     CMP ESI,EDI
005A5B9C  74 4C                     JZ 0x005a5bea
005A5B9E  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A5BA4  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A5BAA  50                        PUSH EAX
005A5BAB  51                        PUSH ECX
005A5BAC  57                        PUSH EDI
005A5BAD  8B CE                     MOV ECX,ESI
005A5BAF  C6 86 93 04 00 00 05      MOV byte ptr [ESI + 0x493],0x5
005A5BB6  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A5BBF  E8 BA F4 E5 FF            CALL 0x0040507e
005A5BC4  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A5BCA  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A5BD0  52                        PUSH EDX
005A5BD1  50                        PUSH EAX
005A5BD2  8B CE                     MOV ECX,ESI
005A5BD4  E8 45 C8 E5 FF            CALL 0x0040241e
005A5BD9  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A5BE0  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a5bea:
005A5BEA  80 BB 5F 1A 00 00 06      CMP byte ptr [EBX + 0x1a5f],0x6
005A5BF1  75 12                     JNZ 0x005a5c05
005A5BF3  B9 90 2A 80 00            MOV ECX,0x802a90
005A5BF8  FF 15 0C C0 85 00         CALL dword ptr [0x0085c00c]
005A5BFE  C6 83 60 1A 00 00 01      MOV byte ptr [EBX + 0x1a60],0x1
LAB_005a5c05:
005A5C05  80 BB 5F 1A 00 00 08      CMP byte ptr [EBX + 0x1a5f],0x8
005A5C0C  0F 85 95 30 00 00         JNZ 0x005a8ca7
005A5C12  8B 8B C2 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ec2]
005A5C18  57                        PUSH EDI
005A5C19  51                        PUSH ECX
005A5C1A  B9 90 2A 80 00            MOV ECX,0x802a90
005A5C1F  FF 15 1C C0 85 00         CALL dword ptr [0x0085c01c]
005A5C25  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005A5C2B  89 83 63 1A 00 00         MOV dword ptr [EBX + 0x1a63],EAX
005A5C31  E9 71 30 00 00            JMP 0x005a8ca7
LAB_005a5c36:
005A5C36  8B 15 30 2A 80 00         MOV EDX,dword ptr [0x00802a30]
005A5C3C  80 BA 93 04 00 00 05      CMP byte ptr [EDX + 0x493],0x5
005A5C43  0F 84 5E 30 00 00         JZ 0x005a8ca7
005A5C49  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005A5C4C  8B 93 B3 1F 00 00         MOV EDX,dword ptr [EBX + 0x1fb3]
005A5C52  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
005A5C55  C7 83 43 1F 00 00 06 65 00 00  MOV dword ptr [EBX + 0x1f43],0x6506
005A5C5F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005A5C62  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A5C65  C7 83 63 1F 00 00 8C 69 00 00  MOV dword ptr [EBX + 0x1f63],0x698c
005A5C6F  89 8B 4B 1F 00 00         MOV dword ptr [EBX + 0x1f4b],ECX
005A5C75  C7 42 0C 00 00 00 00      MOV dword ptr [EDX + 0xc],0x0
005A5C7C  C7 83 BB 20 00 00 01 00 00 00  MOV dword ptr [EBX + 0x20bb],0x1
005A5C86  A1 18 76 80 00            MOV EAX,[0x00807618]
005A5C8B  50                        PUSH EAX
005A5C8C  68 B4 25 00 00            PUSH 0x25b4
005A5C91  E8 AA A4 10 00            CALL 0x006b0140
005A5C96  8B F8                     MOV EDI,EAX
005A5C98  83 C9 FF                  OR ECX,0xffffffff
005A5C9B  33 C0                     XOR EAX,EAX
005A5C9D  F2 AE                     SCASB.REPNE ES:EDI
005A5C9F  F7 D1                     NOT ECX
005A5CA1  2B F9                     SUB EDI,ECX
005A5CA3  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A5CA9  8B D1                     MOV EDX,ECX
005A5CAB  8B F7                     MOV ESI,EDI
005A5CAD  8B F8                     MOV EDI,EAX
005A5CAF  50                        PUSH EAX
005A5CB0  C1 E9 02                  SHR ECX,0x2
005A5CB3  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5CB5  8B CA                     MOV ECX,EDX
005A5CB7  83 E1 03                  AND ECX,0x3
005A5CBA  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5CBC  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5CC2  50                        PUSH EAX
005A5CC3  E8 F8 84 10 00            CALL 0x006ae1c0
005A5CC8  C7 83 BB 20 00 00 02 00 00 00  MOV dword ptr [EBX + 0x20bb],0x2
005A5CD2  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A5CD8  51                        PUSH ECX
005A5CD9  68 B5 25 00 00            PUSH 0x25b5
005A5CDE  E8 5D A4 10 00            CALL 0x006b0140
005A5CE3  8B F8                     MOV EDI,EAX
005A5CE5  83 C9 FF                  OR ECX,0xffffffff
005A5CE8  33 C0                     XOR EAX,EAX
005A5CEA  F2 AE                     SCASB.REPNE ES:EDI
005A5CEC  F7 D1                     NOT ECX
005A5CEE  2B F9                     SUB EDI,ECX
005A5CF0  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A5CF6  8B D1                     MOV EDX,ECX
005A5CF8  8B F7                     MOV ESI,EDI
005A5CFA  8B F8                     MOV EDI,EAX
005A5CFC  50                        PUSH EAX
005A5CFD  C1 E9 02                  SHR ECX,0x2
005A5D00  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5D02  8B CA                     MOV ECX,EDX
005A5D04  83 E1 03                  AND ECX,0x3
005A5D07  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5D09  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5D0F  50                        PUSH EAX
005A5D10  E8 AB 84 10 00            CALL 0x006ae1c0
005A5D15  8B 8B B3 1F 00 00         MOV ECX,dword ptr [EBX + 0x1fb3]
005A5D1B  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005A5D1E  89 93 7B 1F 00 00         MOV dword ptr [EBX + 0x1f7b],EDX
005A5D24  33 D2                     XOR EDX,EDX
005A5D26  89 93 73 1F 00 00         MOV dword ptr [EBX + 0x1f73],EDX
005A5D2C  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
005A5D2F  3B D6                     CMP EDX,ESI
005A5D31  73 30                     JNC 0x005a5d63
005A5D33  8B 3D 40 31 80 00         MOV EDI,dword ptr [0x00803140]
005A5D39  73 0B                     JNC 0x005a5d46
LAB_005a5d3b:
005A5D3B  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005A5D3E  0F AF C2                  IMUL EAX,EDX
005A5D41  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005A5D44  EB 02                     JMP 0x005a5d48
LAB_005a5d46:
005A5D46  33 C0                     XOR EAX,EAX
LAB_005a5d48:
005A5D48  3B B8 04 01 00 00         CMP EDI,dword ptr [EAX + 0x104]
005A5D4E  74 0D                     JZ 0x005a5d5d
005A5D50  42                        INC EDX
005A5D51  3B D6                     CMP EDX,ESI
005A5D53  72 E6                     JC 0x005a5d3b
005A5D55  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005A5D58  E9 FD FD FF FF            JMP 0x005a5b5a
LAB_005a5d5d:
005A5D5D  89 93 73 1F 00 00         MOV dword ptr [EBX + 0x1f73],EDX
LAB_005a5d63:
005A5D63  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005A5D66  E9 EF FD FF FF            JMP 0x005a5b5a
LAB_005a5d6b:
005A5D6B  05 F9 96 FF FF            ADD EAX,0xffff96f9
005A5D70  83 F8 3A                  CMP EAX,0x3a
005A5D73  0F 87 2E 2F 00 00         JA 0x005a8ca7
005A5D79  33 C9                     XOR ECX,ECX
005A5D7B  8A 88 F8 8D 5A 00         MOV CL,byte ptr [EAX + 0x5a8df8]
switchD_005a5d81::switchD:
005A5D81  FF 24 8D D4 8D 5A 00      JMP dword ptr [ECX*0x4 + 0x5a8dd4]
switchD_005a5d81::caseD_6940:
005A5D88  8B CB                     MOV ECX,EBX
005A5D8A  E8 48 C7 E5 FF            CALL 0x004024d7
005A5D8F  E9 13 2F 00 00            JMP 0x005a8ca7
switchD_005a5d81::caseD_693f:
005A5D94  8B CB                     MOV ECX,EBX
005A5D96  E8 47 C1 E5 FF            CALL 0x00401ee2
005A5D9B  E9 07 2F 00 00            JMP 0x005a8ca7
switchD_005a5d81::caseD_6941:
005A5DA0  6A 01                     PUSH 0x1
005A5DA2  57                        PUSH EDI
005A5DA3  68 05 61 00 00            PUSH 0x6105
005A5DA8  8B CB                     MOV ECX,EBX
005A5DAA  E8 11 D9 E5 FF            CALL 0x004036c0
005A5DAF  B9 90 2A 80 00            MOV ECX,0x802a90
005A5DB4  C6 83 61 1A 00 00 00      MOV byte ptr [EBX + 0x1a61],0x0
005A5DBB  FF 15 FC BF 85 00         CALL dword ptr [0x0085bffc]
005A5DC1  8B 13                     MOV EDX,dword ptr [EBX]
005A5DC3  8B CB                     MOV ECX,EBX
005A5DC5  FF 52 08                  CALL dword ptr [EDX + 0x8]
005A5DC8  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A5DCE  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A5DD4  3B CF                     CMP ECX,EDI
005A5DD6  0F 84 CB 2E 00 00         JZ 0x005a8ca7
005A5DDC  6A 01                     PUSH 0x1
005A5DDE  57                        PUSH EDI
005A5DDF  6A 01                     PUSH 0x1
005A5DE1  E8 BF C1 E5 FF            CALL 0x00401fa5
005A5DE6  E9 BC 2E 00 00            JMP 0x005a8ca7
switchD_005a5d81::caseD_6907:
005A5DEB  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005A5DF1  80 B9 93 04 00 00 05      CMP byte ptr [ECX + 0x493],0x5
005A5DF8  0F 84 A9 2E 00 00         JZ 0x005a8ca7
005A5DFE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005A5E01  8B 8B B3 1F 00 00         MOV ECX,dword ptr [EBX + 0x1fb3]
005A5E07  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
005A5E0A  C7 83 43 1F 00 00 06 65 00 00  MOV dword ptr [EBX + 0x1f43],0x6506
005A5E14  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005A5E17  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
005A5E1A  C7 83 63 1F 00 00 8C 69 00 00  MOV dword ptr [EBX + 0x1f63],0x698c
005A5E24  89 83 4B 1F 00 00         MOV dword ptr [EBX + 0x1f4b],EAX
005A5E2A  33 C0                     XOR EAX,EAX
005A5E2C  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
005A5E2F  89 83 BB 20 00 00         MOV dword ptr [EBX + 0x20bb],EAX
005A5E35  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005A5E3B  52                        PUSH EDX
005A5E3C  68 BF 25 00 00            PUSH 0x25bf
005A5E41  E8 FA A2 10 00            CALL 0x006b0140
005A5E46  8B F8                     MOV EDI,EAX
005A5E48  83 C9 FF                  OR ECX,0xffffffff
005A5E4B  33 C0                     XOR EAX,EAX
005A5E4D  F2 AE                     SCASB.REPNE ES:EDI
005A5E4F  F7 D1                     NOT ECX
005A5E51  2B F9                     SUB EDI,ECX
005A5E53  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A5E59  8B D1                     MOV EDX,ECX
005A5E5B  8B F7                     MOV ESI,EDI
005A5E5D  8B F8                     MOV EDI,EAX
005A5E5F  50                        PUSH EAX
005A5E60  C1 E9 02                  SHR ECX,0x2
005A5E63  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5E65  8B CA                     MOV ECX,EDX
005A5E67  83 E1 03                  AND ECX,0x3
005A5E6A  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5E6C  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5E72  50                        PUSH EAX
005A5E73  E8 48 83 10 00            CALL 0x006ae1c0
005A5E78  C7 83 BB 20 00 00 01 00 00 00  MOV dword ptr [EBX + 0x20bb],0x1
005A5E82  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A5E88  51                        PUSH ECX
005A5E89  68 C0 25 00 00            PUSH 0x25c0
005A5E8E  E8 AD A2 10 00            CALL 0x006b0140
005A5E93  8B F8                     MOV EDI,EAX
005A5E95  83 C9 FF                  OR ECX,0xffffffff
005A5E98  33 C0                     XOR EAX,EAX
005A5E9A  F2 AE                     SCASB.REPNE ES:EDI
005A5E9C  F7 D1                     NOT ECX
005A5E9E  2B F9                     SUB EDI,ECX
005A5EA0  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A5EA6  8B D1                     MOV EDX,ECX
005A5EA8  8B F7                     MOV ESI,EDI
005A5EAA  8B F8                     MOV EDI,EAX
005A5EAC  50                        PUSH EAX
005A5EAD  C1 E9 02                  SHR ECX,0x2
005A5EB0  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5EB2  8B CA                     MOV ECX,EDX
005A5EB4  83 E1 03                  AND ECX,0x3
005A5EB7  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5EB9  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5EBF  50                        PUSH EAX
005A5EC0  E8 FB 82 10 00            CALL 0x006ae1c0
005A5EC5  C7 83 BB 20 00 00 02 00 00 00  MOV dword ptr [EBX + 0x20bb],0x2
005A5ECF  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A5ED5  51                        PUSH ECX
005A5ED6  68 C1 25 00 00            PUSH 0x25c1
005A5EDB  E8 60 A2 10 00            CALL 0x006b0140
005A5EE0  8B F8                     MOV EDI,EAX
005A5EE2  83 C9 FF                  OR ECX,0xffffffff
005A5EE5  33 C0                     XOR EAX,EAX
005A5EE7  F2 AE                     SCASB.REPNE ES:EDI
005A5EE9  F7 D1                     NOT ECX
005A5EEB  2B F9                     SUB EDI,ECX
005A5EED  8D 83 B7 1F 00 00         LEA EAX,[EBX + 0x1fb7]
005A5EF3  8B D1                     MOV EDX,ECX
005A5EF5  8B F7                     MOV ESI,EDI
005A5EF7  8B F8                     MOV EDI,EAX
005A5EF9  50                        PUSH EAX
005A5EFA  C1 E9 02                  SHR ECX,0x2
005A5EFD  F3 A5                     MOVSD.REP ES:EDI,ESI
005A5EFF  8B CA                     MOV ECX,EDX
005A5F01  83 E1 03                  AND ECX,0x3
005A5F04  F3 A4                     MOVSB.REP ES:EDI,ESI
005A5F06  8B 83 B3 1F 00 00         MOV EAX,dword ptr [EBX + 0x1fb3]
005A5F0C  50                        PUSH EAX
005A5F0D  E8 AE 82 10 00            CALL 0x006ae1c0
005A5F12  8B 8B B3 1F 00 00         MOV ECX,dword ptr [EBX + 0x1fb3]
005A5F18  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
005A5F1B  89 93 7B 1F 00 00         MOV dword ptr [EBX + 0x1f7b],EDX
005A5F21  33 D2                     XOR EDX,EDX
005A5F23  89 93 73 1F 00 00         MOV dword ptr [EBX + 0x1f73],EDX
005A5F29  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
005A5F2C  3B D6                     CMP EDX,ESI
005A5F2E  73 2A                     JNC 0x005a5f5a
005A5F30  8B 3D 44 31 80 00         MOV EDI,dword ptr [0x00803144]
005A5F36  73 0B                     JNC 0x005a5f43
LAB_005a5f38:
005A5F38  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005A5F3B  0F AF C2                  IMUL EAX,EDX
005A5F3E  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
005A5F41  EB 02                     JMP 0x005a5f45
LAB_005a5f43:
005A5F43  33 C0                     XOR EAX,EAX
LAB_005a5f45:
005A5F45  3B B8 04 01 00 00         CMP EDI,dword ptr [EAX + 0x104]
005A5F4B  74 07                     JZ 0x005a5f54
005A5F4D  42                        INC EDX
005A5F4E  3B D6                     CMP EDX,ESI
005A5F50  72 E6                     JC 0x005a5f38
005A5F52  EB 06                     JMP 0x005a5f5a
LAB_005a5f54:
005A5F54  89 93 73 1F 00 00         MOV dword ptr [EBX + 0x1f73],EDX
LAB_005a5f5a:
005A5F5A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005A5F5D  8B B3 73 1A 00 00         MOV ESI,dword ptr [EBX + 0x1a73]
005A5F63  8B 48 24                  MOV ECX,dword ptr [EAX + 0x24]
005A5F66  89 8B 97 1F 00 00         MOV dword ptr [EBX + 0x1f97],ECX
005A5F6C  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
005A5F6F  83 C2 0A                  ADD EDX,0xa
005A5F72  89 93 9F 1F 00 00         MOV dword ptr [EBX + 0x1f9f],EDX
005A5F78  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005A5F7B  03 48 28                  ADD ECX,dword ptr [EAX + 0x28]
005A5F7E  89 8B 9B 1F 00 00         MOV dword ptr [EBX + 0x1f9b],ECX
005A5F84  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005A5F8A  85 C0                     TEST EAX,EAX
005A5F8C  74 09                     JZ 0x005a5f97
LAB_005a5f8e:
005A5F8E  56                        PUSH ESI
005A5F8F  E8 FC A7 16 00            CALL 0x00710790
005A5F94  83 C4 04                  ADD ESP,0x4
LAB_005a5f97:
005A5F97  8B 96 8A 00 00 00         MOV EDX,dword ptr [ESI + 0x8a]
005A5F9D  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005A5FA0  89 93 77 1F 00 00         MOV dword ptr [EBX + 0x1f77],EDX
005A5FA6  8D 93 33 1F 00 00         LEA EDX,[EBX + 0x1f33]
005A5FAC  8B 01                     MOV EAX,dword ptr [ECX]
005A5FAE  6A 00                     PUSH 0x0
005A5FB0  52                        PUSH EDX
005A5FB1  6A 00                     PUSH 0x0
005A5FB3  6A 00                     PUSH 0x0
005A5FB5  68 EF 00 01 00            PUSH 0x100ef
005A5FBA  FF 50 08                  CALL dword ptr [EAX + 0x8]
005A5FBD  E9 E5 2C 00 00            JMP 0x005a8ca7
switchD_005a5d81::caseD_6908:
005A5FC2  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005A5FC7  80 B8 93 04 00 00 05      CMP byte ptr [EAX + 0x493],0x5
005A5FCE  0F 84 D3 2C 00 00         JZ 0x005a8ca7
005A5FD4  A1 48 31 80 00            MOV EAX,[0x00803148]
005A5FD9  33 C9                     XOR ECX,ECX
005A5FDB  3B C7                     CMP EAX,EDI
005A5FDD  76 16                     JBE 0x005a5ff5
005A5FDF  83 F8 0F                  CMP EAX,0xf
005A5FE2  76 05                     JBE 0x005a5fe9
005A5FE4  83 C0 F1                  ADD EAX,-0xf
005A5FE7  EB 02                     JMP 0x005a5feb
LAB_005a5fe9:
005A5FE9  33 C0                     XOR EAX,EAX
LAB_005a5feb:
005A5FEB  A3 48 31 80 00            MOV [0x00803148],EAX
005A5FF0  B9 01 00 00 00            MOV ECX,0x1
LAB_005a5ff5:
005A5FF5  3B CF                     CMP ECX,EDI
005A5FF7  0F 84 AA 2C 00 00         JZ 0x005a8ca7
005A5FFD  8B 0D 40 31 80 00         MOV ECX,dword ptr [0x00803140]
005A6003  6A 0F                     PUSH 0xf
005A6005  50                        PUSH EAX
005A6006  57                        PUSH EDI
005A6007  51                        PUSH ECX
005A6008  B9 90 2A 80 00            MOV ECX,0x802a90
005A600D  FF 15 24 C0 85 00         CALL dword ptr [0x0085c024]
005A6013  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A6019  3B F7                     CMP ESI,EDI
005A601B  0F 84 86 2C 00 00         JZ 0x005a8ca7
005A6021  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A6027  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A602D  52                        PUSH EDX
005A602E  50                        PUSH EAX
005A602F  57                        PUSH EDI
005A6030  8B CE                     MOV ECX,ESI
005A6032  C6 86 93 04 00 00 05      MOV byte ptr [ESI + 0x493],0x5
005A6039  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A6042  E8 37 F0 E5 FF            CALL 0x0040507e
005A6047  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
005A604D  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
005A6053  51                        PUSH ECX
005A6054  52                        PUSH EDX
005A6055  E9 50 F2 FF FF            JMP 0x005a52aa
switchD_005a5d81::caseD_6909:
005A605A  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005A605F  80 B8 93 04 00 00 05      CMP byte ptr [EAX + 0x493],0x5
005A6066  0F 84 3B 2C 00 00         JZ 0x005a8ca7
005A606C  A1 48 31 80 00            MOV EAX,[0x00803148]
005A6071  33 C9                     XOR ECX,ECX
005A6073  3D 30 42 0F 00            CMP EAX,0xf4230
005A6078  73 0D                     JNC 0x005a6087
005A607A  83 C0 0F                  ADD EAX,0xf
005A607D  B9 01 00 00 00            MOV ECX,0x1
005A6082  A3 48 31 80 00            MOV [0x00803148],EAX
LAB_005a6087:
005A6087  3B CF                     CMP ECX,EDI
005A6089  0F 84 18 2C 00 00         JZ 0x005a8ca7
005A608F  8B 0D 40 31 80 00         MOV ECX,dword ptr [0x00803140]
005A6095  6A 0F                     PUSH 0xf
005A6097  50                        PUSH EAX
005A6098  57                        PUSH EDI
005A6099  51                        PUSH ECX
005A609A  B9 90 2A 80 00            MOV ECX,0x802a90
005A609F  FF 15 24 C0 85 00         CALL dword ptr [0x0085c024]
005A60A5  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A60AB  3B F7                     CMP ESI,EDI
005A60AD  0F 84 F4 2B 00 00         JZ 0x005a8ca7
005A60B3  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A60B9  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A60BF  52                        PUSH EDX
005A60C0  50                        PUSH EAX
005A60C1  57                        PUSH EDI
005A60C2  8B CE                     MOV ECX,ESI
005A60C4  C6 86 93 04 00 00 05      MOV byte ptr [ESI + 0x493],0x5
005A60CB  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A60D4  E8 A5 EF E5 FF            CALL 0x0040507e
005A60D9  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
005A60DF  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
005A60E5  51                        PUSH ECX
005A60E6  52                        PUSH EDX
005A60E7  E9 BE F1 FF FF            JMP 0x005a52aa
switchD_005a5d81::caseD_690a:
005A60EC  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005A60F1  80 B8 93 04 00 00 05      CMP byte ptr [EAX + 0x493],0x5
005A60F8  0F 84 A9 2B 00 00         JZ 0x005a8ca7
005A60FE  8B 93 E8 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ae8]
005A6104  3B D7                     CMP EDX,EDI
005A6106  0F 84 9B 2B 00 00         JZ 0x005a8ca7
005A610C  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
005A610F  3B F7                     CMP ESI,EDI
005A6111  7E 05                     JLE 0x005a6118
005A6113  8B 4A 14                  MOV ECX,dword ptr [EDX + 0x14]
005A6116  8B 39                     MOV EDI,dword ptr [ECX]
LAB_005a6118:
005A6118  83 C9 FF                  OR ECX,0xffffffff
005A611B  33 C0                     XOR EAX,EAX
005A611D  F2 AE                     SCASB.REPNE ES:EDI
005A611F  F7 D1                     NOT ECX
005A6121  49                        DEC ECX
005A6122  0F 84 7F 2B 00 00         JZ 0x005a8ca7
005A6128  85 F6                     TEST ESI,ESI
005A612A  7E 07                     JLE 0x005a6133
005A612C  8B 52 14                  MOV EDX,dword ptr [EDX + 0x14]
005A612F  8B 02                     MOV EAX,dword ptr [EDX]
005A6131  EB 02                     JMP 0x005a6135
LAB_005a6133:
005A6133  33 C0                     XOR EAX,EAX
LAB_005a6135:
005A6135  6A 0F                     PUSH 0xf
005A6137  50                        PUSH EAX
005A6138  A1 40 31 80 00            MOV EAX,[0x00803140]
005A613D  6A 00                     PUSH 0x0
005A613F  50                        PUSH EAX
005A6140  B9 90 2A 80 00            MOV ECX,0x802a90
005A6145  FF 15 00 C0 85 00         CALL dword ptr [0x0085c000]
005A614B  E9 00 0D 00 00            JMP 0x005a6e50
switchD_005a5d81::caseD_6913:
005A6150  8A 56 10                  MOV DL,byte ptr [ESI + 0x10]
005A6153  8B 8B E3 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ee3]
005A6159  80 EA 13                  SUB DL,0x13
005A615C  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
005A615F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005A6162  25 FF 00 00 00            AND EAX,0xff
005A6167  3B C1                     CMP EAX,ECX
005A6169  0F 83 38 2B 00 00         JNC 0x005a8ca7
005A616F  8B 8B DB 1E 00 00         MOV ECX,dword ptr [EBX + 0x1edb]
005A6175  3B CF                     CMP ECX,EDI
005A6177  0F 84 2A 2B 00 00         JZ 0x005a8ca7
005A617D  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
005A6180  33 C0                     XOR EAX,EAX
005A6182  C1 E6 02                  SHL ESI,0x2
005A6185  8D 7C 0E 14               LEA EDI,[ESI + ECX*0x1 + 0x14]
005A6189  83 C9 FF                  OR ECX,0xffffffff
005A618C  F2 AE                     SCASB.REPNE ES:EDI
005A618E  F7 D1                     NOT ECX
005A6190  49                        DEC ECX
005A6191  0F 84 10 2B 00 00         JZ 0x005a8ca7
005A6197  8B 8B 0C 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b0c]
005A619D  8D 83 0C 1B 00 00         LEA EAX,[EBX + 0x1b0c]
005A61A3  85 C9                     TEST ECX,ECX
005A61A5  74 06                     JZ 0x005a61ad
005A61A7  50                        PUSH EAX
005A61A8  E8 B3 4E 10 00            CALL 0x006ab060
LAB_005a61ad:
005A61AD  8B 83 DB 1E 00 00         MOV EAX,dword ptr [EBX + 0x1edb]
005A61B3  83 C9 FF                  OR ECX,0xffffffff
005A61B6  8D 7C 06 14               LEA EDI,[ESI + EAX*0x1 + 0x14]
005A61BA  33 C0                     XOR EAX,EAX
005A61BC  F2 AE                     SCASB.REPNE ES:EDI
005A61BE  F7 D1                     NOT ECX
005A61C0  51                        PUSH ECX
005A61C1  E8 AA 4A 10 00            CALL 0x006aac70
005A61C6  8B 8B DB 1E 00 00         MOV ECX,dword ptr [EBX + 0x1edb]
005A61CC  8B D0                     MOV EDX,EAX
005A61CE  33 C0                     XOR EAX,EAX
005A61D0  89 93 0C 1B 00 00         MOV dword ptr [EBX + 0x1b0c],EDX
005A61D6  8D 7C 0E 14               LEA EDI,[ESI + ECX*0x1 + 0x14]
005A61DA  83 C9 FF                  OR ECX,0xffffffff
005A61DD  F2 AE                     SCASB.REPNE ES:EDI
005A61DF  F7 D1                     NOT ECX
005A61E1  2B F9                     SUB EDI,ECX
005A61E3  8B C1                     MOV EAX,ECX
005A61E5  8B F7                     MOV ESI,EDI
005A61E7  8B FA                     MOV EDI,EDX
005A61E9  C1 E9 02                  SHR ECX,0x2
005A61EC  F3 A5                     MOVSD.REP ES:EDI,ESI
005A61EE  8B C8                     MOV ECX,EAX
005A61F0  83 E1 03                  AND ECX,0x3
005A61F3  F3 A4                     MOVSB.REP ES:EDI,ESI
005A61F5  8B 13                     MOV EDX,dword ptr [EBX]
005A61F7  8B CB                     MOV ECX,EBX
005A61F9  FF 52 08                  CALL dword ptr [EDX + 0x8]
005A61FC  C6 83 61 1A 00 00 0A      MOV byte ptr [EBX + 0x1a61],0xa
005A6203  C6 83 D2 1E 00 00 09      MOV byte ptr [EBX + 0x1ed2],0x9
005A620A  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A6210  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005A6216  85 C0                     TEST EAX,EAX
005A6218  0F 84 89 2A 00 00         JZ 0x005a8ca7
005A621E  B9 06 00 00 00            MOV ECX,0x6
005A6223  83 C8 FF                  OR EAX,0xffffffff
005A6226  8D BD CC FC FF FF         LEA EDI,[EBP + 0xfffffccc]
005A622C  F3 AB                     STOSD.REP ES:EDI
005A622E  66 AB                     STOSW ES:EDI
005A6230  33 C0                     XOR EAX,EAX
005A6232  8D 8D CC FC FF FF         LEA ECX,[EBP + 0xfffffccc]
005A6238  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
005A623B  C6 45 96 01               MOV byte ptr [EBP + -0x6a],0x1
005A623F  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
005A6242  C6 45 95 01               MOV byte ptr [EBP + -0x6b],0x1
005A6246  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
005A6249  C6 45 94 01               MOV byte ptr [EBP + -0x6c],0x1
005A624D  88 45 A0                  MOV byte ptr [EBP + -0x60],AL
005A6250  51                        PUSH ECX
005A6251  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A6257  E8 F5 E8 E5 FF            CALL 0x00404b51
005A625C  8D 55 94                  LEA EDX,[EBP + -0x6c]
005A625F  E9 D7 1C 00 00            JMP 0x005a7f3b
LAB_005a6264:
005A6264  8B 13                     MOV EDX,dword ptr [EBX]
005A6266  8B CB                     MOV ECX,EBX
005A6268  FF 52 08                  CALL dword ptr [EDX + 0x8]
005A626B  C6 83 61 1A 00 00 09      MOV byte ptr [EBX + 0x1a61],0x9
005A6272  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A6278  39 BA E6 02 00 00         CMP dword ptr [EDX + 0x2e6],EDI
005A627E  0F 84 23 2A 00 00         JZ 0x005a8ca7
005A6284  B9 06 00 00 00            MOV ECX,0x6
005A6289  83 C8 FF                  OR EAX,0xffffffff
005A628C  8D BD 58 FD FF FF         LEA EDI,[EBP + 0xfffffd58]
005A6292  F3 AB                     STOSD.REP ES:EDI
005A6294  66 AB                     STOSW ES:EDI
005A6296  33 C0                     XOR EAX,EAX
005A6298  8D 8D 58 FD FF FF         LEA ECX,[EBP + 0xfffffd58]
005A629E  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
005A62A4  C6 85 36 FF FF FF 01      MOV byte ptr [EBP + 0xffffff36],0x1
005A62AB  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
005A62B1  C6 85 35 FF FF FF 01      MOV byte ptr [EBP + 0xffffff35],0x1
005A62B8  89 85 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EAX
005A62BE  C6 85 34 FF FF FF 01      MOV byte ptr [EBP + 0xffffff34],0x1
005A62C5  88 85 40 FF FF FF         MOV byte ptr [EBP + 0xffffff40],AL
005A62CB  51                        PUSH ECX
005A62CC  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A62D2  E8 7A E8 E5 FF            CALL 0x00404b51
005A62D7  8D 95 34 FF FF FF         LEA EDX,[EBP + 0xffffff34]
005A62DD  E9 59 1C 00 00            JMP 0x005a7f3b
LAB_005a62e2:
005A62E2  3D 7F 69 00 00            CMP EAX,0x697f
005A62E7  0F 87 A4 0C 00 00         JA 0x005a6f91
005A62ED  0F 84 BD 0B 00 00         JZ 0x005a6eb0
005A62F3  05 B6 96 FF FF            ADD EAX,0xffff96b6
005A62F8  83 F8 0D                  CMP EAX,0xd
005A62FB  0F 87 A6 29 00 00         JA 0x005a8ca7
switchD_005a6301::switchD:
005A6301  FF 24 85 34 8E 5A 00      JMP dword ptr [EAX*0x4 + 0x5a8e34]
switchD_005a6301::caseD_6952:
005A6308  33 C9                     XOR ECX,ECX
005A630A  33 C0                     XOR EAX,EAX
005A630C  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005A6312  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
005A6315  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
005A6318  83 C0 FD                  ADD EAX,-0x3
005A631B  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
005A631E  83 F8 07                  CMP EAX,0x7
005A6321  88 4D E0                  MOV byte ptr [EBP + -0x20],CL
005A6324  77 2F                     JA 0x005a6355
switchD_005a6326::switchD:
005A6326  FF 24 85 6C 8E 5A 00      JMP dword ptr [EAX*0x4 + 0x5a8e6c]
switchD_005a6326::caseD_6:
005A632D  C6 45 D6 01               MOV byte ptr [EBP + -0x2a],0x1
switchD_005a6326::caseD_3:
005A6331  C6 45 D4 01               MOV byte ptr [EBP + -0x2c],0x1
switchD_005a6326::caseD_5:
005A6335  C6 45 D5 01               MOV byte ptr [EBP + -0x2b],0x1
switchD_005a6326::caseD_4:
005A6339  C6 45 D9 01               MOV byte ptr [EBP + -0x27],0x1
005A633D  C6 45 DA 01               MOV byte ptr [EBP + -0x26],0x1
005A6341  C6 83 61 1A 00 00 02      MOV byte ptr [EBX + 0x1a61],0x2
005A6348  EB 0B                     JMP 0x005a6355
switchD_005a6326::caseD_7:
005A634A  C6 45 D5 01               MOV byte ptr [EBP + -0x2b],0x1
switchD_005a6326::caseD_9:
005A634E  C6 83 61 1A 00 00 06      MOV byte ptr [EBX + 0x1a61],0x6
switchD_005a6326::default:
005A6355  8B 13                     MOV EDX,dword ptr [EBX]
005A6357  8B CB                     MOV ECX,EBX
005A6359  FF 52 08                  CALL dword ptr [EDX + 0x8]
005A635C  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A6362  39 BA E6 02 00 00         CMP dword ptr [EDX + 0x2e6],EDI
005A6368  0F 84 39 29 00 00         JZ 0x005a8ca7
005A636E  B9 06 00 00 00            MOV ECX,0x6
005A6373  83 C8 FF                  OR EAX,0xffffffff
005A6376  8D BD 20 FD FF FF         LEA EDI,[EBP + 0xfffffd20]
005A637C  F3 AB                     STOSD.REP ES:EDI
005A637E  66 AB                     STOSW ES:EDI
005A6380  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A6386  8D 85 20 FD FF FF         LEA EAX,[EBP + 0xfffffd20]
005A638C  50                        PUSH EAX
005A638D  E8 BF E7 E5 FF            CALL 0x00404b51
005A6392  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A6398  8D 4D D4                  LEA ECX,[EBP + -0x2c]
005A639B  51                        PUSH ECX
005A639C  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A63A2  E8 F4 B6 E5 FF            CALL 0x00401a9b
005A63A7  E9 FB 28 00 00            JMP 0x005a8ca7
switchD_005a6326::caseD_a:
005A63AC  8B B3 0C 1B 00 00         MOV ESI,dword ptr [EBX + 0x1b0c]
005A63B2  3B F7                     CMP ESI,EDI
005A63B4  0F 84 FF 00 00 00         JZ 0x005a64b9
005A63BA  BF 1D 7E 80 00            MOV EDI,0x807e1d
LAB_005a63bf:
005A63BF  8A 16                     MOV DL,byte ptr [ESI]
005A63C1  8A 0F                     MOV CL,byte ptr [EDI]
005A63C3  8A C2                     MOV AL,DL
005A63C5  3A D1                     CMP DL,CL
005A63C7  75 1E                     JNZ 0x005a63e7
005A63C9  84 C0                     TEST AL,AL
005A63CB  74 16                     JZ 0x005a63e3
005A63CD  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
005A63D0  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
005A63D3  8A C1                     MOV AL,CL
005A63D5  3A CA                     CMP CL,DL
005A63D7  75 0E                     JNZ 0x005a63e7
005A63D9  83 C6 02                  ADD ESI,0x2
005A63DC  83 C7 02                  ADD EDI,0x2
005A63DF  84 C0                     TEST AL,AL
005A63E1  75 DC                     JNZ 0x005a63bf
LAB_005a63e3:
005A63E3  33 C0                     XOR EAX,EAX
005A63E5  EB 05                     JMP 0x005a63ec
LAB_005a63e7:
005A63E7  1B C0                     SBB EAX,EAX
005A63E9  83 D8 FF                  SBB EAX,-0x1
LAB_005a63ec:
005A63EC  85 C0                     TEST EAX,EAX
005A63EE  0F 85 C3 00 00 00         JNZ 0x005a64b7
005A63F4  8B 83 00 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b00]
005A63FA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A63FD  85 C9                     TEST ECX,ECX
005A63FF  7E 07                     JLE 0x005a6408
005A6401  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005A6404  8B 12                     MOV EDX,dword ptr [EDX]
005A6406  EB 02                     JMP 0x005a640a
LAB_005a6408:
005A6408  33 D2                     XOR EDX,EDX
LAB_005a640a:
005A640A  8B 83 FC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1afc]
005A6410  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A6413  85 C9                     TEST ECX,ECX
005A6415  7E 07                     JLE 0x005a641e
005A6417  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005A641A  8B 08                     MOV ECX,dword ptr [EAX]
005A641C  EB 02                     JMP 0x005a6420
LAB_005a641e:
005A641E  33 C9                     XOR ECX,ECX
LAB_005a6420:
005A6420  8B 83 F8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af8]
005A6426  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A6429  85 F6                     TEST ESI,ESI
005A642B  7E 07                     JLE 0x005a6434
005A642D  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005A6430  8B 00                     MOV EAX,dword ptr [EAX]
005A6432  EB 02                     JMP 0x005a6436
LAB_005a6434:
005A6434  33 C0                     XOR EAX,EAX
LAB_005a6436:
005A6436  8B B3 04 1B 00 00         MOV ESI,dword ptr [EBX + 0x1b04]
005A643C  56                        PUSH ESI
005A643D  52                        PUSH EDX
005A643E  51                        PUSH ECX
005A643F  50                        PUSH EAX
005A6440  B9 90 2A 80 00            MOV ECX,0x802a90
005A6445  E8 28 C1 E5 FF            CALL 0x00402572
005A644A  8B 0D D4 30 80 00         MOV ECX,dword ptr [0x008030d4]
005A6450  8D 95 14 FF FF FF         LEA EDX,[EBP + 0xffffff14]
005A6456  8D 85 F4 FE FF FF         LEA EAX,[EBP + 0xfffffef4]
005A645C  52                        PUSH EDX
005A645D  89 8D 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],ECX
005A6463  50                        PUSH EAX
005A6464  6A 04                     PUSH 0x4
005A6466  B9 90 2A 80 00            MOV ECX,0x802a90
005A646B  C7 85 F4 FE FF FF A8 C1 7C 00  MOV dword ptr [EBP + 0xfffffef4],0x7cc1a8
005A6475  C7 85 14 FF FF FF D4 2A 80 00  MOV dword ptr [EBP + 0xffffff14],0x802ad4
005A647F  C7 85 F8 FE FF FF 98 C1 7C 00  MOV dword ptr [EBP + 0xfffffef8],0x7cc198
005A6489  C7 85 18 FF FF FF D4 2C 80 00  MOV dword ptr [EBP + 0xffffff18],0x802cd4
005A6493  C7 85 FC FE FF FF 84 C1 7C 00  MOV dword ptr [EBP + 0xfffffefc],0x7cc184
005A649D  C7 85 1C FF FF FF D4 2E 80 00  MOV dword ptr [EBP + 0xffffff1c],0x802ed4
005A64A7  C7 85 00 FF FF FF 6C C1 7C 00  MOV dword ptr [EBP + 0xffffff00],0x7cc16c
005A64B1  FF 15 28 C0 85 00         CALL dword ptr [0x0085c028]
LAB_005a64b7:
005A64B7  33 FF                     XOR EDI,EDI
LAB_005a64b9:
005A64B9  8A 8B D2 1E 00 00         MOV CL,byte ptr [EBX + 0x1ed2]
005A64BF  88 8B 61 1A 00 00         MOV byte ptr [EBX + 0x1a61],CL
005A64C5  E9 8B FE FF FF            JMP 0x005a6355
switchD_005a6301::caseD_6954:
005A64CA  8B 03                     MOV EAX,dword ptr [EBX]
005A64CC  8B CB                     MOV ECX,EBX
005A64CE  FF 50 08                  CALL dword ptr [EAX + 0x8]
005A64D1  C6 83 61 1A 00 00 04      MOV byte ptr [EBX + 0x1a61],0x4
005A64D8  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A64DE  39 B8 E6 02 00 00         CMP dword ptr [EAX + 0x2e6],EDI
005A64E4  0F 84 BD 27 00 00         JZ 0x005a8ca7
005A64EA  33 C9                     XOR ECX,ECX
005A64EC  8D 95 44 FF FF FF         LEA EDX,[EBP + 0xffffff44]
005A64F2  89 8D 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],ECX
005A64F8  52                        PUSH EDX
005A64F9  89 8D 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],ECX
005A64FF  C6 85 46 FF FF FF 01      MOV byte ptr [EBP + 0xffffff46],0x1
005A6506  89 8D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ECX
005A650C  C6 85 45 FF FF FF 01      MOV byte ptr [EBP + 0xffffff45],0x1
005A6513  88 8D 50 FF FF FF         MOV byte ptr [EBP + 0xffffff50],CL
005A6519  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A651F  C6 85 44 FF FF FF 01      MOV byte ptr [EBP + 0xffffff44],0x1
005A6526  E8 70 B5 E5 FF            CALL 0x00401a9b
005A652B  E9 77 27 00 00            JMP 0x005a8ca7
switchD_005a6301::caseD_6953:
005A6530  B9 06 00 00 00            MOV ECX,0x6
005A6535  83 C8 FF                  OR EAX,0xffffffff
005A6538  8D BD 88 FE FF FF         LEA EDI,[EBP + 0xfffffe88]
005A653E  F3 AB                     STOSD.REP ES:EDI
005A6540  66 AB                     STOSW ES:EDI
005A6542  B8 01 00 00 00            MOV EAX,0x1
005A6547  66 89 85 94 FE FF FF      MOV word ptr [EBP + 0xfffffe94],AX
005A654E  66 89 85 92 FE FF FF      MOV word ptr [EBP + 0xfffffe92],AX
005A6555  8B 83 E8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ae8]
005A655B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A655E  85 C9                     TEST ECX,ECX
005A6560  7E 07                     JLE 0x005a6569
005A6562  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005A6565  8B 00                     MOV EAX,dword ptr [EAX]
005A6567  EB 02                     JMP 0x005a656b
LAB_005a6569:
005A6569  33 C0                     XOR EAX,EAX
LAB_005a656b:
005A656B  6A 40                     PUSH 0x40
005A656D  50                        PUSH EAX
005A656E  68 1D 7E 80 00            PUSH 0x807e1d
005A6573  E8 C8 7D 18 00            CALL 0x0072e340
005A6578  C6 05 5C 7E 80 00 00      MOV byte ptr [0x00807e5c],0x0
005A657F  8B 83 EC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1aec]
005A6585  83 C4 0C                  ADD ESP,0xc
005A6588  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A658B  85 C9                     TEST ECX,ECX
005A658D  7E 07                     JLE 0x005a6596
005A658F  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005A6592  8B 39                     MOV EDI,dword ptr [ECX]
005A6594  EB 02                     JMP 0x005a6598
LAB_005a6596:
005A6596  33 FF                     XOR EDI,EDI
LAB_005a6598:
005A6598  83 C9 FF                  OR ECX,0xffffffff
005A659B  33 C0                     XOR EAX,EAX
005A659D  F2 AE                     SCASB.REPNE ES:EDI
005A659F  F7 D1                     NOT ECX
005A65A1  2B F9                     SUB EDI,ECX
005A65A3  8B D1                     MOV EDX,ECX
005A65A5  8B F7                     MOV ESI,EDI
005A65A7  BF 5D 7E 80 00            MOV EDI,0x807e5d
005A65AC  C1 E9 02                  SHR ECX,0x2
005A65AF  F3 A5                     MOVSD.REP ES:EDI,ESI
005A65B1  8B CA                     MOV ECX,EDX
005A65B3  83 E1 03                  AND ECX,0x3
005A65B6  F3 A4                     MOVSB.REP ES:EDI,ESI
005A65B8  BF 5D 7E 80 00            MOV EDI,0x807e5d
005A65BD  83 C9 FF                  OR ECX,0xffffffff
005A65C0  F2 AE                     SCASB.REPNE ES:EDI
005A65C2  F7 D1                     NOT ECX
005A65C4  49                        DEC ECX
005A65C5  75 2F                     JNZ 0x005a65f6
005A65C7  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A65CD  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A65D3  85 C9                     TEST ECX,ECX
005A65D5  0F 84 CC 26 00 00         JZ 0x005a8ca7
005A65DB  6A 00                     PUSH 0x0
005A65DD  6A 00                     PUSH 0x0
005A65DF  6A 00                     PUSH 0x0
005A65E1  6A 00                     PUSH 0x0
005A65E3  6A 00                     PUSH 0x0
005A65E5  6A 00                     PUSH 0x0
005A65E7  68 92 25 00 00            PUSH 0x2592
005A65EC  E8 B7 D9 E5 FF            CALL 0x00403fa8
005A65F1  E9 B1 26 00 00            JMP 0x005a8ca7
LAB_005a65f6:
005A65F6  33 C0                     XOR EAX,EAX
005A65F8  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005A65FE  83 E8 02                  SUB EAX,0x2
005A6601  0F 84 67 01 00 00         JZ 0x005a676e
005A6607  83 E8 02                  SUB EAX,0x2
005A660A  0F 85 97 26 00 00         JNZ 0x005a8ca7
005A6610  8B 83 F0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af0]
005A6616  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A6619  85 C9                     TEST ECX,ECX
005A661B  7E 07                     JLE 0x005a6624
005A661D  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005A6620  8B 39                     MOV EDI,dword ptr [ECX]
005A6622  EB 02                     JMP 0x005a6626
LAB_005a6624:
005A6624  33 FF                     XOR EDI,EDI
LAB_005a6626:
005A6626  BE 5D 7E 80 00            MOV ESI,0x807e5d
LAB_005a662b:
005A662B  8A 16                     MOV DL,byte ptr [ESI]
005A662D  8A 0F                     MOV CL,byte ptr [EDI]
005A662F  8A C2                     MOV AL,DL
005A6631  3A D1                     CMP DL,CL
005A6633  75 1E                     JNZ 0x005a6653
005A6635  84 C0                     TEST AL,AL
005A6637  74 16                     JZ 0x005a664f
005A6639  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
005A663C  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
005A663F  8A C1                     MOV AL,CL
005A6641  3A CA                     CMP CL,DL
005A6643  75 0E                     JNZ 0x005a6653
005A6645  83 C6 02                  ADD ESI,0x2
005A6648  83 C7 02                  ADD EDI,0x2
005A664B  84 C0                     TEST AL,AL
005A664D  75 DC                     JNZ 0x005a662b
LAB_005a664f:
005A664F  33 C0                     XOR EAX,EAX
005A6651  EB 05                     JMP 0x005a6658
LAB_005a6653:
005A6653  1B C0                     SBB EAX,EAX
005A6655  83 D8 FF                  SBB EAX,-0x1
LAB_005a6658:
005A6658  85 C0                     TEST EAX,EAX
005A665A  74 2F                     JZ 0x005a668b
005A665C  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A6662  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A6668  85 C9                     TEST ECX,ECX
005A666A  0F 84 37 26 00 00         JZ 0x005a8ca7
005A6670  6A 00                     PUSH 0x0
005A6672  6A 00                     PUSH 0x0
005A6674  6A 00                     PUSH 0x0
005A6676  6A 00                     PUSH 0x0
005A6678  6A 00                     PUSH 0x0
005A667A  6A 00                     PUSH 0x0
005A667C  68 8A 25 00 00            PUSH 0x258a
005A6681  E8 22 D9 E5 FF            CALL 0x00403fa8
005A6686  E9 1C 26 00 00            JMP 0x005a8ca7
LAB_005a668b:
005A668B  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A6691  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A6697  85 C9                     TEST ECX,ECX
005A6699  74 0C                     JZ 0x005a66a7
005A669B  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
005A66A1  52                        PUSH EDX
005A66A2  E8 AA E4 E5 FF            CALL 0x00404b51
LAB_005a66a7:
005A66A7  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A66AD  85 F6                     TEST ESI,ESI
005A66AF  74 4D                     JZ 0x005a66fe
005A66B1  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A66B7  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A66BD  50                        PUSH EAX
005A66BE  51                        PUSH ECX
005A66BF  6A 00                     PUSH 0x0
005A66C1  8B CE                     MOV ECX,ESI
005A66C3  C6 86 93 04 00 00 05      MOV byte ptr [ESI + 0x493],0x5
005A66CA  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A66D3  E8 A6 E9 E5 FF            CALL 0x0040507e
005A66D8  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A66DE  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A66E4  52                        PUSH EDX
005A66E5  50                        PUSH EAX
005A66E6  8B CE                     MOV ECX,ESI
005A66E8  E8 31 BD E5 FF            CALL 0x0040241e
005A66ED  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A66F4  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a66fe:
005A66FE  8B 83 00 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b00]
005A6704  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A6707  85 C9                     TEST ECX,ECX
005A6709  7E 07                     JLE 0x005a6712
005A670B  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005A670E  8B 11                     MOV EDX,dword ptr [ECX]
005A6710  EB 02                     JMP 0x005a6714
LAB_005a6712:
005A6712  33 D2                     XOR EDX,EDX
LAB_005a6714:
005A6714  8B 83 FC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1afc]
005A671A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A671D  85 C9                     TEST ECX,ECX
005A671F  7E 07                     JLE 0x005a6728
005A6721  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005A6724  8B 08                     MOV ECX,dword ptr [EAX]
005A6726  EB 02                     JMP 0x005a672a
LAB_005a6728:
005A6728  33 C9                     XOR ECX,ECX
LAB_005a672a:
005A672A  8B 83 F8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af8]
005A6730  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A6733  85 F6                     TEST ESI,ESI
005A6735  7E 07                     JLE 0x005a673e
005A6737  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005A673A  8B 00                     MOV EAX,dword ptr [EAX]
005A673C  EB 02                     JMP 0x005a6740
LAB_005a673e:
005A673E  33 C0                     XOR EAX,EAX
LAB_005a6740:
005A6740  8B B3 04 1B 00 00         MOV ESI,dword ptr [EBX + 0x1b04]
005A6746  56                        PUSH ESI
005A6747  52                        PUSH EDX
005A6748  51                        PUSH ECX
005A6749  50                        PUSH EAX
005A674A  B9 90 2A 80 00            MOV ECX,0x802a90
005A674F  E8 1E BE E5 FF            CALL 0x00402572
005A6754  68 5D 7E 80 00            PUSH 0x807e5d
005A6759  68 1D 7E 80 00            PUSH 0x807e1d
005A675E  B9 90 2A 80 00            MOV ECX,0x802a90
005A6763  FF 15 04 C0 85 00         CALL dword ptr [0x0085c004]
005A6769  E9 39 25 00 00            JMP 0x005a8ca7
LAB_005a676e:
005A676E  8B 8B 5B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a5b]
005A6774  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005A677A  85 C9                     TEST ECX,ECX
005A677C  74 0C                     JZ 0x005a678a
005A677E  8D 95 88 FE FF FF         LEA EDX,[EBP + 0xfffffe88]
005A6784  52                        PUSH EDX
005A6785  E8 C7 E3 E5 FF            CALL 0x00404b51
LAB_005a678a:
005A678A  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A6790  85 F6                     TEST ESI,ESI
005A6792  74 4D                     JZ 0x005a67e1
005A6794  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A679A  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A67A0  50                        PUSH EAX
005A67A1  51                        PUSH ECX
005A67A2  6A 00                     PUSH 0x0
005A67A4  8B CE                     MOV ECX,ESI
005A67A6  C6 86 93 04 00 00 05      MOV byte ptr [ESI + 0x493],0x5
005A67AD  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A67B6  E8 C3 E8 E5 FF            CALL 0x0040507e
005A67BB  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A67C1  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A67C7  52                        PUSH EDX
005A67C8  50                        PUSH EAX
005A67C9  8B CE                     MOV ECX,ESI
005A67CB  E8 4E BC E5 FF            CALL 0x0040241e
005A67D0  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A67D7  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a67e1:
005A67E1  68 5D 7E 80 00            PUSH 0x807e5d
005A67E6  68 1D 7E 80 00            PUSH 0x807e1d
005A67EB  B9 90 2A 80 00            MOV ECX,0x802a90
005A67F0  FF 15 08 C0 85 00         CALL dword ptr [0x0085c008]
005A67F6  85 C0                     TEST EAX,EAX
005A67F8  75 11                     JNZ 0x005a680b
005A67FA  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
005A6800  50                        PUSH EAX
005A6801  B9 90 2A 80 00            MOV ECX,0x802a90
005A6806  E8 01 F6 E5 FF            CALL 0x00405e0c
LAB_005a680b:
005A680B  C6 05 9A 2A 80 00 00      MOV byte ptr [0x00802a9a],0x0
005A6812  E9 90 24 00 00            JMP 0x005a8ca7
switchD_005a6301::caseD_694b:
005A6817  33 C0                     XOR EAX,EAX
005A6819  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005A681F  83 E8 02                  SUB EAX,0x2
005A6822  0F 84 4C 01 00 00         JZ 0x005a6974
005A6828  83 E8 03                  SUB EAX,0x3
005A682B  0F 85 76 24 00 00         JNZ 0x005a8ca7
005A6831  8B 83 F4 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af4]
005A6837  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005A683A  7E 05                     JLE 0x005a6841
005A683C  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005A683F  8B 39                     MOV EDI,dword ptr [ECX]
LAB_005a6841:
005A6841  83 C9 FF                  OR ECX,0xffffffff
005A6844  33 C0                     XOR EAX,EAX
005A6846  F2 AE                     SCASB.REPNE ES:EDI
005A6848  F7 D1                     NOT ECX
005A684A  49                        DEC ECX
005A684B  75 29                     JNZ 0x005a6876
005A684D  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A6853  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A6859  85 C9                     TEST ECX,ECX
005A685B  0F 84 46 24 00 00         JZ 0x005a8ca7
005A6861  50                        PUSH EAX
005A6862  50                        PUSH EAX
005A6863  50                        PUSH EAX
005A6864  50                        PUSH EAX
005A6865  50                        PUSH EAX
005A6866  50                        PUSH EAX
005A6867  68 92 25 00 00            PUSH 0x2592
005A686C  E8 37 D7 E5 FF            CALL 0x00403fa8
005A6871  E9 31 24 00 00            JMP 0x005a8ca7
LAB_005a6876:
005A6876  B9 06 00 00 00            MOV ECX,0x6
005A687B  83 C8 FF                  OR EAX,0xffffffff
005A687E  8D BD 2C FE FF FF         LEA EDI,[EBP + 0xfffffe2c]
005A6884  F3 AB                     STOSD.REP ES:EDI
005A6886  66 AB                     STOSW ES:EDI
005A6888  B8 01 00 00 00            MOV EAX,0x1
005A688D  66 89 85 38 FE FF FF      MOV word ptr [EBP + 0xfffffe38],AX
005A6894  66 89 85 36 FE FF FF      MOV word ptr [EBP + 0xfffffe36],AX
005A689B  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A68A1  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A68A7  85 C9                     TEST ECX,ECX
005A68A9  74 0C                     JZ 0x005a68b7
005A68AB  8D 95 2C FE FF FF         LEA EDX,[EBP + 0xfffffe2c]
005A68B1  52                        PUSH EDX
005A68B2  E8 9A E2 E5 FF            CALL 0x00404b51
LAB_005a68b7:
005A68B7  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A68BD  85 F6                     TEST ESI,ESI
005A68BF  74 4D                     JZ 0x005a690e
005A68C1  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A68C7  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A68CD  50                        PUSH EAX
005A68CE  51                        PUSH ECX
005A68CF  6A 00                     PUSH 0x0
005A68D1  8B CE                     MOV ECX,ESI
005A68D3  C6 86 93 04 00 00 05      MOV byte ptr [ESI + 0x493],0x5
005A68DA  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A68E3  E8 96 E7 E5 FF            CALL 0x0040507e
005A68E8  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A68EE  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A68F4  52                        PUSH EDX
005A68F5  50                        PUSH EAX
005A68F6  8B CE                     MOV ECX,ESI
005A68F8  E8 21 BB E5 FF            CALL 0x0040241e
005A68FD  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A6904  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a690e:
005A690E  8B 83 F4 1A 00 00         MOV EAX,dword ptr [EBX + 0x1af4]
005A6914  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A6917  85 C9                     TEST ECX,ECX
005A6919  7E 07                     JLE 0x005a6922
005A691B  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005A691E  8B 11                     MOV EDX,dword ptr [ECX]
005A6920  EB 02                     JMP 0x005a6924
LAB_005a6922:
005A6922  33 D2                     XOR EDX,EDX
LAB_005a6924:
005A6924  8B 83 EC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1aec]
005A692A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A692D  85 C9                     TEST ECX,ECX
005A692F  7E 07                     JLE 0x005a6938
005A6931  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005A6934  8B 08                     MOV ECX,dword ptr [EAX]
005A6936  EB 02                     JMP 0x005a693a
LAB_005a6938:
005A6938  33 C9                     XOR ECX,ECX
LAB_005a693a:
005A693A  8B 83 E8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ae8]
005A6940  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A6943  85 F6                     TEST ESI,ESI
005A6945  7E 18                     JLE 0x005a695f
005A6947  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005A694A  52                        PUSH EDX
005A694B  51                        PUSH ECX
005A694C  B9 90 2A 80 00            MOV ECX,0x802a90
005A6951  8B 00                     MOV EAX,dword ptr [EAX]
005A6953  50                        PUSH EAX
005A6954  FF 15 7C C0 85 00         CALL dword ptr [0x0085c07c]
005A695A  E9 48 23 00 00            JMP 0x005a8ca7
LAB_005a695f:
005A695F  33 C0                     XOR EAX,EAX
005A6961  52                        PUSH EDX
005A6962  51                        PUSH ECX
005A6963  50                        PUSH EAX
005A6964  B9 90 2A 80 00            MOV ECX,0x802a90
005A6969  FF 15 7C C0 85 00         CALL dword ptr [0x0085c07c]
005A696F  E9 33 23 00 00            JMP 0x005a8ca7
LAB_005a6974:
005A6974  8B 13                     MOV EDX,dword ptr [EBX]
005A6976  8B CB                     MOV ECX,EBX
005A6978  FF 52 08                  CALL dword ptr [EDX + 0x8]
005A697B  C6 83 61 1A 00 00 05      MOV byte ptr [EBX + 0x1a61],0x5
005A6982  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A6988  39 B8 E6 02 00 00         CMP dword ptr [EAX + 0x2e6],EDI
005A698E  0F 84 13 23 00 00         JZ 0x005a8ca7
005A6994  33 C9                     XOR ECX,ECX
005A6996  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
005A699C  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
005A69A2  52                        PUSH EDX
005A69A3  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
005A69A9  C6 85 76 FF FF FF 01      MOV byte ptr [EBP + 0xffffff76],0x1
005A69B0  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
005A69B6  C6 85 75 FF FF FF 01      MOV byte ptr [EBP + 0xffffff75],0x1
005A69BD  88 4D 80                  MOV byte ptr [EBP + -0x80],CL
005A69C0  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A69C6  C6 85 74 FF FF FF 01      MOV byte ptr [EBP + 0xffffff74],0x1
005A69CD  E8 C9 B0 E5 FF            CALL 0x00401a9b
005A69D2  E9 D0 22 00 00            JMP 0x005a8ca7
switchD_005a6301::caseD_694a:
005A69D7  8B 03                     MOV EAX,dword ptr [EBX]
005A69D9  8B CB                     MOV ECX,EBX
005A69DB  FF 50 08                  CALL dword ptr [EAX + 0x8]
005A69DE  81 7E 10 4A 69 00 00      CMP dword ptr [ESI + 0x10],0x694a
005A69E5  0F 95 C1                  SETNZ CL
005A69E8  83 C1 07                  ADD ECX,0x7
005A69EB  88 8B 61 1A 00 00         MOV byte ptr [EBX + 0x1a61],CL
005A69F1  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A69F7  39 BA E6 02 00 00         CMP dword ptr [EDX + 0x2e6],EDI
005A69FD  0F 84 A4 22 00 00         JZ 0x005a8ca7
005A6A03  B9 06 00 00 00            MOV ECX,0x6
005A6A08  83 C8 FF                  OR EAX,0xffffffff
005A6A0B  8D BD E8 FC FF FF         LEA EDI,[EBP + 0xfffffce8]
005A6A11  F3 AB                     STOSD.REP ES:EDI
005A6A13  66 AB                     STOSW ES:EDI
005A6A15  33 C0                     XOR EAX,EAX
005A6A17  8D 8D E8 FC FF FF         LEA ECX,[EBP + 0xfffffce8]
005A6A1D  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
005A6A23  C6 85 66 FF FF FF 01      MOV byte ptr [EBP + 0xffffff66],0x1
005A6A2A  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
005A6A30  C6 85 65 FF FF FF 01      MOV byte ptr [EBP + 0xffffff65],0x1
005A6A37  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
005A6A3D  C6 85 64 FF FF FF 01      MOV byte ptr [EBP + 0xffffff64],0x1
005A6A44  88 85 70 FF FF FF         MOV byte ptr [EBP + 0xffffff70],AL
005A6A4A  51                        PUSH ECX
005A6A4B  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A6A51  E8 FB E0 E5 FF            CALL 0x00404b51
005A6A56  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
005A6A5C  E9 DA 14 00 00            JMP 0x005a7f3b
switchD_005a6301::caseD_6955:
005A6A61  8B 8B B7 1A 00 00         MOV ECX,dword ptr [EBX + 0x1ab7]
005A6A67  33 C0                     XOR EAX,EAX
005A6A69  33 FF                     XOR EDI,EDI
005A6A6B  85 C9                     TEST ECX,ECX
005A6A6D  0F 84 57 02 00 00         JZ 0x005a6cca
005A6A73  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005A6A76  85 D2                     TEST EDX,EDX
005A6A78  0F 84 32 01 00 00         JZ 0x005a6bb0
005A6A7E  33 D2                     XOR EDX,EDX
005A6A80  8A 93 5F 1A 00 00         MOV DL,byte ptr [EBX + 0x1a5f]
005A6A86  83 C2 FE                  ADD EDX,-0x2
005A6A89  83 FA 08                  CMP EDX,0x8
005A6A8C  0F 87 38 02 00 00         JA 0x005a6cca
switchD_005a6a92::switchD:
005A6A92  FF 24 95 8C 8E 5A 00      JMP dword ptr [EDX*0x4 + 0x5a8e8c]
switchD_005a6a92::caseD_2:
005A6A99  8B BB C4 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ac4]
005A6A9F  3B CF                     CMP ECX,EDI
005A6AA1  75 0D                     JNZ 0x005a6ab0
005A6AA3  8B C7                     MOV EAX,EDI
005A6AA5  8B BB C8 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ac8]
005A6AAB  E9 1A 02 00 00            JMP 0x005a6cca
LAB_005a6ab0:
005A6AB0  8B 83 C8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac8]
005A6AB6  E9 0F 02 00 00            JMP 0x005a6cca
switchD_005a6a92::caseD_4:
005A6ABB  8B BB C4 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ac4]
005A6AC1  3B CF                     CMP ECX,EDI
005A6AC3  75 0D                     JNZ 0x005a6ad2
005A6AC5  8B C7                     MOV EAX,EDI
005A6AC7  8B BB E4 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ae4]
005A6ACD  E9 F8 01 00 00            JMP 0x005a6cca
LAB_005a6ad2:
005A6AD2  8B 93 C8 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ac8]
005A6AD8  3B CA                     CMP ECX,EDX
005A6ADA  75 07                     JNZ 0x005a6ae3
005A6ADC  8B C2                     MOV EAX,EDX
005A6ADE  E9 E7 01 00 00            JMP 0x005a6cca
LAB_005a6ae3:
005A6AE3  8B B3 CC 1A 00 00         MOV ESI,dword ptr [EBX + 0x1acc]
005A6AE9  3B CE                     CMP ECX,ESI
005A6AEB  75 09                     JNZ 0x005a6af6
005A6AED  8B C6                     MOV EAX,ESI
005A6AEF  8B FA                     MOV EDI,EDX
005A6AF1  E9 D4 01 00 00            JMP 0x005a6cca
LAB_005a6af6:
005A6AF6  8B 93 D8 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ad8]
005A6AFC  3B CA                     CMP ECX,EDX
005A6AFE  75 09                     JNZ 0x005a6b09
005A6B00  8B C2                     MOV EAX,EDX
005A6B02  8B FE                     MOV EDI,ESI
005A6B04  E9 C1 01 00 00            JMP 0x005a6cca
LAB_005a6b09:
005A6B09  8B B3 DC 1A 00 00         MOV ESI,dword ptr [EBX + 0x1adc]
005A6B0F  3B CE                     CMP ECX,ESI
005A6B11  75 09                     JNZ 0x005a6b1c
005A6B13  8B C6                     MOV EAX,ESI
005A6B15  8B FA                     MOV EDI,EDX
005A6B17  E9 AE 01 00 00            JMP 0x005a6cca
LAB_005a6b1c:
005A6B1C  8B 93 E0 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ae0]
005A6B22  3B CA                     CMP ECX,EDX
005A6B24  75 09                     JNZ 0x005a6b2f
005A6B26  8B C2                     MOV EAX,EDX
005A6B28  8B FE                     MOV EDI,ESI
005A6B2A  E9 9B 01 00 00            JMP 0x005a6cca
LAB_005a6b2f:
005A6B2F  8B 83 E4 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ae4]
005A6B35  8B FA                     MOV EDI,EDX
005A6B37  E9 8E 01 00 00            JMP 0x005a6cca
switchD_005a6a92::caseD_5:
005A6B3C  8B BB C4 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ac4]
005A6B42  3B CF                     CMP ECX,EDI
005A6B44  75 0D                     JNZ 0x005a6b53
005A6B46  8B C7                     MOV EAX,EDI
005A6B48  8B BB CC 1A 00 00         MOV EDI,dword ptr [EBX + 0x1acc]
005A6B4E  E9 77 01 00 00            JMP 0x005a6cca
LAB_005a6b53:
005A6B53  8B B3 C8 1A 00 00         MOV ESI,dword ptr [EBX + 0x1ac8]
005A6B59  3B CE                     CMP ECX,ESI
005A6B5B  75 07                     JNZ 0x005a6b64
005A6B5D  8B C6                     MOV EAX,ESI
005A6B5F  E9 66 01 00 00            JMP 0x005a6cca
LAB_005a6b64:
005A6B64  8B 93 D4 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ad4]
005A6B6A  3B CA                     CMP ECX,EDX
005A6B6C  75 09                     JNZ 0x005a6b77
005A6B6E  8B C2                     MOV EAX,EDX
005A6B70  8B FE                     MOV EDI,ESI
005A6B72  E9 53 01 00 00            JMP 0x005a6cca
LAB_005a6b77:
005A6B77  8B 83 CC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1acc]
005A6B7D  8B FA                     MOV EDI,EDX
005A6B7F  E9 46 01 00 00            JMP 0x005a6cca
switchD_005a6a92::caseD_a:
005A6B84  8B BB D8 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ad8]
005A6B8A  3B CF                     CMP ECX,EDI
005A6B8C  75 0D                     JNZ 0x005a6b9b
005A6B8E  8B C7                     MOV EAX,EDI
005A6B90  8B BB E4 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ae4]
005A6B96  E9 2F 01 00 00            JMP 0x005a6cca
LAB_005a6b9b:
005A6B9B  8B B3 DC 1A 00 00         MOV ESI,dword ptr [EBX + 0x1adc]
005A6BA1  3B CE                     CMP ECX,ESI
005A6BA3  0F 85 73 FF FF FF         JNZ 0x005a6b1c
005A6BA9  8B C6                     MOV EAX,ESI
005A6BAB  E9 1A 01 00 00            JMP 0x005a6cca
LAB_005a6bb0:
005A6BB0  33 D2                     XOR EDX,EDX
005A6BB2  8A 93 5F 1A 00 00         MOV DL,byte ptr [EBX + 0x1a5f]
005A6BB8  83 C2 FE                  ADD EDX,-0x2
005A6BBB  83 FA 08                  CMP EDX,0x8
005A6BBE  0F 87 06 01 00 00         JA 0x005a6cca
switchD_005a6bc4::switchD:
005A6BC4  FF 24 95 B0 8E 5A 00      JMP dword ptr [EDX*0x4 + 0x5a8eb0]
switchD_005a6bc4::caseD_4:
005A6BCB  8B BB C4 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ac4]
005A6BD1  3B CF                     CMP ECX,EDI
005A6BD3  75 0D                     JNZ 0x005a6be2
005A6BD5  8B C7                     MOV EAX,EDI
005A6BD7  8B BB C8 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ac8]
005A6BDD  E9 E8 00 00 00            JMP 0x005a6cca
LAB_005a6be2:
005A6BE2  8B 83 C8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac8]
005A6BE8  3B C8                     CMP ECX,EAX
005A6BEA  75 0B                     JNZ 0x005a6bf7
005A6BEC  8B BB CC 1A 00 00         MOV EDI,dword ptr [EBX + 0x1acc]
005A6BF2  E9 D3 00 00 00            JMP 0x005a6cca
LAB_005a6bf7:
005A6BF7  8B 83 CC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1acc]
005A6BFD  3B C8                     CMP ECX,EAX
005A6BFF  75 0B                     JNZ 0x005a6c0c
005A6C01  8B BB D8 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ad8]
005A6C07  E9 BE 00 00 00            JMP 0x005a6cca
LAB_005a6c0c:
005A6C0C  8B 83 D8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ad8]
005A6C12  3B C8                     CMP ECX,EAX
005A6C14  75 0B                     JNZ 0x005a6c21
005A6C16  8B BB DC 1A 00 00         MOV EDI,dword ptr [EBX + 0x1adc]
005A6C1C  E9 A9 00 00 00            JMP 0x005a6cca
LAB_005a6c21:
005A6C21  8B 83 DC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1adc]
005A6C27  3B C8                     CMP ECX,EAX
005A6C29  75 0B                     JNZ 0x005a6c36
005A6C2B  8B BB E0 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ae0]
005A6C31  E9 94 00 00 00            JMP 0x005a6cca
LAB_005a6c36:
005A6C36  8B 83 E0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ae0]
005A6C3C  3B C8                     CMP ECX,EAX
005A6C3E  0F 85 80 00 00 00         JNZ 0x005a6cc4
005A6C44  8B BB E4 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ae4]
005A6C4A  EB 7E                     JMP 0x005a6cca
switchD_005a6bc4::caseD_5:
005A6C4C  8B BB C4 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ac4]
005A6C52  3B CF                     CMP ECX,EDI
005A6C54  75 0A                     JNZ 0x005a6c60
005A6C56  8B C7                     MOV EAX,EDI
005A6C58  8B BB C8 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ac8]
005A6C5E  EB 6A                     JMP 0x005a6cca
LAB_005a6c60:
005A6C60  8B 83 C8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac8]
005A6C66  3B C8                     CMP ECX,EAX
005A6C68  75 08                     JNZ 0x005a6c72
005A6C6A  8B BB D4 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ad4]
005A6C70  EB 58                     JMP 0x005a6cca
LAB_005a6c72:
005A6C72  8B 83 D4 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ad4]
005A6C78  3B C8                     CMP ECX,EAX
005A6C7A  75 08                     JNZ 0x005a6c84
005A6C7C  8B BB CC 1A 00 00         MOV EDI,dword ptr [EBX + 0x1acc]
005A6C82  EB 46                     JMP 0x005a6cca
LAB_005a6c84:
005A6C84  8B 83 CC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1acc]
005A6C8A  EB 3E                     JMP 0x005a6cca
switchD_005a6bc4::caseD_a:
005A6C8C  8B BB D8 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ad8]
005A6C92  3B CF                     CMP ECX,EDI
005A6C94  75 0A                     JNZ 0x005a6ca0
005A6C96  8B C7                     MOV EAX,EDI
005A6C98  8B BB DC 1A 00 00         MOV EDI,dword ptr [EBX + 0x1adc]
005A6C9E  EB 2A                     JMP 0x005a6cca
LAB_005a6ca0:
005A6CA0  8B 83 DC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1adc]
005A6CA6  3B C8                     CMP ECX,EAX
005A6CA8  75 08                     JNZ 0x005a6cb2
005A6CAA  8B BB E0 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ae0]
005A6CB0  EB 18                     JMP 0x005a6cca
LAB_005a6cb2:
005A6CB2  8B 83 E0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ae0]
005A6CB8  3B C8                     CMP ECX,EAX
005A6CBA  75 08                     JNZ 0x005a6cc4
005A6CBC  8B BB E4 1A 00 00         MOV EDI,dword ptr [EBX + 0x1ae4]
005A6CC2  EB 06                     JMP 0x005a6cca
LAB_005a6cc4:
005A6CC4  8B 83 E4 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ae4]
switchD_005a6a92::caseD_3:
005A6CCA  85 C0                     TEST EAX,EAX
005A6CCC  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005A6CD3  74 15                     JZ 0x005a6cea
005A6CD5  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005A6CD8  C7 43 31 00 00 00 00      MOV dword ptr [EBX + 0x31],0x0
005A6CDF  51                        PUSH ECX
005A6CE0  50                        PUSH EAX
005A6CE1  6A 02                     PUSH 0x2
005A6CE3  8B CB                     MOV ECX,EBX
005A6CE5  E8 96 F3 13 00            CALL 0x006e6080
LAB_005a6cea:
005A6CEA  85 FF                     TEST EDI,EDI
005A6CEC  0F 84 B5 1F 00 00         JZ 0x005a8ca7
005A6CF2  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005A6CF5  8B CB                     MOV ECX,EBX
005A6CF7  52                        PUSH EDX
005A6CF8  57                        PUSH EDI
005A6CF9  6A 02                     PUSH 0x2
005A6CFB  C7 43 31 01 00 00 00      MOV dword ptr [EBX + 0x31],0x1
005A6D02  E8 79 F3 13 00            CALL 0x006e6080
005A6D07  E9 9B 1F 00 00            JMP 0x005a8ca7
switchD_005a6301::caseD_694c:
005A6D0C  8B 83 AB 1A 00 00         MOV EAX,dword ptr [EBX + 0x1aab]
005A6D12  3B C7                     CMP EAX,EDI
005A6D14  0F 84 8D 1F 00 00         JZ 0x005a8ca7
005A6D1A  6A 01                     PUSH 0x1
005A6D1C  57                        PUSH EDI
005A6D1D  57                        PUSH EDI
005A6D1E  50                        PUSH EAX
005A6D1F  A1 78 6D 85 00            MOV EAX,[0x00856d78]
005A6D24  68 24 C6 7C 00            PUSH 0x7cc624
005A6D29  50                        PUSH EAX
005A6D2A  FF 15 A4 BD 85 00         CALL dword ptr [0x0085bda4]
005A6D30  83 F8 20                  CMP EAX,0x20
005A6D33  0F 8E 6E 1F 00 00         JLE 0x005a8ca7
005A6D39  8B 8B AF 1A 00 00         MOV ECX,dword ptr [EBX + 0x1aaf]
005A6D3F  51                        PUSH ECX
005A6D40  B9 90 2A 80 00            MOV ECX,0x802a90
005A6D45  FF 15 80 C0 85 00         CALL dword ptr [0x0085c080]
005A6D4B  E9 57 1F 00 00            JMP 0x005a8ca7
switchD_005a6301::caseD_6956:
005A6D50  C6 83 D2 1E 00 00 01      MOV byte ptr [EBX + 0x1ed2],0x1
LAB_005a6d57:
005A6D57  8B CB                     MOV ECX,EBX
005A6D59  E8 8F BF E5 FF            CALL 0x00402ced
005A6D5E  E9 44 1F 00 00            JMP 0x005a8ca7
switchD_005a6301::caseD_6957:
005A6D63  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A6D69  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005A6D6C  3B F7                     CMP ESI,EDI
005A6D6E  75 1A                     JNZ 0x005a6d8a
005A6D70  33 F6                     XOR ESI,ESI
005A6D72  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
005A6D76  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
005A6D7A  83 C6 1F                  ADD ESI,0x1f
005A6D7D  C1 EE 03                  SHR ESI,0x3
005A6D80  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
005A6D86  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_005a6d8a:
005A6D8A  50                        PUSH EAX
005A6D8B  E8 10 E2 10 00            CALL 0x006b4fa0
005A6D90  8B CE                     MOV ECX,ESI
005A6D92  8B F8                     MOV EDI,EAX
005A6D94  8B D1                     MOV EDX,ECX
005A6D96  83 C8 FF                  OR EAX,0xffffffff
005A6D99  C1 E9 02                  SHR ECX,0x2
005A6D9C  F3 AB                     STOSD.REP ES:EDI
005A6D9E  8B CA                     MOV ECX,EDX
005A6DA0  68 F0 00 00 00            PUSH 0xf0
005A6DA5  83 E1 03                  AND ECX,0x3
005A6DA8  68 B8 01 00 00            PUSH 0x1b8
005A6DAD  F3 AA                     STOSB.REP ES:EDI
005A6DAF  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A6DB5  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A6DBB  6A 16                     PUSH 0x16
005A6DBD  6A 00                     PUSH 0x0
005A6DBF  6A 00                     PUSH 0x0
005A6DC1  50                        PUSH EAX
005A6DC2  E8 C9 9C 16 00            CALL 0x00710a90
005A6DC7  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A6DCD  6A FF                     PUSH -0x1
005A6DCF  6A FF                     PUSH -0x1
005A6DD1  6A 02                     PUSH 0x2
005A6DD3  6A FF                     PUSH -0x1
005A6DD5  6A FE                     PUSH -0x2
005A6DD7  51                        PUSH ECX
005A6DD8  68 BE 25 00 00            PUSH 0x25be
005A6DDD  E8 5E 93 10 00            CALL 0x006b0140
005A6DE2  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A6DE8  50                        PUSH EAX
005A6DE9  E8 82 AD 16 00            CALL 0x00711b70
005A6DEE  8B 93 BC 1A 00 00         MOV EDX,dword ptr [EBX + 0x1abc]
005A6DF4  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A6DF9  52                        PUSH EDX
005A6DFA  50                        PUSH EAX
005A6DFB  E8 D0 C7 10 00            CALL 0x006b35d0
005A6E00  8B 0D 20 C0 79 00         MOV ECX,dword ptr [0x0079c020]
005A6E06  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
005A6E0C  68 26 F1 80 00            PUSH 0x80f126
005A6E11  51                        PUSH ECX
005A6E12  68 80 76 80 00            PUSH 0x807680
005A6E17  68 DC 6E 7C 00            PUSH 0x7c6edc
005A6E1C  68 3A F3 80 00            PUSH 0x80f33a
005A6E21  FF D6                     CALL ESI
005A6E23  68 26 F1 80 00            PUSH 0x80f126
005A6E28  8D 95 4C FB FF FF         LEA EDX,[EBP + 0xfffffb4c]
005A6E2E  68 14 C6 7C 00            PUSH 0x7cc614
005A6E33  52                        PUSH EDX
005A6E34  FF D6                     CALL ESI
005A6E36  83 C4 20                  ADD ESP,0x20
005A6E39  8D 85 4C FB FF FF         LEA EAX,[EBP + 0xfffffb4c]
005A6E3F  B9 90 2A 80 00            MOV ECX,0x802a90
005A6E44  50                        PUSH EAX
005A6E45  68 3A F3 80 00            PUSH 0x80f33a
005A6E4A  FF 15 18 C0 85 00         CALL dword ptr [0x0085c018]
LAB_005a6e50:
005A6E50  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A6E56  85 F6                     TEST ESI,ESI
005A6E58  0F 84 49 1E 00 00         JZ 0x005a8ca7
005A6E5E  C6 86 93 04 00 00 05      MOV byte ptr [ESI + 0x493],0x5
005A6E65  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A6E6E  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
005A6E74  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
005A6E7A  51                        PUSH ECX
005A6E7B  52                        PUSH EDX
005A6E7C  6A 00                     PUSH 0x0
005A6E7E  8B CE                     MOV ECX,ESI
005A6E80  E8 F9 E1 E5 FF            CALL 0x0040507e
005A6E85  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A6E8B  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A6E91  50                        PUSH EAX
005A6E92  51                        PUSH ECX
005A6E93  8B CE                     MOV ECX,ESI
005A6E95  E8 84 B5 E5 FF            CALL 0x0040241e
005A6E9A  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A6EA1  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
005A6EAB  E9 F7 1D 00 00            JMP 0x005a8ca7
LAB_005a6eb0:
005A6EB0  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005A6EB3  68 FF 00 00 00            PUSH 0xff
005A6EB8  83 C2 24                  ADD EDX,0x24
005A6EBB  8B 02                     MOV EAX,dword ptr [EDX]
005A6EBD  2D B4 00 00 00            SUB EAX,0xb4
005A6EC2  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
005A6EC5  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005A6EC8  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005A6ECB  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
005A6ECE  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
005A6ED1  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
005A6ED4  8A 93 BB 1A 00 00         MOV DL,byte ptr [EBX + 0x1abb]
005A6EDA  F6 DA                     NEG DL
005A6EDC  1B D2                     SBB EDX,EDX
005A6EDE  83 C1 02                  ADD ECX,0x2
005A6EE1  83 E2 B4                  AND EDX,0xffffffb4
005A6EE4  81 C2 AA 00 00 00         ADD EDX,0xaa
005A6EEA  2B FA                     SUB EDI,EDX
005A6EEC  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005A6EEF  52                        PUSH EDX
005A6EF0  51                        PUSH ECX
005A6EF1  48                        DEC EAX
005A6EF2  57                        PUSH EDI
005A6EF3  50                        PUSH EAX
005A6EF4  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A6EFA  6A 00                     PUSH 0x0
005A6EFC  50                        PUSH EAX
005A6EFD  89 7D A8                  MOV dword ptr [EBP + -0x58],EDI
005A6F00  E8 6B D2 10 00            CALL 0x006b4170
005A6F05  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005A6F08  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
005A6F0B  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
005A6F0E  51                        PUSH ECX
005A6F0F  8B 8B C0 1A 00 00         MOV ECX,dword ptr [EBX + 0x1ac0]
005A6F15  52                        PUSH EDX
005A6F16  57                        PUSH EDI
005A6F17  50                        PUSH EAX
005A6F18  6A 00                     PUSH 0x0
005A6F1A  51                        PUSH ECX
005A6F1B  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A6F21  E8 6A 9B 16 00            CALL 0x00710a90
005A6F26  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A6F29  85 C0                     TEST EAX,EAX
005A6F2B  74 14                     JZ 0x005a6f41
005A6F2D  8B 10                     MOV EDX,dword ptr [EAX]
005A6F2F  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A6F35  6A 00                     PUSH 0x0
005A6F37  6A FF                     PUSH -0x1
005A6F39  6A 00                     PUSH 0x0
005A6F3B  52                        PUSH EDX
005A6F3C  E8 7F AA 16 00            CALL 0x007119c0
LAB_005a6f41:
005A6F41  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
005A6F45  66 3D FF FF               CMP AX,0xffff
005A6F49  75 06                     JNZ 0x005a6f51
005A6F4B  66 39 46 1A               CMP word ptr [ESI + 0x1a],AX
005A6F4F  74 28                     JZ 0x005a6f79
LAB_005a6f51:
005A6F51  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005A6F54  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005A6F57  25 FF FF 00 00            AND EAX,0xffff
005A6F5C  6A 0D                     PUSH 0xd
005A6F5E  03 C1                     ADD EAX,ECX
005A6F60  8D 4C 3A FE               LEA ECX,[EDX + EDI*0x1 + -0x2]
005A6F64  8B 93 C0 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ac0]
005A6F6A  6A 09                     PUSH 0x9
005A6F6C  51                        PUSH ECX
005A6F6D  47                        INC EDI
005A6F6E  50                        PUSH EAX
005A6F6F  57                        PUSH EDI
005A6F70  50                        PUSH EAX
005A6F71  6A 00                     PUSH 0x0
005A6F73  52                        PUSH EDX
005A6F74  E8 97 EB 10 00            CALL 0x006b5b10
LAB_005a6f79:
005A6F79  8B 83 BC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1abc]
005A6F7F  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005A6F85  50                        PUSH EAX
005A6F86  51                        PUSH ECX
005A6F87  E8 44 C6 10 00            CALL 0x006b35d0
005A6F8C  E9 16 1D 00 00            JMP 0x005a8ca7
LAB_005a6f91:
005A6F91  3D 60 81 00 00            CMP EAX,0x8160
005A6F96  0F 87 93 0D 00 00         JA 0x005a7d2f
005A6F9C  0F 84 81 0D 00 00         JZ 0x005a7d23
005A6FA2  8D 88 80 96 FF FF         LEA ECX,[EAX + 0xffff9680]
005A6FA8  83 F9 12                  CMP ECX,0x12
005A6FAB  0F 87 F6 1C 00 00         JA 0x005a8ca7
switchD_005a6fb1::switchD:
005A6FB1  FF 24 8D D4 8E 5A 00      JMP dword ptr [ECX*0x4 + 0x5a8ed4]
switchD_005a6fb1::caseD_6980:
005A6FB8  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005A6FBB  68 FF 00 00 00            PUSH 0xff
005A6FC0  8B 32                     MOV ESI,dword ptr [EDX]
005A6FC2  81 EE B4 00 00 00         SUB ESI,0xb4
005A6FC8  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
005A6FCB  89 B5 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],ESI
005A6FD1  81 EF AA 00 00 00         SUB EDI,0xaa
005A6FD7  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005A6FDA  89 BD C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDI
005A6FE0  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
005A6FE6  83 C0 FE                  ADD EAX,-0x2
005A6FE9  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
005A6FEC  8B 93 C0 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ac0]
005A6FF2  89 8D D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],ECX
005A6FF8  83 C1 FE                  ADD ECX,-0x2
005A6FFB  51                        PUSH ECX
005A6FFC  50                        PUSH EAX
005A6FFD  8D 47 01                  LEA EAX,[EDI + 0x1]
005A7000  8D 4E 01                  LEA ECX,[ESI + 0x1]
005A7003  50                        PUSH EAX
005A7004  51                        PUSH ECX
005A7005  6A 00                     PUSH 0x0
005A7007  52                        PUSH EDX
005A7008  E8 63 D1 10 00            CALL 0x006b4170
005A700D  A0 5F 73 80 00            MOV AL,[0x0080735f]
005A7012  84 C0                     TEST AL,AL
005A7014  0F 84 8D 1C 00 00         JZ 0x005a8ca7
005A701A  8B 83 83 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a83]
005A7020  6A 00                     PUSH 0x0
005A7022  50                        PUSH EAX
005A7023  E8 78 43 16 00            CALL 0x0070b3a0
005A7028  8B 8B C0 1A 00 00         MOV ECX,dword ptr [EBX + 0x1ac0]
005A702E  50                        PUSH EAX
005A702F  83 C7 02                  ADD EDI,0x2
005A7032  6A 06                     PUSH 0x6
005A7034  83 C6 02                  ADD ESI,0x2
005A7037  57                        PUSH EDI
005A7038  56                        PUSH ESI
005A7039  51                        PUSH ECX
005A703A  E8 EA C1 E5 FF            CALL 0x00403229
005A703F  83 C4 1C                  ADD ESP,0x1c
005A7042  E9 60 1C 00 00            JMP 0x005a8ca7
switchD_005a6fb1::caseD_6981:
005A7047  8B BB 73 1A 00 00         MOV EDI,dword ptr [EBX + 0x1a73]
005A704D  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
005A7054  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
005A705A  85 C0                     TEST EAX,EAX
005A705C  74 09                     JZ 0x005a7067
005A705E  57                        PUSH EDI
005A705F  E8 2C 97 16 00            CALL 0x00710790
005A7064  83 C4 04                  ADD ESP,0x4
LAB_005a7067:
005A7067  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005A706A  68 FF 00 00 00            PUSH 0xff
005A706F  83 C2 24                  ADD EDX,0x24
005A7072  8B BF 8A 00 00 00         MOV EDI,dword ptr [EDI + 0x8a]
005A7078  8B 02                     MOV EAX,dword ptr [EDX]
005A707A  2D B4 00 00 00            SUB EAX,0xb4
005A707F  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
005A7082  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005A7085  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
005A7088  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005A708B  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
005A708E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005A7091  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
005A7094  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
005A7097  8A 93 BB 1A 00 00         MOV DL,byte ptr [EBX + 0x1abb]
005A709D  F6 DA                     NEG DL
005A709F  1B D2                     SBB EDX,EDX
005A70A1  83 E2 B4                  AND EDX,0xffffffb4
005A70A4  81 C2 AA 00 00 00         ADD EDX,0xaa
005A70AA  2B CA                     SUB ECX,EDX
005A70AC  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
005A70AF  52                        PUSH EDX
005A70B0  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
005A70B3  83 C2 02                  ADD EDX,0x2
005A70B6  48                        DEC EAX
005A70B7  52                        PUSH EDX
005A70B8  51                        PUSH ECX
005A70B9  50                        PUSH EAX
005A70BA  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A70C0  6A 00                     PUSH 0x0
005A70C2  50                        PUSH EAX
005A70C3  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
005A70C6  E8 A5 D0 10 00            CALL 0x006b4170
005A70CB  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A70CE  85 C0                     TEST EAX,EAX
005A70D0  0F 84 83 00 00 00         JZ 0x005a7159
005A70D6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_005a70dd:
005A70DD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005A70E0  8B 04 08                  MOV EAX,dword ptr [EAX + ECX*0x1]
005A70E3  85 C0                     TEST EAX,EAX
005A70E5  74 72                     JZ 0x005a7159
005A70E7  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A70ED  50                        PUSH EAX
005A70EE  E8 CD A0 16 00            CALL 0x007111c0
005A70F3  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
005A70F6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005A70F9  8B F8                     MOV EDI,EAX
005A70FB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005A70FE  57                        PUSH EDI
005A70FF  52                        PUSH EDX
005A7100  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005A7103  03 C1                     ADD EAX,ECX
005A7105  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A710B  50                        PUSH EAX
005A710C  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A7112  52                        PUSH EDX
005A7113  6A 00                     PUSH 0x0
005A7115  50                        PUSH EAX
005A7116  E8 75 99 16 00            CALL 0x00710a90
005A711B  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005A711E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005A7121  6A 00                     PUSH 0x0
005A7123  6A FF                     PUSH -0x1
005A7125  8B 04 11                  MOV EAX,dword ptr [ECX + EDX*0x1]
005A7128  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A712E  6A 00                     PUSH 0x0
005A7130  50                        PUSH EAX
005A7131  E8 8A A8 16 00            CALL 0x007119c0
005A7136  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A713C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005A713F  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
005A7142  03 D7                     ADD EDX,EDI
005A7144  03 C2                     ADD EAX,EDX
005A7146  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005A7149  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005A714C  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A714F  83 C2 04                  ADD EDX,0x4
005A7152  85 C0                     TEST EAX,EAX
005A7154  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005A7157  75 84                     JNZ 0x005a70dd
LAB_005a7159:
005A7159  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
005A715D  66 3D FF FF               CMP AX,0xffff
005A7161  75 0A                     JNZ 0x005a716d
005A7163  66 39 46 1A               CMP word ptr [ESI + 0x1a],AX
005A7167  0F 84 25 0B 00 00         JZ 0x005a7c92
LAB_005a716d:
005A716D  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005A7170  33 C9                     XOR ECX,ECX
005A7172  66 8B 4E 1A               MOV CX,word ptr [ESI + 0x1a]
005A7176  25 FF FF 00 00            AND EAX,0xffff
005A717B  03 CA                     ADD ECX,EDX
005A717D  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005A7180  03 C2                     ADD EAX,EDX
005A7182  6A 0D                     PUSH 0xd
005A7184  8D 14 39                  LEA EDX,[ECX + EDI*0x1]
005A7187  6A 09                     PUSH 0x9
005A7189  52                        PUSH EDX
005A718A  50                        PUSH EAX
005A718B  51                        PUSH ECX
005A718C  50                        PUSH EAX
005A718D  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A7193  6A 00                     PUSH 0x0
005A7195  50                        PUSH EAX
005A7196  E8 75 E9 10 00            CALL 0x006b5b10
005A719B  E9 F2 0A 00 00            JMP 0x005a7c92
switchD_005a6fb1::caseD_6982:
005A71A0  39 BB 8E 1E 00 00         CMP dword ptr [EBX + 0x1e8e],EDI
005A71A6  0F 84 FB 1A 00 00         JZ 0x005a8ca7
005A71AC  39 BB 92 1E 00 00         CMP dword ptr [EBX + 0x1e92],EDI
005A71B2  0F 84 EF 1A 00 00         JZ 0x005a8ca7
005A71B8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
005A71BB  3B C7                     CMP EAX,EDI
005A71BD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005A71C0  0F 84 E1 1A 00 00         JZ 0x005a8ca7
005A71C6  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005A71CC  3C 03                     CMP AL,0x3
005A71CE  75 08                     JNZ 0x005a71d8
005A71D0  8B BB 73 1A 00 00         MOV EDI,dword ptr [EBX + 0x1a73]
005A71D6  EB 06                     JMP 0x005a71de
LAB_005a71d8:
005A71D8  8B BB 77 1A 00 00         MOV EDI,dword ptr [EBX + 0x1a77]
LAB_005a71de:
005A71DE  3C 03                     CMP AL,0x3
005A71E0  75 0B                     JNZ 0x005a71ed
005A71E2  8B 83 08 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b08]
005A71E8  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005A71EB  EB 09                     JMP 0x005a71f6
LAB_005a71ed:
005A71ED  8B 8B 9E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e9e]
005A71F3  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_005a71f6:
005A71F6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A71F9  8B 50 30                  MOV EDX,dword ptr [EAX + 0x30]
005A71FC  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005A71FF  52                        PUSH EDX
005A7200  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
005A7203  8B 40 24                  MOV EAX,dword ptr [EAX + 0x24]
005A7206  51                        PUSH ECX
005A7207  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005A720D  52                        PUSH EDX
005A720E  50                        PUSH EAX
005A720F  51                        PUSH ECX
005A7210  E8 6B ED 10 00            CALL 0x006b5f80
005A7215  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A7218  8B 93 92 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e92]
005A721E  52                        PUSH EDX
005A721F  6A 01                     PUSH 0x1
005A7221  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005A7224  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
005A7227  51                        PUSH ECX
005A7228  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
005A722B  52                        PUSH EDX
005A722C  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
005A722F  6A 01                     PUSH 0x1
005A7231  6A 06                     PUSH 0x6
005A7233  51                        PUSH ECX
005A7234  52                        PUSH EDX
005A7235  E8 5E B0 E5 FF            CALL 0x00402298
005A723A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A723D  83 C4 20                  ADD ESP,0x20
005A7240  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005A7243  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
005A7246  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A724C  68 FF 00 00 00            PUSH 0xff
005A7251  51                        PUSH ECX
005A7252  52                        PUSH EDX
005A7253  6A 00                     PUSH 0x0
005A7255  6A 00                     PUSH 0x0
005A7257  6A 00                     PUSH 0x0
005A7259  50                        PUSH EAX
005A725A  E8 11 CF 10 00            CALL 0x006b4170
005A725F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005A7262  33 C0                     XOR EAX,EAX
005A7264  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
005A7268  8B C8                     MOV ECX,EAX
005A726A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005A726D  03 8A E0 01 00 00         ADD ECX,dword ptr [EDX + 0x1e0]
005A7273  3B C1                     CMP EAX,ECX
005A7275  0F 8D A9 00 00 00         JGE 0x005a7324
005A727B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
005A727E  EB 03                     JMP 0x005a7283
LAB_005a7280:
005A7280  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_005a7283:
005A7283  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
005A7286  7D 08                     JGE 0x005a7290
005A7288  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
005A728B  8B 0C 81                  MOV ECX,dword ptr [ECX + EAX*0x4]
005A728E  EB 02                     JMP 0x005a7292
LAB_005a7290:
005A7290  33 C9                     XOR ECX,ECX
LAB_005a7292:
005A7292  85 C9                     TEST ECX,ECX
005A7294  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005A7297  74 70                     JZ 0x005a7309
005A7299  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
005A729F  85 C0                     TEST EAX,EAX
005A72A1  74 09                     JZ 0x005a72ac
005A72A3  57                        PUSH EDI
005A72A4  E8 E7 94 16 00            CALL 0x00710790
005A72A9  83 C4 04                  ADD ESP,0x4
LAB_005a72ac:
005A72AC  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
005A72B2  8B 97 8A 00 00 00         MOV EDX,dword ptr [EDI + 0x8a]
005A72B8  85 C0                     TEST EAX,EAX
005A72BA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005A72BD  74 09                     JZ 0x005a72c8
005A72BF  57                        PUSH EDI
005A72C0  E8 CB 94 16 00            CALL 0x00710790
005A72C5  83 C4 04                  ADD ESP,0x4
LAB_005a72c8:
005A72C8  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A72CE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005A72D1  51                        PUSH ECX
005A72D2  33 C9                     XOR ECX,ECX
005A72D4  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005A72D7  66 8B 4E 16               MOV CX,word ptr [ESI + 0x16]
005A72DB  52                        PUSH EDX
005A72DC  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005A72DF  2B D1                     SUB EDX,ECX
005A72E1  8B CF                     MOV ECX,EDI
005A72E3  0F AF 97 8A 00 00 00      IMUL EDX,dword ptr [EDI + 0x8a]
005A72EA  52                        PUSH EDX
005A72EB  6A 00                     PUSH 0x0
005A72ED  6A 00                     PUSH 0x0
005A72EF  50                        PUSH EAX
005A72F0  E8 9B 97 16 00            CALL 0x00710a90
005A72F5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005A72F8  6A 02                     PUSH 0x2
005A72FA  6A FF                     PUSH -0x1
005A72FC  6A 00                     PUSH 0x0
005A72FE  50                        PUSH EAX
005A72FF  8B CF                     MOV ECX,EDI
005A7301  E8 BA A6 16 00            CALL 0x007119c0
005A7306  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_005a7309:
005A7309  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005A730C  33 C9                     XOR ECX,ECX
005A730E  66 8B 4E 16               MOV CX,word ptr [ESI + 0x16]
005A7312  40                        INC EAX
005A7313  03 8A E0 01 00 00         ADD ECX,dword ptr [EDX + 0x1e0]
005A7319  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005A731C  3B C1                     CMP EAX,ECX
005A731E  0F 8C 5C FF FF FF         JL 0x005a7280
LAB_005a7324:
005A7324  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A7327  68 FF 00 00 01            PUSH 0x10000ff
005A732C  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
005A732F  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
005A7332  51                        PUSH ECX
005A7333  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A7339  52                        PUSH EDX
005A733A  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
005A733D  8B 40 24                  MOV EAX,dword ptr [EAX + 0x24]
005A7340  6A 00                     PUSH 0x0
005A7342  6A 00                     PUSH 0x0
005A7344  6A 00                     PUSH 0x0
005A7346  51                        PUSH ECX
005A7347  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005A734D  52                        PUSH EDX
005A734E  50                        PUSH EAX
005A734F  51                        PUSH ECX
005A7350  E8 2B D3 10 00            CALL 0x006b4680
005A7355  E9 4D 19 00 00            JMP 0x005a8ca7
switchD_005a6fb1::caseD_6983:
005A735A  39 BB 8E 1E 00 00         CMP dword ptr [EBX + 0x1e8e],EDI
005A7360  0F 84 41 19 00 00         JZ 0x005a8ca7
005A7366  39 BB 92 1E 00 00         CMP dword ptr [EBX + 0x1e92],EDI
005A736C  0F 84 35 19 00 00         JZ 0x005a8ca7
005A7372  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
005A7375  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A7378  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A737B  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
005A737E  52                        PUSH EDX
005A737F  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
005A7382  50                        PUSH EAX
005A7383  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A7388  51                        PUSH ECX
005A7389  52                        PUSH EDX
005A738A  50                        PUSH EAX
005A738B  E8 F0 EB 10 00            CALL 0x006b5f80
005A7390  8B 8B 92 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e92]
005A7396  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A7399  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A739C  51                        PUSH ECX
005A739D  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
005A73A0  6A 01                     PUSH 0x1
005A73A2  52                        PUSH EDX
005A73A3  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
005A73A6  50                        PUSH EAX
005A73A7  68 5F 01 00 00            PUSH 0x15f
005A73AC  6A 06                     PUSH 0x6
005A73AE  51                        PUSH ECX
005A73AF  52                        PUSH EDX
005A73B0  E8 E3 AE E5 FF            CALL 0x00402298
005A73B5  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
005A73B8  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A73BB  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A73C1  83 C4 20                  ADD ESP,0x20
005A73C4  68 FF 00 00 00            PUSH 0xff
005A73C9  50                        PUSH EAX
005A73CA  51                        PUSH ECX
005A73CB  6A 00                     PUSH 0x0
005A73CD  6A 00                     PUSH 0x0
005A73CF  6A 00                     PUSH 0x0
005A73D1  52                        PUSH EDX
005A73D2  E8 99 CD 10 00            CALL 0x006b4170
005A73D7  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A73DA  85 C0                     TEST EAX,EAX
005A73DC  74 35                     JZ 0x005a7413
005A73DE  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A73E4  6A 14                     PUSH 0x14
005A73E6  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005A73E9  51                        PUSH ECX
005A73EA  8B 8B 77 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a77]
005A73F0  6A 00                     PUSH 0x0
005A73F2  6A 00                     PUSH 0x0
005A73F4  6A 00                     PUSH 0x0
005A73F6  50                        PUSH EAX
005A73F7  E8 94 96 16 00            CALL 0x00710a90
005A73FC  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005A73FF  8B 8B 77 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a77]
005A7405  6A 05                     PUSH 0x5
005A7407  6A FF                     PUSH -0x1
005A7409  8B 02                     MOV EAX,dword ptr [EDX]
005A740B  6A 00                     PUSH 0x0
005A740D  50                        PUSH EAX
005A740E  E8 AD A5 16 00            CALL 0x007119c0
LAB_005a7413:
005A7413  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
005A7417  66 3D FF FF               CMP AX,0xffff
005A741B  75 06                     JNZ 0x005a7423
005A741D  66 39 46 1A               CMP word ptr [ESI + 0x1a],AX
005A7421  74 1D                     JZ 0x005a7440
LAB_005a7423:
005A7423  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A7429  6A 0D                     PUSH 0xd
005A742B  25 FF FF 00 00            AND EAX,0xffff
005A7430  6A 09                     PUSH 0x9
005A7432  6A 11                     PUSH 0x11
005A7434  50                        PUSH EAX
005A7435  6A 02                     PUSH 0x2
005A7437  50                        PUSH EAX
005A7438  6A 00                     PUSH 0x0
005A743A  51                        PUSH ECX
005A743B  E8 D0 E6 10 00            CALL 0x006b5b10
LAB_005a7440:
005A7440  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A7443  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A7446  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A744C  68 FF 00 00 01            PUSH 0x10000ff
005A7451  52                        PUSH EDX
005A7452  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
005A7455  50                        PUSH EAX
005A7456  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005A7459  6A 00                     PUSH 0x0
005A745B  6A 00                     PUSH 0x0
005A745D  6A 00                     PUSH 0x0
005A745F  51                        PUSH ECX
005A7460  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005A7466  52                        PUSH EDX
005A7467  50                        PUSH EAX
005A7468  51                        PUSH ECX
005A7469  E8 12 D2 10 00            CALL 0x006b4680
005A746E  E9 34 18 00 00            JMP 0x005a8ca7
switchD_005a6fb1::caseD_6984:
005A7473  39 BB 8E 1E 00 00         CMP dword ptr [EBX + 0x1e8e],EDI
005A7479  0F 84 28 18 00 00         JZ 0x005a8ca7
005A747F  39 BB 92 1E 00 00         CMP dword ptr [EBX + 0x1e92],EDI
005A7485  0F 84 1C 18 00 00         JZ 0x005a8ca7
005A748B  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
005A748E  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A7491  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A7494  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
005A7497  52                        PUSH EDX
005A7498  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
005A749B  50                        PUSH EAX
005A749C  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A74A1  51                        PUSH ECX
005A74A2  52                        PUSH EDX
005A74A3  50                        PUSH EAX
005A74A4  E8 D7 EA 10 00            CALL 0x006b5f80
005A74A9  8B 8B 92 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e92]
005A74AF  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005A74B2  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A74B5  51                        PUSH ECX
005A74B6  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A74B9  6A 01                     PUSH 0x1
005A74BB  52                        PUSH EDX
005A74BC  51                        PUSH ECX
005A74BD  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
005A74C0  8D 50 ED                  LEA EDX,[EAX + -0x13]
005A74C3  68 60 01 00 00            PUSH 0x160
005A74C8  52                        PUSH EDX
005A74C9  51                        PUSH ECX
005A74CA  50                        PUSH EAX
005A74CB  E8 C8 AD E5 FF            CALL 0x00402298
005A74D0  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A74D3  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A74D6  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A74DC  83 C4 20                  ADD ESP,0x20
005A74DF  68 FF 00 00 00            PUSH 0xff
005A74E4  52                        PUSH EDX
005A74E5  50                        PUSH EAX
005A74E6  6A 00                     PUSH 0x0
005A74E8  6A 00                     PUSH 0x0
005A74EA  6A 00                     PUSH 0x0
005A74EC  51                        PUSH ECX
005A74ED  E8 7E CC 10 00            CALL 0x006b4170
005A74F2  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A74F5  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A74F8  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A74FE  52                        PUSH EDX
005A74FF  50                        PUSH EAX
005A7500  6A 00                     PUSH 0x0
005A7502  6A 00                     PUSH 0x0
005A7504  6A 00                     PUSH 0x0
005A7506  51                        PUSH ECX
005A7507  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A750D  E8 7E 95 16 00            CALL 0x00710a90
005A7512  66 8B 76 14               MOV SI,word ptr [ESI + 0x14]
005A7516  66 83 FE 01               CMP SI,0x1
005A751A  75 07                     JNZ 0x005a7523
005A751C  BE 02 00 00 00            MOV ESI,0x2
005A7521  EB 09                     JMP 0x005a752c
LAB_005a7523:
005A7523  66 F7 DE                  NEG SI
005A7526  1B F6                     SBB ESI,ESI
005A7528  83 E6 02                  AND ESI,0x2
005A752B  46                        INC ESI
LAB_005a752c:
005A752C  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005A7532  56                        PUSH ESI
005A7533  6A FF                     PUSH -0x1
005A7535  6A FF                     PUSH -0x1
005A7537  52                        PUSH EDX
005A7538  68 65 25 00 00            PUSH 0x2565
005A753D  E8 FE 8B 10 00            CALL 0x006b0140
005A7542  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A7548  50                        PUSH EAX
005A7549  E8 72 A4 16 00            CALL 0x007119c0
LAB_005a754e:
005A754E  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
005A7551  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A7554  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A755A  68 FF 00 00 01            PUSH 0x10000ff
005A755F  50                        PUSH EAX
005A7560  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
005A7563  51                        PUSH ECX
005A7564  6A 00                     PUSH 0x0
005A7566  6A 00                     PUSH 0x0
005A7568  6A 00                     PUSH 0x0
005A756A  52                        PUSH EDX
005A756B  E9 86 14 00 00            JMP 0x005a89f6
switchD_005a6fb1::caseD_6985:
005A7570  39 BB 8E 1E 00 00         CMP dword ptr [EBX + 0x1e8e],EDI
005A7576  0F 84 2B 17 00 00         JZ 0x005a8ca7
005A757C  05 7B 96 FF FF            ADD EAX,0xffff967b
005A7581  33 C9                     XOR ECX,ECX
005A7583  83 F8 0D                  CMP EAX,0xd
005A7586  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005A7589  77 4A                     JA 0x005a75d5
005A758B  33 D2                     XOR EDX,EDX
005A758D  8A 90 30 8F 5A 00         MOV DL,byte ptr [EAX + 0x5a8f30]
switchD_005a7593::switchD:
005A7593  FF 24 95 20 8F 5A 00      JMP dword ptr [EDX*0x4 + 0x5a8f20]
switchD_005a7593::caseD_6985:
005A759A  8B 8B 9A 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e9a]
005A75A0  C7 45 F4 E9 01 00 00      MOV dword ptr [EBP + -0xc],0x1e9
005A75A7  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005A75AA  EB 22                     JMP 0x005a75ce
switchD_005a7593::caseD_6989:
005A75AC  8B 8B 92 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e92]
005A75B2  C7 45 F4 99 01 00 00      MOV dword ptr [EBP + -0xc],0x199
005A75B9  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005A75BC  EB 10                     JMP 0x005a75ce
switchD_005a7593::caseD_698e:
005A75BE  8B 8B 92 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e92]
005A75C4  C7 45 F4 22 00 00 00      MOV dword ptr [EBP + -0xc],0x22
005A75CB  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_005a75ce:
005A75CE  C7 45 E8 5E 00 00 00      MOV dword ptr [EBP + -0x18],0x5e
switchD_005a7593::caseD_6987:
005A75D5  3B CF                     CMP ECX,EDI
005A75D7  0F 84 CA 16 00 00         JZ 0x005a8ca7
005A75DD  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
005A75E0  83 F8 0D                  CMP EAX,0xd
005A75E3  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005A75E6  0F 87 80 01 00 00         JA 0x005a776c
switchD_005a75ec::switchD:
005A75EC  FF 24 85 40 8F 5A 00      JMP dword ptr [EAX*0x4 + 0x5a8f40]
switchD_005a75ec::caseD_0:
005A75F3  C7 45 FC 66 25 00 00      MOV dword ptr [EBP + -0x4],0x2566
005A75FA  E9 6D 01 00 00            JMP 0x005a776c
switchD_005a75ec::caseD_1:
005A75FF  C7 45 FC 16 26 00 00      MOV dword ptr [EBP + -0x4],0x2616
005A7606  E9 61 01 00 00            JMP 0x005a776c
switchD_005a75ec::caseD_4:
005A760B  8B 83 C2 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ec2]
005A7611  3D 00 04 00 00            CMP EAX,0x400
005A7616  77 34                     JA 0x005a764c
005A7618  74 26                     JZ 0x005a7640
005A761A  3D 00 01 00 00            CMP EAX,0x100
005A761F  74 13                     JZ 0x005a7634
005A7621  3D 00 02 00 00            CMP EAX,0x200
005A7626  75 2E                     JNZ 0x005a7656
005A7628  C7 45 FC 5A 23 00 00      MOV dword ptr [EBP + -0x4],0x235a
005A762F  E9 38 01 00 00            JMP 0x005a776c
LAB_005a7634:
005A7634  C7 45 FC 41 23 00 00      MOV dword ptr [EBP + -0x4],0x2341
005A763B  E9 2C 01 00 00            JMP 0x005a776c
LAB_005a7640:
005A7640  C7 45 FC 5B 23 00 00      MOV dword ptr [EBP + -0x4],0x235b
005A7647  E9 20 01 00 00            JMP 0x005a776c
LAB_005a764c:
005A764C  2D 01 05 00 00            SUB EAX,0x501
005A7651  74 1B                     JZ 0x005a766e
005A7653  48                        DEC EAX
005A7654  74 0C                     JZ 0x005a7662
LAB_005a7656:
005A7656  C7 45 FC 5C 23 00 00      MOV dword ptr [EBP + -0x4],0x235c
005A765D  E9 0A 01 00 00            JMP 0x005a776c
LAB_005a7662:
005A7662  C7 45 FC 5D 23 00 00      MOV dword ptr [EBP + -0x4],0x235d
005A7669  E9 FE 00 00 00            JMP 0x005a776c
LAB_005a766e:
005A766E  C7 45 FC 42 23 00 00      MOV dword ptr [EBP + -0x4],0x2342
005A7675  E9 F2 00 00 00            JMP 0x005a776c
switchD_005a75ec::caseD_5:
005A767A  83 BB C6 1E 00 00 FF      CMP dword ptr [EBX + 0x1ec6],-0x1
005A7681  75 3D                     JNZ 0x005a76c0
005A7683  A1 18 76 80 00            MOV EAX,[0x00807618]
005A7688  50                        PUSH EAX
005A7689  68 5C 23 00 00            PUSH 0x235c
005A768E  E8 AD 8A 10 00            CALL 0x006b0140
005A7693  8B F8                     MOV EDI,EAX
005A7695  83 C9 FF                  OR ECX,0xffffffff
005A7698  33 C0                     XOR EAX,EAX
005A769A  F2 AE                     SCASB.REPNE ES:EDI
005A769C  F7 D1                     NOT ECX
005A769E  2B F9                     SUB EDI,ECX
005A76A0  8B D1                     MOV EDX,ECX
005A76A2  8B F7                     MOV ESI,EDI
005A76A4  BF 3A F3 80 00            MOV EDI,0x80f33a
005A76A9  C1 E9 02                  SHR ECX,0x2
005A76AC  F3 A5                     MOVSD.REP ES:EDI,ESI
005A76AE  8B CA                     MOV ECX,EDX
005A76B0  83 E1 03                  AND ECX,0x3
005A76B3  F3 A4                     MOVSB.REP ES:EDI,ESI
005A76B5  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005A76B8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005A76BB  E9 AC 00 00 00            JMP 0x005a776c
LAB_005a76c0:
005A76C0  8B 15 02 C5 80 00         MOV EDX,dword ptr [0x0080c502]
005A76C6  8B 8B CA 1E 00 00         MOV ECX,dword ptr [EBX + 0x1eca]
005A76CC  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
005A76CF  73 0B                     JNC 0x005a76dc
005A76D1  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005A76D4  0F AF C1                  IMUL EAX,ECX
005A76D7  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005A76DA  EB 02                     JMP 0x005a76de
LAB_005a76dc:
005A76DC  33 C0                     XOR EAX,EAX
LAB_005a76de:
005A76DE  85 C0                     TEST EAX,EAX
005A76E0  75 05                     JNZ 0x005a76e7
005A76E2  B8 A0 16 80 00            MOV EAX,0x8016a0
LAB_005a76e7:
005A76E7  8B F8                     MOV EDI,EAX
005A76E9  83 C9 FF                  OR ECX,0xffffffff
005A76EC  33 C0                     XOR EAX,EAX
005A76EE  F2 AE                     SCASB.REPNE ES:EDI
005A76F0  F7 D1                     NOT ECX
005A76F2  2B F9                     SUB EDI,ECX
005A76F4  8B C1                     MOV EAX,ECX
005A76F6  8B F7                     MOV ESI,EDI
005A76F8  BF 3A F3 80 00            MOV EDI,0x80f33a
005A76FD  C1 E9 02                  SHR ECX,0x2
005A7700  F3 A5                     MOVSD.REP ES:EDI,ESI
005A7702  8B C8                     MOV ECX,EAX
005A7704  83 E1 03                  AND ECX,0x3
005A7707  F3 A4                     MOVSB.REP ES:EDI,ESI
005A7709  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005A770C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005A770F  EB 5B                     JMP 0x005a776c
switchD_005a75ec::caseD_9:
005A7711  A1 40 31 80 00            MOV EAX,[0x00803140]
005A7716  83 E8 02                  SUB EAX,0x2
005A7719  74 09                     JZ 0x005a7724
005A771B  C7 45 FC B4 25 00 00      MOV dword ptr [EBP + -0x4],0x25b4
005A7722  EB 48                     JMP 0x005a776c
LAB_005a7724:
005A7724  C7 45 FC B5 25 00 00      MOV dword ptr [EBP + -0x4],0x25b5
005A772B  EB 3F                     JMP 0x005a776c
switchD_005a75ec::caseD_a:
005A772D  A1 44 31 80 00            MOV EAX,[0x00803144]
005A7732  48                        DEC EAX
005A7733  74 15                     JZ 0x005a774a
005A7735  48                        DEC EAX
005A7736  74 09                     JZ 0x005a7741
005A7738  C7 45 FC BF 25 00 00      MOV dword ptr [EBP + -0x4],0x25bf
005A773F  EB 2B                     JMP 0x005a776c
LAB_005a7741:
005A7741  C7 45 FC C1 25 00 00      MOV dword ptr [EBP + -0x4],0x25c1
005A7748  EB 22                     JMP 0x005a776c
LAB_005a774a:
005A774A  C7 45 FC C0 25 00 00      MOV dword ptr [EBP + -0x4],0x25c0
005A7751  EB 19                     JMP 0x005a776c
switchD_005a75ec::caseD_b:
005A7753  C7 45 FC B2 25 00 00      MOV dword ptr [EBP + -0x4],0x25b2
005A775A  EB 10                     JMP 0x005a776c
switchD_005a75ec::caseD_c:
005A775C  C7 45 FC B3 25 00 00      MOV dword ptr [EBP + -0x4],0x25b3
005A7763  EB 07                     JMP 0x005a776c
switchD_005a75ec::caseD_d:
005A7765  C7 45 FC B1 25 00 00      MOV dword ptr [EBP + -0x4],0x25b1
switchD_005a75ec::caseD_2:
005A776C  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
005A776F  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
005A7772  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
005A7775  51                        PUSH ECX
005A7776  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005A7779  52                        PUSH EDX
005A777A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005A7780  50                        PUSH EAX
005A7781  51                        PUSH ECX
005A7782  52                        PUSH EDX
005A7783  E8 F8 E7 10 00            CALL 0x006b5f80
005A7788  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005A778B  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
005A778E  52                        PUSH EDX
005A778F  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A7792  6A 01                     PUSH 0x1
005A7794  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005A7797  52                        PUSH EDX
005A7798  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
005A779B  52                        PUSH EDX
005A779C  8B D0                     MOV EDX,EAX
005A779E  2B 55 E8                  SUB EDX,dword ptr [EBP + -0x18]
005A77A1  52                        PUSH EDX
005A77A2  8B D1                     MOV EDX,ECX
005A77A4  2B 55 F4                  SUB EDX,dword ptr [EBP + -0xc]
005A77A7  52                        PUSH EDX
005A77A8  50                        PUSH EAX
005A77A9  51                        PUSH ECX
005A77AA  E8 E9 AA E5 FF            CALL 0x00402298
005A77AF  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
005A77B2  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A77B5  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A77BB  83 C4 20                  ADD ESP,0x20
005A77BE  68 FF 00 00 00            PUSH 0xff
005A77C3  50                        PUSH EAX
005A77C4  51                        PUSH ECX
005A77C5  6A 00                     PUSH 0x0
005A77C7  6A 00                     PUSH 0x0
005A77C9  6A 00                     PUSH 0x0
005A77CB  52                        PUSH EDX
005A77CC  E8 9F C9 10 00            CALL 0x006b4170
005A77D1  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
005A77D4  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A77D7  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A77DD  50                        PUSH EAX
005A77DE  51                        PUSH ECX
005A77DF  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A77E5  6A 00                     PUSH 0x0
005A77E7  6A 00                     PUSH 0x0
005A77E9  6A 00                     PUSH 0x0
005A77EB  52                        PUSH EDX
005A77EC  E8 9F 92 16 00            CALL 0x00710a90
005A77F1  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005A77F5  66 3D 01 00               CMP AX,0x1
005A77F9  75 09                     JNZ 0x005a7804
005A77FB  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
005A7802  EB 0C                     JMP 0x005a7810
LAB_005a7804:
005A7804  66 F7 D8                  NEG AX
005A7807  1B C0                     SBB EAX,EAX
005A7809  83 E0 02                  AND EAX,0x2
005A780C  40                        INC EAX
005A780D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_005a7810:
005A7810  81 7E 10 8A 69 00 00      CMP dword ptr [ESI + 0x10],0x698a
005A7817  74 11                     JZ 0x005a782a
005A7819  A1 18 76 80 00            MOV EAX,[0x00807618]
005A781E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005A7821  50                        PUSH EAX
005A7822  51                        PUSH ECX
005A7823  E8 18 89 10 00            CALL 0x006b0140
005A7828  EB 05                     JMP 0x005a782f
LAB_005a782a:
005A782A  B8 3A F3 80 00            MOV EAX,0x80f33a
LAB_005a782f:
005A782F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005A7832  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A7838  52                        PUSH EDX
005A7839  6A FF                     PUSH -0x1
005A783B  6A FF                     PUSH -0x1
005A783D  50                        PUSH EAX
005A783E  E8 7D A1 16 00            CALL 0x007119c0
005A7843  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005A7847  66 85 C0                  TEST AX,AX
005A784A  75 07                     JNZ 0x005a7853
005A784C  B8 0D 00 00 00            MOV EAX,0xd
005A7851  EB 10                     JMP 0x005a7863
LAB_005a7853:
005A7853  66 2D 02 00               SUB AX,0x2
005A7857  66 F7 D8                  NEG AX
005A785A  1B C0                     SBB EAX,EAX
005A785C  24 10                     AND AL,0x10
005A785E  05 FE 00 00 00            ADD EAX,0xfe
LAB_005a7863:
005A7863  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A7866  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A786C  50                        PUSH EAX
005A786D  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
005A7870  6A 04                     PUSH 0x4
005A7872  50                        PUSH EAX
005A7873  51                        PUSH ECX
005A7874  6A 00                     PUSH 0x0
005A7876  6A 00                     PUSH 0x0
005A7878  6A 00                     PUSH 0x0
005A787A  52                        PUSH EDX
005A787B  E8 F0 FC 11 00            CALL 0x006c7570
005A7880  66 8B 76 14               MOV SI,word ptr [ESI + 0x14]
005A7884  66 85 F6                  TEST SI,SI
005A7887  75 07                     JNZ 0x005a7890
005A7889  BE 0D 00 00 00            MOV ESI,0xd
005A788E  EB 15                     JMP 0x005a78a5
LAB_005a7890:
005A7890  66 83 EE 02               SUB SI,0x2
005A7894  66 F7 DE                  NEG SI
005A7897  1B F6                     SBB ESI,ESI
005A7899  81 E6 10 FF FF FF         AND ESI,0xffffff10
005A789F  81 C6 FE 00 00 00         ADD ESI,0xfe
LAB_005a78a5:
005A78A5  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
005A78A8  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A78AB  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A78B1  56                        PUSH ESI
005A78B2  83 E8 04                  SUB EAX,0x4
005A78B5  6A 04                     PUSH 0x4
005A78B7  83 E9 04                  SUB ECX,0x4
005A78BA  50                        PUSH EAX
005A78BB  51                        PUSH ECX
005A78BC  6A 02                     PUSH 0x2
005A78BE  6A 02                     PUSH 0x2
005A78C0  6A 00                     PUSH 0x0
005A78C2  52                        PUSH EDX
005A78C3  E8 A8 FC 11 00            CALL 0x006c7570
005A78C8  E9 81 FC FF FF            JMP 0x005a754e
switchD_005a6fb1::caseD_6987:
005A78CD  39 BB 8E 1E 00 00         CMP dword ptr [EBX + 0x1e8e],EDI
005A78D3  0F 84 CE 13 00 00         JZ 0x005a8ca7
005A78D9  39 BB 9A 1E 00 00         CMP dword ptr [EBX + 0x1e9a],EDI
005A78DF  0F 84 C2 13 00 00         JZ 0x005a8ca7
005A78E5  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
005A78E8  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
005A78EB  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A78EE  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
005A78F1  50                        PUSH EAX
005A78F2  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005A78F5  51                        PUSH ECX
005A78F6  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005A78FC  52                        PUSH EDX
005A78FD  50                        PUSH EAX
005A78FE  51                        PUSH ECX
005A78FF  E8 7C E6 10 00            CALL 0x006b5f80
005A7904  8B 93 9A 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e9a]
005A790A  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
005A790D  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005A7910  52                        PUSH EDX
005A7911  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A7914  6A 01                     PUSH 0x1
005A7916  52                        PUSH EDX
005A7917  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
005A791A  52                        PUSH EDX
005A791B  8D 50 A2                  LEA EDX,[EAX + -0x5e]
005A791E  52                        PUSH EDX
005A791F  8D 91 17 FE FF FF         LEA EDX,[ECX + 0xfffffe17]
005A7925  52                        PUSH EDX
005A7926  50                        PUSH EAX
005A7927  51                        PUSH ECX
005A7928  E8 6B A9 E5 FF            CALL 0x00402298
005A792D  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
005A7930  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A7933  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A7939  83 C4 20                  ADD ESP,0x20
005A793C  68 FF 00 00 00            PUSH 0xff
005A7941  50                        PUSH EAX
005A7942  51                        PUSH ECX
005A7943  6A 00                     PUSH 0x0
005A7945  6A 00                     PUSH 0x0
005A7947  6A 00                     PUSH 0x0
005A7949  52                        PUSH EDX
005A794A  E8 21 C8 10 00            CALL 0x006b4170
005A794F  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A7952  85 C0                     TEST EAX,EAX
005A7954  74 35                     JZ 0x005a798b
005A7956  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A795C  6A 19                     PUSH 0x19
005A795E  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005A7961  51                        PUSH ECX
005A7962  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A7968  6A 00                     PUSH 0x0
005A796A  6A 00                     PUSH 0x0
005A796C  6A 00                     PUSH 0x0
005A796E  50                        PUSH EAX
005A796F  E8 1C 91 16 00            CALL 0x00710a90
005A7974  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005A7977  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A797D  6A 05                     PUSH 0x5
005A797F  6A FF                     PUSH -0x1
005A7981  8B 02                     MOV EAX,dword ptr [EDX]
005A7983  6A 03                     PUSH 0x3
005A7985  50                        PUSH EAX
005A7986  E8 35 A0 16 00            CALL 0x007119c0
LAB_005a798b:
005A798B  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
005A798F  66 3D FF FF               CMP AX,0xffff
005A7993  75 06                     JNZ 0x005a799b
005A7995  66 39 46 1A               CMP word ptr [ESI + 0x1a],AX
005A7999  74 20                     JZ 0x005a79bb
LAB_005a799b:
005A799B  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A79A1  25 FF FF 00 00            AND EAX,0xffff
005A79A6  6A 0D                     PUSH 0xd
005A79A8  83 C0 03                  ADD EAX,0x3
005A79AB  6A 09                     PUSH 0x9
005A79AD  6A 11                     PUSH 0x11
005A79AF  50                        PUSH EAX
005A79B0  6A 04                     PUSH 0x4
005A79B2  50                        PUSH EAX
005A79B3  6A 00                     PUSH 0x0
005A79B5  51                        PUSH ECX
005A79B6  E8 55 E1 10 00            CALL 0x006b5b10
LAB_005a79bb:
005A79BB  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A79BE  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A79C1  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A79C7  68 FF 00 00 01            PUSH 0x10000ff
005A79CC  52                        PUSH EDX
005A79CD  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
005A79D0  50                        PUSH EAX
005A79D1  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005A79D4  6A 00                     PUSH 0x0
005A79D6  6A 00                     PUSH 0x0
005A79D8  6A 00                     PUSH 0x0
005A79DA  51                        PUSH ECX
005A79DB  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005A79E1  52                        PUSH EDX
005A79E2  50                        PUSH EAX
005A79E3  51                        PUSH ECX
005A79E4  E8 97 CC 10 00            CALL 0x006b4680
005A79E9  E9 B9 12 00 00            JMP 0x005a8ca7
switchD_005a6fb1::caseD_6988:
005A79EE  39 BB 8E 1E 00 00         CMP dword ptr [EBX + 0x1e8e],EDI
005A79F4  0F 84 AD 12 00 00         JZ 0x005a8ca7
005A79FA  39 BB 92 1E 00 00         CMP dword ptr [EBX + 0x1e92],EDI
005A7A00  0F 84 A1 12 00 00         JZ 0x005a8ca7
005A7A06  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
005A7A09  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A7A0C  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A7A0F  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
005A7A12  52                        PUSH EDX
005A7A13  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
005A7A16  50                        PUSH EAX
005A7A17  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A7A1C  51                        PUSH ECX
005A7A1D  52                        PUSH EDX
005A7A1E  50                        PUSH EAX
005A7A1F  E8 5C E5 10 00            CALL 0x006b5f80
005A7A24  8B 93 92 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e92]
005A7A2A  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
005A7A2D  52                        PUSH EDX
005A7A2E  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A7A31  6A 01                     PUSH 0x1
005A7A33  52                        PUSH EDX
005A7A34  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
005A7A37  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005A7A3A  52                        PUSH EDX
005A7A3B  8D 50 A2                  LEA EDX,[EAX + -0x5e]
005A7A3E  52                        PUSH EDX
005A7A3F  8A 93 5F 1A 00 00         MOV DL,byte ptr [EBX + 0x1a5f]
005A7A45  80 EA 09                  SUB DL,0x9
005A7A48  F6 DA                     NEG DL
005A7A4A  1B D2                     SBB EDX,EDX
005A7A4C  81 E2 77 01 00 00         AND EDX,0x177
005A7A52  83 C2 22                  ADD EDX,0x22
005A7A55  2B CA                     SUB ECX,EDX
005A7A57  51                        PUSH ECX
005A7A58  50                        PUSH EAX
005A7A59  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005A7A5C  50                        PUSH EAX
005A7A5D  E8 36 A8 E5 FF            CALL 0x00402298
005A7A62  8B 47 30                  MOV EAX,dword ptr [EDI + 0x30]
005A7A65  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A7A68  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A7A6E  83 C4 20                  ADD ESP,0x20
005A7A71  68 FF 00 00 00            PUSH 0xff
005A7A76  50                        PUSH EAX
005A7A77  51                        PUSH ECX
005A7A78  6A 00                     PUSH 0x0
005A7A7A  6A 00                     PUSH 0x0
005A7A7C  6A 00                     PUSH 0x0
005A7A7E  52                        PUSH EDX
005A7A7F  E8 EC C6 10 00            CALL 0x006b4170
005A7A84  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A7A87  85 C0                     TEST EAX,EAX
005A7A89  74 35                     JZ 0x005a7ac0
005A7A8B  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A7A91  6A 19                     PUSH 0x19
005A7A93  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005A7A96  51                        PUSH ECX
005A7A97  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A7A9D  6A 00                     PUSH 0x0
005A7A9F  6A 00                     PUSH 0x0
005A7AA1  6A 00                     PUSH 0x0
005A7AA3  50                        PUSH EAX
005A7AA4  E8 E7 8F 16 00            CALL 0x00710a90
005A7AA9  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
005A7AAC  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A7AB2  6A 05                     PUSH 0x5
005A7AB4  6A FF                     PUSH -0x1
005A7AB6  8B 02                     MOV EAX,dword ptr [EDX]
005A7AB8  6A 03                     PUSH 0x3
005A7ABA  50                        PUSH EAX
005A7ABB  E8 00 9F 16 00            CALL 0x007119c0
LAB_005a7ac0:
005A7AC0  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
005A7AC4  66 3D FF FF               CMP AX,0xffff
005A7AC8  75 06                     JNZ 0x005a7ad0
005A7ACA  66 39 46 1A               CMP word ptr [ESI + 0x1a],AX
005A7ACE  74 20                     JZ 0x005a7af0
LAB_005a7ad0:
005A7AD0  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A7AD6  25 FF FF 00 00            AND EAX,0xffff
005A7ADB  6A 0D                     PUSH 0xd
005A7ADD  83 C0 03                  ADD EAX,0x3
005A7AE0  6A 09                     PUSH 0x9
005A7AE2  6A 11                     PUSH 0x11
005A7AE4  50                        PUSH EAX
005A7AE5  6A 03                     PUSH 0x3
005A7AE7  50                        PUSH EAX
005A7AE8  6A 00                     PUSH 0x0
005A7AEA  51                        PUSH ECX
005A7AEB  E8 20 E0 10 00            CALL 0x006b5b10
LAB_005a7af0:
005A7AF0  8B 57 30                  MOV EDX,dword ptr [EDI + 0x30]
005A7AF3  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A7AF6  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A7AFC  68 FF 00 00 01            PUSH 0x10000ff
005A7B01  52                        PUSH EDX
005A7B02  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
005A7B05  50                        PUSH EAX
005A7B06  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005A7B09  6A 00                     PUSH 0x0
005A7B0B  6A 00                     PUSH 0x0
005A7B0D  6A 00                     PUSH 0x0
005A7B0F  51                        PUSH ECX
005A7B10  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005A7B16  52                        PUSH EDX
005A7B17  50                        PUSH EAX
005A7B18  51                        PUSH ECX
005A7B19  E8 62 CB 10 00            CALL 0x006b4680
005A7B1E  E9 84 11 00 00            JMP 0x005a8ca7
switchD_005a6fb1::caseD_698b:
005A7B23  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005A7B26  68 FF 00 00 00            PUSH 0xff
005A7B2B  8B 3A                     MOV EDI,dword ptr [EDX]
005A7B2D  81 EF B4 00 00 00         SUB EDI,0xb4
005A7B33  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
005A7B36  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
005A7B39  2D AA 00 00 00            SUB EAX,0xaa
005A7B3E  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005A7B41  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
005A7B44  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
005A7B47  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
005A7B4A  52                        PUSH EDX
005A7B4B  51                        PUSH ECX
005A7B4C  50                        PUSH EAX
005A7B4D  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A7B53  57                        PUSH EDI
005A7B54  6A 00                     PUSH 0x0
005A7B56  50                        PUSH EAX
005A7B57  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
005A7B5A  E8 11 C6 10 00            CALL 0x006b4170
005A7B5F  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005A7B63  66 85 C0                  TEST AX,AX
005A7B66  75 07                     JNZ 0x005a7b6f
005A7B68  B8 0D 00 00 00            MOV EAX,0xd
005A7B6D  EB 10                     JMP 0x005a7b7f
LAB_005a7b6f:
005A7B6F  66 2D 02 00               SUB AX,0x2
005A7B73  66 F7 D8                  NEG AX
005A7B76  1B C0                     SBB EAX,EAX
005A7B78  24 10                     AND AL,0x10
005A7B7A  05 FE 00 00 00            ADD EAX,0xfe
LAB_005a7b7f:
005A7B7F  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
005A7B82  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
005A7B85  50                        PUSH EAX
005A7B86  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
005A7B89  6A 04                     PUSH 0x4
005A7B8B  51                        PUSH ECX
005A7B8C  8B 8B C0 1A 00 00         MOV ECX,dword ptr [EBX + 0x1ac0]
005A7B92  52                        PUSH EDX
005A7B93  50                        PUSH EAX
005A7B94  57                        PUSH EDI
005A7B95  6A 00                     PUSH 0x0
005A7B97  51                        PUSH ECX
005A7B98  E8 D3 F9 11 00            CALL 0x006c7570
005A7B9D  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005A7BA1  66 85 C0                  TEST AX,AX
005A7BA4  75 07                     JNZ 0x005a7bad
005A7BA6  B8 0D 00 00 00            MOV EAX,0xd
005A7BAB  EB 10                     JMP 0x005a7bbd
LAB_005a7bad:
005A7BAD  66 2D 02 00               SUB AX,0x2
005A7BB1  66 F7 D8                  NEG AX
005A7BB4  1B C0                     SBB EAX,EAX
005A7BB6  24 10                     AND AL,0x10
005A7BB8  05 FE 00 00 00            ADD EAX,0xfe
LAB_005a7bbd:
005A7BBD  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
005A7BC0  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
005A7BC3  50                        PUSH EAX
005A7BC4  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
005A7BC7  83 C2 FC                  ADD EDX,-0x4
005A7BCA  6A 04                     PUSH 0x4
005A7BCC  83 C0 FC                  ADD EAX,-0x4
005A7BCF  52                        PUSH EDX
005A7BD0  83 C1 02                  ADD ECX,0x2
005A7BD3  50                        PUSH EAX
005A7BD4  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A7BDA  8D 57 02                  LEA EDX,[EDI + 0x2]
005A7BDD  51                        PUSH ECX
005A7BDE  52                        PUSH EDX
005A7BDF  6A 00                     PUSH 0x0
005A7BE1  50                        PUSH EAX
005A7BE2  E8 89 F9 11 00            CALL 0x006c7570
005A7BE7  8B 83 C2 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ec2]
005A7BED  3D 01 05 00 00            CMP EAX,0x501
005A7BF2  77 2B                     JA 0x005a7c1f
005A7BF4  74 20                     JZ 0x005a7c16
005A7BF6  3D 00 02 00 00            CMP EAX,0x200
005A7BFB  74 10                     JZ 0x005a7c0d
005A7BFD  3D 00 04 00 00            CMP EAX,0x400
005A7C02  75 22                     JNZ 0x005a7c26
005A7C04  C7 45 FC 5B 23 00 00      MOV dword ptr [EBP + -0x4],0x235b
005A7C0B  EB 29                     JMP 0x005a7c36
LAB_005a7c0d:
005A7C0D  C7 45 FC 5A 23 00 00      MOV dword ptr [EBP + -0x4],0x235a
005A7C14  EB 20                     JMP 0x005a7c36
LAB_005a7c16:
005A7C16  C7 45 FC 42 23 00 00      MOV dword ptr [EBP + -0x4],0x2342
005A7C1D  EB 17                     JMP 0x005a7c36
LAB_005a7c1f:
005A7C1F  3D 02 05 00 00            CMP EAX,0x502
005A7C24  74 09                     JZ 0x005a7c2f
LAB_005a7c26:
005A7C26  C7 45 FC 41 23 00 00      MOV dword ptr [EBP + -0x4],0x2341
005A7C2D  EB 07                     JMP 0x005a7c36
LAB_005a7c2f:
005A7C2F  C7 45 FC 5D 23 00 00      MOV dword ptr [EBP + -0x4],0x235d
LAB_005a7c36:
005A7C36  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
005A7C39  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
005A7C3C  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
005A7C3F  51                        PUSH ECX
005A7C40  8B 8B C0 1A 00 00         MOV ECX,dword ptr [EBX + 0x1ac0]
005A7C46  52                        PUSH EDX
005A7C47  50                        PUSH EAX
005A7C48  57                        PUSH EDI
005A7C49  6A 00                     PUSH 0x0
005A7C4B  51                        PUSH ECX
005A7C4C  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A7C52  E8 39 8E 16 00            CALL 0x00710a90
005A7C57  66 8B 76 14               MOV SI,word ptr [ESI + 0x14]
005A7C5B  66 83 FE 01               CMP SI,0x1
005A7C5F  75 07                     JNZ 0x005a7c68
005A7C61  BE 02 00 00 00            MOV ESI,0x2
005A7C66  EB 09                     JMP 0x005a7c71
LAB_005a7c68:
005A7C68  66 F7 DE                  NEG SI
005A7C6B  1B F6                     SBB ESI,ESI
005A7C6D  83 E6 02                  AND ESI,0x2
005A7C70  46                        INC ESI
LAB_005a7c71:
005A7C71  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005A7C77  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A7C7A  56                        PUSH ESI
005A7C7B  6A FF                     PUSH -0x1
005A7C7D  6A FF                     PUSH -0x1
005A7C7F  52                        PUSH EDX
005A7C80  50                        PUSH EAX
005A7C81  E8 BA 84 10 00            CALL 0x006b0140
005A7C86  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A7C8C  50                        PUSH EAX
005A7C8D  E8 2E 9D 16 00            CALL 0x007119c0
LAB_005a7c92:
005A7C92  8B 8B BC 1A 00 00         MOV ECX,dword ptr [EBX + 0x1abc]
005A7C98  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005A7C9E  51                        PUSH ECX
005A7C9F  52                        PUSH EDX
005A7CA0  E8 2B B9 10 00            CALL 0x006b35d0
005A7CA5  E9 FD 0F 00 00            JMP 0x005a8ca7
switchD_005a6fb1::caseD_698c:
005A7CAA  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005A7CAD  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A7CB3  57                        PUSH EDI
005A7CB4  57                        PUSH EDI
005A7CB5  57                        PUSH EDI
005A7CB6  57                        PUSH EDI
005A7CB7  57                        PUSH EDI
005A7CB8  50                        PUSH EAX
005A7CB9  E8 D2 8D 16 00            CALL 0x00710a90
005A7CBE  8B 93 B3 1F 00 00         MOV EDX,dword ptr [EBX + 0x1fb3]
005A7CC4  33 C0                     XOR EAX,EAX
005A7CC6  66 8B 46 14               MOV AX,word ptr [ESI + 0x14]
005A7CCA  3B 42 0C                  CMP EAX,dword ptr [EDX + 0xc]
005A7CCD  73 0B                     JNC 0x005a7cda
005A7CCF  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005A7CD2  0F AF C8                  IMUL ECX,EAX
005A7CD5  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
005A7CD8  EB 02                     JMP 0x005a7cdc
LAB_005a7cda:
005A7CDA  33 C9                     XOR ECX,ECX
LAB_005a7cdc:
005A7CDC  66 8B 56 16               MOV DX,word ptr [ESI + 0x16]
005A7CE0  66 4A                     DEC DX
005A7CE2  66 F7 DA                  NEG DX
005A7CE5  1B D2                     SBB EDX,EDX
005A7CE7  83 C2 03                  ADD EDX,0x3
005A7CEA  52                        PUSH EDX
005A7CEB  6A FF                     PUSH -0x1
005A7CED  6A FF                     PUSH -0x1
005A7CEF  51                        PUSH ECX
005A7CF0  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A7CF6  E8 C5 9C 16 00            CALL 0x007119c0
005A7CFB  66 83 7E 16 01            CMP word ptr [ESI + 0x16],0x1
005A7D00  0F 85 A1 0F 00 00         JNZ 0x005a8ca7
005A7D06  8B 76 18                  MOV ESI,dword ptr [ESI + 0x18]
005A7D09  6A 0D                     PUSH 0xd
005A7D0B  6A 0F                     PUSH 0xf
005A7D0D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005A7D10  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005A7D13  50                        PUSH EAX
005A7D14  51                        PUSH ECX
005A7D15  57                        PUSH EDI
005A7D16  57                        PUSH EDI
005A7D17  57                        PUSH EDI
005A7D18  56                        PUSH ESI
005A7D19  E8 C2 E1 10 00            CALL 0x006b5ee0
005A7D1E  E9 84 0F 00 00            JMP 0x005a8ca7
LAB_005a7d23:
005A7D23  C7 46 18 11 00 00 00      MOV dword ptr [ESI + 0x18],0x11
005A7D2A  E9 78 0F 00 00            JMP 0x005a8ca7
LAB_005a7d2f:
005A7D2F  3D A1 C0 00 00            CMP EAX,0xc0a1
005A7D34  0F 87 7D 0D 00 00         JA 0x005a8ab7
005A7D3A  0F 84 3C 0D 00 00         JZ 0x005a8a7c
005A7D40  05 9F 7E FF FF            ADD EAX,0xffff7e9f
005A7D45  83 F8 05                  CMP EAX,0x5
005A7D48  0F 87 59 0F 00 00         JA 0x005a8ca7
switchD_005a7d4e::switchD:
005A7D4E  FF 24 85 78 8F 5A 00      JMP dword ptr [EAX*0x4 + 0x5a8f78]
switchD_005a7d4e::caseD_8162:
005A7D55  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005A7D5B  85 FF                     TEST EDI,EDI
005A7D5D  74 0D                     JZ 0x005a7d6c
005A7D5F  80 BF 93 04 00 00 05      CMP byte ptr [EDI + 0x493],0x5
005A7D66  0F 84 3B 0F 00 00         JZ 0x005a8ca7
LAB_005a7d6c:
005A7D6C  8A 83 60 1A 00 00         MOV AL,byte ptr [EBX + 0x1a60]
005A7D72  84 C0                     TEST AL,AL
005A7D74  0F 84 DE 00 00 00         JZ 0x005a7e58
005A7D7A  8B 83 AA 1E 00 00         MOV EAX,dword ptr [EBX + 0x1eaa]
005A7D80  85 C0                     TEST EAX,EAX
005A7D82  0F 84 1F 0F 00 00         JZ 0x005a8ca7
005A7D88  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005A7D8B  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005A7D8E  3B CA                     CMP ECX,EDX
005A7D90  73 0B                     JNC 0x005a7d9d
005A7D92  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A7D95  0F AF F1                  IMUL ESI,ECX
005A7D98  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005A7D9B  EB 02                     JMP 0x005a7d9f
LAB_005a7d9d:
005A7D9D  33 F6                     XOR ESI,ESI
LAB_005a7d9f:
005A7D9F  85 F6                     TEST ESI,ESI
005A7DA1  0F 84 00 0F 00 00         JZ 0x005a8ca7
005A7DA7  85 FF                     TEST EDI,EDI
005A7DA9  74 4D                     JZ 0x005a7df8
005A7DAB  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005A7DB1  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005A7DB7  52                        PUSH EDX
005A7DB8  50                        PUSH EAX
005A7DB9  6A 00                     PUSH 0x0
005A7DBB  8B CF                     MOV ECX,EDI
005A7DBD  C6 87 93 04 00 00 05      MOV byte ptr [EDI + 0x493],0x5
005A7DC4  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005A7DCD  E8 AC D2 E5 FF            CALL 0x0040507e
005A7DD2  8B 8F C9 00 00 00         MOV ECX,dword ptr [EDI + 0xc9]
005A7DD8  8B 97 C5 00 00 00         MOV EDX,dword ptr [EDI + 0xc5]
005A7DDE  51                        PUSH ECX
005A7DDF  52                        PUSH EDX
005A7DE0  8B CF                     MOV ECX,EDI
005A7DE2  E8 37 A6 E5 FF            CALL 0x0040241e
005A7DE7  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005A7DEE  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005a7df8:
005A7DF8  8D 56 40                  LEA EDX,[ESI + 0x40]
005A7DFB  83 C9 FF                  OR ECX,0xffffffff
005A7DFE  8B FA                     MOV EDI,EDX
005A7E00  33 C0                     XOR EAX,EAX
005A7E02  F2 AE                     SCASB.REPNE ES:EDI
005A7E04  F7 D1                     NOT ECX
005A7E06  49                        DEC ECX
005A7E07  74 3A                     JZ 0x005a7e43
005A7E09  8B 83 EC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1aec]
005A7E0F  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A7E12  85 C9                     TEST ECX,ECX
005A7E14  7E 18                     JLE 0x005a7e2e
005A7E16  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005A7E19  6A 01                     PUSH 0x1
005A7E1B  B9 90 2A 80 00            MOV ECX,0x802a90
005A7E20  8B 00                     MOV EAX,dword ptr [EAX]
005A7E22  50                        PUSH EAX
005A7E23  56                        PUSH ESI
005A7E24  E8 19 D7 E5 FF            CALL 0x00405542
005A7E29  E9 79 0E 00 00            JMP 0x005a8ca7
LAB_005a7e2e:
005A7E2E  33 C0                     XOR EAX,EAX
005A7E30  6A 01                     PUSH 0x1
005A7E32  50                        PUSH EAX
005A7E33  56                        PUSH ESI
005A7E34  B9 90 2A 80 00            MOV ECX,0x802a90
005A7E39  E8 04 D7 E5 FF            CALL 0x00405542
005A7E3E  E9 64 0E 00 00            JMP 0x005a8ca7
LAB_005a7e43:
005A7E43  8B C2                     MOV EAX,EDX
005A7E45  6A 01                     PUSH 0x1
005A7E47  50                        PUSH EAX
005A7E48  56                        PUSH ESI
005A7E49  B9 90 2A 80 00            MOV ECX,0x802a90
005A7E4E  E8 EF D6 E5 FF            CALL 0x00405542
005A7E53  E9 4F 0E 00 00            JMP 0x005a8ca7
LAB_005a7e58:
005A7E58  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005A7E5B  85 C9                     TEST ECX,ECX
005A7E5D  0F 84 EF 00 00 00         JZ 0x005a7f52
005A7E63  8B 83 A6 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea6]
005A7E69  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
005A7E6C  73 0B                     JNC 0x005a7e79
005A7E6E  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A7E71  0F AF F1                  IMUL ESI,ECX
005A7E74  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005A7E77  EB 02                     JMP 0x005a7e7b
LAB_005a7e79:
005A7E79  33 F6                     XOR ESI,ESI
LAB_005a7e7b:
005A7E7B  85 F6                     TEST ESI,ESI
005A7E7D  0F 84 24 0E 00 00         JZ 0x005a8ca7
005A7E83  8B 8B 0C 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b0c]
005A7E89  8D 83 0C 1B 00 00         LEA EAX,[EBX + 0x1b0c]
005A7E8F  85 C9                     TEST ECX,ECX
005A7E91  74 06                     JZ 0x005a7e99
005A7E93  50                        PUSH EAX
005A7E94  E8 C7 31 10 00            CALL 0x006ab060
LAB_005a7e99:
005A7E99  8B FE                     MOV EDI,ESI
005A7E9B  83 C9 FF                  OR ECX,0xffffffff
005A7E9E  33 C0                     XOR EAX,EAX
005A7EA0  F2 AE                     SCASB.REPNE ES:EDI
005A7EA2  F7 D1                     NOT ECX
005A7EA4  51                        PUSH ECX
005A7EA5  E8 C6 2D 10 00            CALL 0x006aac70
005A7EAA  8B D0                     MOV EDX,EAX
005A7EAC  8B FE                     MOV EDI,ESI
005A7EAE  83 C9 FF                  OR ECX,0xffffffff
005A7EB1  33 C0                     XOR EAX,EAX
005A7EB3  89 93 0C 1B 00 00         MOV dword ptr [EBX + 0x1b0c],EDX
005A7EB9  F2 AE                     SCASB.REPNE ES:EDI
005A7EBB  F7 D1                     NOT ECX
005A7EBD  2B F9                     SUB EDI,ECX
005A7EBF  8B C1                     MOV EAX,ECX
005A7EC1  8B F7                     MOV ESI,EDI
005A7EC3  8B FA                     MOV EDI,EDX
005A7EC5  C1 E9 02                  SHR ECX,0x2
005A7EC8  F3 A5                     MOVSD.REP ES:EDI,ESI
005A7ECA  8B C8                     MOV ECX,EAX
005A7ECC  83 E1 03                  AND ECX,0x3
005A7ECF  F3 A4                     MOVSB.REP ES:EDI,ESI
005A7ED1  8B 13                     MOV EDX,dword ptr [EBX]
005A7ED3  8B CB                     MOV ECX,EBX
005A7ED5  FF 52 08                  CALL dword ptr [EDX + 0x8]
005A7ED8  C6 83 61 1A 00 00 0A      MOV byte ptr [EBX + 0x1a61],0xa
005A7EDF  C6 83 D2 1E 00 00 06      MOV byte ptr [EBX + 0x1ed2],0x6
005A7EE6  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A7EEC  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005A7EF2  85 C0                     TEST EAX,EAX
005A7EF4  0F 84 AD 0D 00 00         JZ 0x005a8ca7
005A7EFA  B9 06 00 00 00            MOV ECX,0x6
005A7EFF  83 C8 FF                  OR EAX,0xffffffff
005A7F02  8D BD 94 FC FF FF         LEA EDI,[EBP + 0xfffffc94]
005A7F08  F3 AB                     STOSD.REP ES:EDI
005A7F0A  66 AB                     STOSW ES:EDI
005A7F0C  33 C0                     XOR EAX,EAX
005A7F0E  8D 8D 94 FC FF FF         LEA ECX,[EBP + 0xfffffc94]
005A7F14  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
005A7F17  C6 45 86 01               MOV byte ptr [EBP + -0x7a],0x1
005A7F1B  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
005A7F1E  C6 45 85 01               MOV byte ptr [EBP + -0x7b],0x1
005A7F22  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
005A7F25  C6 45 84 01               MOV byte ptr [EBP + -0x7c],0x1
005A7F29  88 45 90                  MOV byte ptr [EBP + -0x70],AL
005A7F2C  51                        PUSH ECX
005A7F2D  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005A7F33  E8 19 CC E5 FF            CALL 0x00404b51
005A7F38  8D 55 84                  LEA EDX,[EBP + -0x7c]
LAB_005a7f3b:
005A7F3B  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A7F41  52                        PUSH EDX
005A7F42  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005A7F48  E8 4E 9B E5 FF            CALL 0x00401a9b
005A7F4D  E9 55 0D 00 00            JMP 0x005a8ca7
LAB_005a7f52:
005A7F52  85 FF                     TEST EDI,EDI
005A7F54  74 4F                     JZ 0x005a7fa5
005A7F56  8B F7                     MOV ESI,EDI
005A7F58  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
005A7F5E  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
005A7F64  51                        PUSH ECX
005A7F65  52                        PUSH EDX
005A7F66  6A 00                     PUSH 0x0
005A7F68  8B CE                     MOV ECX,ESI
005A7F6A  C6 86 93 04 00 00 05      MOV byte ptr [ESI + 0x493],0x5
005A7F71  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A7F7A  E8 FF D0 E5 FF            CALL 0x0040507e
005A7F7F  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A7F85  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A7F8B  50                        PUSH EAX
005A7F8C  51                        PUSH ECX
005A7F8D  8B CE                     MOV ECX,ESI
005A7F8F  E8 8A A4 E5 FF            CALL 0x0040241e
005A7F94  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A7F9B  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a7fa5:
005A7FA5  B9 90 2A 80 00            MOV ECX,0x802a90
005A7FAA  FF 15 0C C0 85 00         CALL dword ptr [0x0085c00c]
005A7FB0  8B 83 18 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b18]
005A7FB6  C6 83 60 1A 00 00 01      MOV byte ptr [EBX + 0x1a60],0x1
005A7FBD  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005A7FC4  C7 43 31 00 00 00 00      MOV dword ptr [EBX + 0x31],0x0
005A7FCB  85 C0                     TEST EAX,EAX
005A7FCD  74 0E                     JZ 0x005a7fdd
005A7FCF  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005A7FD2  8B CB                     MOV ECX,EBX
005A7FD4  52                        PUSH EDX
005A7FD5  50                        PUSH EAX
005A7FD6  6A 02                     PUSH 0x2
005A7FD8  E8 A3 E0 13 00            CALL 0x006e6080
LAB_005a7fdd:
005A7FDD  8B 83 24 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b24]
005A7FE3  C7 43 31 01 00 00 00      MOV dword ptr [EBX + 0x31],0x1
005A7FEA  85 C0                     TEST EAX,EAX
005A7FEC  0F 84 B5 0C 00 00         JZ 0x005a8ca7
005A7FF2  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005A7FF5  51                        PUSH ECX
005A7FF6  50                        PUSH EAX
005A7FF7  6A 02                     PUSH 0x2
005A7FF9  8B CB                     MOV ECX,EBX
005A7FFB  E8 80 E0 13 00            CALL 0x006e6080
005A8000  E9 A2 0C 00 00            JMP 0x005a8ca7
switchD_005a7d4e::caseD_8163:
005A8005  33 C0                     XOR EAX,EAX
005A8007  8A 83 5F 1A 00 00         MOV AL,byte ptr [EBX + 0x1a5f]
005A800D  83 E8 06                  SUB EAX,0x6
005A8010  0F 84 1A 05 00 00         JZ 0x005a8530
005A8016  83 E8 02                  SUB EAX,0x2
005A8019  0F 85 88 0C 00 00         JNZ 0x005a8ca7
005A801F  8B 83 BE 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ebe]
005A8025  BF 01 00 00 00            MOV EDI,0x1
005A802A  85 C0                     TEST EAX,EAX
005A802C  0F 84 22 03 00 00         JZ 0x005a8354
005A8032  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
005A8035  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005A8038  3B CA                     CMP ECX,EDX
005A803A  0F 83 14 03 00 00         JNC 0x005a8354
005A8040  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005A8043  0F AF F1                  IMUL ESI,ECX
005A8046  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
005A8049  0F 84 05 03 00 00         JZ 0x005a8354
005A804F  8B 83 E8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ae8]
005A8055  8D 56 2C                  LEA EDX,[ESI + 0x2c]
005A8058  33 FF                     XOR EDI,EDI
005A805A  52                        PUSH EDX
005A805B  57                        PUSH EDI
005A805C  50                        PUSH EAX
005A805D  E8 BE DF 10 00            CALL 0x006b6020
005A8062  C7 43 2D 33 00 00 00      MOV dword ptr [EBX + 0x2d],0x33
005A8069  8B 8B E8 1A 00 00         MOV ECX,dword ptr [EBX + 0x1ae8]
005A806F  89 4B 31                  MOV dword ptr [EBX + 0x31],ECX
005A8072  8B 83 C4 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac4]
005A8078  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005A807B  8B CB                     MOV ECX,EBX
005A807D  52                        PUSH EDX
005A807E  50                        PUSH EAX
005A807F  6A 02                     PUSH 0x2
005A8081  E8 FA DF 13 00            CALL 0x006e6080
005A8086  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005A808C  68 8C 00 00 00            PUSH 0x8c
005A8091  68 5E 01 00 00            PUSH 0x15e
005A8096  6A 7D                     PUSH 0x7d
005A8098  68 A4 01 00 00            PUSH 0x1a4
005A809D  51                        PUSH ECX
005A809E  E8 DD DE 10 00            CALL 0x006b5f80
005A80A3  8B 93 92 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e92]
005A80A9  52                        PUSH EDX
005A80AA  6A 01                     PUSH 0x1
005A80AC  68 8C 00 00 00            PUSH 0x8c
005A80B1  68 5E 01 00 00            PUSH 0x15e
005A80B6  6A 1F                     PUSH 0x1f
005A80B8  6A 0B                     PUSH 0xb
005A80BA  6A 7D                     PUSH 0x7d
005A80BC  68 A4 01 00 00            PUSH 0x1a4
005A80C1  E8 D2 A1 E5 FF            CALL 0x00402298
005A80C6  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A80CC  83 C4 20                  ADD ESP,0x20
005A80CF  68 FF 00 00 00            PUSH 0xff
005A80D4  68 8C 00 00 00            PUSH 0x8c
005A80D9  68 5E 01 00 00            PUSH 0x15e
005A80DE  57                        PUSH EDI
005A80DF  57                        PUSH EDI
005A80E0  57                        PUSH EDI
005A80E1  50                        PUSH EAX
005A80E2  E8 89 C0 10 00            CALL 0x006b4170
005A80E7  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A80ED  6A 11                     PUSH 0x11
005A80EF  68 5E 01 00 00            PUSH 0x15e
005A80F4  57                        PUSH EDI
005A80F5  57                        PUSH EDI
005A80F6  57                        PUSH EDI
005A80F7  51                        PUSH ECX
005A80F8  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A80FE  E8 8D 89 16 00            CALL 0x00710a90
005A8103  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005A8109  6A 02                     PUSH 0x2
005A810B  6A FF                     PUSH -0x1
005A810D  6A FF                     PUSH -0x1
005A810F  52                        PUSH EDX
005A8110  68 72 25 00 00            PUSH 0x2572
005A8115  E8 26 80 10 00            CALL 0x006b0140
005A811A  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8120  50                        PUSH EAX
005A8121  E8 9A 98 16 00            CALL 0x007119c0
005A8126  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A812C  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8132  6A 11                     PUSH 0x11
005A8134  68 4A 01 00 00            PUSH 0x14a
005A8139  6A 11                     PUSH 0x11
005A813B  6A 0A                     PUSH 0xa
005A813D  57                        PUSH EDI
005A813E  50                        PUSH EAX
005A813F  E8 4C 89 16 00            CALL 0x00710a90
005A8144  57                        PUSH EDI
005A8145  6A FF                     PUSH -0x1
005A8147  8D 4E 1C                  LEA ECX,[ESI + 0x1c]
005A814A  57                        PUSH EDI
005A814B  51                        PUSH ECX
005A814C  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8152  E8 69 98 16 00            CALL 0x007119c0
005A8157  6A 11                     PUSH 0x11
005A8159  68 5E 01 00 00            PUSH 0x15e
005A815E  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A8164  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A816A  6A 22                     PUSH 0x22
005A816C  57                        PUSH EDI
005A816D  57                        PUSH EDI
005A816E  52                        PUSH EDX
005A816F  E8 1C 89 16 00            CALL 0x00710a90
005A8174  A1 18 76 80 00            MOV EAX,[0x00807618]
005A8179  6A 02                     PUSH 0x2
005A817B  6A FF                     PUSH -0x1
005A817D  6A FF                     PUSH -0x1
005A817F  50                        PUSH EAX
005A8180  68 47 23 00 00            PUSH 0x2347
005A8185  E8 B6 7F 10 00            CALL 0x006b0140
005A818A  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8190  50                        PUSH EAX
005A8191  E8 2A 98 16 00            CALL 0x007119c0
005A8196  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A819C  6A 11                     PUSH 0x11
005A819E  68 4A 01 00 00            PUSH 0x14a
005A81A3  6A 33                     PUSH 0x33
005A81A5  6A 0A                     PUSH 0xa
005A81A7  57                        PUSH EDI
005A81A8  51                        PUSH ECX
005A81A9  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A81AF  E8 DC 88 16 00            CALL 0x00710a90
005A81B4  8A 46 7C                  MOV AL,byte ptr [ESI + 0x7c]
005A81B7  57                        PUSH EDI
005A81B8  84 C0                     TEST AL,AL
005A81BA  6A FF                     PUSH -0x1
005A81BC  57                        PUSH EDI
005A81BD  74 09                     JZ 0x005a81c8
005A81BF  8D 96 83 00 00 00         LEA EDX,[ESI + 0x83]
005A81C5  52                        PUSH EDX
005A81C6  EB 11                     JMP 0x005a81d9
LAB_005a81c8:
005A81C8  A1 18 76 80 00            MOV EAX,[0x00807618]
005A81CD  50                        PUSH EAX
005A81CE  68 73 25 00 00            PUSH 0x2573
005A81D3  E8 68 7F 10 00            CALL 0x006b0140
005A81D8  50                        PUSH EAX
LAB_005a81d9:
005A81D9  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A81DF  E8 DC 97 16 00            CALL 0x007119c0
005A81E4  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A81EA  6A 11                     PUSH 0x11
005A81EC  68 5E 01 00 00            PUSH 0x15e
005A81F1  6A 44                     PUSH 0x44
005A81F3  6A 00                     PUSH 0x0
005A81F5  6A 00                     PUSH 0x0
005A81F7  51                        PUSH ECX
005A81F8  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A81FE  E8 8D 88 16 00            CALL 0x00710a90
005A8203  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005A8209  6A 02                     PUSH 0x2
005A820B  6A FF                     PUSH -0x1
005A820D  6A FF                     PUSH -0x1
005A820F  52                        PUSH EDX
005A8210  68 44 23 00 00            PUSH 0x2344
005A8215  E8 26 7F 10 00            CALL 0x006b0140
005A821A  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8220  50                        PUSH EAX
005A8221  E8 9A 97 16 00            CALL 0x007119c0
005A8226  8A 46 7C                  MOV AL,byte ptr [ESI + 0x7c]
005A8229  84 C0                     TEST AL,AL
005A822B  74 50                     JZ 0x005a827d
005A822D  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A8233  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8239  6A 11                     PUSH 0x11
005A823B  68 4A 01 00 00            PUSH 0x14a
005A8240  6A 55                     PUSH 0x55
005A8242  6A 0A                     PUSH 0xa
005A8244  6A 00                     PUSH 0x0
005A8246  50                        PUSH EAX
005A8247  E8 44 88 16 00            CALL 0x00710a90
005A824C  0F BE 46 7E               MOVSX EAX,byte ptr [ESI + 0x7e]
005A8250  D1 E0                     SHL EAX,0x1
005A8252  50                        PUSH EAX
005A8253  50                        PUSH EAX
005A8254  68 0C C6 7C 00            PUSH 0x7cc60c
005A8259  68 3A F3 80 00            PUSH 0x80f33a
005A825E  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A8264  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A826A  83 C4 10                  ADD ESP,0x10
005A826D  6A 00                     PUSH 0x0
005A826F  6A FF                     PUSH -0x1
005A8271  6A 00                     PUSH 0x0
005A8273  68 3A F3 80 00            PUSH 0x80f33a
005A8278  E8 43 97 16 00            CALL 0x007119c0
LAB_005a827d:
005A827D  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A8283  6A 11                     PUSH 0x11
005A8285  68 5E 01 00 00            PUSH 0x15e
005A828A  6A 66                     PUSH 0x66
005A828C  6A 00                     PUSH 0x0
005A828E  6A 00                     PUSH 0x0
005A8290  51                        PUSH ECX
005A8291  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8297  E8 F4 87 16 00            CALL 0x00710a90
005A829C  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005A82A2  6A 02                     PUSH 0x2
005A82A4  6A FF                     PUSH -0x1
005A82A6  6A FF                     PUSH -0x1
005A82A8  52                        PUSH EDX
005A82A9  68 45 23 00 00            PUSH 0x2345
005A82AE  E8 8D 7E 10 00            CALL 0x006b0140
005A82B3  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A82B9  50                        PUSH EAX
005A82BA  E8 01 97 16 00            CALL 0x007119c0
005A82BF  8A 46 7C                  MOV AL,byte ptr [ESI + 0x7c]
005A82C2  84 C0                     TEST AL,AL
005A82C4  74 5F                     JZ 0x005a8325
005A82C6  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A82CC  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A82D2  6A 11                     PUSH 0x11
005A82D4  68 4A 01 00 00            PUSH 0x14a
005A82D9  6A 77                     PUSH 0x77
005A82DB  6A 0A                     PUSH 0xa
005A82DD  6A 00                     PUSH 0x0
005A82DF  50                        PUSH EAX
005A82E0  E8 AB 87 16 00            CALL 0x00710a90
005A82E5  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A82EB  51                        PUSH ECX
005A82EC  68 74 25 00 00            PUSH 0x2574
005A82F1  E8 4A 7E 10 00            CALL 0x006b0140
005A82F6  0F BE 56 7D               MOVSX EDX,byte ptr [ESI + 0x7d]
005A82FA  50                        PUSH EAX
005A82FB  52                        PUSH EDX
005A82FC  68 64 28 7C 00            PUSH 0x7c2864
005A8301  68 3A F3 80 00            PUSH 0x80f33a
005A8306  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A830C  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8312  83 C4 10                  ADD ESP,0x10
005A8315  6A 00                     PUSH 0x0
005A8317  6A FF                     PUSH -0x1
005A8319  6A 00                     PUSH 0x0
005A831B  68 3A F3 80 00            PUSH 0x80f33a
005A8320  E8 9B 96 16 00            CALL 0x007119c0
LAB_005a8325:
005A8325  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A832B  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005A8331  68 FF 00 00 01            PUSH 0x10000ff
005A8336  68 8C 00 00 00            PUSH 0x8c
005A833B  68 5E 01 00 00            PUSH 0x15e
005A8340  6A 00                     PUSH 0x0
005A8342  6A 00                     PUSH 0x0
005A8344  6A 00                     PUSH 0x0
005A8346  50                        PUSH EAX
005A8347  6A 7D                     PUSH 0x7d
005A8349  68 A4 01 00 00            PUSH 0x1a4
005A834E  51                        PUSH ECX
005A834F  E8 2C C3 10 00            CALL 0x006b4680
LAB_005a8354:
005A8354  85 FF                     TEST EDI,EDI
005A8356  0F 84 4B 09 00 00         JZ 0x005a8ca7
005A835C  8B 93 E8 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ae8]
005A8362  68 A0 16 80 00            PUSH 0x8016a0
005A8367  6A 00                     PUSH 0x0
005A8369  52                        PUSH EDX
005A836A  E8 B1 DC 10 00            CALL 0x006b6020
005A836F  C7 43 2D 33 00 00 00      MOV dword ptr [EBX + 0x2d],0x33
005A8376  8B 83 E8 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ae8]
005A837C  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005A837F  8B 93 C4 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ac4]
005A8385  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005A8388  51                        PUSH ECX
005A8389  52                        PUSH EDX
005A838A  6A 02                     PUSH 0x2
005A838C  8B CB                     MOV ECX,EBX
005A838E  E8 ED DC 13 00            CALL 0x006e6080
005A8393  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A8398  68 8C 00 00 00            PUSH 0x8c
005A839D  68 5E 01 00 00            PUSH 0x15e
005A83A2  6A 7D                     PUSH 0x7d
005A83A4  68 A4 01 00 00            PUSH 0x1a4
005A83A9  50                        PUSH EAX
005A83AA  E8 D1 DB 10 00            CALL 0x006b5f80
005A83AF  8B 8B 92 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e92]
005A83B5  51                        PUSH ECX
005A83B6  6A 01                     PUSH 0x1
005A83B8  68 8C 00 00 00            PUSH 0x8c
005A83BD  68 5E 01 00 00            PUSH 0x15e
005A83C2  6A 1F                     PUSH 0x1f
005A83C4  6A 0B                     PUSH 0xb
005A83C6  6A 7D                     PUSH 0x7d
005A83C8  68 A4 01 00 00            PUSH 0x1a4
005A83CD  E8 C6 9E E5 FF            CALL 0x00402298
005A83D2  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A83D8  83 C4 20                  ADD ESP,0x20
005A83DB  68 FF 00 00 00            PUSH 0xff
005A83E0  68 8C 00 00 00            PUSH 0x8c
005A83E5  68 5E 01 00 00            PUSH 0x15e
005A83EA  6A 00                     PUSH 0x0
005A83EC  6A 00                     PUSH 0x0
005A83EE  6A 00                     PUSH 0x0
005A83F0  52                        PUSH EDX
005A83F1  E8 7A BD 10 00            CALL 0x006b4170
005A83F6  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A83FC  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8402  6A 11                     PUSH 0x11
005A8404  68 5E 01 00 00            PUSH 0x15e
005A8409  6A 00                     PUSH 0x0
005A840B  6A 00                     PUSH 0x0
005A840D  6A 00                     PUSH 0x0
005A840F  50                        PUSH EAX
005A8410  E8 7B 86 16 00            CALL 0x00710a90
005A8415  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A841B  6A 02                     PUSH 0x2
005A841D  6A FF                     PUSH -0x1
005A841F  6A FF                     PUSH -0x1
005A8421  51                        PUSH ECX
005A8422  68 72 25 00 00            PUSH 0x2572
005A8427  E8 14 7D 10 00            CALL 0x006b0140
005A842C  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8432  50                        PUSH EAX
005A8433  E8 88 95 16 00            CALL 0x007119c0
005A8438  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A843E  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8444  6A 11                     PUSH 0x11
005A8446  68 5E 01 00 00            PUSH 0x15e
005A844B  6A 22                     PUSH 0x22
005A844D  6A 00                     PUSH 0x0
005A844F  6A 00                     PUSH 0x0
005A8451  52                        PUSH EDX
005A8452  E8 39 86 16 00            CALL 0x00710a90
005A8457  A1 18 76 80 00            MOV EAX,[0x00807618]
005A845C  6A 02                     PUSH 0x2
005A845E  6A FF                     PUSH -0x1
005A8460  6A FF                     PUSH -0x1
005A8462  50                        PUSH EAX
005A8463  68 47 23 00 00            PUSH 0x2347
005A8468  E8 D3 7C 10 00            CALL 0x006b0140
005A846D  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8473  50                        PUSH EAX
005A8474  E8 47 95 16 00            CALL 0x007119c0
005A8479  6A 11                     PUSH 0x11
005A847B  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A8481  68 5E 01 00 00            PUSH 0x15e
005A8486  6A 44                     PUSH 0x44
005A8488  6A 00                     PUSH 0x0
005A848A  6A 00                     PUSH 0x0
005A848C  51                        PUSH ECX
005A848D  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8493  E8 F8 85 16 00            CALL 0x00710a90
005A8498  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005A849E  6A 02                     PUSH 0x2
005A84A0  6A FF                     PUSH -0x1
005A84A2  6A FF                     PUSH -0x1
005A84A4  52                        PUSH EDX
005A84A5  68 44 23 00 00            PUSH 0x2344
005A84AA  E8 91 7C 10 00            CALL 0x006b0140
005A84AF  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A84B5  50                        PUSH EAX
005A84B6  E8 05 95 16 00            CALL 0x007119c0
005A84BB  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A84C1  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A84C7  6A 11                     PUSH 0x11
005A84C9  68 5E 01 00 00            PUSH 0x15e
005A84CE  6A 66                     PUSH 0x66
005A84D0  6A 00                     PUSH 0x0
005A84D2  6A 00                     PUSH 0x0
005A84D4  50                        PUSH EAX
005A84D5  E8 B6 85 16 00            CALL 0x00710a90
005A84DA  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A84E0  6A 02                     PUSH 0x2
005A84E2  6A FF                     PUSH -0x1
005A84E4  6A FF                     PUSH -0x1
005A84E6  51                        PUSH ECX
005A84E7  68 45 23 00 00            PUSH 0x2345
005A84EC  E8 4F 7C 10 00            CALL 0x006b0140
005A84F1  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A84F7  50                        PUSH EAX
005A84F8  E8 C3 94 16 00            CALL 0x007119c0
005A84FD  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A8503  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005A8508  68 FF 00 00 01            PUSH 0x10000ff
005A850D  68 8C 00 00 00            PUSH 0x8c
005A8512  68 5E 01 00 00            PUSH 0x15e
005A8517  6A 00                     PUSH 0x0
005A8519  6A 00                     PUSH 0x0
005A851B  6A 00                     PUSH 0x0
005A851D  52                        PUSH EDX
005A851E  6A 7D                     PUSH 0x7d
005A8520  68 A4 01 00 00            PUSH 0x1a4
005A8525  50                        PUSH EAX
005A8526  E8 55 C1 10 00            CALL 0x006b4680
005A852B  E9 77 07 00 00            JMP 0x005a8ca7
LAB_005a8530:
005A8530  8A 83 60 1A 00 00         MOV AL,byte ptr [EBX + 0x1a60]
005A8536  84 C0                     TEST AL,AL
005A8538  0F 85 69 07 00 00         JNZ 0x005a8ca7
005A853E  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005A8541  C7 85 58 FE FF FF 20 00 00 00  MOV dword ptr [EBP + 0xfffffe58],0x20
005A854B  3B C7                     CMP EAX,EDI
005A854D  74 2E                     JZ 0x005a857d
005A854F  8B 83 18 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b18]
005A8555  C7 85 5C FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffe5c],0x1
005A855F  3B C7                     CMP EAX,EDI
005A8561  0F 84 40 07 00 00         JZ 0x005a8ca7
005A8567  8D 8D 48 FE FF FF         LEA ECX,[EBP + 0xfffffe48]
005A856D  51                        PUSH ECX
005A856E  50                        PUSH EAX
005A856F  6A 02                     PUSH 0x2
005A8571  8B CB                     MOV ECX,EBX
005A8573  E8 08 DB 13 00            CALL 0x006e6080
005A8578  E9 2A 07 00 00            JMP 0x005a8ca7
LAB_005a857d:
005A857D  8B 83 18 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b18]
005A8583  89 BD 5C FE FF FF         MOV dword ptr [EBP + 0xfffffe5c],EDI
005A8589  3B C7                     CMP EAX,EDI
005A858B  0F 84 16 07 00 00         JZ 0x005a8ca7
005A8591  8D 95 48 FE FF FF         LEA EDX,[EBP + 0xfffffe48]
005A8597  8B CB                     MOV ECX,EBX
005A8599  52                        PUSH EDX
005A859A  50                        PUSH EAX
005A859B  6A 02                     PUSH 0x2
005A859D  E8 DE DA 13 00            CALL 0x006e6080
005A85A2  E9 00 07 00 00            JMP 0x005a8ca7
switchD_005a7d4e::caseD_8161:
005A85A7  39 BB 8E 1E 00 00         CMP dword ptr [EBX + 0x1e8e],EDI
005A85AD  0F 84 F4 06 00 00         JZ 0x005a8ca7
005A85B3  39 BB 9A 1E 00 00         CMP dword ptr [EBX + 0x1e9a],EDI
005A85B9  0F 84 E8 06 00 00         JZ 0x005a8ca7
005A85BF  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
005A85C2  6A 11                     PUSH 0x11
005A85C4  33 C9                     XOR ECX,ECX
005A85C6  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
005A85C9  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A85CC  66 8B 4E 1A               MOV CX,word ptr [ESI + 0x1a]
005A85D0  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
005A85D3  50                        PUSH EAX
005A85D4  8B 47 28                  MOV EAX,dword ptr [EDI + 0x28]
005A85D7  03 C8                     ADD ECX,EAX
005A85D9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A85DE  51                        PUSH ECX
005A85DF  52                        PUSH EDX
005A85E0  50                        PUSH EAX
005A85E1  E8 9A D9 10 00            CALL 0x006b5f80
005A85E6  80 BB 5F 1A 00 00 06      CMP byte ptr [EBX + 0x1a5f],0x6
005A85ED  0F 85 CA 02 00 00         JNZ 0x005a88bd
005A85F3  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
005A85F6  33 C9                     XOR ECX,ECX
005A85F8  66 8B 4E 1A               MOV CX,word ptr [ESI + 0x1a]
005A85FC  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
005A85FF  8B 93 9A 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e9a]
005A8605  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005A8608  52                        PUSH EDX
005A8609  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
005A860C  6A 01                     PUSH 0x1
005A860E  6A 11                     PUSH 0x11
005A8610  52                        PUSH EDX
005A8611  8D 50 A2                  LEA EDX,[EAX + -0x5e]
005A8614  52                        PUSH EDX
005A8615  8D 91 17 FE FF FF         LEA EDX,[ECX + 0xfffffe17]
005A861B  52                        PUSH EDX
005A861C  50                        PUSH EAX
005A861D  51                        PUSH ECX
005A861E  E8 75 9C E5 FF            CALL 0x00402298
005A8623  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A8626  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A862C  83 C4 20                  ADD ESP,0x20
005A862F  68 FF 00 00 00            PUSH 0xff
005A8634  6A 11                     PUSH 0x11
005A8636  50                        PUSH EAX
005A8637  6A 00                     PUSH 0x0
005A8639  6A 00                     PUSH 0x0
005A863B  6A 00                     PUSH 0x0
005A863D  51                        PUSH ECX
005A863E  E8 2D BB 10 00            CALL 0x006b4170
005A8643  8A 83 60 1A 00 00         MOV AL,byte ptr [EBX + 0x1a60]
005A8649  84 C0                     TEST AL,AL
005A864B  0F 84 F9 00 00 00         JZ 0x005a874a
005A8651  8B 93 AA 1E 00 00         MOV EDX,dword ptr [EBX + 0x1eaa]
005A8657  85 D2                     TEST EDX,EDX
005A8659  0F 84 74 03 00 00         JZ 0x005a89d3
005A865F  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005A8662  33 C9                     XOR ECX,ECX
005A8664  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
005A8668  3B C8                     CMP ECX,EAX
005A866A  73 0B                     JNC 0x005a8677
005A866C  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005A866F  0F AF C1                  IMUL EAX,ECX
005A8672  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005A8675  EB 02                     JMP 0x005a8679
LAB_005a8677:
005A8677  33 C0                     XOR EAX,EAX
LAB_005a8679:
005A8679  85 C0                     TEST EAX,EAX
005A867B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005A867E  0F 84 4F 03 00 00         JZ 0x005a89d3
005A8684  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005A8687  A8 40                     TEST AL,0x40
005A8689  74 06                     JZ 0x005a8691
005A868B  C6 45 F4 04               MOV byte ptr [EBP + -0xc],0x4
005A868F  EB 16                     JMP 0x005a86a7
LAB_005a8691:
005A8691  A8 18                     TEST AL,0x18
005A8693  75 0E                     JNZ 0x005a86a3
005A8695  24 02                     AND AL,0x2
005A8697  F6 D8                     NEG AL
005A8699  1A C0                     SBB AL,AL
005A869B  83 E0 05                  AND EAX,0x5
005A869E  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
005A86A1  EB 04                     JMP 0x005a86a7
LAB_005a86a3:
005A86A3  C6 45 F4 03               MOV byte ptr [EBP + -0xc],0x3
LAB_005a86a7:
005A86A7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005A86AA  8B 83 87 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a87]
005A86B0  81 E2 FF 00 00 00         AND EDX,0xff
005A86B6  52                        PUSH EDX
005A86B7  50                        PUSH EAX
005A86B8  E8 E3 2C 16 00            CALL 0x0070b3a0
005A86BD  8B C8                     MOV ECX,EAX
005A86BF  B8 11 00 00 00            MOV EAX,0x11
005A86C4  51                        PUSH ECX
005A86C5  6A 06                     PUSH 0x6
005A86C7  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005A86CA  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A86D0  2B C2                     SUB EAX,EDX
005A86D2  99                        CDQ
005A86D3  2B C2                     SUB EAX,EDX
005A86D5  D1 F8                     SAR EAX,0x1
005A86D7  50                        PUSH EAX
005A86D8  6A 03                     PUSH 0x3
005A86DA  51                        PUSH ECX
005A86DB  E8 49 AB E5 FF            CALL 0x00403229
005A86E0  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
005A86E3  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A86E9  83 C4 1C                  ADD ESP,0x1c
005A86EC  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A86F2  83 EA 46                  SUB EDX,0x46
005A86F5  6A 11                     PUSH 0x11
005A86F7  52                        PUSH EDX
005A86F8  6A 00                     PUSH 0x0
005A86FA  6A 23                     PUSH 0x23
005A86FC  6A 00                     PUSH 0x0
005A86FE  50                        PUSH EAX
005A86FF  E8 8C 83 16 00            CALL 0x00710a90
005A8704  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
005A8708  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005A870B  66 F7 D8                  NEG AX
005A870E  8B 51 64                  MOV EDX,dword ptr [ECX + 0x64]
005A8711  1B C0                     SBB EAX,EAX
005A8713  24 FE                     AND AL,0xfe
005A8715  83 C0 02                  ADD EAX,0x2
005A8718  50                        PUSH EAX
005A8719  52                        PUSH EDX
005A871A  51                        PUSH ECX
005A871B  50                        PUSH EAX
005A871C  68 F8 C5 7C 00            PUSH 0x7cc5f8
005A8721  68 3A F3 80 00            PUSH 0x80f33a
005A8726  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A872C  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8732  83 C4 18                  ADD ESP,0x18
005A8735  6A 00                     PUSH 0x0
005A8737  6A FF                     PUSH -0x1
005A8739  6A 00                     PUSH 0x0
005A873B  68 3A F3 80 00            PUSH 0x80f33a
005A8740  E8 7B 92 16 00            CALL 0x007119c0
005A8745  E9 89 02 00 00            JMP 0x005a89d3
LAB_005a874a:
005A874A  8B 93 A6 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ea6]
005A8750  85 D2                     TEST EDX,EDX
005A8752  0F 84 7B 02 00 00         JZ 0x005a89d3
005A8758  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
005A875B  33 C9                     XOR ECX,ECX
005A875D  66 8B 4E 14               MOV CX,word ptr [ESI + 0x14]
005A8761  3B C8                     CMP ECX,EAX
005A8763  73 0B                     JNC 0x005a8770
005A8765  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005A8768  0F AF C1                  IMUL EAX,ECX
005A876B  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005A876E  EB 02                     JMP 0x005a8772
LAB_005a8770:
005A8770  33 C0                     XOR EAX,EAX
LAB_005a8772:
005A8772  85 C0                     TEST EAX,EAX
005A8774  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005A8777  0F 84 56 02 00 00         JZ 0x005a89d3
005A877D  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A8780  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A8786  83 E8 46                  SUB EAX,0x46
005A8789  6A 11                     PUSH 0x11
005A878B  50                        PUSH EAX
005A878C  6A 00                     PUSH 0x0
005A878E  6A 23                     PUSH 0x23
005A8790  6A 00                     PUSH 0x0
005A8792  51                        PUSH ECX
005A8793  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8799  E8 F2 82 16 00            CALL 0x00710a90
005A879E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005A87A1  8A 42 2D                  MOV AL,byte ptr [EDX + 0x2d]
005A87A4  84 C0                     TEST AL,AL
005A87A6  74 69                     JZ 0x005a8811
005A87A8  8B 83 87 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a87]
005A87AE  6A 01                     PUSH 0x1
005A87B0  50                        PUSH EAX
005A87B1  E8 EA 2B 16 00            CALL 0x0070b3a0
005A87B6  8B C8                     MOV ECX,EAX
005A87B8  B8 11 00 00 00            MOV EAX,0x11
005A87BD  51                        PUSH ECX
005A87BE  6A 06                     PUSH 0x6
005A87C0  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005A87C3  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A87C9  2B C2                     SUB EAX,EDX
005A87CB  99                        CDQ
005A87CC  2B C2                     SUB EAX,EDX
005A87CE  D1 F8                     SAR EAX,0x1
005A87D0  50                        PUSH EAX
005A87D1  6A 03                     PUSH 0x3
005A87D3  51                        PUSH ECX
005A87D4  E8 50 AA E5 FF            CALL 0x00403229
005A87D9  66 8B 56 16               MOV DX,word ptr [ESI + 0x16]
005A87DD  83 C4 1C                  ADD ESP,0x1c
005A87E0  66 F7 DA                  NEG DX
005A87E3  A1 18 76 80 00            MOV EAX,[0x00807618]
005A87E8  1B D2                     SBB EDX,EDX
005A87EA  83 E2 FE                  AND EDX,0xfffffffe
005A87ED  83 C2 02                  ADD EDX,0x2
005A87F0  52                        PUSH EDX
005A87F1  6A FF                     PUSH -0x1
005A87F3  6A 00                     PUSH 0x0
005A87F5  50                        PUSH EAX
005A87F6  68 67 25 00 00            PUSH 0x2567
005A87FB  E8 40 79 10 00            CALL 0x006b0140
005A8800  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8806  50                        PUSH EAX
005A8807  E8 B4 91 16 00            CALL 0x007119c0
005A880C  E9 C2 01 00 00            JMP 0x005a89d3
LAB_005a8811:
005A8811  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005A8814  51                        PUSH ECX
005A8815  B9 90 2A 80 00            MOV ECX,0x802a90
005A881A  E8 07 B7 E5 FF            CALL 0x00403f26
005A881F  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A8825  50                        PUSH EAX
005A8826  6A 01                     PUSH 0x1
005A8828  6A 01                     PUSH 0x1
005A882A  6A 03                     PUSH 0x3
005A882C  52                        PUSH EDX
005A882D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005A8830  E8 F4 A9 E5 FF            CALL 0x00403229
005A8835  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005A8838  83 C4 14                  ADD ESP,0x14
005A883B  85 C0                     TEST EAX,EAX
005A883D  74 09                     JZ 0x005a8848
005A883F  8D 45 F8                  LEA EAX,[EBP + -0x8]
005A8842  50                        PUSH EAX
005A8843  E8 18 28 10 00            CALL 0x006ab060
LAB_005a8848:
005A8848  66 8B 4E 16               MOV CX,word ptr [ESI + 0x16]
005A884C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005A884F  66 F7 D9                  NEG CX
005A8852  1B C9                     SBB ECX,ECX
005A8854  83 E1 FE                  AND ECX,0xfffffffe
005A8857  83 C1 02                  ADD ECX,0x2
005A885A  51                        PUSH ECX
005A885B  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A8861  6A FF                     PUSH -0x1
005A8863  6A 00                     PUSH 0x0
005A8865  52                        PUSH EDX
005A8866  E8 55 91 16 00            CALL 0x007119c0
005A886B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005A886E  F6 40 25 10               TEST byte ptr [EAX + 0x25],0x10
005A8872  0F 84 5B 01 00 00         JZ 0x005a89d3
005A8878  8B 8B 8B 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a8b]
005A887E  6A 03                     PUSH 0x3
005A8880  51                        PUSH ECX
005A8881  E8 1A 2B 16 00            CALL 0x0070b3a0
005A8886  8B C8                     MOV ECX,EAX
005A8888  B8 11 00 00 00            MOV EAX,0x11
005A888D  83 C4 08                  ADD ESP,0x8
005A8890  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005A8893  2B C2                     SUB EAX,EDX
005A8895  68 FF 00 00 00            PUSH 0xff
005A889A  99                        CDQ
005A889B  2B C2                     SUB EAX,EDX
005A889D  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
005A88A0  6A 00                     PUSH 0x0
005A88A2  51                        PUSH ECX
005A88A3  D1 F8                     SAR EAX,0x1
005A88A5  83 EA 1D                  SUB EDX,0x1d
005A88A8  50                        PUSH EAX
005A88A9  8B 83 8E 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e8e]
005A88AF  52                        PUSH EDX
005A88B0  6A 00                     PUSH 0x0
005A88B2  50                        PUSH EAX
005A88B3  E8 88 CB 10 00            CALL 0x006b5440
005A88B8  E9 16 01 00 00            JMP 0x005a89d3
LAB_005a88bd:
005A88BD  8B 57 28                  MOV EDX,dword ptr [EDI + 0x28]
005A88C0  33 C9                     XOR ECX,ECX
005A88C2  66 8B 4E 1A               MOV CX,word ptr [ESI + 0x1a]
005A88C6  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
005A88C9  8B 93 9A 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e9a]
005A88CF  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005A88D2  52                        PUSH EDX
005A88D3  8B 57 2C                  MOV EDX,dword ptr [EDI + 0x2c]
005A88D6  6A 01                     PUSH 0x1
005A88D8  6A 11                     PUSH 0x11
005A88DA  52                        PUSH EDX
005A88DB  8D 50 A2                  LEA EDX,[EAX + -0x5e]
005A88DE  52                        PUSH EDX
005A88DF  8D 51 ED                  LEA EDX,[ECX + -0x13]
005A88E2  52                        PUSH EDX
005A88E3  50                        PUSH EAX
005A88E4  51                        PUSH ECX
005A88E5  E8 AE 99 E5 FF            CALL 0x00402298
005A88EA  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005A88ED  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A88F3  83 C4 20                  ADD ESP,0x20
005A88F6  68 FF 00 00 00            PUSH 0xff
005A88FB  6A 11                     PUSH 0x11
005A88FD  50                        PUSH EAX
005A88FE  6A 00                     PUSH 0x0
005A8900  6A 00                     PUSH 0x0
005A8902  6A 00                     PUSH 0x0
005A8904  51                        PUSH ECX
005A8905  E8 66 B8 10 00            CALL 0x006b4170
005A890A  8B 83 BE 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ebe]
005A8910  85 C0                     TEST EAX,EAX
005A8912  0F 84 BB 00 00 00         JZ 0x005a89d3
005A8918  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005A891B  33 D2                     XOR EDX,EDX
005A891D  66 8B 56 14               MOV DX,word ptr [ESI + 0x14]
005A8921  3B D1                     CMP EDX,ECX
005A8923  73 0B                     JNC 0x005a8930
005A8925  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A8928  0F AF CA                  IMUL ECX,EDX
005A892B  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
005A892E  EB 02                     JMP 0x005a8932
LAB_005a8930:
005A8930  33 C9                     XOR ECX,ECX
LAB_005a8932:
005A8932  85 C9                     TEST ECX,ECX
005A8934  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005A8937  0F 84 96 00 00 00         JZ 0x005a89d3
005A893D  8B D1                     MOV EDX,ECX
005A893F  83 C9 FF                  OR ECX,0xffffffff
005A8942  33 C0                     XOR EAX,EAX
005A8944  8D 7A 4C                  LEA EDI,[EDX + 0x4c]
005A8947  F2 AE                     SCASB.REPNE ES:EDI
005A8949  F7 D1                     NOT ECX
005A894B  8B 83 87 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a87]
005A8951  49                        DEC ECX
005A8952  F7 D9                     NEG ECX
005A8954  1B C9                     SBB ECX,ECX
005A8956  83 E1 04                  AND ECX,0x4
005A8959  51                        PUSH ECX
005A895A  50                        PUSH EAX
005A895B  E8 40 2A 16 00            CALL 0x0070b3a0
005A8960  8B C8                     MOV ECX,EAX
005A8962  B8 11 00 00 00            MOV EAX,0x11
005A8967  51                        PUSH ECX
005A8968  6A 06                     PUSH 0x6
005A896A  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005A896D  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A8973  2B C2                     SUB EAX,EDX
005A8975  99                        CDQ
005A8976  2B C2                     SUB EAX,EDX
005A8978  D1 F8                     SAR EAX,0x1
005A897A  50                        PUSH EAX
005A897B  6A 03                     PUSH 0x3
005A897D  51                        PUSH ECX
005A897E  E8 A6 A8 E5 FF            CALL 0x00403229
005A8983  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
005A8986  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
005A898C  83 C4 1C                  ADD ESP,0x1c
005A898F  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005A8992  83 E8 40                  SUB EAX,0x40
005A8995  6A 11                     PUSH 0x11
005A8997  50                        PUSH EAX
005A8998  6A 00                     PUSH 0x0
005A899A  6A 23                     PUSH 0x23
005A899C  6A 00                     PUSH 0x0
005A899E  51                        PUSH ECX
005A899F  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A89A5  E8 E6 80 16 00            CALL 0x00710a90
005A89AA  66 8B 56 16               MOV DX,word ptr [ESI + 0x16]
005A89AE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005A89B1  66 F7 DA                  NEG DX
005A89B4  1B D2                     SBB EDX,EDX
005A89B6  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A89BC  83 E2 FE                  AND EDX,0xfffffffe
005A89BF  83 C0 2C                  ADD EAX,0x2c
005A89C2  83 C2 02                  ADD EDX,0x2
005A89C5  52                        PUSH EDX
005A89C6  6A FF                     PUSH -0x1
005A89C8  6A 00                     PUSH 0x0
005A89CA  50                        PUSH EAX
005A89CB  E8 F0 8F 16 00            CALL 0x007119c0
005A89D0  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_005a89d3:
005A89D3  8B 4F 2C                  MOV ECX,dword ptr [EDI + 0x2c]
005A89D6  8B 93 8E 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e8e]
005A89DC  68 FF 00 00 01            PUSH 0x10000ff
005A89E1  6A 11                     PUSH 0x11
005A89E3  51                        PUSH ECX
005A89E4  8B 4F 28                  MOV ECX,dword ptr [EDI + 0x28]
005A89E7  33 C0                     XOR EAX,EAX
005A89E9  6A 00                     PUSH 0x0
005A89EB  66 8B 46 1A               MOV AX,word ptr [ESI + 0x1a]
005A89EF  6A 00                     PUSH 0x0
005A89F1  6A 00                     PUSH 0x0
005A89F3  52                        PUSH EDX
005A89F4  03 C1                     ADD EAX,ECX
LAB_005a89f6:
005A89F6  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
005A89F9  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005A89FF  50                        PUSH EAX
005A8A00  51                        PUSH ECX
005A8A01  52                        PUSH EDX
005A8A02  E8 79 BC 10 00            CALL 0x006b4680
005A8A07  E9 9B 02 00 00            JMP 0x005a8ca7
switchD_005a7d4e::caseD_8164:
005A8A0C  57                        PUSH EDI
005A8A0D  8D 83 DB 1C 00 00         LEA EAX,[EBX + 0x1cdb]
005A8A13  56                        PUSH ESI
005A8A14  50                        PUSH EAX
005A8A15  8B CB                     MOV ECX,EBX
005A8A17  E8 B8 A7 E5 FF            CALL 0x004031d4
005A8A1C  E9 86 02 00 00            JMP 0x005a8ca7
switchD_005a7d4e::caseD_8165:
005A8A21  57                        PUSH EDI
005A8A22  8D 8B 6C 1D 00 00         LEA ECX,[EBX + 0x1d6c]
005A8A28  56                        PUSH ESI
005A8A29  51                        PUSH ECX
005A8A2A  8B CB                     MOV ECX,EBX
005A8A2C  E8 A3 A7 E5 FF            CALL 0x004031d4
005A8A31  E9 71 02 00 00            JMP 0x005a8ca7
switchD_005a7d4e::caseD_8166:
005A8A36  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
005A8A39  33 C0                     XOR EAX,EAX
005A8A3B  66 8B 46 16               MOV AX,word ptr [ESI + 0x16]
005A8A3F  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
005A8A42  03 C8                     ADD ECX,EAX
005A8A44  89 8B 1D 1E 00 00         MOV dword ptr [EBX + 0x1e1d],ECX
005A8A4A  8B 83 01 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e01]
005A8A50  83 F8 FF                  CMP EAX,-0x1
005A8A53  0F 84 4E 02 00 00         JZ 0x005a8ca7
005A8A59  8B D1                     MOV EDX,ECX
005A8A5B  8B 8B 19 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e19]
005A8A61  52                        PUSH EDX
005A8A62  8B 93 05 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e05]
005A8A68  51                        PUSH ECX
005A8A69  52                        PUSH EDX
005A8A6A  50                        PUSH EAX
005A8A6B  8B 83 45 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e45]
005A8A71  50                        PUSH EAX
005A8A72  E8 B9 AC 10 00            CALL 0x006b3730
005A8A77  E9 2B 02 00 00            JMP 0x005a8ca7
LAB_005a8a7c:
005A8A7C  39 BB 6B 1A 00 00         CMP dword ptr [EBX + 0x1a6b],EDI
005A8A82  0F 84 1F 02 00 00         JZ 0x005a8ca7
005A8A88  8B 83 10 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b10]
005A8A8E  3B C7                     CMP EAX,EDI
005A8A90  0F 84 11 02 00 00         JZ 0x005a8ca7
005A8A96  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005A8A99  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005A8AA0  51                        PUSH ECX
005A8AA1  50                        PUSH EAX
005A8AA2  6A 02                     PUSH 0x2
005A8AA4  8B CB                     MOV ECX,EBX
005A8AA6  C7 43 31 01 00 00 00      MOV dword ptr [EBX + 0x31],0x1
005A8AAD  E8 CE D5 13 00            CALL 0x006e6080
005A8AB2  E9 F0 01 00 00            JMP 0x005a8ca7
LAB_005a8ab7:
005A8AB7  05 5E 3F FF FF            ADD EAX,0xffff3f5e
005A8ABC  83 F8 03                  CMP EAX,0x3
005A8ABF  0F 87 E2 01 00 00         JA 0x005a8ca7
switchD_005a8ac5::switchD:
005A8AC5  FF 24 85 90 8F 5A 00      JMP dword ptr [EAX*0x4 + 0x5a8f90]
switchD_005a8ac5::caseD_c0a2:
005A8ACC  8B 83 A2 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea2]
005A8AD2  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005A8AD5  7E 07                     JLE 0x005a8ade
005A8AD7  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
005A8ADA  8B 02                     MOV EAX,dword ptr [EDX]
005A8ADC  EB 02                     JMP 0x005a8ae0
LAB_005a8ade:
005A8ADE  33 C0                     XOR EAX,EAX
LAB_005a8ae0:
005A8AE0  50                        PUSH EAX
005A8AE1  B9 20 76 80 00            MOV ECX,0x807620
005A8AE6  E8 62 97 E5 FF            CALL 0x0040224d
005A8AEB  85 C0                     TEST EAX,EAX
005A8AED  74 4A                     JZ 0x005a8b39
005A8AEF  8B 83 5B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a5b]
005A8AF5  33 F6                     XOR ESI,ESI
005A8AF7  8B 80 96 06 00 00         MOV EAX,dword ptr [EAX + 0x696]
005A8AFD  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A8B00  3B CF                     CMP ECX,EDI
005A8B02  7E 55                     JLE 0x005a8b59
005A8B04  3B F1                     CMP ESI,ECX
005A8B06  7D 08                     JGE 0x005a8b10
LAB_005a8b08:
005A8B08  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005A8B0B  8B 04 B1                  MOV EAX,dword ptr [ECX + ESI*0x4]
005A8B0E  EB 02                     JMP 0x005a8b12
LAB_005a8b10:
005A8B10  33 C0                     XOR EAX,EAX
LAB_005a8b12:
005A8B12  6A 08                     PUSH 0x8
005A8B14  50                        PUSH EAX
005A8B15  68 A0 16 80 00            PUSH 0x8016a0
005A8B1A  6A 08                     PUSH 0x8
005A8B1C  8B CB                     MOV ECX,EBX
005A8B1E  E8 59 A9 E5 FF            CALL 0x0040347c
005A8B23  8B 93 5B 1A 00 00         MOV EDX,dword ptr [EBX + 0x1a5b]
005A8B29  46                        INC ESI
005A8B2A  8B 82 96 06 00 00         MOV EAX,dword ptr [EDX + 0x696]
005A8B30  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A8B33  3B F1                     CMP ESI,ECX
005A8B35  7C D1                     JL 0x005a8b08
005A8B37  EB 20                     JMP 0x005a8b59
LAB_005a8b39:
005A8B39  8B 83 A2 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea2]
005A8B3F  39 78 08                  CMP dword ptr [EAX + 0x8],EDI
005A8B42  7E 07                     JLE 0x005a8b4b
005A8B44  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
005A8B47  8B 00                     MOV EAX,dword ptr [EAX]
005A8B49  EB 02                     JMP 0x005a8b4d
LAB_005a8b4b:
005A8B4B  33 C0                     XOR EAX,EAX
LAB_005a8b4d:
005A8B4D  50                        PUSH EAX
005A8B4E  B9 90 2A 80 00            MOV ECX,0x802a90
005A8B53  FF 15 64 C0 85 00         CALL dword ptr [0x0085c064]
LAB_005a8b59:
005A8B59  8B 8B A2 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ea2]
005A8B5F  68 A0 16 80 00            PUSH 0x8016a0
005A8B64  57                        PUSH EDI
005A8B65  51                        PUSH ECX
005A8B66  E8 B5 D4 10 00            CALL 0x006b6020
005A8B6B  8B 93 A2 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ea2]
005A8B71  8D 43 1D                  LEA EAX,[EBX + 0x1d]
005A8B74  C7 43 2D 33 00 00 00      MOV dword ptr [EBX + 0x2d],0x33
005A8B7B  89 53 31                  MOV dword ptr [EBX + 0x31],EDX
005A8B7E  50                        PUSH EAX
005A8B7F  E9 01 01 00 00            JMP 0x005a8c85
switchD_005a8ac5::caseD_c0a3:
005A8B84  8B 93 E8 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ae8]
005A8B8A  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
005A8B8D  3B F7                     CMP ESI,EDI
005A8B8F  7E 05                     JLE 0x005a8b96
LAB_005a8b91:
005A8B91  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
005A8B94  8B 38                     MOV EDI,dword ptr [EAX]
LAB_005a8b96:
005A8B96  83 C9 FF                  OR ECX,0xffffffff
005A8B99  33 C0                     XOR EAX,EAX
005A8B9B  F2 AE                     SCASB.REPNE ES:EDI
005A8B9D  F7 D1                     NOT ECX
005A8B9F  49                        DEC ECX
005A8BA0  0F 84 01 01 00 00         JZ 0x005a8ca7
005A8BA6  8B 83 EC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1aec]
005A8BAC  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005A8BAF  85 C9                     TEST ECX,ECX
005A8BB1  7E 07                     JLE 0x005a8bba
005A8BB3  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005A8BB6  8B 09                     MOV ECX,dword ptr [ECX]
005A8BB8  EB 02                     JMP 0x005a8bbc
LAB_005a8bba:
005A8BBA  33 C9                     XOR ECX,ECX
LAB_005a8bbc:
005A8BBC  85 F6                     TEST ESI,ESI
005A8BBE  7E 18                     JLE 0x005a8bd8
005A8BC0  8B 52 14                  MOV EDX,dword ptr [EDX + 0x14]
005A8BC3  6A 01                     PUSH 0x1
005A8BC5  51                        PUSH ECX
005A8BC6  B9 90 2A 80 00            MOV ECX,0x802a90
005A8BCB  8B 02                     MOV EAX,dword ptr [EDX]
005A8BCD  50                        PUSH EAX
005A8BCE  E8 6F C9 E5 FF            CALL 0x00405542
005A8BD3  E9 CF 00 00 00            JMP 0x005a8ca7
LAB_005a8bd8:
005A8BD8  33 C0                     XOR EAX,EAX
005A8BDA  6A 01                     PUSH 0x1
005A8BDC  51                        PUSH ECX
005A8BDD  50                        PUSH EAX
005A8BDE  B9 90 2A 80 00            MOV ECX,0x802a90
005A8BE3  E8 5A C9 E5 FF            CALL 0x00405542
005A8BE8  E9 BA 00 00 00            JMP 0x005a8ca7
switchD_005a8ac5::caseD_c0a4:
005A8BED  8A 83 60 1A 00 00         MOV AL,byte ptr [EBX + 0x1a60]
005A8BF3  84 C0                     TEST AL,AL
005A8BF5  0F 85 AC 00 00 00         JNZ 0x005a8ca7
005A8BFB  C7 43 2D 26 00 00 00      MOV dword ptr [EBX + 0x2d],0x26
005A8C02  8B 83 20 1B 00 00         MOV EAX,dword ptr [EBX + 0x1b20]
005A8C08  8D 73 1D                  LEA ESI,[EBX + 0x1d]
005A8C0B  8B CB                     MOV ECX,EBX
005A8C0D  56                        PUSH ESI
005A8C0E  50                        PUSH EAX
005A8C0F  6A 02                     PUSH 0x2
005A8C11  E8 6A D4 13 00            CALL 0x006e6080
005A8C16  8B 4B 31                  MOV ECX,dword ptr [EBX + 0x31]
005A8C19  3B CF                     CMP ECX,EDI
005A8C1B  0F 84 86 00 00 00         JZ 0x005a8ca7
005A8C21  8B 93 A6 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ea6]
005A8C27  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
005A8C2A  73 0B                     JNC 0x005a8c37
005A8C2C  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005A8C2F  0F AF C1                  IMUL EAX,ECX
005A8C32  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005A8C35  EB 02                     JMP 0x005a8c39
LAB_005a8c37:
005A8C37  33 C0                     XOR EAX,EAX
LAB_005a8c39:
005A8C39  8B 8B A2 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ea2]
005A8C3F  39 79 08                  CMP dword ptr [ECX + 0x8],EDI
005A8C42  7E 07                     JLE 0x005a8c4b
005A8C44  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
005A8C47  8B 09                     MOV ECX,dword ptr [ECX]
005A8C49  EB 02                     JMP 0x005a8c4d
LAB_005a8c4b:
005A8C4B  33 C9                     XOR ECX,ECX
LAB_005a8c4d:
005A8C4D  50                        PUSH EAX
005A8C4E  51                        PUSH ECX
005A8C4F  68 F0 C5 7C 00            PUSH 0x7cc5f0
005A8C54  68 3A F3 80 00            PUSH 0x80f33a
005A8C59  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A8C5F  8B 93 A2 1E 00 00         MOV EDX,dword ptr [EBX + 0x1ea2]
005A8C65  83 C4 10                  ADD ESP,0x10
005A8C68  68 3A F3 80 00            PUSH 0x80f33a
005A8C6D  57                        PUSH EDI
005A8C6E  52                        PUSH EDX
005A8C6F  E8 AC D3 10 00            CALL 0x006b6020
005A8C74  8B 83 A2 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ea2]
005A8C7A  C7 43 2D 33 00 00 00      MOV dword ptr [EBX + 0x2d],0x33
005A8C81  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005A8C84  56                        PUSH ESI
LAB_005a8c85:
005A8C85  8B 8B 10 1B 00 00         MOV ECX,dword ptr [EBX + 0x1b10]
005A8C8B  51                        PUSH ECX
005A8C8C  6A 02                     PUSH 0x2
005A8C8E  8B CB                     MOV ECX,EBX
005A8C90  E8 EB D3 13 00            CALL 0x006e6080
005A8C95  EB 10                     JMP 0x005a8ca7
switchD_005a8ac5::caseD_c0a5:
005A8C97  A0 60 73 80 00            MOV AL,[0x00807360]
005A8C9C  84 C0                     TEST AL,AL
005A8C9E  0F 94 C2                  SETZ DL
005A8CA1  88 15 60 73 80 00         MOV byte ptr [0x00807360],DL
switchD_005a43f5::caseD_1:
005A8CA7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005A8CAA  8B 85 E8 FD FF FF         MOV EAX,dword ptr [EBP + 0xfffffde8]
005A8CB0  51                        PUSH ECX
005A8CB1  8B CB                     MOV ECX,EBX
005A8CB3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A8CB8  E8 C3 85 E5 FF            CALL 0x00401280
005A8CBD  5F                        POP EDI
005A8CBE  5E                        POP ESI
005A8CBF  5B                        POP EBX
005A8CC0  8B E5                     MOV ESP,EBP
005A8CC2  5D                        POP EBP
005A8CC3  C2 04 00                  RET 0x4
LAB_005a8cc6:
005A8CC6  8B 95 E8 FD FF FF         MOV EDX,dword ptr [EBP + 0xfffffde8]
005A8CCC  68 D8 C5 7C 00            PUSH 0x7cc5d8
005A8CD1  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A8CD6  56                        PUSH ESI
005A8CD7  57                        PUSH EDI
005A8CD8  68 48 10 00 00            PUSH 0x1048
005A8CDD  68 70 BF 7C 00            PUSH 0x7cbf70
005A8CE2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A8CE8  E8 E3 47 10 00            CALL 0x006ad4d0
005A8CED  83 C4 18                  ADD ESP,0x18
005A8CF0  85 C0                     TEST EAX,EAX
005A8CF2  74 01                     JZ 0x005a8cf5
005A8CF4  CC                        INT3
LAB_005a8cf5:
005A8CF5  68 48 10 00 00            PUSH 0x1048
005A8CFA  68 70 BF 7C 00            PUSH 0x7cbf70
005A8CFF  57                        PUSH EDI
005A8D00  56                        PUSH ESI
005A8D01  E8 3A D1 0F 00            CALL 0x006a5e40
005A8D06  5F                        POP EDI
005A8D07  5E                        POP ESI
005A8D08  B8 FF FF 00 00            MOV EAX,0xffff
005A8D0D  5B                        POP EBX
005A8D0E  8B E5                     MOV ESP,EBP
005A8D10  5D                        POP EBP
005A8D11  C2 04 00                  RET 0x4
