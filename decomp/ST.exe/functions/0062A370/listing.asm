FUN_0062a370:
0062A370  55                        PUSH EBP
0062A371  8B EC                     MOV EBP,ESP
0062A373  83 EC 28                  SUB ESP,0x28
0062A376  53                        PUSH EBX
0062A377  56                        PUSH ESI
0062A378  8B F1                     MOV ESI,ECX
0062A37A  57                        PUSH EDI
0062A37B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062A37E  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
0062A385  8B BE AE 00 00 00         MOV EDI,dword ptr [ESI + 0xae]
0062A38B  8B 86 9A 00 00 00         MOV EAX,dword ptr [ESI + 0x9a]
0062A391  2B CF                     SUB ECX,EDI
0062A393  8B BE 8E 00 00 00         MOV EDI,dword ptr [ESI + 0x8e]
0062A399  0F AF F8                  IMUL EDI,EAX
0062A39C  8B 86 A6 00 00 00         MOV EAX,dword ptr [ESI + 0xa6]
0062A3A2  0F AF F9                  IMUL EDI,ECX
0062A3A5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062A3A8  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0062A3AF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062A3B2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062A3B5  8D 1C 80                  LEA EBX,[EAX + EAX*0x4]
0062A3B8  8B C7                     MOV EAX,EDI
0062A3BA  0F AF C1                  IMUL EAX,ECX
0062A3BD  99                        CDQ
0062A3BE  C1 E3 05                  SHL EBX,0x5
0062A3C1  F7 FB                     IDIV EBX
0062A3C3  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0062A3C6  8B D8                     MOV EBX,EAX
0062A3C8  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0062A3CD  F7 EF                     IMUL EDI
0062A3CF  C1 FA 0C                  SAR EDX,0xc
0062A3D2  8B C2                     MOV EAX,EDX
0062A3D4  8B BE 8A 00 00 00         MOV EDI,dword ptr [ESI + 0x8a]
0062A3DA  C1 E8 1F                  SHR EAX,0x1f
0062A3DD  0F AF BE 9A 00 00 00      IMUL EDI,dword ptr [ESI + 0x9a]
0062A3E4  03 D0                     ADD EDX,EAX
0062A3E6  8B C1                     MOV EAX,ECX
0062A3E8  0F AF C1                  IMUL EAX,ECX
0062A3EB  0F AF F9                  IMUL EDI,ECX
0062A3EE  2B D3                     SUB EDX,EBX
0062A3F0  8B 9E A2 00 00 00         MOV EBX,dword ptr [ESI + 0xa2]
0062A3F6  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0062A3F9  99                        CDQ
0062A3FA  D1 E3                     SHL EBX,0x1
0062A3FC  F7 FB                     IDIV EBX
0062A3FE  8B D8                     MOV EBX,EAX
0062A400  8B C7                     MOV EAX,EDI
0062A402  0F AF C1                  IMUL EAX,ECX
0062A405  99                        CDQ
0062A406  F7 7D 08                  IDIV dword ptr [EBP + 0x8]
0062A409  8B C8                     MOV ECX,EAX
0062A40B  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0062A410  F7 EF                     IMUL EDI
0062A412  C1 FA 0C                  SAR EDX,0xc
0062A415  2B CB                     SUB ECX,EBX
0062A417  8B FA                     MOV EDI,EDX
0062A419  C1 EF 1F                  SHR EDI,0x1f
0062A41C  03 D1                     ADD EDX,ECX
0062A41E  8B 8E 82 00 00 00         MOV ECX,dword ptr [ESI + 0x82]
0062A424  03 FA                     ADD EDI,EDX
0062A426  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0062A42B  03 F9                     ADD EDI,ECX
0062A42D  8B 8E 92 00 00 00         MOV ECX,dword ptr [ESI + 0x92]
0062A433  0F AF 4D F8               IMUL ECX,dword ptr [EBP + -0x8]
0062A437  F7 E9                     IMUL ECX
0062A439  8B 8E 96 00 00 00         MOV ECX,dword ptr [ESI + 0x96]
0062A43F  8B 5E 7E                  MOV EBX,dword ptr [ESI + 0x7e]
0062A442  0F AF 4D F8               IMUL ECX,dword ptr [EBP + -0x8]
0062A446  C1 FA 0C                  SAR EDX,0xc
0062A449  8B C2                     MOV EAX,EDX
0062A44B  C1 E8 1F                  SHR EAX,0x1f
0062A44E  03 D0                     ADD EDX,EAX
0062A450  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0062A455  03 D3                     ADD EDX,EBX
0062A457  8B DA                     MOV EBX,EDX
0062A459  F7 E9                     IMUL ECX
0062A45B  C1 FA 0C                  SAR EDX,0xc
0062A45E  8B CA                     MOV ECX,EDX
0062A460  C1 E9 1F                  SHR ECX,0x1f
0062A463  03 D1                     ADD EDX,ECX
0062A465  8B 4E 7A                  MOV ECX,dword ptr [ESI + 0x7a]
0062A468  03 D1                     ADD EDX,ECX
0062A46A  8B CA                     MOV ECX,EDX
0062A46C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0062A46F  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0062A472  81 E2 00 FF 00 00         AND EDX,0xff00
0062A478  81 FA 00 04 00 00         CMP EDX,0x400
0062A47E  0F 85 90 00 00 00         JNZ 0x0062a514
0062A484  85 C9                     TEST ECX,ECX
0062A486  B8 79 19 8C 02            MOV EAX,0x28c1979
0062A48B  7C 10                     JL 0x0062a49d
0062A48D  F7 E9                     IMUL ECX
0062A48F  D1 FA                     SAR EDX,0x1
0062A491  8B C2                     MOV EAX,EDX
0062A493  C1 E8 1F                  SHR EAX,0x1f
0062A496  03 D0                     ADD EDX,EAX
0062A498  0F BF C2                  MOVSX EAX,DX
0062A49B  EB 0F                     JMP 0x0062a4ac
LAB_0062a49d:
0062A49D  F7 E9                     IMUL ECX
0062A49F  D1 FA                     SAR EDX,0x1
0062A4A1  8B C2                     MOV EAX,EDX
0062A4A3  C1 E8 1F                  SHR EAX,0x1f
0062A4A6  03 D0                     ADD EDX,EAX
0062A4A8  0F BF C2                  MOVSX EAX,DX
0062A4AB  48                        DEC EAX
LAB_0062a4ac:
0062A4AC  3B 46 5E                  CMP EAX,dword ptr [ESI + 0x5e]
0062A4AF  75 63                     JNZ 0x0062a514
0062A4B1  85 DB                     TEST EBX,EBX
0062A4B3  B8 79 19 8C 02            MOV EAX,0x28c1979
0062A4B8  7C 10                     JL 0x0062a4ca
0062A4BA  F7 EB                     IMUL EBX
0062A4BC  D1 FA                     SAR EDX,0x1
0062A4BE  8B C2                     MOV EAX,EDX
0062A4C0  C1 E8 1F                  SHR EAX,0x1f
0062A4C3  03 D0                     ADD EDX,EAX
0062A4C5  0F BF C2                  MOVSX EAX,DX
0062A4C8  EB 0F                     JMP 0x0062a4d9
LAB_0062a4ca:
0062A4CA  F7 EB                     IMUL EBX
0062A4CC  D1 FA                     SAR EDX,0x1
0062A4CE  8B C2                     MOV EAX,EDX
0062A4D0  C1 E8 1F                  SHR EAX,0x1f
0062A4D3  03 D0                     ADD EDX,EAX
0062A4D5  0F BF C2                  MOVSX EAX,DX
0062A4D8  48                        DEC EAX
LAB_0062a4d9:
0062A4D9  3B 46 5E                  CMP EAX,dword ptr [ESI + 0x5e]
0062A4DC  75 36                     JNZ 0x0062a514
0062A4DE  85 DB                     TEST EBX,EBX
0062A4E0  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0062A4E5  7C 11                     JL 0x0062a4f8
0062A4E7  F7 EB                     IMUL EBX
0062A4E9  C1 FA 06                  SAR EDX,0x6
0062A4EC  8B C2                     MOV EAX,EDX
0062A4EE  C1 E8 1F                  SHR EAX,0x1f
0062A4F1  03 D0                     ADD EDX,EAX
0062A4F3  0F BF C2                  MOVSX EAX,DX
0062A4F6  EB 10                     JMP 0x0062a508
LAB_0062a4f8:
0062A4F8  F7 EB                     IMUL EBX
0062A4FA  C1 FA 06                  SAR EDX,0x6
0062A4FD  8B C2                     MOV EAX,EDX
0062A4FF  C1 E8 1F                  SHR EAX,0x1f
0062A502  03 D0                     ADD EDX,EAX
0062A504  0F BF C2                  MOVSX EAX,DX
0062A507  48                        DEC EAX
LAB_0062a508:
0062A508  3B 46 66                  CMP EAX,dword ptr [ESI + 0x66]
0062A50B  75 07                     JNZ 0x0062a514
0062A50D  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_0062a514:
0062A514  33 D2                     XOR EDX,EDX
0062A516  6A 00                     PUSH 0x0
0062A518  8A 56 14                  MOV DL,byte ptr [ESI + 0x14]
0062A51B  6A 00                     PUSH 0x0
0062A51D  68 4E 01 00 00            PUSH 0x14e
0062A522  68 FF FF 00 00            PUSH 0xffff
0062A527  8B 04 95 1C 0A 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d0a1c]
0062A52E  8B 56 4E                  MOV EDX,dword ptr [ESI + 0x4e]
0062A531  6A 00                     PUSH 0x0
0062A533  50                        PUSH EAX
0062A534  8B 46 4A                  MOV EAX,dword ptr [ESI + 0x4a]
0062A537  68 FF 00 00 00            PUSH 0xff
0062A53C  52                        PUSH EDX
0062A53D  8B 56 46                  MOV EDX,dword ptr [ESI + 0x46]
0062A540  50                        PUSH EAX
0062A541  52                        PUSH EDX
0062A542  57                        PUSH EDI
0062A543  53                        PUSH EBX
0062A544  51                        PUSH ECX
0062A545  8D 8E D7 00 00 00         LEA ECX,[ESI + 0xd7]
0062A54B  E8 C6 9F DD FF            CALL 0x00404516
0062A550  85 C0                     TEST EAX,EAX
0062A552  0F 84 BC 01 00 00         JZ 0x0062a714
0062A558  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0062A55B  85 C9                     TEST ECX,ECX
0062A55D  0F 84 B1 01 00 00         JZ 0x0062a714
0062A563  83 F8 02                  CMP EAX,0x2
0062A566  75 77                     JNZ 0x0062a5df
0062A568  8B 8E EB 00 00 00         MOV ECX,dword ptr [ESI + 0xeb]
0062A56E  85 C9                     TEST ECX,ECX
0062A570  0F 84 DB 01 00 00         JZ 0x0062a751
0062A576  8D 55 E0                  LEA EDX,[EBP + -0x20]
0062A579  8B 01                     MOV EAX,dword ptr [ECX]
0062A57B  52                        PUSH EDX
0062A57C  8D 55 FC                  LEA EDX,[EBP + -0x4]
0062A57F  52                        PUSH EDX
0062A580  8D 55 FE                  LEA EDX,[EBP + -0x2]
0062A583  52                        PUSH EDX
0062A584  8D 55 0A                  LEA EDX,[EBP + 0xa]
0062A587  52                        PUSH EDX
0062A588  8B 96 EF 00 00 00         MOV EDX,dword ptr [ESI + 0xef]
0062A58E  52                        PUSH EDX
0062A58F  FF 90 E0 00 00 00         CALL dword ptr [EAX + 0xe0]
0062A595  85 C0                     TEST EAX,EAX
0062A597  0F 85 B4 01 00 00         JNZ 0x0062a751
0062A59D  8B 46 46                  MOV EAX,dword ptr [ESI + 0x46]
0062A5A0  8B 4E 4A                  MOV ECX,dword ptr [ESI + 0x4a]
0062A5A3  8B 56 4E                  MOV EDX,dword ptr [ESI + 0x4e]
0062A5A6  89 46 52                  MOV dword ptr [ESI + 0x52],EAX
0062A5A9  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
0062A5AD  89 4E 56                  MOV dword ptr [ESI + 0x56],ECX
0062A5B0  89 56 5A                  MOV dword ptr [ESI + 0x5a],EDX
0062A5B3  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
0062A5B7  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
0062A5BB  89 46 46                  MOV dword ptr [ESI + 0x46],EAX
0062A5BE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0062A5C1  89 4E 4A                  MOV dword ptr [ESI + 0x4a],ECX
0062A5C4  89 56 4E                  MOV dword ptr [ESI + 0x4e],EDX
0062A5C7  C7 46 76 02 00 00 00      MOV dword ptr [ESI + 0x76],0x2
0062A5CE  89 86 F3 00 00 00         MOV dword ptr [ESI + 0xf3],EAX
LAB_0062a5d4:
0062A5D4  5F                        POP EDI
0062A5D5  5E                        POP ESI
0062A5D6  33 C0                     XOR EAX,EAX
0062A5D8  5B                        POP EBX
0062A5D9  8B E5                     MOV ESP,EBP
0062A5DB  5D                        POP EBP
0062A5DC  C2 04 00                  RET 0x4
LAB_0062a5df:
0062A5DF  83 F8 01                  CMP EAX,0x1
0062A5E2  0F 85 69 01 00 00         JNZ 0x0062a751
0062A5E8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0062A5EB  8B 56 46                  MOV EDX,dword ptr [ESI + 0x46]
0062A5EE  8B C1                     MOV EAX,ECX
0062A5F0  89 4E 46                  MOV dword ptr [ESI + 0x46],ECX
0062A5F3  2B C2                     SUB EAX,EDX
0062A5F5  8B 56 4A                  MOV EDX,dword ptr [ESI + 0x4a]
0062A5F8  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0062A5FB  8B C3                     MOV EAX,EBX
0062A5FD  2B C2                     SUB EAX,EDX
0062A5FF  8B 56 4E                  MOV EDX,dword ptr [ESI + 0x4e]
0062A602  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0062A605  8B C7                     MOV EAX,EDI
0062A607  2B C2                     SUB EAX,EDX
0062A609  89 7E 4E                  MOV dword ptr [ESI + 0x4e],EDI
0062A60C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0062A60F  8A 86 C0 00 00 00         MOV AL,byte ptr [ESI + 0xc0]
0062A615  84 C0                     TEST AL,AL
0062A617  89 5E 4A                  MOV dword ptr [ESI + 0x4a],EBX
0062A61A  75 0C                     JNZ 0x0062a628
0062A61C  5F                        POP EDI
0062A61D  5E                        POP ESI
0062A61E  83 C8 FF                  OR EAX,0xffffffff
0062A621  5B                        POP EBX
0062A622  8B E5                     MOV ESP,EBP
0062A624  5D                        POP EBP
0062A625  C2 04 00                  RET 0x4
LAB_0062a628:
0062A628  33 D2                     XOR EDX,EDX
0062A62A  8B C7                     MOV EAX,EDI
0062A62C  8A 96 BE 00 00 00         MOV DL,byte ptr [ESI + 0xbe]
0062A632  2B C2                     SUB EAX,EDX
0062A634  8D 55 E8                  LEA EDX,[EBP + -0x18]
0062A637  50                        PUSH EAX
0062A638  53                        PUSH EBX
0062A639  51                        PUSH ECX
0062A63A  8D 4D EC                  LEA ECX,[EBP + -0x14]
0062A63D  51                        PUSH ECX
0062A63E  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0062A641  52                        PUSH EDX
0062A642  50                        PUSH EAX
0062A643  8B CE                     MOV ECX,ESI
0062A645  E8 A3 AE DD FF            CALL 0x004054ed
0062A64A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0062A64D  33 D2                     XOR EDX,EDX
0062A64F  3B C2                     CMP EAX,EDX
0062A651  7F 49                     JG 0x0062a69c
0062A653  3B CA                     CMP ECX,EDX
0062A655  7F 45                     JG 0x0062a69c
0062A657  3B C2                     CMP EAX,EDX
0062A659  0F 8D 75 FF FF FF         JGE 0x0062a5d4
0062A65F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0062A662  8B 86 86 00 00 00         MOV EAX,dword ptr [ESI + 0x86]
0062A668  8B 56 46                  MOV EDX,dword ptr [ESI + 0x46]
0062A66B  03 C1                     ADD EAX,ECX
0062A66D  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
0062A670  89 86 86 00 00 00         MOV dword ptr [ESI + 0x86],EAX
0062A676  8B 46 4A                  MOV EAX,dword ptr [ESI + 0x4a]
0062A679  89 56 52                  MOV dword ptr [ESI + 0x52],EDX
0062A67C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0062A67F  89 7E 4E                  MOV dword ptr [ESI + 0x4e],EDI
0062A682  89 46 56                  MOV dword ptr [ESI + 0x56],EAX
0062A685  89 4E 5A                  MOV dword ptr [ESI + 0x5a],ECX
0062A688  89 56 46                  MOV dword ptr [ESI + 0x46],EDX
0062A68B  89 5E 4A                  MOV dword ptr [ESI + 0x4a],EBX
0062A68E  5F                        POP EDI
0062A68F  5E                        POP ESI
0062A690  B8 01 00 00 00            MOV EAX,0x1
0062A695  5B                        POP EBX
0062A696  8B E5                     MOV ESP,EBP
0062A698  5D                        POP EBP
0062A699  C2 04 00                  RET 0x4
LAB_0062a69c:
0062A69C  3B C2                     CMP EAX,EDX
0062A69E  0F 8C B0 00 00 00         JL 0x0062a754
0062A6A4  75 11                     JNZ 0x0062a6b7
0062A6A6  3B CA                     CMP ECX,EDX
0062A6A8  7E 0D                     JLE 0x0062a6b7
0062A6AA  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0062A6AD  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0062A6B0  C7 45 EC F0 D8 FF FF      MOV dword ptr [EBP + -0x14],0xffffd8f0
LAB_0062a6b7:
0062A6B7  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0062A6BA  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0062A6BD  51                        PUSH ECX
0062A6BE  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0062A6C1  50                        PUSH EAX
0062A6C2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0062A6C5  51                        PUSH ECX
0062A6C6  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0062A6C9  52                        PUSH EDX
0062A6CA  50                        PUSH EAX
0062A6CB  51                        PUSH ECX
0062A6CC  8B CE                     MOV ECX,ESI
0062A6CE  E8 74 7C DD FF            CALL 0x00402347
0062A6D3  85 C0                     TEST EAX,EAX
0062A6D5  7E 7D                     JLE 0x0062a754
0062A6D7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0062A6DA  8B 8E 86 00 00 00         MOV ECX,dword ptr [ESI + 0x86]
0062A6E0  03 CA                     ADD ECX,EDX
0062A6E2  8B 56 4A                  MOV EDX,dword ptr [ESI + 0x4a]
0062A6E5  89 8E 86 00 00 00         MOV dword ptr [ESI + 0x86],ECX
0062A6EB  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
0062A6EE  89 4E 52                  MOV dword ptr [ESI + 0x52],ECX
0062A6F1  8B 4E 4E                  MOV ECX,dword ptr [ESI + 0x4e]
0062A6F4  89 56 56                  MOV dword ptr [ESI + 0x56],EDX
0062A6F7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0062A6FA  89 7E 4E                  MOV dword ptr [ESI + 0x4e],EDI
0062A6FD  89 4E 5A                  MOV dword ptr [ESI + 0x5a],ECX
0062A700  89 56 46                  MOV dword ptr [ESI + 0x46],EDX
0062A703  89 5E 4A                  MOV dword ptr [ESI + 0x4a],EBX
0062A706  5F                        POP EDI
0062A707  5E                        POP ESI
0062A708  B8 01 00 00 00            MOV EAX,0x1
0062A70D  5B                        POP EBX
0062A70E  8B E5                     MOV ESP,EBP
0062A710  5D                        POP EBP
0062A711  C2 04 00                  RET 0x4
LAB_0062a714:
0062A714  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062A717  8B 8E 86 00 00 00         MOV ECX,dword ptr [ESI + 0x86]
0062A71D  8B 56 4A                  MOV EDX,dword ptr [ESI + 0x4a]
0062A720  03 C8                     ADD ECX,EAX
0062A722  8B 46 4E                  MOV EAX,dword ptr [ESI + 0x4e]
0062A725  89 8E 86 00 00 00         MOV dword ptr [ESI + 0x86],ECX
0062A72B  8B 4E 46                  MOV ECX,dword ptr [ESI + 0x46]
0062A72E  89 7E 4E                  MOV dword ptr [ESI + 0x4e],EDI
0062A731  89 4E 52                  MOV dword ptr [ESI + 0x52],ECX
0062A734  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0062A737  89 56 56                  MOV dword ptr [ESI + 0x56],EDX
0062A73A  89 46 5A                  MOV dword ptr [ESI + 0x5a],EAX
0062A73D  89 4E 46                  MOV dword ptr [ESI + 0x46],ECX
0062A740  89 5E 4A                  MOV dword ptr [ESI + 0x4a],EBX
0062A743  5F                        POP EDI
0062A744  5E                        POP ESI
0062A745  B8 01 00 00 00            MOV EAX,0x1
0062A74A  5B                        POP EBX
0062A74B  8B E5                     MOV ESP,EBP
0062A74D  5D                        POP EBP
0062A74E  C2 04 00                  RET 0x4
LAB_0062a751:
0062A751  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
LAB_0062a754:
0062A754  5F                        POP EDI
0062A755  5E                        POP ESI
0062A756  5B                        POP EBX
0062A757  8B E5                     MOV ESP,EBP
0062A759  5D                        POP EBP
0062A75A  C2 04 00                  RET 0x4
