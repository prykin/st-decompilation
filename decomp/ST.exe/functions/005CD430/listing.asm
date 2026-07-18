FUN_005cd430:
005CD430  55                        PUSH EBP
005CD431  8B EC                     MOV EBP,ESP
005CD433  81 EC B4 00 00 00         SUB ESP,0xb4
005CD439  A0 C6 87 80 00            MOV AL,[0x008087c6]
005CD43E  53                        PUSH EBX
005CD43F  56                        PUSH ESI
005CD440  88 81 1C 21 00 00         MOV byte ptr [ECX + 0x211c],AL
005CD446  57                        PUSH EDI
005CD447  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005CD44A  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005CD450  8D 85 50 FF FF FF         LEA EAX,[EBP + 0xffffff50]
005CD456  8D 95 4C FF FF FF         LEA EDX,[EBP + 0xffffff4c]
005CD45C  6A 00                     PUSH 0x0
005CD45E  50                        PUSH EAX
005CD45F  89 8D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ECX
005CD465  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CD46B  E8 80 03 16 00            CALL 0x0072d7f0
005CD470  8B F0                     MOV ESI,EAX
005CD472  83 C4 08                  ADD ESP,0x8
005CD475  85 F6                     TEST ESI,ESI
005CD477  0F 85 95 03 00 00         JNZ 0x005cd812
005CD47D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005CD480  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005CD486  3C 05                     CMP AL,0x5
005CD488  74 17                     JZ 0x005cd4a1
005CD48A  3C 0F                     CMP AL,0xf
005CD48C  74 13                     JZ 0x005cd4a1
005CD48E  3C 0C                     CMP AL,0xc
005CD490  74 0F                     JZ 0x005cd4a1
005CD492  3C 10                     CMP AL,0x10
005CD494  74 0B                     JZ 0x005cd4a1
005CD496  8B 8B 43 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f43]
005CD49C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005CD49F  EB 09                     JMP 0x005cd4aa
LAB_005cd4a1:
005CD4A1  8B 93 3F 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f3f]
005CD4A7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_005cd4aa:
005CD4AA  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005CD4B0  85 C9                     TEST ECX,ECX
005CD4B2  74 47                     JZ 0x005cd4fb
005CD4B4  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005CD4B7  33 F6                     XOR ESI,ESI
005CD4B9  85 C0                     TEST EAX,EAX
005CD4BB  7E 32                     JLE 0x005cd4ef
005CD4BD  3B F0                     CMP ESI,EAX
LAB_005cd4bf:
005CD4BF  73 0D                     JNC 0x005cd4ce
005CD4C1  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005CD4C4  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005CD4C7  0F AF C6                  IMUL EAX,ESI
005CD4CA  03 C2                     ADD EAX,EDX
005CD4CC  EB 02                     JMP 0x005cd4d0
LAB_005cd4ce:
005CD4CE  33 C0                     XOR EAX,EAX
LAB_005cd4d0:
005CD4D0  85 C0                     TEST EAX,EAX
005CD4D2  74 0D                     JZ 0x005cd4e1
005CD4D4  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
005CD4D7  85 C0                     TEST EAX,EAX
005CD4D9  74 06                     JZ 0x005cd4e1
005CD4DB  50                        PUSH EAX
005CD4DC  E8 2F 0C 0E 00            CALL 0x006ae110
LAB_005cd4e1:
005CD4E1  8B 8B 84 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f84]
005CD4E7  46                        INC ESI
005CD4E8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005CD4EB  3B F0                     CMP ESI,EAX
005CD4ED  7C D0                     JL 0x005cd4bf
LAB_005cd4ef:
005CD4EF  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CD4F5  50                        PUSH EAX
005CD4F6  E8 15 0C 0E 00            CALL 0x006ae110
LAB_005cd4fb:
005CD4FB  6A 08                     PUSH 0x8
005CD4FD  6A 60                     PUSH 0x60
005CD4FF  6A 08                     PUSH 0x8
005CD501  6A 00                     PUSH 0x0
005CD503  E8 88 0D 0E 00            CALL 0x006ae290
005CD508  89 83 84 1F 00 00         MOV dword ptr [EBX + 0x1f84],EAX
005CD50E  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005CD514  3C 0C                     CMP AL,0xc
005CD516  74 12                     JZ 0x005cd52a
005CD518  3C 10                     CMP AL,0x10
005CD51A  74 0E                     JZ 0x005cd52a
005CD51C  C6 05 4D 87 80 00 FF      MOV byte ptr [0x0080874d],0xff
005CD523  C6 05 4E 87 80 00 00      MOV byte ptr [0x0080874e],0x0
LAB_005cd52a:
005CD52A  A0 7E 87 80 00            MOV AL,[0x0080877e]
005CD52F  84 C0                     TEST AL,AL
005CD531  0F 84 BB 02 00 00         JZ 0x005cd7f2
005CD537  BE E8 87 80 00            MOV ESI,0x8087e8
005CD53C  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005cd53f:
005CD53F  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
005CD542  80 FA FF                  CMP DL,0xff
005CD545  0F 84 7C 01 00 00         JZ 0x005cd6c7
005CD54B  B9 18 00 00 00            MOV ECX,0x18
005CD550  33 C0                     XOR EAX,EAX
005CD552  8D 7D 90                  LEA EDI,[EBP + -0x70]
005CD555  F3 AB                     STOSD.REP ES:EDI
005CD557  8B 0D D1 7D 80 00         MOV ECX,dword ptr [0x00807dd1]
005CD55D  C6 45 90 01               MOV byte ptr [EBP + -0x70],0x1
005CD561  81 E1 00 00 FF FF         AND ECX,0xffff0000
005CD567  C6 45 91 01               MOV byte ptr [EBP + -0x6f],0x1
005CD56B  81 F9 00 00 DD D0         CMP ECX,0xd0dd0000
005CD571  88 55 92                  MOV byte ptr [EBP + -0x6e],DL
005CD574  75 0B                     JNZ 0x005cd581
005CD576  80 3E 03                  CMP byte ptr [ESI],0x3
005CD579  75 06                     JNZ 0x005cd581
005CD57B  C6 45 93 01               MOV byte ptr [EBP + -0x6d],0x1
005CD57F  EB 05                     JMP 0x005cd586
LAB_005cd581:
005CD581  8A 16                     MOV DL,byte ptr [ESI]
005CD583  88 55 93                  MOV byte ptr [EBP + -0x6d],DL
LAB_005cd586:
005CD586  33 C0                     XOR EAX,EAX
005CD588  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005CD58E  83 C0 FB                  ADD EAX,-0x5
005CD591  83 F8 0B                  CMP EAX,0xb
005CD594  77 3D                     JA 0x005cd5d3
005CD596  33 C9                     XOR ECX,ECX
005CD598  8A 88 68 D8 5C 00         MOV CL,byte ptr [EAX + 0x5cd868]
switchD_005cd59e::switchD:
005CD59E  FF 24 8D 5C D8 5C 00      JMP dword ptr [ECX*0x4 + 0x5cd85c]
switchD_005cd59e::caseD_5:
005CD5A5  8B 55 92                  MOV EDX,dword ptr [EBP + -0x6e]
005CD5A8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005CD5AB  81 E2 FF 00 00 00         AND EDX,0xff
005CD5B1  6A FF                     PUSH -0x1
005CD5B3  52                        PUSH EDX
005CD5B4  50                        PUSH EAX
005CD5B5  E8 B0 70 E3 FF            CALL 0x0040466a
005CD5BA  EB 30                     JMP 0x005cd5ec
switchD_005cd59e::caseD_c:
005CD5BC  8B 4D 92                  MOV ECX,dword ptr [EBP + -0x6e]
005CD5BF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005CD5C2  81 E1 FF 00 00 00         AND ECX,0xff
005CD5C8  6A FF                     PUSH -0x1
005CD5CA  51                        PUSH ECX
005CD5CB  52                        PUSH EDX
005CD5CC  E8 EA 47 E3 FF            CALL 0x00401dbb
005CD5D1  EB 19                     JMP 0x005cd5ec
switchD_005cd59e::caseD_6:
005CD5D3  8B 4D 93                  MOV ECX,dword ptr [EBP + -0x6d]
005CD5D6  A1 5C 99 80 00            MOV EAX,[0x0080995c]
005CD5DB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005CD5DE  81 E1 FF 00 00 00         AND ECX,0xff
005CD5E4  50                        PUSH EAX
005CD5E5  51                        PUSH ECX
005CD5E6  52                        PUSH EDX
005CD5E7  E8 58 69 E3 FF            CALL 0x00403f44
LAB_005cd5ec:
005CD5EC  33 C9                     XOR ECX,ECX
005CD5EE  83 C4 0C                  ADD ESP,0xc
005CD5F1  8A 4E DF                  MOV CL,byte ptr [ESI + -0x21]
005CD5F4  8B F8                     MOV EDI,EAX
005CD5F6  49                        DEC ECX
005CD5F7  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
005CD5FA  74 09                     JZ 0x005cd605
005CD5FC  C6 45 94 01               MOV byte ptr [EBP + -0x6c],0x1
005CD600  E9 87 00 00 00            JMP 0x005cd68c
LAB_005cd605:
005CD605  8A 8B 26 1E 00 00         MOV CL,byte ptr [EBX + 0x1e26]
005CD60B  80 F9 05                  CMP CL,0x5
005CD60E  74 10                     JZ 0x005cd620
005CD610  80 F9 0C                  CMP CL,0xc
005CD613  74 0B                     JZ 0x005cd620
005CD615  80 F9 10                  CMP CL,0x10
005CD618  74 06                     JZ 0x005cd620
005CD61A  C6 45 94 01               MOV byte ptr [EBP + -0x6c],0x1
005CD61E  EB 6C                     JMP 0x005cd68c
LAB_005cd620:
005CD620  C6 45 94 04               MOV byte ptr [EBP + -0x6c],0x4
005CD624  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005CD627  33 C0                     XOR EAX,EAX
005CD629  85 C9                     TEST ECX,ECX
005CD62B  7E 5F                     JLE 0x005cd68c
005CD62D  83 C6 E0                  ADD ESI,-0x20
005CD630  3B C1                     CMP EAX,ECX
005CD632  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_005cd635:
005CD635  73 0D                     JNC 0x005cd644
005CD637  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
005CD63A  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
005CD63D  0F AF C8                  IMUL ECX,EAX
005CD640  03 CA                     ADD ECX,EDX
005CD642  EB 02                     JMP 0x005cd646
LAB_005cd644:
005CD644  33 C9                     XOR ECX,ECX
LAB_005cd646:
005CD646  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005CD649  83 C1 4C                  ADD ECX,0x4c
LAB_005cd64c:
005CD64C  8A 19                     MOV BL,byte ptr [ECX]
005CD64E  8A D3                     MOV DL,BL
005CD650  3A 1E                     CMP BL,byte ptr [ESI]
005CD652  75 1C                     JNZ 0x005cd670
005CD654  84 D2                     TEST DL,DL
005CD656  74 14                     JZ 0x005cd66c
005CD658  8A 59 01                  MOV BL,byte ptr [ECX + 0x1]
005CD65B  8A D3                     MOV DL,BL
005CD65D  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
005CD660  75 0E                     JNZ 0x005cd670
005CD662  83 C1 02                  ADD ECX,0x2
005CD665  83 C6 02                  ADD ESI,0x2
005CD668  84 D2                     TEST DL,DL
005CD66A  75 E0                     JNZ 0x005cd64c
LAB_005cd66c:
005CD66C  33 C9                     XOR ECX,ECX
005CD66E  EB 05                     JMP 0x005cd675
LAB_005cd670:
005CD670  1B C9                     SBB ECX,ECX
005CD672  83 D9 FF                  SBB ECX,-0x1
LAB_005cd675:
005CD675  85 C9                     TEST ECX,ECX
005CD677  74 0A                     JZ 0x005cd683
005CD679  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
005CD67C  40                        INC EAX
005CD67D  3B C1                     CMP EAX,ECX
005CD67F  7C B4                     JL 0x005cd635
005CD681  EB 03                     JMP 0x005cd686
LAB_005cd683:
005CD683  88 45 95                  MOV byte ptr [EBP + -0x6b],AL
LAB_005cd686:
005CD686  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005CD689  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_005cd68c:
005CD68C  A1 7F 87 80 00            MOV EAX,[0x0080877f]
005CD691  8B 56 03                  MOV EDX,dword ptr [ESI + 0x3]
005CD694  8A 4E 02                  MOV CL,byte ptr [ESI + 0x2]
005CD697  89 45 96                  MOV dword ptr [EBP + -0x6a],EAX
005CD69A  8B 46 07                  MOV EAX,dword ptr [ESI + 0x7]
005CD69D  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
005CD6A0  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
005CD6A3  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005CD6A9  8D 55 90                  LEA EDX,[EBP + -0x70]
005CD6AC  88 4D DA                  MOV byte ptr [EBP + -0x26],CL
005CD6AF  8B 4E 0B                  MOV ECX,dword ptr [ESI + 0xb]
005CD6B2  52                        PUSH EDX
005CD6B3  50                        PUSH EAX
005CD6B4  C7 45 DB 00 00 00 00      MOV dword ptr [EBP + -0x25],0x0
005CD6BB  C6 45 DF 01               MOV byte ptr [EBP + -0x21],0x1
005CD6BF  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005CD6C2  E8 F9 0A 0E 00            CALL 0x006ae1c0
LAB_005cd6c7:
005CD6C7  83 C6 51                  ADD ESI,0x51
005CD6CA  81 FE 70 8A 80 00         CMP ESI,0x808a70
005CD6D0  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005CD6D3  0F 8C 66 FE FF FF         JL 0x005cd53f
005CD6D9  80 BB 26 1E 00 00 0C      CMP byte ptr [EBX + 0x1e26],0xc
005CD6E0  0F 85 89 00 00 00         JNZ 0x005cd76f
005CD6E6  8B B3 84 1F 00 00         MOV ESI,dword ptr [EBX + 0x1f84]
005CD6EC  33 C9                     XOR ECX,ECX
005CD6EE  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
005CD6F1  85 FF                     TEST EDI,EDI
005CD6F3  0F 8E F9 00 00 00         JLE 0x005cd7f2
005CD6F9  3B CF                     CMP ECX,EDI
LAB_005cd6fb:
005CD6FB  73 0D                     JNC 0x005cd70a
005CD6FD  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005CD700  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
005CD703  0F AF C1                  IMUL EAX,ECX
005CD706  03 C2                     ADD EAX,EDX
005CD708  EB 02                     JMP 0x005cd70c
LAB_005cd70a:
005CD70A  33 C0                     XOR EAX,EAX
LAB_005cd70c:
005CD70C  85 C0                     TEST EAX,EAX
005CD70E  74 1C                     JZ 0x005cd72c
005CD710  80 78 04 01               CMP byte ptr [EAX + 0x4],0x1
005CD714  75 16                     JNZ 0x005cd72c
005CD716  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005CD71C  3A 50 02                  CMP DL,byte ptr [EAX + 0x2]
005CD71F  75 0B                     JNZ 0x005cd72c
005CD721  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
005CD727  3A 50 03                  CMP DL,byte ptr [EAX + 0x3]
005CD72A  74 0A                     JZ 0x005cd736
LAB_005cd72c:
005CD72C  41                        INC ECX
005CD72D  3B CF                     CMP ECX,EDI
005CD72F  7C CA                     JL 0x005cd6fb
005CD731  E9 BC 00 00 00            JMP 0x005cd7f2
LAB_005cd736:
005CD736  A0 A0 67 80 00            MOV AL,[0x008067a0]
005CD73B  84 C0                     TEST AL,AL
005CD73D  B8 1D 7E 80 00            MOV EAX,0x807e1d
005CD742  75 05                     JNZ 0x005cd749
005CD744  B8 DD 7D 80 00            MOV EAX,0x807ddd
LAB_005cd749:
005CD749  8A 15 4F 87 80 00         MOV DL,byte ptr [0x0080874f]
005CD74F  50                        PUSH EAX
005CD750  33 C0                     XOR EAX,EAX
005CD752  84 D2                     TEST DL,DL
005CD754  0F 95 C0                  SETNZ AL
005CD757  83 C0 02                  ADD EAX,0x2
005CD75A  50                        PUSH EAX
005CD75B  51                        PUSH ECX
005CD75C  8B 0D 7F 87 80 00         MOV ECX,dword ptr [0x0080877f]
005CD762  51                        PUSH ECX
005CD763  8B CB                     MOV ECX,EBX
005CD765  E8 3D 3C E3 FF            CALL 0x004013a7
005CD76A  E9 83 00 00 00            JMP 0x005cd7f2
LAB_005cd76f:
005CD76F  8B 93 84 1F 00 00         MOV EDX,dword ptr [EBX + 0x1f84]
005CD775  33 C9                     XOR ECX,ECX
005CD777  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005CD77A  85 F6                     TEST ESI,ESI
005CD77C  7E 74                     JLE 0x005cd7f2
005CD77E  3B CE                     CMP ECX,ESI
LAB_005cd780:
005CD780  73 0D                     JNC 0x005cd78f
005CD782  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005CD785  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
005CD788  0F AF C1                  IMUL EAX,ECX
005CD78B  03 C7                     ADD EAX,EDI
005CD78D  EB 02                     JMP 0x005cd791
LAB_005cd78f:
005CD78F  33 C0                     XOR EAX,EAX
LAB_005cd791:
005CD791  85 C0                     TEST EAX,EAX
005CD793  74 0C                     JZ 0x005cd7a1
005CD795  80 78 04 01               CMP byte ptr [EAX + 0x4],0x1
005CD799  75 06                     JNZ 0x005cd7a1
005CD79B  80 78 02 FF               CMP byte ptr [EAX + 0x2],0xff
005CD79F  75 07                     JNZ 0x005cd7a8
LAB_005cd7a1:
005CD7A1  41                        INC ECX
005CD7A2  3B CE                     CMP ECX,ESI
005CD7A4  7C DA                     JL 0x005cd780
005CD7A6  EB 4A                     JMP 0x005cd7f2
LAB_005cd7a8:
005CD7A8  8A 50 02                  MOV DL,byte ptr [EAX + 0x2]
005CD7AB  C6 40 04 02               MOV byte ptr [EAX + 0x4],0x2
005CD7AF  88 15 4D 87 80 00         MOV byte ptr [0x0080874d],DL
005CD7B5  8A 48 03                  MOV CL,byte ptr [EAX + 0x3]
005CD7B8  88 0D 4E 87 80 00         MOV byte ptr [0x0080874e],CL
005CD7BE  8A 0D A0 67 80 00         MOV CL,byte ptr [0x008067a0]
005CD7C4  84 C9                     TEST CL,CL
005CD7C6  BF 1D 7E 80 00            MOV EDI,0x807e1d
005CD7CB  75 05                     JNZ 0x005cd7d2
005CD7CD  BF DD 7D 80 00            MOV EDI,0x807ddd
LAB_005cd7d2:
005CD7D2  8D 50 0A                  LEA EDX,[EAX + 0xa]
005CD7D5  83 C9 FF                  OR ECX,0xffffffff
005CD7D8  33 C0                     XOR EAX,EAX
005CD7DA  F2 AE                     SCASB.REPNE ES:EDI
005CD7DC  F7 D1                     NOT ECX
005CD7DE  2B F9                     SUB EDI,ECX
005CD7E0  8B C1                     MOV EAX,ECX
005CD7E2  8B F7                     MOV ESI,EDI
005CD7E4  8B FA                     MOV EDI,EDX
005CD7E6  C1 E9 02                  SHR ECX,0x2
005CD7E9  F3 A5                     MOVSD.REP ES:EDI,ESI
005CD7EB  8B C8                     MOV ECX,EAX
005CD7ED  83 E1 03                  AND ECX,0x3
005CD7F0  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005cd7f2:
005CD7F2  8B CB                     MOV ECX,EBX
005CD7F4  E8 A1 52 E3 FF            CALL 0x00402a9a
005CD7F9  8B 13                     MOV EDX,dword ptr [EBX]
005CD7FB  8B CB                     MOV ECX,EBX
005CD7FD  FF 52 20                  CALL dword ptr [EDX + 0x20]
005CD800  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
005CD806  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005CD80B  5F                        POP EDI
005CD80C  5E                        POP ESI
005CD80D  5B                        POP EBX
005CD80E  8B E5                     MOV ESP,EBP
005CD810  5D                        POP EBP
005CD811  C3                        RET
LAB_005cd812:
005CD812  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
005CD818  68 10 D3 7C 00            PUSH 0x7cd310
005CD81D  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CD822  56                        PUSH ESI
005CD823  6A 00                     PUSH 0x0
005CD825  68 CB 01 00 00            PUSH 0x1cb
005CD82A  68 58 D2 7C 00            PUSH 0x7cd258
005CD82F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CD835  E8 96 FC 0D 00            CALL 0x006ad4d0
005CD83A  83 C4 18                  ADD ESP,0x18
005CD83D  85 C0                     TEST EAX,EAX
005CD83F  74 01                     JZ 0x005cd842
005CD841  CC                        INT3
LAB_005cd842:
005CD842  68 CB 01 00 00            PUSH 0x1cb
005CD847  68 58 D2 7C 00            PUSH 0x7cd258
005CD84C  6A 00                     PUSH 0x0
005CD84E  56                        PUSH ESI
005CD84F  E8 EC 85 0D 00            CALL 0x006a5e40
005CD854  5F                        POP EDI
005CD855  5E                        POP ESI
005CD856  5B                        POP EBX
005CD857  8B E5                     MOV ESP,EBP
005CD859  5D                        POP EBP
005CD85A  C3                        RET
