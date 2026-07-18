FUN_007434d0:
007434D0  55                        PUSH EBP
007434D1  8B EC                     MOV EBP,ESP
007434D3  81 EC B4 00 00 00         SUB ESP,0xb4
007434D9  8D 45 C8                  LEA EAX,[EBP + -0x38]
007434DC  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
007434DF  66 C7 45 E4 00 00         MOV word ptr [EBP + -0x1c],0x0
007434E5  C7 45 8C 01 00 00 00      MOV dword ptr [EBP + -0x74],0x1
007434EC  C7 45 90 00 00 00 00      MOV dword ptr [EBP + -0x70],0x0
007434F3  C7 45 AC 00 00 00 00      MOV dword ptr [EBP + -0x54],0x0
007434FA  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00743501  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00743508  C7 45 C0 00 00 00 00      MOV dword ptr [EBP + -0x40],0x0
0074350F  C7 45 88 00 00 00 00      MOV dword ptr [EBP + -0x78],0x0
00743516  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0074351D  C7 45 94 00 00 00 00      MOV dword ptr [EBP + -0x6c],0x0
00743524  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
0074352B  C7 45 B4 00 00 00 00      MOV dword ptr [EBP + -0x4c],0x0
00743532  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00743535  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00743538  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074353B  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
0074353E  EB 09                     JMP 0x00743549
LAB_00743540:
00743540  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00743543  83 C0 01                  ADD EAX,0x1
00743546  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00743549:
00743549  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074354C  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0074354F  83 FA 20                  CMP EDX,0x20
00743552  74 21                     JZ 0x00743575
00743554  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00743557  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0074355A  83 F9 09                  CMP ECX,0x9
0074355D  74 16                     JZ 0x00743575
0074355F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00743562  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00743565  83 F8 0A                  CMP EAX,0xa
00743568  74 0B                     JZ 0x00743575
0074356A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074356D  0F BE 11                  MOVSX EDX,byte ptr [ECX]
00743570  83 FA 0D                  CMP EDX,0xd
00743573  75 02                     JNZ 0x00743577
LAB_00743575:
00743575  EB C9                     JMP 0x00743540
LAB_00743577:
00743577  83 7D B4 0A               CMP dword ptr [EBP + -0x4c],0xa
0074357B  0F 84 57 07 00 00         JZ 0x00743cd8
00743581  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00743584  8A 08                     MOV CL,byte ptr [EAX]
00743586  88 4D C4                  MOV byte ptr [EBP + -0x3c],CL
00743589  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074358C  83 C2 01                  ADD EDX,0x1
0074358F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00743592  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00743595  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
00743598  83 7D 80 0B               CMP dword ptr [EBP + -0x80],0xb
0074359C  0F 87 31 07 00 00         JA 0x00743cd3
007435A2  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
switchD_007435a5::switchD:
007435A5  FF 24 8D EA 3E 74 00      JMP dword ptr [ECX*0x4 + 0x743eea]
switchD_007435a5::caseD_0:
007435AC  0F BE 55 C4               MOVSX EDX,byte ptr [EBP + -0x3c]
007435B0  83 FA 31                  CMP EDX,0x31
007435B3  7C 1B                     JL 0x007435d0
007435B5  0F BE 45 C4               MOVSX EAX,byte ptr [EBP + -0x3c]
007435B9  83 F8 39                  CMP EAX,0x39
007435BC  7F 12                     JG 0x007435d0
007435BE  C7 45 B4 03 00 00 00      MOV dword ptr [EBP + -0x4c],0x3
007435C5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007435C8  83 E9 01                  SUB ECX,0x1
007435CB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007435CE  EB 75                     JMP 0x00743645
LAB_007435d0:
007435D0  0F BE 55 C4               MOVSX EDX,byte ptr [EBP + -0x3c]
007435D4  0F BE 05 90 14 7F 00      MOVSX EAX,byte ptr [0x007f1490]
007435DB  3B D0                     CMP EDX,EAX
007435DD  75 09                     JNZ 0x007435e8
007435DF  C7 45 B4 05 00 00 00      MOV dword ptr [EBP + -0x4c],0x5
007435E6  EB 5D                     JMP 0x00743645
LAB_007435e8:
007435E8  8A 4D C4                  MOV CL,byte ptr [EBP + -0x3c]
007435EB  88 8D 7C FF FF FF         MOV byte ptr [EBP + 0xffffff7c],CL
007435F1  80 BD 7C FF FF FF 2B      CMP byte ptr [EBP + 0xffffff7c],0x2b
007435F8  74 1D                     JZ 0x00743617
007435FA  80 BD 7C FF FF FF 2D      CMP byte ptr [EBP + 0xffffff7c],0x2d
00743601  74 23                     JZ 0x00743626
00743603  80 BD 7C FF FF FF 30      CMP byte ptr [EBP + 0xffffff7c],0x30
0074360A  74 02                     JZ 0x0074360e
0074360C  EB 27                     JMP 0x00743635
LAB_0074360e:
0074360E  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
00743615  EB 2E                     JMP 0x00743645
LAB_00743617:
00743617  C7 45 B4 02 00 00 00      MOV dword ptr [EBP + -0x4c],0x2
0074361E  66 C7 45 E4 00 00         MOV word ptr [EBP + -0x1c],0x0
00743624  EB 1F                     JMP 0x00743645
LAB_00743626:
00743626  C7 45 B4 02 00 00 00      MOV dword ptr [EBP + -0x4c],0x2
0074362D  66 C7 45 E4 00 80         MOV word ptr [EBP + -0x1c],0x8000
00743633  EB 10                     JMP 0x00743645
LAB_00743635:
00743635  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
0074363C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074363F  83 EA 01                  SUB EDX,0x1
00743642  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00743645:
00743645  E9 89 06 00 00            JMP 0x00743cd3
switchD_007435a5::caseD_1:
0074364A  C7 45 AC 01 00 00 00      MOV dword ptr [EBP + -0x54],0x1
00743651  0F BE 45 C4               MOVSX EAX,byte ptr [EBP + -0x3c]
00743655  83 F8 31                  CMP EAX,0x31
00743658  7C 1E                     JL 0x00743678
0074365A  0F BE 4D C4               MOVSX ECX,byte ptr [EBP + -0x3c]
0074365E  83 F9 39                  CMP ECX,0x39
00743661  7F 15                     JG 0x00743678
00743663  C7 45 B4 03 00 00 00      MOV dword ptr [EBP + -0x4c],0x3
0074366A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074366D  83 EA 01                  SUB EDX,0x1
00743670  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00743673  E9 83 00 00 00            JMP 0x007436fb
LAB_00743678:
00743678  0F BE 45 C4               MOVSX EAX,byte ptr [EBP + -0x3c]
0074367C  0F BE 0D 90 14 7F 00      MOVSX ECX,byte ptr [0x007f1490]
00743683  3B C1                     CMP EAX,ECX
00743685  75 09                     JNZ 0x00743690
00743687  C7 45 B4 04 00 00 00      MOV dword ptr [EBP + -0x4c],0x4
0074368E  EB 6B                     JMP 0x007436fb
LAB_00743690:
00743690  0F BE 55 C4               MOVSX EDX,byte ptr [EBP + -0x3c]
00743694  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
0074369A  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
007436A0  83 E8 2B                  SUB EAX,0x2b
007436A3  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
007436A9  83 BD 78 FF FF FF 3A      CMP dword ptr [EBP + 0xffffff78],0x3a
007436B0  77 39                     JA 0x007436eb
007436B2  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
007436B8  33 C9                     XOR ECX,ECX
007436BA  8A 8A 2A 3F 74 00         MOV CL,byte ptr [EDX + 0x743f2a]
switchD_007436c0::switchD:
007436C0  FF 24 8D 1A 3F 74 00      JMP dword ptr [ECX*0x4 + 0x743f1a]
switchD_007436c0::caseD_30:
007436C7  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
007436CE  EB 2B                     JMP 0x007436fb
switchD_007436c0::caseD_44:
007436D0  C7 45 B4 06 00 00 00      MOV dword ptr [EBP + -0x4c],0x6
007436D7  EB 22                     JMP 0x007436fb
switchD_007436c0::caseD_2b:
007436D9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007436DC  83 E8 01                  SUB EAX,0x1
007436DF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007436E2  C7 45 B4 0B 00 00 00      MOV dword ptr [EBP + -0x4c],0xb
007436E9  EB 10                     JMP 0x007436fb
switchD_007436c0::caseD_2c:
007436EB  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
007436F2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007436F5  83 E9 01                  SUB ECX,0x1
007436F8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_007436fb:
007436FB  E9 D3 05 00 00            JMP 0x00743cd3
switchD_007435a5::caseD_2:
00743700  0F BE 55 C4               MOVSX EDX,byte ptr [EBP + -0x3c]
00743704  83 FA 31                  CMP EDX,0x31
00743707  7C 1B                     JL 0x00743724
00743709  0F BE 45 C4               MOVSX EAX,byte ptr [EBP + -0x3c]
0074370D  83 F8 39                  CMP EAX,0x39
00743710  7F 12                     JG 0x00743724
00743712  C7 45 B4 03 00 00 00      MOV dword ptr [EBP + -0x4c],0x3
00743719  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074371C  83 E9 01                  SUB ECX,0x1
0074371F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00743722  EB 42                     JMP 0x00743766
LAB_00743724:
00743724  0F BE 55 C4               MOVSX EDX,byte ptr [EBP + -0x3c]
00743728  0F BE 05 90 14 7F 00      MOVSX EAX,byte ptr [0x007f1490]
0074372F  3B D0                     CMP EDX,EAX
00743731  75 09                     JNZ 0x0074373c
00743733  C7 45 B4 05 00 00 00      MOV dword ptr [EBP + -0x4c],0x5
0074373A  EB 2A                     JMP 0x00743766
LAB_0074373c:
0074373C  8A 4D C4                  MOV CL,byte ptr [EBP + -0x3c]
0074373F  88 8D 74 FF FF FF         MOV byte ptr [EBP + 0xffffff74],CL
00743745  80 BD 74 FF FF FF 30      CMP byte ptr [EBP + 0xffffff74],0x30
0074374C  74 02                     JZ 0x00743750
0074374E  EB 09                     JMP 0x00743759
LAB_00743750:
00743750  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
00743757  EB 0D                     JMP 0x00743766
LAB_00743759:
00743759  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
00743760  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00743763  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00743766:
00743766  E9 68 05 00 00            JMP 0x00743cd3
switchD_007435a5::caseD_3:
0074376B  C7 45 AC 01 00 00 00      MOV dword ptr [EBP + -0x54],0x1
00743772  EB 11                     JMP 0x00743785
LAB_00743774:
00743774  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00743777  8A 08                     MOV CL,byte ptr [EAX]
00743779  88 4D C4                  MOV byte ptr [EBP + -0x3c],CL
0074377C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074377F  83 C2 01                  ADD EDX,0x1
00743782  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00743785:
00743785  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
0074378C  7E 1B                     JLE 0x007437a9
0074378E  6A 04                     PUSH 0x4
00743790  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00743793  25 FF 00 00 00            AND EAX,0xff
00743798  50                        PUSH EAX
00743799  E8 72 CE FE FF            CALL 0x00730610
0074379E  83 C4 08                  ADD ESP,0x8
007437A1  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
007437A7  EB 1E                     JMP 0x007437c7
LAB_007437a9:
007437A9  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
007437AC  81 E1 FF 00 00 00         AND ECX,0xff
007437B2  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
007437B8  33 C0                     XOR EAX,EAX
007437BA  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
007437BE  83 E0 04                  AND EAX,0x4
007437C1  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
LAB_007437c7:
007437C7  83 BD 70 FF FF FF 00      CMP dword ptr [EBP + 0xffffff70],0x0
007437CE  74 34                     JZ 0x00743804
007437D0  83 7D 90 19               CMP dword ptr [EBP + -0x70],0x19
007437D4  73 20                     JNC 0x007437f6
007437D6  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
007437D9  83 C1 01                  ADD ECX,0x1
007437DC  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
007437DF  0F BE 55 C4               MOVSX EDX,byte ptr [EBP + -0x3c]
007437E3  83 EA 30                  SUB EDX,0x30
007437E6  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
007437E9  88 10                     MOV byte ptr [EAX],DL
007437EB  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
007437EE  83 C1 01                  ADD ECX,0x1
007437F1  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
007437F4  EB 09                     JMP 0x007437ff
LAB_007437f6:
007437F6  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
007437F9  83 C2 01                  ADD EDX,0x1
007437FC  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
LAB_007437ff:
007437FF  E9 70 FF FF FF            JMP 0x00743774
LAB_00743804:
00743804  0F BE 45 C4               MOVSX EAX,byte ptr [EBP + -0x3c]
00743808  0F BE 0D 90 14 7F 00      MOVSX ECX,byte ptr [0x007f1490]
0074380F  3B C1                     CMP EAX,ECX
00743811  75 09                     JNZ 0x0074381c
00743813  C7 45 B4 04 00 00 00      MOV dword ptr [EBP + -0x4c],0x4
0074381A  EB 62                     JMP 0x0074387e
LAB_0074381c:
0074381C  0F BE 55 C4               MOVSX EDX,byte ptr [EBP + -0x3c]
00743820  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
00743826  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
0074382C  83 E8 2B                  SUB EAX,0x2b
0074382F  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
00743835  83 BD 6C FF FF FF 3A      CMP dword ptr [EBP + 0xffffff6c],0x3a
0074383C  77 30                     JA 0x0074386e
0074383E  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
00743844  33 C9                     XOR ECX,ECX
00743846  8A 8A 71 3F 74 00         MOV CL,byte ptr [EDX + 0x743f71]
switchD_0074384c::switchD:
0074384C  FF 24 8D 65 3F 74 00      JMP dword ptr [ECX*0x4 + 0x743f65]
switchD_0074384c::caseD_44:
00743853  C7 45 B4 06 00 00 00      MOV dword ptr [EBP + -0x4c],0x6
0074385A  EB 22                     JMP 0x0074387e
switchD_0074384c::caseD_2b:
0074385C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074385F  83 E8 01                  SUB EAX,0x1
00743862  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00743865  C7 45 B4 0B 00 00 00      MOV dword ptr [EBP + -0x4c],0xb
0074386C  EB 10                     JMP 0x0074387e
switchD_0074384c::caseD_2c:
0074386E  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
00743875  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00743878  83 E9 01                  SUB ECX,0x1
0074387B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0074387e:
0074387E  E9 50 04 00 00            JMP 0x00743cd3
switchD_007435a5::caseD_4:
00743883  C7 45 AC 01 00 00 00      MOV dword ptr [EBP + -0x54],0x1
0074388A  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
00743891  83 7D 90 00               CMP dword ptr [EBP + -0x70],0x0
00743895  75 27                     JNZ 0x007438be
00743897  EB 11                     JMP 0x007438aa
LAB_00743899:
00743899  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0074389C  8A 02                     MOV AL,byte ptr [EDX]
0074389E  88 45 C4                  MOV byte ptr [EBP + -0x3c],AL
007438A1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007438A4  83 C1 01                  ADD ECX,0x1
007438A7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_007438aa:
007438AA  0F BE 55 C4               MOVSX EDX,byte ptr [EBP + -0x3c]
007438AE  83 FA 30                  CMP EDX,0x30
007438B1  75 0B                     JNZ 0x007438be
007438B3  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
007438B6  83 E8 01                  SUB EAX,0x1
007438B9  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
007438BC  EB DB                     JMP 0x00743899
LAB_007438be:
007438BE  EB 11                     JMP 0x007438d1
LAB_007438c0:
007438C0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007438C3  8A 11                     MOV DL,byte ptr [ECX]
007438C5  88 55 C4                  MOV byte ptr [EBP + -0x3c],DL
007438C8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007438CB  83 C0 01                  ADD EAX,0x1
007438CE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007438d1:
007438D1  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
007438D8  7E 1C                     JLE 0x007438f6
007438DA  6A 04                     PUSH 0x4
007438DC  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
007438DF  81 E1 FF 00 00 00         AND ECX,0xff
007438E5  51                        PUSH ECX
007438E6  E8 25 CD FE FF            CALL 0x00730610
007438EB  83 C4 08                  ADD ESP,0x8
007438EE  89 85 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EAX
007438F4  EB 1D                     JMP 0x00743913
LAB_007438f6:
007438F6  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
007438F9  81 E2 FF 00 00 00         AND EDX,0xff
007438FF  A1 80 12 7F 00            MOV EAX,[0x007f1280]
00743904  33 C9                     XOR ECX,ECX
00743906  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
0074390A  83 E1 04                  AND ECX,0x4
0074390D  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
LAB_00743913:
00743913  83 BD 68 FF FF FF 00      CMP dword ptr [EBP + 0xffffff68],0x0
0074391A  74 32                     JZ 0x0074394e
0074391C  83 7D 90 19               CMP dword ptr [EBP + -0x70],0x19
00743920  73 27                     JNC 0x00743949
00743922  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00743925  83 C2 01                  ADD EDX,0x1
00743928  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
0074392B  0F BE 45 C4               MOVSX EAX,byte ptr [EBP + -0x3c]
0074392F  83 E8 30                  SUB EAX,0x30
00743932  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00743935  88 01                     MOV byte ptr [ECX],AL
00743937  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0074393A  83 C2 01                  ADD EDX,0x1
0074393D  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00743940  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00743943  83 E8 01                  SUB EAX,0x1
00743946  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
LAB_00743949:
00743949  E9 72 FF FF FF            JMP 0x007438c0
LAB_0074394e:
0074394E  0F BE 4D C4               MOVSX ECX,byte ptr [EBP + -0x3c]
00743952  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
00743958  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0074395E  83 EA 2B                  SUB EDX,0x2b
00743961  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
00743967  83 BD 64 FF FF FF 3A      CMP dword ptr [EBP + 0xffffff64],0x3a
0074396E  77 30                     JA 0x007439a0
00743970  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00743976  33 C0                     XOR EAX,EAX
00743978  8A 81 B8 3F 74 00         MOV AL,byte ptr [ECX + 0x743fb8]
switchD_0074397e::switchD:
0074397E  FF 24 85 AC 3F 74 00      JMP dword ptr [EAX*0x4 + 0x743fac]
switchD_0074397e::caseD_44:
00743985  C7 45 B4 06 00 00 00      MOV dword ptr [EBP + -0x4c],0x6
0074398C  EB 22                     JMP 0x007439b0
switchD_0074397e::caseD_2b:
0074398E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00743991  83 EA 01                  SUB EDX,0x1
00743994  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00743997  C7 45 B4 0B 00 00 00      MOV dword ptr [EBP + -0x4c],0xb
0074399E  EB 10                     JMP 0x007439b0
switchD_0074397e::caseD_2c:
007439A0  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
007439A7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007439AA  83 E8 01                  SUB EAX,0x1
007439AD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_007439b0:
007439B0  E9 1E 03 00 00            JMP 0x00743cd3
switchD_007435a5::caseD_5:
007439B5  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
007439BC  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
007439C3  7E 1C                     JLE 0x007439e1
007439C5  6A 04                     PUSH 0x4
007439C7  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
007439CA  81 E1 FF 00 00 00         AND ECX,0xff
007439D0  51                        PUSH ECX
007439D1  E8 3A CC FE FF            CALL 0x00730610
007439D6  83 C4 08                  ADD ESP,0x8
007439D9  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
007439DF  EB 1D                     JMP 0x007439fe
LAB_007439e1:
007439E1  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
007439E4  81 E2 FF 00 00 00         AND EDX,0xff
007439EA  A1 80 12 7F 00            MOV EAX,[0x007f1280]
007439EF  33 C9                     XOR ECX,ECX
007439F1  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
007439F5  83 E1 04                  AND ECX,0x4
007439F8  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
LAB_007439fe:
007439FE  83 BD 60 FF FF FF 00      CMP dword ptr [EBP + 0xffffff60],0x0
00743A05  74 12                     JZ 0x00743a19
00743A07  C7 45 B4 04 00 00 00      MOV dword ptr [EBP + -0x4c],0x4
00743A0E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00743A11  83 EA 01                  SUB EDX,0x1
00743A14  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00743A17  EB 0D                     JMP 0x00743a26
LAB_00743a19:
00743A19  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
00743A20  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00743A23  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00743a26:
00743A26  E9 A8 02 00 00            JMP 0x00743cd3
switchD_007435a5::caseD_6:
00743A2B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00743A2E  83 E9 02                  SUB ECX,0x2
00743A31  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
00743A34  0F BE 55 C4               MOVSX EDX,byte ptr [EBP + -0x3c]
00743A38  83 FA 31                  CMP EDX,0x31
00743A3B  7C 1B                     JL 0x00743a58
00743A3D  0F BE 45 C4               MOVSX EAX,byte ptr [EBP + -0x3c]
00743A41  83 F8 39                  CMP EAX,0x39
00743A44  7F 12                     JG 0x00743a58
00743A46  C7 45 B4 09 00 00 00      MOV dword ptr [EBP + -0x4c],0x9
00743A4D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00743A50  83 E9 01                  SUB ECX,0x1
00743A53  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00743A56  EB 55                     JMP 0x00743aad
LAB_00743a58:
00743A58  8A 55 C4                  MOV DL,byte ptr [EBP + -0x3c]
00743A5B  88 95 5C FF FF FF         MOV byte ptr [EBP + 0xffffff5c],DL
00743A61  80 BD 5C FF FF FF 2B      CMP byte ptr [EBP + 0xffffff5c],0x2b
00743A68  74 2D                     JZ 0x00743a97
00743A6A  80 BD 5C FF FF FF 2D      CMP byte ptr [EBP + 0xffffff5c],0x2d
00743A71  74 14                     JZ 0x00743a87
00743A73  80 BD 5C FF FF FF 30      CMP byte ptr [EBP + 0xffffff5c],0x30
00743A7A  74 02                     JZ 0x00743a7e
00743A7C  EB 22                     JMP 0x00743aa0
LAB_00743a7e:
00743A7E  C7 45 B4 08 00 00 00      MOV dword ptr [EBP + -0x4c],0x8
00743A85  EB 26                     JMP 0x00743aad
LAB_00743a87:
00743A87  C7 45 B4 07 00 00 00      MOV dword ptr [EBP + -0x4c],0x7
00743A8E  C7 45 8C FF FF FF FF      MOV dword ptr [EBP + -0x74],0xffffffff
00743A95  EB 16                     JMP 0x00743aad
LAB_00743a97:
00743A97  C7 45 B4 07 00 00 00      MOV dword ptr [EBP + -0x4c],0x7
00743A9E  EB 0D                     JMP 0x00743aad
LAB_00743aa0:
00743AA0  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
00743AA7  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00743AAA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00743aad:
00743AAD  E9 21 02 00 00            JMP 0x00743cd3
switchD_007435a5::caseD_8:
00743AB2  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
00743AB9  EB 11                     JMP 0x00743acc
LAB_00743abb:
00743ABB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00743ABE  8A 11                     MOV DL,byte ptr [ECX]
00743AC0  88 55 C4                  MOV byte ptr [EBP + -0x3c],DL
00743AC3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00743AC6  83 C0 01                  ADD EAX,0x1
00743AC9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00743acc:
00743ACC  0F BE 4D C4               MOVSX ECX,byte ptr [EBP + -0x3c]
00743AD0  83 F9 30                  CMP ECX,0x30
00743AD3  75 02                     JNZ 0x00743ad7
00743AD5  EB E4                     JMP 0x00743abb
LAB_00743ad7:
00743AD7  0F BE 55 C4               MOVSX EDX,byte ptr [EBP + -0x3c]
00743ADB  83 FA 31                  CMP EDX,0x31
00743ADE  7C 1B                     JL 0x00743afb
00743AE0  0F BE 45 C4               MOVSX EAX,byte ptr [EBP + -0x3c]
00743AE4  83 F8 39                  CMP EAX,0x39
00743AE7  7F 12                     JG 0x00743afb
00743AE9  C7 45 B4 09 00 00 00      MOV dword ptr [EBP + -0x4c],0x9
00743AF0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00743AF3  83 E9 01                  SUB ECX,0x1
00743AF6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00743AF9  EB 10                     JMP 0x00743b0b
LAB_00743afb:
00743AFB  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
00743B02  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00743B05  83 EA 01                  SUB EDX,0x1
00743B08  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00743b0b:
00743B0B  E9 C3 01 00 00            JMP 0x00743cd3
switchD_007435a5::caseD_7:
00743B10  0F BE 45 C4               MOVSX EAX,byte ptr [EBP + -0x3c]
00743B14  83 F8 31                  CMP EAX,0x31
00743B17  7C 1B                     JL 0x00743b34
00743B19  0F BE 4D C4               MOVSX ECX,byte ptr [EBP + -0x3c]
00743B1D  83 F9 39                  CMP ECX,0x39
00743B20  7F 12                     JG 0x00743b34
00743B22  C7 45 B4 09 00 00 00      MOV dword ptr [EBP + -0x4c],0x9
00743B29  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00743B2C  83 EA 01                  SUB EDX,0x1
00743B2F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00743B32  EB 2A                     JMP 0x00743b5e
LAB_00743b34:
00743B34  8A 45 C4                  MOV AL,byte ptr [EBP + -0x3c]
00743B37  88 85 58 FF FF FF         MOV byte ptr [EBP + 0xffffff58],AL
00743B3D  80 BD 58 FF FF FF 30      CMP byte ptr [EBP + 0xffffff58],0x30
00743B44  74 02                     JZ 0x00743b48
00743B46  EB 09                     JMP 0x00743b51
LAB_00743b48:
00743B48  C7 45 B4 08 00 00 00      MOV dword ptr [EBP + -0x4c],0x8
00743B4F  EB 0D                     JMP 0x00743b5e
LAB_00743b51:
00743B51  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
00743B58  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00743B5B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00743b5e:
00743B5E  E9 70 01 00 00            JMP 0x00743cd3
switchD_007435a5::caseD_9:
00743B63  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
00743B6A  C7 45 84 00 00 00 00      MOV dword ptr [EBP + -0x7c],0x0
00743B71  EB 11                     JMP 0x00743b84
LAB_00743b73:
00743B73  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00743B76  8A 02                     MOV AL,byte ptr [EDX]
00743B78  88 45 C4                  MOV byte ptr [EBP + -0x3c],AL
00743B7B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00743B7E  83 C1 01                  ADD ECX,0x1
00743B81  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00743b84:
00743B84  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
00743B8B  7E 1C                     JLE 0x00743ba9
00743B8D  6A 04                     PUSH 0x4
00743B8F  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00743B92  81 E2 FF 00 00 00         AND EDX,0xff
00743B98  52                        PUSH EDX
00743B99  E8 72 CA FE FF            CALL 0x00730610
00743B9E  83 C4 08                  ADD ESP,0x8
00743BA1  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
00743BA7  EB 1D                     JMP 0x00743bc6
LAB_00743ba9:
00743BA9  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00743BAC  25 FF 00 00 00            AND EAX,0xff
00743BB1  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
00743BB7  33 D2                     XOR EDX,EDX
00743BB9  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
00743BBD  83 E2 04                  AND EDX,0x4
00743BC0  89 95 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDX
LAB_00743bc6:
00743BC6  83 BD 54 FF FF FF 00      CMP dword ptr [EBP + 0xffffff54],0x0
00743BCD  74 28                     JZ 0x00743bf7
00743BCF  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00743BD2  6B C0 0A                  IMUL EAX,EAX,0xa
00743BD5  0F BE 4D C4               MOVSX ECX,byte ptr [EBP + -0x3c]
00743BD9  8D 54 08 D0               LEA EDX,[EAX + ECX*0x1 + -0x30]
00743BDD  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
00743BE0  81 7D 84 50 14 00 00      CMP dword ptr [EBP + -0x7c],0x1450
00743BE7  7E 09                     JLE 0x00743bf2
00743BE9  C7 45 84 51 14 00 00      MOV dword ptr [EBP + -0x7c],0x1451
00743BF0  EB 05                     JMP 0x00743bf7
LAB_00743bf2:
00743BF2  E9 7C FF FF FF            JMP 0x00743b73
LAB_00743bf7:
00743BF7  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00743BFA  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00743BFD  EB 11                     JMP 0x00743c10
LAB_00743bff:
00743BFF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00743C02  8A 11                     MOV DL,byte ptr [ECX]
00743C04  88 55 C4                  MOV byte ptr [EBP + -0x3c],DL
00743C07  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00743C0A  83 C0 01                  ADD EAX,0x1
00743C0D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00743c10:
00743C10  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
00743C17  7E 1C                     JLE 0x00743c35
00743C19  6A 04                     PUSH 0x4
00743C1B  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00743C1E  81 E1 FF 00 00 00         AND ECX,0xff
00743C24  51                        PUSH ECX
00743C25  E8 E6 C9 FE FF            CALL 0x00730610
00743C2A  83 C4 08                  ADD ESP,0x8
00743C2D  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
00743C33  EB 1D                     JMP 0x00743c52
LAB_00743c35:
00743C35  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
00743C38  81 E2 FF 00 00 00         AND EDX,0xff
00743C3E  A1 80 12 7F 00            MOV EAX,[0x007f1280]
00743C43  33 C9                     XOR ECX,ECX
00743C45  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
00743C49  83 E1 04                  AND ECX,0x4
00743C4C  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
LAB_00743c52:
00743C52  83 BD 50 FF FF FF 00      CMP dword ptr [EBP + 0xffffff50],0x0
00743C59  74 02                     JZ 0x00743c5d
00743C5B  EB A2                     JMP 0x00743bff
LAB_00743c5d:
00743C5D  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
00743C64  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00743C67  83 EA 01                  SUB EDX,0x1
00743C6A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00743C6D  EB 64                     JMP 0x00743cd3
switchD_007435a5::caseD_b:
00743C6F  83 7D 20 00               CMP dword ptr [EBP + 0x20],0x0
00743C73  74 4E                     JZ 0x00743cc3
00743C75  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00743C78  83 E8 01                  SUB EAX,0x1
00743C7B  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00743C7E  8A 4D C4                  MOV CL,byte ptr [EBP + -0x3c]
00743C81  88 8D 4C FF FF FF         MOV byte ptr [EBP + 0xffffff4c],CL
00743C87  80 BD 4C FF FF FF 2B      CMP byte ptr [EBP + 0xffffff4c],0x2b
00743C8E  74 1B                     JZ 0x00743cab
00743C90  80 BD 4C FF FF FF 2D      CMP byte ptr [EBP + 0xffffff4c],0x2d
00743C97  74 02                     JZ 0x00743c9b
00743C99  EB 19                     JMP 0x00743cb4
LAB_00743c9b:
00743C9B  C7 45 B4 07 00 00 00      MOV dword ptr [EBP + -0x4c],0x7
00743CA2  C7 45 8C FF FF FF FF      MOV dword ptr [EBP + -0x74],0xffffffff
00743CA9  EB 16                     JMP 0x00743cc1
LAB_00743cab:
00743CAB  C7 45 B4 07 00 00 00      MOV dword ptr [EBP + -0x4c],0x7
00743CB2  EB 0D                     JMP 0x00743cc1
LAB_00743cb4:
00743CB4  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
00743CBB  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00743CBE  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_00743cc1:
00743CC1  EB 10                     JMP 0x00743cd3
LAB_00743cc3:
00743CC3  C7 45 B4 0A 00 00 00      MOV dword ptr [EBP + -0x4c],0xa
00743CCA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00743CCD  83 E8 01                  SUB EAX,0x1
00743CD0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
switchD_007435a5::caseD_a:
00743CD3  E9 9F F8 FF FF            JMP 0x00743577
LAB_00743cd8:
00743CD8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00743CDB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00743CDE  89 11                     MOV dword ptr [ECX],EDX
00743CE0  83 7D AC 00               CMP dword ptr [EBP + -0x54],0x0
00743CE4  0F 84 3D 01 00 00         JZ 0x00743e27
00743CEA  83 7D C0 00               CMP dword ptr [EBP + -0x40],0x0
00743CEE  0F 85 33 01 00 00         JNZ 0x00743e27
00743CF4  83 7D 88 00               CMP dword ptr [EBP + -0x78],0x0
00743CF8  0F 85 29 01 00 00         JNZ 0x00743e27
00743CFE  83 7D 90 18               CMP dword ptr [EBP + -0x70],0x18
00743D02  76 2B                     JBE 0x00743d2f
00743D04  0F BE 45 DF               MOVSX EAX,byte ptr [EBP + -0x21]
00743D08  83 F8 05                  CMP EAX,0x5
00743D0B  7C 09                     JL 0x00743d16
00743D0D  8A 4D DF                  MOV CL,byte ptr [EBP + -0x21]
00743D10  80 C1 01                  ADD CL,0x1
00743D13  88 4D DF                  MOV byte ptr [EBP + -0x21],CL
LAB_00743d16:
00743D16  C7 45 90 18 00 00 00      MOV dword ptr [EBP + -0x70],0x18
00743D1D  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00743D20  83 EA 01                  SUB EDX,0x1
00743D23  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00743D26  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00743D29  83 C0 01                  ADD EAX,0x1
00743D2C  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
LAB_00743d2f:
00743D2F  83 7D 90 00               CMP dword ptr [EBP + -0x70],0x0
00743D33  0F 86 D1 00 00 00         JBE 0x00743e0a
00743D39  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00743D3C  83 E9 01                  SUB ECX,0x1
00743D3F  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
00743D42  EB 09                     JMP 0x00743d4d
LAB_00743d44:
00743D44  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00743D47  83 EA 01                  SUB EDX,0x1
00743D4A  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
LAB_00743d4d:
00743D4D  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00743D50  0F BE 08                  MOVSX ECX,byte ptr [EAX]
00743D53  85 C9                     TEST ECX,ECX
00743D55  75 14                     JNZ 0x00743d6b
00743D57  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00743D5A  83 EA 01                  SUB EDX,0x1
00743D5D  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
00743D60  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
00743D63  83 C0 01                  ADD EAX,0x1
00743D66  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00743D69  EB D9                     JMP 0x00743d44
LAB_00743d6b:
00743D6B  8D 4D A0                  LEA ECX,[EBP + -0x60]
00743D6E  51                        PUSH ECX
00743D6F  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
00743D72  52                        PUSH EDX
00743D73  8D 45 C8                  LEA EAX,[EBP + -0x38]
00743D76  50                        PUSH EAX
00743D77  E8 14 0D 00 00            CALL 0x00744a90
00743D7C  83 C4 0C                  ADD ESP,0xc
00743D7F  83 7D 8C 00               CMP dword ptr [EBP + -0x74],0x0
00743D83  7D 08                     JGE 0x00743d8d
00743D85  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00743D88  F7 D9                     NEG ECX
00743D8A  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_00743d8d:
00743D8D  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00743D90  03 55 94                  ADD EDX,dword ptr [EBP + -0x6c]
00743D93  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00743D96  83 7D E8 00               CMP dword ptr [EBP + -0x18],0x0
00743D9A  75 09                     JNZ 0x00743da5
00743D9C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00743D9F  03 45 18                  ADD EAX,dword ptr [EBP + 0x18]
00743DA2  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_00743da5:
00743DA5  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
00743DA9  75 09                     JNZ 0x00743db4
00743DAB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00743DAE  2B 4D 1C                  SUB ECX,dword ptr [EBP + 0x1c]
00743DB1  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_00743db4:
00743DB4  81 7D EC 50 14 00 00      CMP dword ptr [EBP + -0x14],0x1450
00743DBB  7E 09                     JLE 0x00743dc6
00743DBD  C7 45 C0 01 00 00 00      MOV dword ptr [EBP + -0x40],0x1
00743DC4  EB 42                     JMP 0x00743e08
LAB_00743dc6:
00743DC6  81 7D EC B0 EB FF FF      CMP dword ptr [EBP + -0x14],0xffffebb0
00743DCD  7D 09                     JGE 0x00743dd8
00743DCF  C7 45 88 01 00 00 00      MOV dword ptr [EBP + -0x78],0x1
00743DD6  EB 30                     JMP 0x00743e08
LAB_00743dd8:
00743DD8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00743DDB  52                        PUSH EDX
00743DDC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00743DDF  50                        PUSH EAX
00743DE0  8D 4D A0                  LEA ECX,[EBP + -0x60]
00743DE3  51                        PUSH ECX
00743DE4  E8 97 20 00 00            CALL 0x00745e80
00743DE9  83 C4 0C                  ADD ESP,0xc
00743DEC  66 8B 55 A0               MOV DX,word ptr [EBP + -0x60]
00743DF0  66 89 55 B8               MOV word ptr [EBP + -0x48],DX
00743DF4  8B 45 A2                  MOV EAX,dword ptr [EBP + -0x5e]
00743DF7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00743DFA  8B 4D A6                  MOV ECX,dword ptr [EBP + -0x5a]
00743DFD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00743E00  66 8B 55 AA               MOV DX,word ptr [EBP + -0x56]
00743E04  66 89 55 B0               MOV word ptr [EBP + -0x50],DX
LAB_00743e08:
00743E08  EB 1D                     JMP 0x00743e27
LAB_00743e0a:
00743E0A  66 C7 45 B8 00 00         MOV word ptr [EBP + -0x48],0x0
00743E10  66 C7 45 B0 00 00         MOV word ptr [EBP + -0x50],0x0
00743E16  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00743E19  25 FF FF 00 00            AND EAX,0xffff
00743E1E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00743E21  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00743E24  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00743e27:
00743E27  83 7D AC 00               CMP dword ptr [EBP + -0x54],0x0
00743E2B  75 29                     JNZ 0x00743e56
00743E2D  66 C7 45 B8 00 00         MOV word ptr [EBP + -0x48],0x0
00743E33  66 C7 45 B0 00 00         MOV word ptr [EBP + -0x50],0x0
00743E39  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00743E3C  81 E2 FF FF 00 00         AND EDX,0xffff
00743E42  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00743E45  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00743E48  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00743E4B  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00743E4E  83 C9 04                  OR ECX,0x4
00743E51  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00743E54  EB 57                     JMP 0x00743ead
LAB_00743e56:
00743E56  83 7D C0 00               CMP dword ptr [EBP + -0x40],0x0
00743E5A  74 25                     JZ 0x00743e81
00743E5C  66 C7 45 B0 FF 7F         MOV word ptr [EBP + -0x50],0x7fff
00743E62  C7 45 F0 00 00 00 80      MOV dword ptr [EBP + -0x10],0x80000000
00743E69  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00743E70  66 C7 45 B8 00 00         MOV word ptr [EBP + -0x48],0x0
00743E76  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00743E79  83 CA 02                  OR EDX,0x2
00743E7C  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
00743E7F  EB 2C                     JMP 0x00743ead
LAB_00743e81:
00743E81  83 7D 88 00               CMP dword ptr [EBP + -0x78],0x0
00743E85  74 26                     JZ 0x00743ead
00743E87  66 C7 45 B8 00 00         MOV word ptr [EBP + -0x48],0x0
00743E8D  66 C7 45 B0 00 00         MOV word ptr [EBP + -0x50],0x0
00743E93  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00743E96  25 FF FF 00 00            AND EAX,0xffff
00743E9B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00743E9E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00743EA1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00743EA4  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00743EA7  83 CA 01                  OR EDX,0x1
00743EAA  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
LAB_00743ead:
00743EAD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00743EB0  66 8B 4D B8               MOV CX,word ptr [EBP + -0x48]
00743EB4  66 89 08                  MOV word ptr [EAX],CX
00743EB7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00743EBA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00743EBD  89 42 02                  MOV dword ptr [EDX + 0x2],EAX
00743EC0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00743EC3  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00743EC6  89 51 06                  MOV dword ptr [ECX + 0x6],EDX
00743EC9  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00743ECC  25 FF FF 00 00            AND EAX,0xffff
00743ED1  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00743ED4  81 E1 FF FF 00 00         AND ECX,0xffff
00743EDA  0B C1                     OR EAX,ECX
00743EDC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00743EDF  66 89 42 0A               MOV word ptr [EDX + 0xa],AX
00743EE3  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00743EE6  8B E5                     MOV ESP,EBP
00743EE8  5D                        POP EBP
00743EE9  C3                        RET
