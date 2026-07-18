FSGSTy::DeleteCtrls:
0059F670  55                        PUSH EBP
0059F671  8B EC                     MOV EBP,ESP
0059F673  83 EC 48                  SUB ESP,0x48
0059F676  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059F67B  53                        PUSH EBX
0059F67C  56                        PUSH ESI
0059F67D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059F680  33 DB                     XOR EBX,EBX
0059F682  57                        PUSH EDI
0059F683  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059F686  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059F689  53                        PUSH EBX
0059F68A  52                        PUSH EDX
0059F68B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059F68E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059F694  E8 57 E1 18 00            CALL 0x0072d7f0
0059F699  8B F0                     MOV ESI,EAX
0059F69B  83 C4 08                  ADD ESP,0x8
0059F69E  3B F3                     CMP ESI,EBX
0059F6A0  0F 85 6D 0B 00 00         JNZ 0x005a0213
0059F6A6  A1 30 2A 80 00            MOV EAX,[0x00802a30]
0059F6AB  3B C3                     CMP EAX,EBX
0059F6AD  74 2D                     JZ 0x0059f6dc
0059F6AF  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
0059F6B5  74 14                     JZ 0x0059f6cb
0059F6B7  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0059F6BA  83 F9 FF                  CMP ECX,-0x1
0059F6BD  74 1D                     JZ 0x0059f6dc
0059F6BF  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
0059F6C2  51                        PUSH ECX
0059F6C3  50                        PUSH EAX
0059F6C4  E8 27 44 11 00            CALL 0x006b3af0
0059F6C9  EB 0C                     JMP 0x0059f6d7
LAB_0059f6cb:
0059F6CB  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
0059F6D1  51                        PUSH ECX
0059F6D2  E8 39 94 11 00            CALL 0x006b8b10
LAB_0059f6d7:
0059F6D7  A1 30 2A 80 00            MOV EAX,[0x00802a30]
LAB_0059f6dc:
0059F6DC  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0059F6DF  8A 96 5F 1A 00 00         MOV DL,byte ptr [ESI + 0x1a5f]
0059F6E5  8B CA                     MOV ECX,EDX
0059F6E7  81 E1 FF 00 00 00         AND ECX,0xff
0059F6ED  49                        DEC ECX
0059F6EE  83 F9 09                  CMP ECX,0x9
0059F6F1  0F 87 C8 0A 00 00         JA 0x005a01bf
switchD_0059f6f7::switchD:
0059F6F7  FF 24 8D 58 02 5A 00      JMP dword ptr [ECX*0x4 + 0x5a0258]
switchD_0059f6f7::caseD_2:
0059F6FE  80 FA 07                  CMP DL,0x7
0059F701  8B CE                     MOV ECX,ESI
0059F703  75 07                     JNZ 0x0059f70c
0059F705  E8 EF 29 E6 FF            CALL 0x004020f9
0059F70A  EB 05                     JMP 0x0059f711
LAB_0059f70c:
0059F70C  E8 30 5F E6 FF            CALL 0x00405641
switchD_0059f6f7::caseD_1:
0059F711  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059F717  3B CB                     CMP ECX,EBX
0059F719  74 1A                     JZ 0x0059f735
0059F71B  E8 6A 1B E6 FF            CALL 0x0040128a
0059F720  8B 96 23 1F 00 00         MOV EDX,dword ptr [ESI + 0x1f23]
0059F726  52                        PUSH EDX
0059F727  E8 84 EB 18 00            CALL 0x0072e2b0
0059F72C  83 C4 04                  ADD ESP,0x4
0059F72F  89 9E 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EBX
LAB_0059f735:
0059F735  6A 33                     PUSH 0x33
0059F737  E8 F4 ED 18 00            CALL 0x0072e530
0059F73C  83 C4 04                  ADD ESP,0x4
0059F73F  3B C3                     CMP EAX,EBX
0059F741  74 35                     JZ 0x0059f778
0059F743  83 C9 FF                  OR ECX,0xffffffff
0059F746  BF 01 00 00 00            MOV EDI,0x1
0059F74B  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
0059F74F  88 18                     MOV byte ptr [EAX],BL
0059F751  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
0059F754  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
0059F758  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
0059F75B  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
0059F75E  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
0059F761  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
0059F764  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
0059F767  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
0059F76A  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
0059F76D  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
0059F770  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
0059F773  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
0059F776  EB 07                     JMP 0x0059f77f
LAB_0059f778:
0059F778  33 C0                     XOR EAX,EAX
0059F77A  BF 01 00 00 00            MOV EDI,0x1
LAB_0059f77f:
0059F77F  3B C3                     CMP EAX,EBX
0059F781  89 86 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EAX
0059F787  0F 84 C0 00 00 00         JZ 0x0059f84d
0059F78D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059F792  53                        PUSH EBX
0059F793  57                        PUSH EDI
0059F794  6A 10                     PUSH 0x10
0059F796  57                        PUSH EDI
0059F797  68 06 01 00 00            PUSH 0x106
0059F79C  68 B8 01 00 00            PUSH 0x1b8
0059F7A1  68 AA 00 00 00            PUSH 0xaa
0059F7A6  68 B4 00 00 00            PUSH 0xb4
0059F7AB  50                        PUSH EAX
0059F7AC  E8 3F 02 12 00            CALL 0x006bf9f0
0059F7B1  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059F7B7  50                        PUSH EAX
0059F7B8  68 AA 00 00 00            PUSH 0xaa
0059F7BD  68 B4 00 00 00            PUSH 0xb4
0059F7C2  6A 04                     PUSH 0x4
0059F7C4  E8 D4 4D E6 FF            CALL 0x0040459d
0059F7C9  85 C0                     TEST EAX,EAX
0059F7CB  74 35                     JZ 0x0059f802
0059F7CD  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059F7D3  88 58 02                  MOV byte ptr [EAX + 0x2],BL
0059F7D6  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
0059F7DD  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059F7E3  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
0059F7E6  3B C3                     CMP EAX,EBX
0059F7E8  7C 0D                     JL 0x0059f7f7
0059F7EA  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059F7F0  50                        PUSH EAX
0059F7F1  51                        PUSH ECX
0059F7F2  E8 39 3C 11 00            CALL 0x006b3430
LAB_0059f7f7:
0059F7F7  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059F7FD  E8 EF 5D E6 FF            CALL 0x004055f1
LAB_0059f802:
0059F802  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059F808  68 06 01 00 00            PUSH 0x106
0059F80D  68 B8 01 00 00            PUSH 0x1b8
0059F812  68 AA 00 00 00            PUSH 0xaa
0059F817  68 B4 00 00 00            PUSH 0xb4
0059F81C  52                        PUSH EDX
0059F81D  E8 5E 67 11 00            CALL 0x006b5f80
0059F822  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
0059F825  50                        PUSH EAX
0059F826  57                        PUSH EDI
0059F827  68 06 01 00 00            PUSH 0x106
0059F82C  68 B8 01 00 00            PUSH 0x1b8
0059F831  68 AA 00 00 00            PUSH 0xaa
0059F836  68 B4 00 00 00            PUSH 0xb4
0059F83B  68 AA 00 00 00            PUSH 0xaa
0059F840  68 B4 00 00 00            PUSH 0xb4
0059F845  E8 4E 2A E6 FF            CALL 0x00402298
0059F84A  83 C4 20                  ADD ESP,0x20
LAB_0059f84d:
0059F84D  8B 8E BC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1abc]
0059F853  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059F859  51                        PUSH ECX
0059F85A  E9 55 09 00 00            JMP 0x005a01b4
switchD_0059f6f7::caseD_a:
0059F85F  8B CE                     MOV ECX,ESI
0059F861  E8 DB 5D E6 FF            CALL 0x00405641
0059F866  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059F86C  3B CB                     CMP ECX,EBX
0059F86E  74 1A                     JZ 0x0059f88a
0059F870  E8 15 1A E6 FF            CALL 0x0040128a
0059F875  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059F87B  50                        PUSH EAX
0059F87C  E8 2F EA 18 00            CALL 0x0072e2b0
0059F881  83 C4 04                  ADD ESP,0x4
0059F884  89 9E 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EBX
LAB_0059f88a:
0059F88A  6A 33                     PUSH 0x33
0059F88C  E8 9F EC 18 00            CALL 0x0072e530
0059F891  83 C4 04                  ADD ESP,0x4
0059F894  3B C3                     CMP EAX,EBX
0059F896  74 35                     JZ 0x0059f8cd
0059F898  83 C9 FF                  OR ECX,0xffffffff
0059F89B  BF 01 00 00 00            MOV EDI,0x1
0059F8A0  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
0059F8A4  88 18                     MOV byte ptr [EAX],BL
0059F8A6  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
0059F8A9  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
0059F8AD  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
0059F8B0  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
0059F8B3  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
0059F8B6  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
0059F8B9  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
0059F8BC  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
0059F8BF  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
0059F8C2  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
0059F8C5  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
0059F8C8  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
0059F8CB  EB 07                     JMP 0x0059f8d4
LAB_0059f8cd:
0059F8CD  33 C0                     XOR EAX,EAX
0059F8CF  BF 01 00 00 00            MOV EDI,0x1
LAB_0059f8d4:
0059F8D4  3B C3                     CMP EAX,EBX
0059F8D6  89 86 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EAX
0059F8DC  0F 84 B1 00 00 00         JZ 0x0059f993
0059F8E2  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059F8E8  53                        PUSH EBX
0059F8E9  57                        PUSH EDI
0059F8EA  6A 10                     PUSH 0x10
0059F8EC  57                        PUSH EDI
0059F8ED  68 7A 01 00 00            PUSH 0x17a
0059F8F2  68 B8 01 00 00            PUSH 0x1b8
0059F8F7  6A 5E                     PUSH 0x5e
0059F8F9  68 B4 00 00 00            PUSH 0xb4
0059F8FE  51                        PUSH ECX
0059F8FF  E8 EC 00 12 00            CALL 0x006bf9f0
0059F904  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059F90A  50                        PUSH EAX
0059F90B  6A 5E                     PUSH 0x5e
0059F90D  68 B4 00 00 00            PUSH 0xb4
0059F912  6A 04                     PUSH 0x4
0059F914  E8 84 4C E6 FF            CALL 0x0040459d
0059F919  85 C0                     TEST EAX,EAX
0059F91B  74 35                     JZ 0x0059f952
0059F91D  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059F923  88 58 02                  MOV byte ptr [EAX + 0x2],BL
0059F926  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
0059F92D  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059F933  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
0059F936  3B C3                     CMP EAX,EBX
0059F938  7C 0D                     JL 0x0059f947
0059F93A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059F940  50                        PUSH EAX
0059F941  52                        PUSH EDX
0059F942  E8 E9 3A 11 00            CALL 0x006b3430
LAB_0059f947:
0059F947  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059F94D  E8 9F 5C E6 FF            CALL 0x004055f1
LAB_0059f952:
0059F952  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059F957  68 7A 01 00 00            PUSH 0x17a
0059F95C  68 B8 01 00 00            PUSH 0x1b8
0059F961  6A 5E                     PUSH 0x5e
0059F963  68 B4 00 00 00            PUSH 0xb4
0059F968  50                        PUSH EAX
0059F969  E8 12 66 11 00            CALL 0x006b5f80
0059F96E  8B 4E 5D                  MOV ECX,dword ptr [ESI + 0x5d]
0059F971  51                        PUSH ECX
0059F972  57                        PUSH EDI
0059F973  68 7A 01 00 00            PUSH 0x17a
0059F978  68 B8 01 00 00            PUSH 0x1b8
0059F97D  6A 5E                     PUSH 0x5e
0059F97F  68 B4 00 00 00            PUSH 0xb4
0059F984  6A 5E                     PUSH 0x5e
0059F986  68 B4 00 00 00            PUSH 0xb4
0059F98B  E8 08 29 E6 FF            CALL 0x00402298
0059F990  83 C4 20                  ADD ESP,0x20
LAB_0059f993:
0059F993  8B 96 BC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abc]
0059F999  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059F99E  52                        PUSH EDX
0059F99F  50                        PUSH EAX
0059F9A0  E9 10 08 00 00            JMP 0x005a01b5
switchD_0059f6f7::caseD_9:
0059F9A5  8B CE                     MOV ECX,ESI
0059F9A7  E8 E1 47 E6 FF            CALL 0x0040418d
0059F9AC  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059F9B2  3B CB                     CMP ECX,EBX
0059F9B4  74 1A                     JZ 0x0059f9d0
0059F9B6  E8 CF 18 E6 FF            CALL 0x0040128a
0059F9BB  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059F9C1  51                        PUSH ECX
0059F9C2  E8 E9 E8 18 00            CALL 0x0072e2b0
0059F9C7  83 C4 04                  ADD ESP,0x4
0059F9CA  89 9E 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EBX
LAB_0059f9d0:
0059F9D0  6A 33                     PUSH 0x33
0059F9D2  E8 59 EB 18 00            CALL 0x0072e530
0059F9D7  83 C4 04                  ADD ESP,0x4
0059F9DA  3B C3                     CMP EAX,EBX
0059F9DC  74 35                     JZ 0x0059fa13
0059F9DE  83 C9 FF                  OR ECX,0xffffffff
0059F9E1  BF 01 00 00 00            MOV EDI,0x1
0059F9E6  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
0059F9EA  88 18                     MOV byte ptr [EAX],BL
0059F9EC  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
0059F9EF  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
0059F9F3  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
0059F9F6  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
0059F9F9  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
0059F9FC  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
0059F9FF  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
0059FA02  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
0059FA05  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
0059FA08  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
0059FA0B  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
0059FA0E  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
0059FA11  EB 07                     JMP 0x0059fa1a
LAB_0059fa13:
0059FA13  33 C0                     XOR EAX,EAX
0059FA15  BF 01 00 00 00            MOV EDI,0x1
LAB_0059fa1a:
0059FA1A  3B C3                     CMP EAX,EBX
0059FA1C  89 86 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EAX
0059FA22  0F 84 A2 00 00 00         JZ 0x0059faca
0059FA28  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059FA2E  53                        PUSH EBX
0059FA2F  57                        PUSH EDI
0059FA30  6A 10                     PUSH 0x10
0059FA32  57                        PUSH EDI
0059FA33  68 75 01 00 00            PUSH 0x175
0059FA38  68 E1 02 00 00            PUSH 0x2e1
0059FA3D  6A 5E                     PUSH 0x5e
0059FA3F  6A 22                     PUSH 0x22
0059FA41  52                        PUSH EDX
0059FA42  E8 A9 FF 11 00            CALL 0x006bf9f0
0059FA47  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059FA4D  50                        PUSH EAX
0059FA4E  6A 5E                     PUSH 0x5e
0059FA50  6A 22                     PUSH 0x22
0059FA52  6A 04                     PUSH 0x4
0059FA54  E8 44 4B E6 FF            CALL 0x0040459d
0059FA59  85 C0                     TEST EAX,EAX
0059FA5B  74 34                     JZ 0x0059fa91
0059FA5D  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059FA63  88 58 02                  MOV byte ptr [EAX + 0x2],BL
0059FA66  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
0059FA6D  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059FA73  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
0059FA76  3B C3                     CMP EAX,EBX
0059FA78  7C 0C                     JL 0x0059fa86
0059FA7A  50                        PUSH EAX
0059FA7B  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059FA80  50                        PUSH EAX
0059FA81  E8 AA 39 11 00            CALL 0x006b3430
LAB_0059fa86:
0059FA86  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059FA8C  E8 60 5B E6 FF            CALL 0x004055f1
LAB_0059fa91:
0059FA91  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059FA97  68 75 01 00 00            PUSH 0x175
0059FA9C  68 E1 02 00 00            PUSH 0x2e1
0059FAA1  6A 5E                     PUSH 0x5e
0059FAA3  6A 22                     PUSH 0x22
0059FAA5  51                        PUSH ECX
0059FAA6  E8 D5 64 11 00            CALL 0x006b5f80
0059FAAB  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
0059FAAE  52                        PUSH EDX
0059FAAF  57                        PUSH EDI
0059FAB0  68 75 01 00 00            PUSH 0x175
0059FAB5  68 E1 02 00 00            PUSH 0x2e1
0059FABA  6A 5E                     PUSH 0x5e
0059FABC  6A 22                     PUSH 0x22
0059FABE  6A 5E                     PUSH 0x5e
0059FAC0  6A 22                     PUSH 0x22
0059FAC2  E8 D1 27 E6 FF            CALL 0x00402298
0059FAC7  83 C4 20                  ADD ESP,0x20
LAB_0059faca:
0059FACA  8B 86 BC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1abc]
0059FAD0  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059FAD6  50                        PUSH EAX
0059FAD7  51                        PUSH ECX
0059FAD8  E9 D8 06 00 00            JMP 0x005a01b5
switchD_0059f6f7::caseD_3:
0059FADD  8B CE                     MOV ECX,ESI
0059FADF  E8 5D 5B E6 FF            CALL 0x00405641
0059FAE4  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059FAEA  3B CB                     CMP ECX,EBX
0059FAEC  74 1A                     JZ 0x0059fb08
0059FAEE  E8 97 17 E6 FF            CALL 0x0040128a
0059FAF3  8B 96 23 1F 00 00         MOV EDX,dword ptr [ESI + 0x1f23]
0059FAF9  52                        PUSH EDX
0059FAFA  E8 B1 E7 18 00            CALL 0x0072e2b0
0059FAFF  83 C4 04                  ADD ESP,0x4
0059FB02  89 9E 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EBX
LAB_0059fb08:
0059FB08  6A 33                     PUSH 0x33
0059FB0A  E8 21 EA 18 00            CALL 0x0072e530
0059FB0F  83 C4 04                  ADD ESP,0x4
0059FB12  3B C3                     CMP EAX,EBX
0059FB14  74 35                     JZ 0x0059fb4b
0059FB16  83 C9 FF                  OR ECX,0xffffffff
0059FB19  BF 01 00 00 00            MOV EDI,0x1
0059FB1E  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
0059FB22  88 18                     MOV byte ptr [EAX],BL
0059FB24  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
0059FB27  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
0059FB2B  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
0059FB2E  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
0059FB31  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
0059FB34  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
0059FB37  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
0059FB3A  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
0059FB3D  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
0059FB40  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
0059FB43  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
0059FB46  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
0059FB49  EB 07                     JMP 0x0059fb52
LAB_0059fb4b:
0059FB4B  33 C0                     XOR EAX,EAX
0059FB4D  BF 01 00 00 00            MOV EDI,0x1
LAB_0059fb52:
0059FB52  3B C3                     CMP EAX,EBX
0059FB54  89 86 23 1F 00 00         MOV dword ptr [ESI + 0x1f23],EAX
0059FB5A  0F 84 5A 06 00 00         JZ 0x005a01ba
0059FB60  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059FB65  53                        PUSH EBX
0059FB66  57                        PUSH EDI
0059FB67  6A 10                     PUSH 0x10
0059FB69  57                        PUSH EDI
0059FB6A  68 4C 01 00 00            PUSH 0x14c
0059FB6F  68 E1 02 00 00            PUSH 0x2e1
0059FB74  6A 72                     PUSH 0x72
0059FB76  6A 22                     PUSH 0x22
0059FB78  50                        PUSH EAX
0059FB79  E8 72 FE 11 00            CALL 0x006bf9f0
0059FB7E  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059FB84  50                        PUSH EAX
0059FB85  6A 72                     PUSH 0x72
0059FB87  6A 22                     PUSH 0x22
0059FB89  6A 04                     PUSH 0x4
0059FB8B  E8 0D 4A E6 FF            CALL 0x0040459d
0059FB90  85 C0                     TEST EAX,EAX
0059FB92  74 35                     JZ 0x0059fbc9
0059FB94  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059FB9A  88 58 02                  MOV byte ptr [EAX + 0x2],BL
0059FB9D  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
0059FBA4  8B 86 23 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f23]
0059FBAA  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
0059FBAD  3B C3                     CMP EAX,EBX
0059FBAF  7C 0D                     JL 0x0059fbbe
0059FBB1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059FBB7  50                        PUSH EAX
0059FBB8  51                        PUSH ECX
0059FBB9  E8 72 38 11 00            CALL 0x006b3430
LAB_0059fbbe:
0059FBBE  8B 8E 23 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f23]
0059FBC4  E8 28 5A E6 FF            CALL 0x004055f1
LAB_0059fbc9:
0059FBC9  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059FBCF  68 4C 01 00 00            PUSH 0x14c
0059FBD4  68 E1 02 00 00            PUSH 0x2e1
0059FBD9  6A 72                     PUSH 0x72
0059FBDB  6A 22                     PUSH 0x22
0059FBDD  52                        PUSH EDX
0059FBDE  E8 9D 63 11 00            CALL 0x006b5f80
0059FBE3  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
0059FBE6  50                        PUSH EAX
0059FBE7  57                        PUSH EDI
0059FBE8  68 4C 01 00 00            PUSH 0x14c
0059FBED  68 E1 02 00 00            PUSH 0x2e1
0059FBF2  6A 72                     PUSH 0x72
0059FBF4  6A 22                     PUSH 0x22
0059FBF6  6A 72                     PUSH 0x72
0059FBF8  6A 22                     PUSH 0x22
0059FBFA  E8 99 26 E6 FF            CALL 0x00402298
0059FBFF  8B 86 2C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b2c]
0059FC05  83 C4 20                  ADD ESP,0x20
0059FC08  83 F8 FF                  CMP EAX,-0x1
0059FC0B  74 0D                     JZ 0x0059fc1a
0059FC0D  8B 8E 70 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b70]
0059FC13  50                        PUSH EAX
0059FC14  51                        PUSH ECX
0059FC15  E8 D6 3E 11 00            CALL 0x006b3af0
LAB_0059fc1a:
0059FC1A  8B 86 BD 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bbd]
0059FC20  83 F8 FF                  CMP EAX,-0x1
0059FC23  74 0D                     JZ 0x0059fc32
0059FC25  8B 96 01 1C 00 00         MOV EDX,dword ptr [ESI + 0x1c01]
0059FC2B  50                        PUSH EAX
0059FC2C  52                        PUSH EDX
0059FC2D  E8 BE 3E 11 00            CALL 0x006b3af0
LAB_0059fc32:
0059FC32  8B 86 4E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c4e]
0059FC38  83 F8 FF                  CMP EAX,-0x1
0059FC3B  0F 84 79 05 00 00         JZ 0x005a01ba
0059FC41  50                        PUSH EAX
0059FC42  8B 86 92 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c92]
0059FC48  50                        PUSH EAX
0059FC49  E9 67 05 00 00            JMP 0x005a01b5
switchD_0059f6f7::caseD_6:
0059FC4E  8B CE                     MOV ECX,ESI
0059FC50  E8 B8 5B E6 FF            CALL 0x0040580d
0059FC55  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
0059FC5B  3B CB                     CMP ECX,EBX
0059FC5D  74 1A                     JZ 0x0059fc79
0059FC5F  E8 26 16 E6 FF            CALL 0x0040128a
0059FC64  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
0059FC6A  51                        PUSH ECX
0059FC6B  E8 40 E6 18 00            CALL 0x0072e2b0
0059FC70  83 C4 04                  ADD ESP,0x4
0059FC73  89 9E 27 1F 00 00         MOV dword ptr [ESI + 0x1f27],EBX
LAB_0059fc79:
0059FC79  6A 33                     PUSH 0x33
0059FC7B  E8 B0 E8 18 00            CALL 0x0072e530
0059FC80  83 C4 04                  ADD ESP,0x4
0059FC83  3B C3                     CMP EAX,EBX
0059FC85  74 35                     JZ 0x0059fcbc
0059FC87  83 C9 FF                  OR ECX,0xffffffff
0059FC8A  BF 01 00 00 00            MOV EDI,0x1
0059FC8F  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
0059FC93  88 18                     MOV byte ptr [EAX],BL
0059FC95  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
0059FC98  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
0059FC9C  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
0059FC9F  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
0059FCA2  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
0059FCA5  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
0059FCA8  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
0059FCAB  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
0059FCAE  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
0059FCB1  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
0059FCB4  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
0059FCB7  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
0059FCBA  EB 07                     JMP 0x0059fcc3
LAB_0059fcbc:
0059FCBC  33 C0                     XOR EAX,EAX
0059FCBE  BF 01 00 00 00            MOV EDI,0x1
LAB_0059fcc3:
0059FCC3  3B C3                     CMP EAX,EBX
0059FCC5  89 86 27 1F 00 00         MOV dword ptr [ESI + 0x1f27],EAX
0059FCCB  0F 84 EA 00 00 00         JZ 0x0059fdbb
0059FCD1  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059FCD7  53                        PUSH EBX
0059FCD8  57                        PUSH EDI
0059FCD9  6A 10                     PUSH 0x10
0059FCDB  57                        PUSH EDI
0059FCDC  68 75 01 00 00            PUSH 0x175
0059FCE1  68 BF 01 00 00            PUSH 0x1bf
0059FCE6  6A 5E                     PUSH 0x5e
0059FCE8  6A 13                     PUSH 0x13
0059FCEA  52                        PUSH EDX
0059FCEB  E8 00 FD 11 00            CALL 0x006bf9f0
0059FCF0  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
0059FCF6  50                        PUSH EAX
0059FCF7  6A 5E                     PUSH 0x5e
0059FCF9  6A 13                     PUSH 0x13
0059FCFB  6A 04                     PUSH 0x4
0059FCFD  E8 9B 48 E6 FF            CALL 0x0040459d
0059FD02  85 C0                     TEST EAX,EAX
0059FD04  74 34                     JZ 0x0059fd3a
0059FD06  8B 86 27 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f27]
0059FD0C  88 58 02                  MOV byte ptr [EAX + 0x2],BL
0059FD0F  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
0059FD16  8B 86 27 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f27]
0059FD1C  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
0059FD1F  3B C3                     CMP EAX,EBX
0059FD21  7C 0C                     JL 0x0059fd2f
0059FD23  50                        PUSH EAX
0059FD24  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059FD29  50                        PUSH EAX
0059FD2A  E8 01 37 11 00            CALL 0x006b3430
LAB_0059fd2f:
0059FD2F  8B 8E 27 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f27]
0059FD35  E8 B7 58 E6 FF            CALL 0x004055f1
LAB_0059fd3a:
0059FD3A  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059FD40  68 75 01 00 00            PUSH 0x175
0059FD45  68 BF 01 00 00            PUSH 0x1bf
0059FD4A  6A 5E                     PUSH 0x5e
0059FD4C  6A 13                     PUSH 0x13
0059FD4E  51                        PUSH ECX
0059FD4F  E8 2C 62 11 00            CALL 0x006b5f80
0059FD54  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
0059FD57  52                        PUSH EDX
0059FD58  57                        PUSH EDI
0059FD59  68 75 01 00 00            PUSH 0x175
0059FD5E  68 BF 01 00 00            PUSH 0x1bf
0059FD63  6A 5E                     PUSH 0x5e
0059FD65  6A 13                     PUSH 0x13
0059FD67  6A 5E                     PUSH 0x5e
0059FD69  6A 13                     PUSH 0x13
0059FD6B  E8 28 25 E6 FF            CALL 0x00402298
0059FD70  8B 86 2C 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b2c]
0059FD76  83 C4 20                  ADD ESP,0x20
0059FD79  83 F8 FF                  CMP EAX,-0x1
0059FD7C  74 0D                     JZ 0x0059fd8b
0059FD7E  50                        PUSH EAX
0059FD7F  8B 86 70 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b70]
0059FD85  50                        PUSH EAX
0059FD86  E8 65 3D 11 00            CALL 0x006b3af0
LAB_0059fd8b:
0059FD8B  8B 86 BD 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bbd]
0059FD91  83 F8 FF                  CMP EAX,-0x1
0059FD94  74 0D                     JZ 0x0059fda3
0059FD96  8B 8E 01 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c01]
0059FD9C  50                        PUSH EAX
0059FD9D  51                        PUSH ECX
0059FD9E  E8 4D 3D 11 00            CALL 0x006b3af0
LAB_0059fda3:
0059FDA3  8B 86 4E 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c4e]
0059FDA9  83 F8 FF                  CMP EAX,-0x1
0059FDAC  74 0D                     JZ 0x0059fdbb
0059FDAE  8B 96 92 1C 00 00         MOV EDX,dword ptr [ESI + 0x1c92]
0059FDB4  50                        PUSH EAX
0059FDB5  52                        PUSH EDX
0059FDB6  E8 35 3D 11 00            CALL 0x006b3af0
LAB_0059fdbb:
0059FDBB  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
0059FDC1  3B CB                     CMP ECX,EBX
0059FDC3  74 1A                     JZ 0x0059fddf
0059FDC5  E8 C0 14 E6 FF            CALL 0x0040128a
0059FDCA  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
0059FDD0  50                        PUSH EAX
0059FDD1  E8 DA E4 18 00            CALL 0x0072e2b0
0059FDD6  83 C4 04                  ADD ESP,0x4
0059FDD9  89 9E 2B 1F 00 00         MOV dword ptr [ESI + 0x1f2b],EBX
LAB_0059fddf:
0059FDDF  6A 33                     PUSH 0x33
0059FDE1  E8 4A E7 18 00            CALL 0x0072e530
0059FDE6  83 C4 04                  ADD ESP,0x4
0059FDE9  3B C3                     CMP EAX,EBX
0059FDEB  74 30                     JZ 0x0059fe1d
0059FDED  83 C9 FF                  OR ECX,0xffffffff
0059FDF0  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
0059FDF4  88 18                     MOV byte ptr [EAX],BL
0059FDF6  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
0059FDF9  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
0059FDFD  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
0059FE00  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
0059FE03  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
0059FE06  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
0059FE09  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
0059FE0C  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
0059FE0F  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
0059FE12  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
0059FE15  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
0059FE18  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
0059FE1B  EB 02                     JMP 0x0059fe1f
LAB_0059fe1d:
0059FE1D  33 C0                     XOR EAX,EAX
LAB_0059fe1f:
0059FE1F  3B C3                     CMP EAX,EBX
0059FE21  89 86 2B 1F 00 00         MOV dword ptr [ESI + 0x1f2b],EAX
0059FE27  0F 84 8D 03 00 00         JZ 0x005a01ba
0059FE2D  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0059FE33  53                        PUSH EBX
0059FE34  57                        PUSH EDI
0059FE35  6A 10                     PUSH 0x10
0059FE37  57                        PUSH EDI
0059FE38  68 75 01 00 00            PUSH 0x175
0059FE3D  68 24 01 00 00            PUSH 0x124
0059FE42  6A 5E                     PUSH 0x5e
0059FE44  68 E9 01 00 00            PUSH 0x1e9
0059FE49  51                        PUSH ECX
0059FE4A  E8 A1 FB 11 00            CALL 0x006bf9f0
0059FE4F  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
0059FE55  50                        PUSH EAX
0059FE56  6A 5E                     PUSH 0x5e
0059FE58  68 E9 01 00 00            PUSH 0x1e9
0059FE5D  6A 02                     PUSH 0x2
0059FE5F  E8 39 47 E6 FF            CALL 0x0040459d
0059FE64  85 C0                     TEST EAX,EAX
0059FE66  74 35                     JZ 0x0059fe9d
0059FE68  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
0059FE6E  88 58 02                  MOV byte ptr [EAX + 0x2],BL
0059FE71  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
0059FE78  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
0059FE7E  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
0059FE81  3B C3                     CMP EAX,EBX
0059FE83  7C 0D                     JL 0x0059fe92
0059FE85  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0059FE8B  50                        PUSH EAX
0059FE8C  52                        PUSH EDX
0059FE8D  E8 9E 35 11 00            CALL 0x006b3430
LAB_0059fe92:
0059FE92  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
0059FE98  E8 54 57 E6 FF            CALL 0x004055f1
LAB_0059fe9d:
0059FE9D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059FEA2  68 75 01 00 00            PUSH 0x175
0059FEA7  68 24 01 00 00            PUSH 0x124
0059FEAC  6A 5E                     PUSH 0x5e
0059FEAE  68 E9 01 00 00            PUSH 0x1e9
0059FEB3  50                        PUSH EAX
0059FEB4  E8 C7 60 11 00            CALL 0x006b5f80
0059FEB9  8B 4E 5D                  MOV ECX,dword ptr [ESI + 0x5d]
0059FEBC  51                        PUSH ECX
0059FEBD  57                        PUSH EDI
0059FEBE  68 75 01 00 00            PUSH 0x175
0059FEC3  68 24 01 00 00            PUSH 0x124
0059FEC8  6A 5E                     PUSH 0x5e
0059FECA  68 E9 01 00 00            PUSH 0x1e9
0059FECF  6A 5E                     PUSH 0x5e
0059FED1  68 E9 01 00 00            PUSH 0x1e9
0059FED6  E8 BD 23 E6 FF            CALL 0x00402298
0059FEDB  8B 86 DF 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cdf]
0059FEE1  83 C4 20                  ADD ESP,0x20
0059FEE4  83 F8 FF                  CMP EAX,-0x1
0059FEE7  74 0D                     JZ 0x0059fef6
0059FEE9  8B 96 23 1D 00 00         MOV EDX,dword ptr [ESI + 0x1d23]
0059FEEF  50                        PUSH EAX
0059FEF0  52                        PUSH EDX
0059FEF1  E8 FA 3B 11 00            CALL 0x006b3af0
LAB_0059fef6:
0059FEF6  8B 86 70 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d70]
0059FEFC  83 F8 FF                  CMP EAX,-0x1
0059FEFF  74 0D                     JZ 0x0059ff0e
0059FF01  50                        PUSH EAX
0059FF02  8B 86 B4 1D 00 00         MOV EAX,dword ptr [ESI + 0x1db4]
0059FF08  50                        PUSH EAX
0059FF09  E8 E2 3B 11 00            CALL 0x006b3af0
LAB_0059ff0e:
0059FF0E  8B 86 01 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e01]
0059FF14  83 F8 FF                  CMP EAX,-0x1
0059FF17  0F 84 9D 02 00 00         JZ 0x005a01ba
0059FF1D  8B 8E 45 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e45]
0059FF23  50                        PUSH EAX
0059FF24  51                        PUSH ECX
0059FF25  E9 8B 02 00 00            JMP 0x005a01b5
switchD_0059f6f7::caseD_8:
0059FF2A  8B CE                     MOV ECX,ESI
0059FF2C  E8 DD 52 E6 FF            CALL 0x0040520e
0059FF31  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
0059FF37  3B CB                     CMP ECX,EBX
0059FF39  74 1A                     JZ 0x0059ff55
0059FF3B  E8 4A 13 E6 FF            CALL 0x0040128a
0059FF40  8B 96 2F 1F 00 00         MOV EDX,dword ptr [ESI + 0x1f2f]
0059FF46  52                        PUSH EDX
0059FF47  E8 64 E3 18 00            CALL 0x0072e2b0
0059FF4C  83 C4 04                  ADD ESP,0x4
0059FF4F  89 9E 2F 1F 00 00         MOV dword ptr [ESI + 0x1f2f],EBX
LAB_0059ff55:
0059FF55  6A 33                     PUSH 0x33
0059FF57  E8 D4 E5 18 00            CALL 0x0072e530
0059FF5C  83 C4 04                  ADD ESP,0x4
0059FF5F  3B C3                     CMP EAX,EBX
0059FF61  74 35                     JZ 0x0059ff98
0059FF63  83 C9 FF                  OR ECX,0xffffffff
0059FF66  BF 01 00 00 00            MOV EDI,0x1
0059FF6B  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
0059FF6F  88 18                     MOV byte ptr [EAX],BL
0059FF71  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
0059FF74  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
0059FF78  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
0059FF7B  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
0059FF7E  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
0059FF81  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
0059FF84  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
0059FF87  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
0059FF8A  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
0059FF8D  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
0059FF90  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
0059FF93  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
0059FF96  EB 07                     JMP 0x0059ff9f
LAB_0059ff98:
0059FF98  33 C0                     XOR EAX,EAX
0059FF9A  BF 01 00 00 00            MOV EDI,0x1
LAB_0059ff9f:
0059FF9F  3B C3                     CMP EAX,EBX
0059FFA1  89 86 2F 1F 00 00         MOV dword ptr [ESI + 0x1f2f],EAX
0059FFA7  0F 84 B1 00 00 00         JZ 0x005a005e
0059FFAD  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0059FFB2  53                        PUSH EBX
0059FFB3  57                        PUSH EDI
0059FFB4  6A 10                     PUSH 0x10
0059FFB6  57                        PUSH EDI
0059FFB7  68 75 01 00 00            PUSH 0x175
0059FFBC  68 74 01 00 00            PUSH 0x174
0059FFC1  6A 5E                     PUSH 0x5e
0059FFC3  68 99 01 00 00            PUSH 0x199
0059FFC8  50                        PUSH EAX
0059FFC9  E8 22 FA 11 00            CALL 0x006bf9f0
0059FFCE  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
0059FFD4  50                        PUSH EAX
0059FFD5  6A 5E                     PUSH 0x5e
0059FFD7  68 99 01 00 00            PUSH 0x199
0059FFDC  6A 02                     PUSH 0x2
0059FFDE  E8 BA 45 E6 FF            CALL 0x0040459d
0059FFE3  85 C0                     TEST EAX,EAX
0059FFE5  74 35                     JZ 0x005a001c
0059FFE7  8B 86 2F 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2f]
0059FFED  88 58 02                  MOV byte ptr [EAX + 0x2],BL
0059FFF0  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
0059FFF7  8B 86 2F 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2f]
0059FFFD  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005A0000  3B C3                     CMP EAX,EBX
005A0002  7C 0D                     JL 0x005a0011
005A0004  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005A000A  50                        PUSH EAX
005A000B  51                        PUSH ECX
005A000C  E8 1F 34 11 00            CALL 0x006b3430
LAB_005a0011:
005A0011  8B 8E 2F 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2f]
005A0017  E8 D5 55 E6 FF            CALL 0x004055f1
LAB_005a001c:
005A001C  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005A0022  68 75 01 00 00            PUSH 0x175
005A0027  68 74 01 00 00            PUSH 0x174
005A002C  6A 5E                     PUSH 0x5e
005A002E  68 99 01 00 00            PUSH 0x199
005A0033  52                        PUSH EDX
005A0034  E8 47 5F 11 00            CALL 0x006b5f80
005A0039  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005A003C  50                        PUSH EAX
005A003D  57                        PUSH EDI
005A003E  68 75 01 00 00            PUSH 0x175
005A0043  68 74 01 00 00            PUSH 0x174
005A0048  6A 5E                     PUSH 0x5e
005A004A  68 99 01 00 00            PUSH 0x199
005A004F  6A 5E                     PUSH 0x5e
005A0051  68 99 01 00 00            PUSH 0x199
005A0056  E8 3D 22 E6 FF            CALL 0x00402298
005A005B  83 C4 20                  ADD ESP,0x20
LAB_005a005e:
005A005E  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
005A0064  3B CB                     CMP ECX,EBX
005A0066  74 1A                     JZ 0x005a0082
005A0068  E8 1D 12 E6 FF            CALL 0x0040128a
005A006D  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
005A0073  51                        PUSH ECX
005A0074  E8 37 E2 18 00            CALL 0x0072e2b0
005A0079  83 C4 04                  ADD ESP,0x4
005A007C  89 9E 2B 1F 00 00         MOV dword ptr [ESI + 0x1f2b],EBX
LAB_005a0082:
005A0082  6A 33                     PUSH 0x33
005A0084  E8 A7 E4 18 00            CALL 0x0072e530
005A0089  83 C4 04                  ADD ESP,0x4
005A008C  3B C3                     CMP EAX,EBX
005A008E  74 30                     JZ 0x005a00c0
005A0090  83 C9 FF                  OR ECX,0xffffffff
005A0093  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005A0097  88 18                     MOV byte ptr [EAX],BL
005A0099  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005A009C  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005A00A0  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005A00A3  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005A00A6  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005A00A9  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005A00AC  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005A00AF  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005A00B2  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005A00B5  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005A00B8  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005A00BB  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005A00BE  EB 02                     JMP 0x005a00c2
LAB_005a00c0:
005A00C0  33 C0                     XOR EAX,EAX
LAB_005a00c2:
005A00C2  3B C3                     CMP EAX,EBX
005A00C4  89 86 2B 1F 00 00         MOV dword ptr [ESI + 0x1f2b],EAX
005A00CA  0F 84 EA 00 00 00         JZ 0x005a01ba
005A00D0  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005A00D6  53                        PUSH EBX
005A00D7  57                        PUSH EDI
005A00D8  6A 10                     PUSH 0x10
005A00DA  57                        PUSH EDI
005A00DB  68 75 01 00 00            PUSH 0x175
005A00E0  68 74 01 00 00            PUSH 0x174
005A00E5  6A 5E                     PUSH 0x5e
005A00E7  6A 13                     PUSH 0x13
005A00E9  52                        PUSH EDX
005A00EA  E8 01 F9 11 00            CALL 0x006bf9f0
005A00EF  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
005A00F5  50                        PUSH EAX
005A00F6  6A 5E                     PUSH 0x5e
005A00F8  6A 13                     PUSH 0x13
005A00FA  6A 04                     PUSH 0x4
005A00FC  E8 9C 44 E6 FF            CALL 0x0040459d
005A0101  85 C0                     TEST EAX,EAX
005A0103  74 34                     JZ 0x005a0139
005A0105  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
005A010B  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005A010E  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005A0115  8B 86 2B 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f2b]
005A011B  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005A011E  3B C3                     CMP EAX,EBX
005A0120  7C 0C                     JL 0x005a012e
005A0122  50                        PUSH EAX
005A0123  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A0128  50                        PUSH EAX
005A0129  E8 02 33 11 00            CALL 0x006b3430
LAB_005a012e:
005A012E  8B 8E 2B 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f2b]
005A0134  E8 B8 54 E6 FF            CALL 0x004055f1
LAB_005a0139:
005A0139  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005A013F  68 75 01 00 00            PUSH 0x175
005A0144  68 74 01 00 00            PUSH 0x174
005A0149  6A 5E                     PUSH 0x5e
005A014B  6A 13                     PUSH 0x13
005A014D  51                        PUSH ECX
005A014E  E8 2D 5E 11 00            CALL 0x006b5f80
005A0153  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
005A0156  52                        PUSH EDX
005A0157  57                        PUSH EDI
005A0158  68 75 01 00 00            PUSH 0x175
005A015D  68 74 01 00 00            PUSH 0x174
005A0162  6A 5E                     PUSH 0x5e
005A0164  6A 13                     PUSH 0x13
005A0166  6A 5E                     PUSH 0x5e
005A0168  6A 13                     PUSH 0x13
005A016A  E8 29 21 E6 FF            CALL 0x00402298
005A016F  8B 86 DF 1C 00 00         MOV EAX,dword ptr [ESI + 0x1cdf]
005A0175  83 C4 20                  ADD ESP,0x20
005A0178  83 F8 FF                  CMP EAX,-0x1
005A017B  74 0D                     JZ 0x005a018a
005A017D  50                        PUSH EAX
005A017E  8B 86 23 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d23]
005A0184  50                        PUSH EAX
005A0185  E8 66 39 11 00            CALL 0x006b3af0
LAB_005a018a:
005A018A  8B 86 70 1D 00 00         MOV EAX,dword ptr [ESI + 0x1d70]
005A0190  83 F8 FF                  CMP EAX,-0x1
005A0193  74 0D                     JZ 0x005a01a2
005A0195  8B 8E B4 1D 00 00         MOV ECX,dword ptr [ESI + 0x1db4]
005A019B  50                        PUSH EAX
005A019C  51                        PUSH ECX
005A019D  E8 4E 39 11 00            CALL 0x006b3af0
LAB_005a01a2:
005A01A2  8B 86 01 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e01]
005A01A8  83 F8 FF                  CMP EAX,-0x1
005A01AB  74 0D                     JZ 0x005a01ba
005A01AD  8B 96 45 1E 00 00         MOV EDX,dword ptr [ESI + 0x1e45]
005A01B3  50                        PUSH EAX
LAB_005a01b4:
005A01B4  52                        PUSH EDX
LAB_005a01b5:
005A01B5  E8 36 39 11 00            CALL 0x006b3af0
LAB_005a01ba:
005A01BA  A1 30 2A 80 00            MOV EAX,[0x00802a30]
switchD_0059f6f7::default:
005A01BF  3B C3                     CMP EAX,EBX
005A01C1  74 40                     JZ 0x005a0203
005A01C3  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005A01C9  74 2C                     JZ 0x005a01f7
005A01CB  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005A01CE  83 F9 FF                  CMP ECX,-0x1
005A01D1  74 30                     JZ 0x005a0203
005A01D3  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
005A01D6  52                        PUSH EDX
005A01D7  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
005A01DA  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005A01DD  52                        PUSH EDX
005A01DE  6A FE                     PUSH -0x2
005A01E0  51                        PUSH ECX
005A01E1  50                        PUSH EAX
005A01E2  E8 E9 32 11 00            CALL 0x006b34d0
005A01E7  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005A01EA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A01F0  5F                        POP EDI
005A01F1  5E                        POP ESI
005A01F2  5B                        POP EBX
005A01F3  8B E5                     MOV ESP,EBP
005A01F5  5D                        POP EBP
005A01F6  C3                        RET
LAB_005a01f7:
005A01F7  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005A01FD  51                        PUSH ECX
005A01FE  E8 5D 88 11 00            CALL 0x006b8a60
LAB_005a0203:
005A0203  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005A0206  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A020C  5F                        POP EDI
005A020D  5E                        POP ESI
005A020E  5B                        POP EBX
005A020F  8B E5                     MOV ESP,EBP
005A0211  5D                        POP EBP
005A0212  C3                        RET
LAB_005a0213:
005A0213  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005A0216  68 BC C3 7C 00            PUSH 0x7cc3bc
005A021B  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A0220  56                        PUSH ESI
005A0221  53                        PUSH EBX
005A0222  68 9C 08 00 00            PUSH 0x89c
005A0227  68 70 BF 7C 00            PUSH 0x7cbf70
005A022C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A0231  E8 9A D2 10 00            CALL 0x006ad4d0
005A0236  83 C4 18                  ADD ESP,0x18
005A0239  85 C0                     TEST EAX,EAX
005A023B  74 01                     JZ 0x005a023e
005A023D  CC                        INT3
LAB_005a023e:
005A023E  68 9C 08 00 00            PUSH 0x89c
005A0243  68 70 BF 7C 00            PUSH 0x7cbf70
005A0248  53                        PUSH EBX
005A0249  56                        PUSH ESI
005A024A  E8 F1 5B 10 00            CALL 0x006a5e40
005A024F  5F                        POP EDI
005A0250  5E                        POP ESI
005A0251  5B                        POP EBX
005A0252  8B E5                     MOV ESP,EBP
005A0254  5D                        POP EBP
005A0255  C3                        RET
