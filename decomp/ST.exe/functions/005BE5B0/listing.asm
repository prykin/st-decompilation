MReportTy::PaintMReport:
005BE5B0  55                        PUSH EBP
005BE5B1  8B EC                     MOV EBP,ESP
005BE5B3  81 EC 94 08 00 00         SUB ESP,0x894
005BE5B9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BE5BE  53                        PUSH EBX
005BE5BF  56                        PUSH ESI
005BE5C0  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005BE5C3  57                        PUSH EDI
005BE5C4  8D 55 A4                  LEA EDX,[EBP + -0x5c]
005BE5C7  8D 4D A0                  LEA ECX,[EBP + -0x60]
005BE5CA  6A 00                     PUSH 0x0
005BE5CC  52                        PUSH EDX
005BE5CD  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
005BE5D0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BE5D6  E8 15 F2 16 00            CALL 0x0072d7f0
005BE5DB  8B F0                     MOV ESI,EAX
005BE5DD  83 C4 08                  ADD ESP,0x8
005BE5E0  85 F6                     TEST ESI,ESI
005BE5E2  0F 85 62 0E 00 00         JNZ 0x005bf44a
005BE5E8  A1 34 67 80 00            MOV EAX,[0x00806734]
005BE5ED  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005BE5F3  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BE5F9  50                        PUSH EAX
005BE5FA  51                        PUSH ECX
005BE5FB  56                        PUSH ESI
005BE5FC  56                        PUSH ESI
005BE5FD  52                        PUSH EDX
005BE5FE  E8 7D 79 0F 00            CALL 0x006b5f80
005BE603  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
005BE606  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005BE609  50                        PUSH EAX
005BE60A  6A 01                     PUSH 0x1
005BE60C  6A 3C                     PUSH 0x3c
005BE60E  68 20 03 00 00            PUSH 0x320
005BE613  56                        PUSH ESI
005BE614  56                        PUSH ESI
005BE615  56                        PUSH ESI
005BE616  56                        PUSH ESI
005BE617  E8 7C 3C E4 FF            CALL 0x00402298
005BE61C  8B 83 57 04 00 00         MOV EAX,dword ptr [EBX + 0x457]
005BE622  83 C4 20                  ADD ESP,0x20
005BE625  85 C0                     TEST EAX,EAX
005BE627  75 21                     JNZ 0x005be64a
005BE629  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005BE62C  84 C0                     TEST AL,AL
005BE62E  75 1A                     JNZ 0x005be64a
005BE630  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005BE636  53                        PUSH EBX
005BE637  6A 32                     PUSH 0x32
005BE639  68 E9 02 00 00            PUSH 0x2e9
005BE63E  6A 0A                     PUSH 0xa
005BE640  6A 1A                     PUSH 0x1a
005BE642  56                        PUSH ESI
005BE643  56                        PUSH ESI
005BE644  51                        PUSH ECX
005BE645  E8 CD 2B E4 FF            CALL 0x00401217
LAB_005be64a:
005BE64A  8B 83 53 04 00 00         MOV EAX,dword ptr [EBX + 0x453]
005BE650  85 C0                     TEST EAX,EAX
005BE652  0F 85 E0 0D 00 00         JNZ 0x005bf438
005BE658  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005BE65B  84 C0                     TEST AL,AL
005BE65D  0F 85 D5 0D 00 00         JNZ 0x005bf438
005BE663  8B 43 73                  MOV EAX,dword ptr [EBX + 0x73]
005BE666  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005BE669  52                        PUSH EDX
005BE66A  6A 01                     PUSH 0x1
005BE66C  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005BE66F  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BE672  51                        PUSH ECX
005BE673  52                        PUSH EDX
005BE674  6A 46                     PUSH 0x46
005BE676  6A 1A                     PUSH 0x1a
005BE678  6A 46                     PUSH 0x46
005BE67A  6A 1A                     PUSH 0x1a
005BE67C  E8 17 3C E4 FF            CALL 0x00402298
005BE681  8B 43 73                  MOV EAX,dword ptr [EBX + 0x73]
005BE684  83 C4 20                  ADD ESP,0x20
005BE687  68 4C 00 00 01            PUSH 0x100004c
005BE68C  68 5C 01 00 00            PUSH 0x15c
005BE691  68 BA 02 00 00            PUSH 0x2ba
005BE696  6A 01                     PUSH 0x1
005BE698  6A 2E                     PUSH 0x2e
005BE69A  6A 00                     PUSH 0x0
005BE69C  50                        PUSH EAX
005BE69D  E8 CE 5A 0F 00            CALL 0x006b4170
005BE6A2  8A 43 67                  MOV AL,byte ptr [EBX + 0x67]
005BE6A5  84 C0                     TEST AL,AL
005BE6A7  0F 84 19 0D 00 00         JZ 0x005bf3c6
005BE6AD  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BE6B0  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
005BE6B6  84 C0                     TEST AL,AL
005BE6B8  0F 84 C4 08 00 00         JZ 0x005bef82
005BE6BE  3C 01                     CMP AL,0x1
005BE6C0  75 0B                     JNZ 0x005be6cd
005BE6C2  8A 0D 46 C8 80 00         MOV CL,byte ptr [0x0080c846]
005BE6C8  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
005BE6CB  EB 0E                     JMP 0x005be6db
LAB_005be6cd:
005BE6CD  25 FF 00 00 00            AND EAX,0xff
005BE6D2  8A 90 3D C8 80 00         MOV DL,byte ptr [EAX + 0x80c83d]
005BE6D8  88 55 E8                  MOV byte ptr [EBP + -0x18],DL
LAB_005be6db:
005BE6DB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005BE6DE  25 FF 00 00 00            AND EAX,0xff
005BE6E3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005BE6E6  8A 84 C0 99 C9 80 00      MOV AL,byte ptr [EAX + EAX*0x8 + 0x80c999]
005BE6ED  84 C0                     TEST AL,AL
005BE6EF  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
005BE6F2  74 0B                     JZ 0x005be6ff
005BE6F4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005BE6F7  25 FF 00 00 00            AND EAX,0xff
005BE6FC  48                        DEC EAX
005BE6FD  EB 02                     JMP 0x005be701
LAB_005be6ff:
005BE6FF  33 C0                     XOR EAX,EAX
LAB_005be701:
005BE701  50                        PUSH EAX
005BE702  8B 43 7F                  MOV EAX,dword ptr [EBX + 0x7f]
005BE705  50                        PUSH EAX
005BE706  E8 95 CC 14 00            CALL 0x0070b3a0
005BE70B  8B 4B 73                  MOV ECX,dword ptr [EBX + 0x73]
005BE70E  50                        PUSH EAX
005BE70F  6A 06                     PUSH 0x6
005BE711  6A 01                     PUSH 0x1
005BE713  6A 2E                     PUSH 0x2e
005BE715  51                        PUSH ECX
005BE716  E8 0E 4B E4 FF            CALL 0x00403229
005BE71B  8B 53 73                  MOV EDX,dword ptr [EBX + 0x73]
005BE71E  83 C4 1C                  ADD ESP,0x1c
005BE721  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BE727  6A 00                     PUSH 0x0
005BE729  6A 1E                     PUSH 0x1e
005BE72B  68 B7 02 00 00            PUSH 0x2b7
005BE730  6A 02                     PUSH 0x2
005BE732  6A 2F                     PUSH 0x2f
005BE734  6A 00                     PUSH 0x0
005BE736  52                        PUSH EDX
005BE737  E8 64 24 15 00            CALL 0x00710ba0
005BE73C  85 C0                     TEST EAX,EAX
005BE73E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005BE741  0F 84 00 02 00 00         JZ 0x005be947
005BE747  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005BE74C  C6 45 F3 01               MOV byte ptr [EBP + -0xd],0x1
005BE750  84 C0                     TEST AL,AL
005BE752  C6 05 3A F3 80 00 00      MOV byte ptr [0x0080f33a],0x0
005BE759  C6 45 EC 00               MOV byte ptr [EBP + -0x14],0x0
005BE75D  0F 86 8A 00 00 00         JBE 0x005be7ed
LAB_005be763:
005BE763  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005BE766  81 E1 FF 00 00 00         AND ECX,0xff
005BE76C  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
005BE76F  C1 E0 03                  SHL EAX,0x3
005BE772  2B C1                     SUB EAX,ECX
005BE774  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
005BE777  C1 E0 02                  SHL EAX,0x2
005BE77A  38 88 F4 8A 80 00         CMP byte ptr [EAX + 0x808af4],CL
005BE780  75 55                     JNZ 0x005be7d7
005BE782  8A 4D F3                  MOV CL,byte ptr [EBP + -0xd]
005BE785  84 C9                     TEST CL,CL
005BE787  74 1C                     JZ 0x005be7a5
005BE789  8D 90 B0 8A 80 00         LEA EDX,[EAX + 0x808ab0]
005BE78F  52                        PUSH EDX
005BE790  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BE795  68 3A F3 80 00            PUSH 0x80f33a
005BE79A  FF D6                     CALL ESI
005BE79C  83 C4 0C                  ADD ESP,0xc
005BE79F  C6 45 F3 00               MOV byte ptr [EBP + -0xd],0x0
005BE7A3  EB 1B                     JMP 0x005be7c0
LAB_005be7a5:
005BE7A5  8D 80 B0 8A 80 00         LEA EAX,[EAX + 0x808ab0]
005BE7AB  50                        PUSH EAX
005BE7AC  68 3A F3 80 00            PUSH 0x80f33a
005BE7B1  68 C0 CF 7C 00            PUSH 0x7ccfc0
005BE7B6  68 3A F3 80 00            PUSH 0x80f33a
005BE7BB  FF D6                     CALL ESI
005BE7BD  83 C4 10                  ADD ESP,0x10
LAB_005be7c0:
005BE7C0  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BE7C6  68 3A F3 80 00            PUSH 0x80f33a
005BE7CB  E8 40 29 15 00            CALL 0x00711110
005BE7D0  3D A8 02 00 00            CMP EAX,0x2a8
005BE7D5  7F 16                     JG 0x005be7ed
LAB_005be7d7:
005BE7D7  8A 45 EC                  MOV AL,byte ptr [EBP + -0x14]
005BE7DA  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
005BE7E0  FE C0                     INC AL
005BE7E2  3A C1                     CMP AL,CL
005BE7E4  88 45 EC                  MOV byte ptr [EBP + -0x14],AL
005BE7E7  0F 82 76 FF FF FF         JC 0x005be763
LAB_005be7ed:
005BE7ED  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BE7F3  68 3A F3 80 00            PUSH 0x80f33a
005BE7F8  E8 13 29 15 00            CALL 0x00711110
005BE7FD  3D A8 02 00 00            CMP EAX,0x2a8
005BE802  0F 8E 02 01 00 00         JLE 0x005be90a
005BE808  BF 3A F3 80 00            MOV EDI,0x80f33a
005BE80D  83 C9 FF                  OR ECX,0xffffffff
005BE810  33 C0                     XOR EAX,EAX
005BE812  8D 95 6C F7 FF FF         LEA EDX,[EBP + 0xfffff76c]
005BE818  F2 AE                     SCASB.REPNE ES:EDI
005BE81A  F7 D1                     NOT ECX
005BE81C  2B F9                     SUB EDI,ECX
005BE81E  8B C1                     MOV EAX,ECX
005BE820  8B F7                     MOV ESI,EDI
005BE822  8B FA                     MOV EDI,EDX
005BE824  C1 E9 02                  SHR ECX,0x2
005BE827  F3 A5                     MOVSD.REP ES:EDI,ESI
005BE829  8B C8                     MOV ECX,EAX
005BE82B  33 C0                     XOR EAX,EAX
005BE82D  83 E1 03                  AND ECX,0x3
005BE830  F3 A4                     MOVSB.REP ES:EDI,ESI
005BE832  B9 0D 02 00 00            MOV ECX,0x20d
005BE837  BF 3A F3 80 00            MOV EDI,0x80f33a
005BE83C  F3 AB                     STOSD.REP ES:EDI
005BE83E  BF 3A F3 80 00            MOV EDI,0x80f33a
005BE843  83 C9 FF                  OR ECX,0xffffffff
005BE846  8B B3 83 00 00 00         MOV ESI,dword ptr [EBX + 0x83]
005BE84C  F2 AE                     SCASB.REPNE ES:EDI
005BE84E  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005BE854  F7 D1                     NOT ECX
005BE856  49                        DEC ECX
005BE857  85 C0                     TEST EAX,EAX
005BE859  8B F9                     MOV EDI,ECX
005BE85B  74 09                     JZ 0x005be866
005BE85D  56                        PUSH ESI
005BE85E  E8 2D 1F 15 00            CALL 0x00710790
005BE863  83 C4 04                  ADD ESP,0x4
LAB_005be866:
005BE866  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BE86C  8B 96 86 00 00 00         MOV EDX,dword ptr [ESI + 0x86]
005BE872  B8 A8 02 00 00            MOV EAX,0x2a8
005BE877  8B 49 58                  MOV ECX,dword ptr [ECX + 0x58]
005BE87A  03 CA                     ADD ECX,EDX
005BE87C  99                        CDQ
005BE87D  F7 F9                     IDIV ECX
005BE87F  8B F0                     MOV ESI,EAX
005BE881  4E                        DEC ESI
LAB_005be882:
005BE882  46                        INC ESI
005BE883  8D 95 6C F7 FF FF         LEA EDX,[EBP + 0xfffff76c]
005BE889  56                        PUSH ESI
005BE88A  52                        PUSH EDX
005BE88B  68 3A F3 80 00            PUSH 0x80f33a
005BE890  E8 AB FA 16 00            CALL 0x0072e340
005BE895  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BE89B  83 C4 0C                  ADD ESP,0xc
005BE89E  68 3A F3 80 00            PUSH 0x80f33a
005BE8A3  E8 68 28 15 00            CALL 0x00711110
005BE8A8  3D A8 02 00 00            CMP EAX,0x2a8
005BE8AD  7D 04                     JGE 0x005be8b3
005BE8AF  3B F7                     CMP ESI,EDI
005BE8B1  7C CF                     JL 0x005be882
LAB_005be8b3:
005BE8B3  3B F7                     CMP ESI,EDI
005BE8B5  74 53                     JZ 0x005be90a
005BE8B7  B9 0D 02 00 00            MOV ECX,0x20d
005BE8BC  33 C0                     XOR EAX,EAX
005BE8BE  BF 3A F3 80 00            MOV EDI,0x80f33a
005BE8C3  83 C6 FD                  ADD ESI,-0x3
005BE8C6  F3 AB                     STOSD.REP ES:EDI
005BE8C8  8D 85 6C F7 FF FF         LEA EAX,[EBP + 0xfffff76c]
005BE8CE  56                        PUSH ESI
005BE8CF  50                        PUSH EAX
005BE8D0  68 3A F3 80 00            PUSH 0x80f33a
005BE8D5  E8 66 FA 16 00            CALL 0x0072e340
005BE8DA  BF 74 72 7C 00            MOV EDI,0x7c7274
005BE8DF  83 C9 FF                  OR ECX,0xffffffff
005BE8E2  33 C0                     XOR EAX,EAX
005BE8E4  83 C4 0C                  ADD ESP,0xc
005BE8E7  F2 AE                     SCASB.REPNE ES:EDI
005BE8E9  F7 D1                     NOT ECX
005BE8EB  2B F9                     SUB EDI,ECX
005BE8ED  8B F7                     MOV ESI,EDI
005BE8EF  8B D1                     MOV EDX,ECX
005BE8F1  BF 3A F3 80 00            MOV EDI,0x80f33a
005BE8F6  83 C9 FF                  OR ECX,0xffffffff
005BE8F9  F2 AE                     SCASB.REPNE ES:EDI
005BE8FB  8B CA                     MOV ECX,EDX
005BE8FD  4F                        DEC EDI
005BE8FE  C1 E9 02                  SHR ECX,0x2
005BE901  F3 A5                     MOVSD.REP ES:EDI,ESI
005BE903  8B CA                     MOV ECX,EDX
005BE905  83 E1 03                  AND ECX,0x3
005BE908  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005be90a:
005BE90A  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BE910  6A 00                     PUSH 0x0
005BE912  6A FF                     PUSH -0x1
005BE914  6A FF                     PUSH -0x1
005BE916  68 3A F3 80 00            PUSH 0x80f33a
005BE91B  E8 A0 30 15 00            CALL 0x007119c0
005BE920  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005BE923  8B 4B 73                  MOV ECX,dword ptr [EBX + 0x73]
005BE926  50                        PUSH EAX
005BE927  6A 01                     PUSH 0x1
005BE929  6A 02                     PUSH 0x2
005BE92B  6A 2F                     PUSH 0x2f
005BE92D  51                        PUSH ECX
005BE92E  E8 F6 48 E4 FF            CALL 0x00403229
005BE933  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BE939  83 C4 14                  ADD ESP,0x14
005BE93C  E8 BF 25 15 00            CALL 0x00710f00
005BE941  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
LAB_005be947:
005BE947  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BE94A  3C 01                     CMP AL,0x1
005BE94C  75 05                     JNZ 0x005be953
005BE94E  83 C9 FF                  OR ECX,0xffffffff
005BE951  EB 11                     JMP 0x005be964
LAB_005be953:
005BE953  25 FF 00 00 00            AND EAX,0xff
005BE958  C1 E0 04                  SHL EAX,0x4
005BE95B  33 C9                     XOR ECX,ECX
005BE95D  66 8B 88 A7 C8 80 00      MOV CX,word ptr [EAX + 0x80c8a7]
LAB_005be964:
005BE964  33 D2                     XOR EDX,EDX
005BE966  6A 6A                     PUSH 0x6a
005BE968  66 8B 15 37 C9 80 00      MOV DX,word ptr [0x0080c937]
005BE96F  6A 69                     PUSH 0x69
005BE971  52                        PUSH EDX
005BE972  51                        PUSH ECX
005BE973  8B CB                     MOV ECX,EBX
005BE975  E8 94 3B E4 FF            CALL 0x0040250e
005BE97A  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BE97D  3C 01                     CMP AL,0x1
005BE97F  75 05                     JNZ 0x005be986
005BE981  83 C9 FF                  OR ECX,0xffffffff
005BE984  EB 11                     JMP 0x005be997
LAB_005be986:
005BE986  25 FF 00 00 00            AND EAX,0xff
005BE98B  C1 E0 04                  SHL EAX,0x4
005BE98E  33 C9                     XOR ECX,ECX
005BE990  66 8B 88 A9 C8 80 00      MOV CX,word ptr [EAX + 0x80c8a9]
LAB_005be997:
005BE997  33 C0                     XOR EAX,EAX
005BE999  6A 6A                     PUSH 0x6a
005BE99B  66 A1 39 C9 80 00         MOV AX,[0x0080c939]
005BE9A1  68 FB 00 00 00            PUSH 0xfb
005BE9A6  50                        PUSH EAX
005BE9A7  51                        PUSH ECX
005BE9A8  8B CB                     MOV ECX,EBX
005BE9AA  E8 5F 3B E4 FF            CALL 0x0040250e
005BE9AF  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BE9B2  3C 01                     CMP AL,0x1
005BE9B4  75 05                     JNZ 0x005be9bb
005BE9B6  83 C9 FF                  OR ECX,0xffffffff
005BE9B9  EB 11                     JMP 0x005be9cc
LAB_005be9bb:
005BE9BB  25 FF 00 00 00            AND EAX,0xff
005BE9C0  C1 E0 04                  SHL EAX,0x4
005BE9C3  33 C9                     XOR ECX,ECX
005BE9C5  66 8B 88 AB C8 80 00      MOV CX,word ptr [EAX + 0x80c8ab]
LAB_005be9cc:
005BE9CC  33 D2                     XOR EDX,EDX
005BE9CE  6A 6A                     PUSH 0x6a
005BE9D0  66 8B 15 3B C9 80 00      MOV DX,word ptr [0x0080c93b]
005BE9D7  68 8D 01 00 00            PUSH 0x18d
005BE9DC  52                        PUSH EDX
005BE9DD  51                        PUSH ECX
005BE9DE  8B CB                     MOV ECX,EBX
005BE9E0  E8 29 3B E4 FF            CALL 0x0040250e
005BE9E5  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BE9E8  3C 01                     CMP AL,0x1
005BE9EA  75 05                     JNZ 0x005be9f1
005BE9EC  83 C9 FF                  OR ECX,0xffffffff
005BE9EF  EB 11                     JMP 0x005bea02
LAB_005be9f1:
005BE9F1  25 FF 00 00 00            AND EAX,0xff
005BE9F6  C1 E0 04                  SHL EAX,0x4
005BE9F9  33 C9                     XOR ECX,ECX
005BE9FB  66 8B 88 AD C8 80 00      MOV CX,word ptr [EAX + 0x80c8ad]
LAB_005bea02:
005BEA02  33 C0                     XOR EAX,EAX
005BEA04  6A 6A                     PUSH 0x6a
005BEA06  66 A1 3D C9 80 00         MOV AX,[0x0080c93d]
005BEA0C  68 25 02 00 00            PUSH 0x225
005BEA11  50                        PUSH EAX
005BEA12  51                        PUSH ECX
005BEA13  8B CB                     MOV ECX,EBX
005BEA15  E8 F4 3A E4 FF            CALL 0x0040250e
005BEA1A  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BEA1D  3C 01                     CMP AL,0x1
005BEA1F  75 05                     JNZ 0x005bea26
005BEA21  83 C9 FF                  OR ECX,0xffffffff
005BEA24  EB 11                     JMP 0x005bea37
LAB_005bea26:
005BEA26  25 FF 00 00 00            AND EAX,0xff
005BEA2B  C1 E0 04                  SHL EAX,0x4
005BEA2E  33 C9                     XOR ECX,ECX
005BEA30  66 8B 88 AF C8 80 00      MOV CX,word ptr [EAX + 0x80c8af]
LAB_005bea37:
005BEA37  33 D2                     XOR EDX,EDX
005BEA39  68 CB 00 00 00            PUSH 0xcb
005BEA3E  66 8B 15 3F C9 80 00      MOV DX,word ptr [0x0080c93f]
005BEA45  6A 69                     PUSH 0x69
005BEA47  52                        PUSH EDX
005BEA48  51                        PUSH ECX
005BEA49  8B CB                     MOV ECX,EBX
005BEA4B  E8 BE 3A E4 FF            CALL 0x0040250e
005BEA50  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BEA53  3C 01                     CMP AL,0x1
005BEA55  75 05                     JNZ 0x005bea5c
005BEA57  83 C9 FF                  OR ECX,0xffffffff
005BEA5A  EB 11                     JMP 0x005bea6d
LAB_005bea5c:
005BEA5C  25 FF 00 00 00            AND EAX,0xff
005BEA61  C1 E0 04                  SHL EAX,0x4
005BEA64  33 C9                     XOR ECX,ECX
005BEA66  66 8B 88 B1 C8 80 00      MOV CX,word ptr [EAX + 0x80c8b1]
LAB_005bea6d:
005BEA6D  33 C0                     XOR EAX,EAX
005BEA6F  68 CB 00 00 00            PUSH 0xcb
005BEA74  66 A1 41 C9 80 00         MOV AX,[0x0080c941]
005BEA7A  68 FB 00 00 00            PUSH 0xfb
005BEA7F  50                        PUSH EAX
005BEA80  51                        PUSH ECX
005BEA81  8B CB                     MOV ECX,EBX
005BEA83  E8 86 3A E4 FF            CALL 0x0040250e
005BEA88  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BEA8B  3C 01                     CMP AL,0x1
005BEA8D  75 05                     JNZ 0x005bea94
005BEA8F  83 C9 FF                  OR ECX,0xffffffff
005BEA92  EB 11                     JMP 0x005beaa5
LAB_005bea94:
005BEA94  25 FF 00 00 00            AND EAX,0xff
005BEA99  C1 E0 04                  SHL EAX,0x4
005BEA9C  33 C9                     XOR ECX,ECX
005BEA9E  66 8B 88 B3 C8 80 00      MOV CX,word ptr [EAX + 0x80c8b3]
LAB_005beaa5:
005BEAA5  33 D2                     XOR EDX,EDX
005BEAA7  68 CB 00 00 00            PUSH 0xcb
005BEAAC  66 8B 15 43 C9 80 00      MOV DX,word ptr [0x0080c943]
005BEAB3  68 8D 01 00 00            PUSH 0x18d
005BEAB8  52                        PUSH EDX
005BEAB9  51                        PUSH ECX
005BEABA  8B CB                     MOV ECX,EBX
005BEABC  E8 4D 3A E4 FF            CALL 0x0040250e
005BEAC1  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BEAC4  3C 01                     CMP AL,0x1
005BEAC6  75 05                     JNZ 0x005beacd
005BEAC8  83 C9 FF                  OR ECX,0xffffffff
005BEACB  EB 11                     JMP 0x005beade
LAB_005beacd:
005BEACD  25 FF 00 00 00            AND EAX,0xff
005BEAD2  C1 E0 04                  SHL EAX,0x4
005BEAD5  33 C9                     XOR ECX,ECX
005BEAD7  66 8B 88 B5 C8 80 00      MOV CX,word ptr [EAX + 0x80c8b5]
LAB_005beade:
005BEADE  33 C0                     XOR EAX,EAX
005BEAE0  68 CB 00 00 00            PUSH 0xcb
005BEAE5  66 A1 45 C9 80 00         MOV AX,[0x0080c945]
005BEAEB  68 25 02 00 00            PUSH 0x225
005BEAF0  50                        PUSH EAX
005BEAF1  51                        PUSH ECX
005BEAF2  8B CB                     MOV ECX,EBX
005BEAF4  E8 15 3A E4 FF            CALL 0x0040250e
005BEAF9  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
005BEAFC  3C 03                     CMP AL,0x3
005BEAFE  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BEB01  0F 85 9D 00 00 00         JNZ 0x005beba4
005BEB07  3C 01                     CMP AL,0x1
005BEB09  75 07                     JNZ 0x005beb12
005BEB0B  A1 BB C8 80 00            MOV EAX,[0x0080c8bb]
005BEB10  EB 0E                     JMP 0x005beb20
LAB_005beb12:
005BEB12  25 FF 00 00 00            AND EAX,0xff
005BEB17  C1 E0 04                  SHL EAX,0x4
005BEB1A  8B 80 2B C8 80 00         MOV EAX,dword ptr [EAX + 0x80c82b]
LAB_005beb20:
005BEB20  50                        PUSH EAX
005BEB21  68 B8 CF 7C 00            PUSH 0x7ccfb8
005BEB26  68 3A F3 80 00            PUSH 0x80f33a
005BEB2B  FF D6                     CALL ESI
005BEB2D  8B 4B 73                  MOV ECX,dword ptr [EBX + 0x73]
005BEB30  83 C4 0C                  ADD ESP,0xc
005BEB33  6A 14                     PUSH 0x14
005BEB35  6A 62                     PUSH 0x62
005BEB37  68 1F 01 00 00            PUSH 0x11f
005BEB3C  68 8C 00 00 00            PUSH 0x8c
005BEB41  6A 00                     PUSH 0x0
005BEB43  51                        PUSH ECX
005BEB44  8B 8B 8B 00 00 00         MOV ECX,dword ptr [EBX + 0x8b]
005BEB4A  E8 41 1F 15 00            CALL 0x00710a90
005BEB4F  8B 8B 8B 00 00 00         MOV ECX,dword ptr [EBX + 0x8b]
005BEB55  6A 08                     PUSH 0x8
005BEB57  6A FF                     PUSH -0x1
005BEB59  6A FF                     PUSH -0x1
005BEB5B  68 3A F3 80 00            PUSH 0x80f33a
005BEB60  E8 5B 2E 15 00            CALL 0x007119c0
005BEB65  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BEB68  3C 01                     CMP AL,0x1
005BEB6A  75 07                     JNZ 0x005beb73
005BEB6C  A1 BF C8 80 00            MOV EAX,[0x0080c8bf]
005BEB71  EB 0E                     JMP 0x005beb81
LAB_005beb73:
005BEB73  25 FF 00 00 00            AND EAX,0xff
005BEB78  C1 E0 04                  SHL EAX,0x4
005BEB7B  8B 80 2F C8 80 00         MOV EAX,dword ptr [EAX + 0x80c82f]
LAB_005beb81:
005BEB81  50                        PUSH EAX
005BEB82  68 B8 CF 7C 00            PUSH 0x7ccfb8
005BEB87  68 3A F3 80 00            PUSH 0x80f33a
005BEB8C  FF D6                     CALL ESI
005BEB8E  83 C4 0C                  ADD ESP,0xc
005BEB91  6A 14                     PUSH 0x14
005BEB93  6A 62                     PUSH 0x62
005BEB95  68 1F 01 00 00            PUSH 0x11f
005BEB9A  68 2A 01 00 00            PUSH 0x12a
005BEB9F  E9 F6 00 00 00            JMP 0x005bec9a
LAB_005beba4:
005BEBA4  3C 01                     CMP AL,0x1
005BEBA6  75 07                     JNZ 0x005bebaf
005BEBA8  A1 B7 C8 80 00            MOV EAX,[0x0080c8b7]
005BEBAD  EB 0E                     JMP 0x005bebbd
LAB_005bebaf:
005BEBAF  25 FF 00 00 00            AND EAX,0xff
005BEBB4  C1 E0 04                  SHL EAX,0x4
005BEBB7  8B 80 27 C8 80 00         MOV EAX,dword ptr [EAX + 0x80c827]
LAB_005bebbd:
005BEBBD  50                        PUSH EAX
005BEBBE  68 B4 CF 7C 00            PUSH 0x7ccfb4
005BEBC3  68 3A F3 80 00            PUSH 0x80f33a
005BEBC8  FF D6                     CALL ESI
005BEBCA  8B 43 73                  MOV EAX,dword ptr [EBX + 0x73]
005BEBCD  83 C4 0C                  ADD ESP,0xc
005BEBD0  8B 8B 8B 00 00 00         MOV ECX,dword ptr [EBX + 0x8b]
005BEBD6  6A 14                     PUSH 0x14
005BEBD8  6A 3E                     PUSH 0x3e
005BEBDA  68 1F 01 00 00            PUSH 0x11f
005BEBDF  6A 75                     PUSH 0x75
005BEBE1  6A 00                     PUSH 0x0
005BEBE3  50                        PUSH EAX
005BEBE4  E8 A7 1E 15 00            CALL 0x00710a90
005BEBE9  8B 8B 8B 00 00 00         MOV ECX,dword ptr [EBX + 0x8b]
005BEBEF  6A 08                     PUSH 0x8
005BEBF1  6A FF                     PUSH -0x1
005BEBF3  6A FF                     PUSH -0x1
005BEBF5  68 3A F3 80 00            PUSH 0x80f33a
005BEBFA  E8 C1 2D 15 00            CALL 0x007119c0
005BEBFF  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BEC02  3C 01                     CMP AL,0x1
005BEC04  75 07                     JNZ 0x005bec0d
005BEC06  A1 BB C8 80 00            MOV EAX,[0x0080c8bb]
005BEC0B  EB 0E                     JMP 0x005bec1b
LAB_005bec0d:
005BEC0D  25 FF 00 00 00            AND EAX,0xff
005BEC12  C1 E0 04                  SHL EAX,0x4
005BEC15  8B 80 2B C8 80 00         MOV EAX,dword ptr [EAX + 0x80c82b]
LAB_005bec1b:
005BEC1B  50                        PUSH EAX
005BEC1C  68 B8 CF 7C 00            PUSH 0x7ccfb8
005BEC21  68 3A F3 80 00            PUSH 0x80f33a
005BEC26  FF D6                     CALL ESI
005BEC28  8B 4B 73                  MOV ECX,dword ptr [EBX + 0x73]
005BEC2B  83 C4 0C                  ADD ESP,0xc
005BEC2E  6A 14                     PUSH 0x14
005BEC30  6A 62                     PUSH 0x62
005BEC32  68 1F 01 00 00            PUSH 0x11f
005BEC37  68 CC 00 00 00            PUSH 0xcc
005BEC3C  6A 00                     PUSH 0x0
005BEC3E  51                        PUSH ECX
005BEC3F  8B 8B 8B 00 00 00         MOV ECX,dword ptr [EBX + 0x8b]
005BEC45  E8 46 1E 15 00            CALL 0x00710a90
005BEC4A  8B 8B 8B 00 00 00         MOV ECX,dword ptr [EBX + 0x8b]
005BEC50  6A 08                     PUSH 0x8
005BEC52  6A FF                     PUSH -0x1
005BEC54  6A FF                     PUSH -0x1
005BEC56  68 3A F3 80 00            PUSH 0x80f33a
005BEC5B  E8 60 2D 15 00            CALL 0x007119c0
005BEC60  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BEC63  3C 01                     CMP AL,0x1
005BEC65  75 07                     JNZ 0x005bec6e
005BEC67  A1 BF C8 80 00            MOV EAX,[0x0080c8bf]
005BEC6C  EB 0E                     JMP 0x005bec7c
LAB_005bec6e:
005BEC6E  25 FF 00 00 00            AND EAX,0xff
005BEC73  C1 E0 04                  SHL EAX,0x4
005BEC76  8B 80 2F C8 80 00         MOV EAX,dword ptr [EAX + 0x80c82f]
LAB_005bec7c:
005BEC7C  50                        PUSH EAX
005BEC7D  68 B8 CF 7C 00            PUSH 0x7ccfb8
005BEC82  68 3A F3 80 00            PUSH 0x80f33a
005BEC87  FF D6                     CALL ESI
005BEC89  83 C4 0C                  ADD ESP,0xc
005BEC8C  6A 14                     PUSH 0x14
005BEC8E  6A 62                     PUSH 0x62
005BEC90  68 1F 01 00 00            PUSH 0x11f
005BEC95  68 46 01 00 00            PUSH 0x146
LAB_005bec9a:
005BEC9A  8B 53 73                  MOV EDX,dword ptr [EBX + 0x73]
005BEC9D  8B 8B 8B 00 00 00         MOV ECX,dword ptr [EBX + 0x8b]
005BECA3  6A 00                     PUSH 0x0
005BECA5  52                        PUSH EDX
005BECA6  E8 E5 1D 15 00            CALL 0x00710a90
005BECAB  8B 8B 8B 00 00 00         MOV ECX,dword ptr [EBX + 0x8b]
005BECB1  6A 08                     PUSH 0x8
005BECB3  6A FF                     PUSH -0x1
005BECB5  6A FF                     PUSH -0x1
005BECB7  68 3A F3 80 00            PUSH 0x80f33a
005BECBC  E8 FF 2C 15 00            CALL 0x007119c0
005BECC1  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BECC4  3C 01                     CMP AL,0x1
005BECC6  75 07                     JNZ 0x005beccf
005BECC8  A1 C3 C8 80 00            MOV EAX,[0x0080c8c3]
005BECCD  EB 0E                     JMP 0x005becdd
LAB_005beccf:
005BECCF  25 FF 00 00 00            AND EAX,0xff
005BECD4  C1 E0 04                  SHL EAX,0x4
005BECD7  8B 80 33 C8 80 00         MOV EAX,dword ptr [EAX + 0x80c833]
LAB_005becdd:
005BECDD  80 7D E8 FF               CMP byte ptr [EBP + -0x18],0xff
005BECE1  74 12                     JZ 0x005becf5
005BECE3  8A 4D F4                  MOV CL,byte ptr [EBP + -0xc]
005BECE6  80 E9 03                  SUB CL,0x3
005BECE9  F6 D9                     NEG CL
005BECEB  1B C9                     SBB ECX,ECX
005BECED  83 E1 F9                  AND ECX,0xfffffff9
005BECF0  83 C1 14                  ADD ECX,0x14
005BECF3  EB 02                     JMP 0x005becf7
LAB_005becf5:
005BECF5  33 C9                     XOR ECX,ECX
LAB_005becf7:
005BECF7  85 C0                     TEST EAX,EAX
005BECF9  7C 33                     JL 0x005bed2e
005BECFB  85 C9                     TEST ECX,ECX
005BECFD  7E 2F                     JLE 0x005bed2e
005BECFF  6B C0 26                  IMUL EAX,EAX,0x26
005BED02  99                        CDQ
005BED03  F7 F9                     IDIV ECX
005BED05  85 C0                     TEST EAX,EAX
005BED07  7E 25                     JLE 0x005bed2e
005BED09  BE C7 01 00 00            MOV ESI,0x1c7
005BED0E  8B F8                     MOV EDI,EAX
LAB_005bed10:
005BED10  8B 43 6F                  MOV EAX,dword ptr [EBX + 0x6f]
005BED13  8B 4B 73                  MOV ECX,dword ptr [EBX + 0x73]
005BED16  50                        PUSH EAX
005BED17  6A 06                     PUSH 0x6
005BED19  68 21 01 00 00            PUSH 0x121
005BED1E  56                        PUSH ESI
005BED1F  51                        PUSH ECX
005BED20  E8 04 45 E4 FF            CALL 0x00403229
005BED25  83 C4 14                  ADD ESP,0x14
005BED28  83 C6 06                  ADD ESI,0x6
005BED2B  4F                        DEC EDI
005BED2C  75 E2                     JNZ 0x005bed10
LAB_005bed2e:
005BED2E  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
005BED31  84 C0                     TEST AL,AL
005BED33  0F 84 B6 00 00 00         JZ 0x005bedef
005BED39  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005BED3C  25 FF 00 00 00            AND EAX,0xff
005BED41  48                        DEC EAX
005BED42  74 18                     JZ 0x005bed5c
005BED44  48                        DEC EAX
005BED45  74 0C                     JZ 0x005bed53
005BED47  48                        DEC EAX
005BED48  75 19                     JNZ 0x005bed63
005BED4A  C7 45 FC F2 23 00 00      MOV dword ptr [EBP + -0x4],0x23f2
005BED51  EB 10                     JMP 0x005bed63
LAB_005bed53:
005BED53  C7 45 FC F0 23 00 00      MOV dword ptr [EBP + -0x4],0x23f0
005BED5A  EB 07                     JMP 0x005bed63
LAB_005bed5c:
005BED5C  C7 45 FC F1 23 00 00      MOV dword ptr [EBP + -0x4],0x23f1
LAB_005bed63:
005BED63  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005BED69  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BED6C  52                        PUSH EDX
005BED6D  50                        PUSH EAX
005BED6E  E8 CD 13 0F 00            CALL 0x006b0140
005BED73  8B F8                     MOV EDI,EAX
005BED75  83 C9 FF                  OR ECX,0xffffffff
005BED78  33 C0                     XOR EAX,EAX
005BED7A  6A 0A                     PUSH 0xa
005BED7C  F2 AE                     SCASB.REPNE ES:EDI
005BED7E  F7 D1                     NOT ECX
005BED80  2B F9                     SUB EDI,ECX
005BED82  68 3A F3 80 00            PUSH 0x80f33a
005BED87  8B D1                     MOV EDX,ECX
005BED89  8B F7                     MOV ESI,EDI
005BED8B  BF 3A F3 80 00            MOV EDI,0x80f33a
005BED90  C1 E9 02                  SHR ECX,0x2
005BED93  F3 A5                     MOVSD.REP ES:EDI,ESI
005BED95  8B CA                     MOV ECX,EDX
005BED97  83 E1 03                  AND ECX,0x3
005BED9A  F3 A4                     MOVSB.REP ES:EDI,ESI
005BED9C  E8 BF F7 16 00            CALL 0x0072e560
005BEDA1  83 C4 08                  ADD ESP,0x8
005BEDA4  85 C0                     TEST EAX,EAX
005BEDA6  74 12                     JZ 0x005bedba
LAB_005beda8:
005BEDA8  6A 0A                     PUSH 0xa
005BEDAA  50                        PUSH EAX
005BEDAB  C6 00 20                  MOV byte ptr [EAX],0x20
005BEDAE  E8 AD F7 16 00            CALL 0x0072e560
005BEDB3  83 C4 08                  ADD ESP,0x8
005BEDB6  85 C0                     TEST EAX,EAX
005BEDB8  75 EE                     JNZ 0x005beda8
LAB_005bedba:
005BEDBA  8B 43 73                  MOV EAX,dword ptr [EBX + 0x73]
005BEDBD  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BEDC3  6A 0F                     PUSH 0xf
005BEDC5  68 90 01 00 00            PUSH 0x190
005BEDCA  68 45 01 00 00            PUSH 0x145
005BEDCF  6A 37                     PUSH 0x37
005BEDD1  6A 00                     PUSH 0x0
005BEDD3  50                        PUSH EAX
005BEDD4  E8 B7 1C 15 00            CALL 0x00710a90
005BEDD9  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BEDDF  6A 00                     PUSH 0x0
005BEDE1  6A FF                     PUSH -0x1
005BEDE3  6A 00                     PUSH 0x0
005BEDE5  68 3A F3 80 00            PUSH 0x80f33a
005BEDEA  E8 D1 2B 15 00            CALL 0x007119c0
LAB_005bedef:
005BEDEF  8B 4B 73                  MOV ECX,dword ptr [EBX + 0x73]
005BEDF2  6A 0F                     PUSH 0xf
005BEDF4  68 E6 00 00 00            PUSH 0xe6
005BEDF9  68 45 01 00 00            PUSH 0x145
005BEDFE  68 F4 01 00 00            PUSH 0x1f4
005BEE03  6A 00                     PUSH 0x0
005BEE05  51                        PUSH ECX
005BEE06  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BEE0C  E8 7F 1C 15 00            CALL 0x00710a90
005BEE11  8A 43 69                  MOV AL,byte ptr [EBX + 0x69]
005BEE14  3C 01                     CMP AL,0x1
005BEE16  75 17                     JNZ 0x005bee2f
005BEE18  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005BEE1E  6A 02                     PUSH 0x2
005BEE20  6A FF                     PUSH -0x1
005BEE22  6A FD                     PUSH -0x3
005BEE24  52                        PUSH EDX
005BEE25  68 41 24 00 00            PUSH 0x2441
005BEE2A  E9 3D 01 00 00            JMP 0x005bef6c
LAB_005bee2f:
005BEE2F  8A 0D 40 CC 80 00         MOV CL,byte ptr [0x0080cc40]
005BEE35  84 C9                     TEST CL,CL
005BEE37  74 51                     JZ 0x005bee8a
005BEE39  25 FF 00 00 00            AND EAX,0xff
005BEE3E  33 C9                     XOR ECX,ECX
005BEE40  6A 02                     PUSH 0x2
005BEE42  6A FF                     PUSH -0x1
005BEE44  8A 88 3D C8 80 00         MOV CL,byte ptr [EAX + 0x80c83d]
005BEE4A  6A FD                     PUSH -0x3
005BEE4C  8B C1                     MOV EAX,ECX
005BEE4E  33 C9                     XOR ECX,ECX
005BEE50  8A 0D 46 C8 80 00         MOV CL,byte ptr [0x0080c846]
005BEE56  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005BEE59  8D 34 C9                  LEA ESI,[ECX + ECX*0x8]
005BEE5C  8A 8C C0 9B C9 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x80c99b]
005BEE63  8A 94 F6 9B C9 80 00      MOV DL,byte ptr [ESI + ESI*0x8 + 0x80c99b]
005BEE6A  3A D1                     CMP DL,CL
005BEE6C  75 10                     JNZ 0x005bee7e
LAB_005bee6e:
005BEE6E  A1 18 76 80 00            MOV EAX,[0x00807618]
005BEE73  50                        PUSH EAX
005BEE74  68 43 24 00 00            PUSH 0x2443
005BEE79  E9 EE 00 00 00            JMP 0x005bef6c
LAB_005bee7e:
005BEE7E  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005BEE84  51                        PUSH ECX
005BEE85  E9 DD 00 00 00            JMP 0x005bef67
LAB_005bee8a:
005BEE8A  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
005BEE90  25 FF 00 00 00            AND EAX,0xff
005BEE95  84 C9                     TEST CL,CL
005BEE97  8A 80 3D C8 80 00         MOV AL,byte ptr [EAX + 0x80c83d]
005BEE9D  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005BEEA0  74 30                     JZ 0x005beed2
005BEEA2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BEEA5  33 C9                     XOR ECX,ECX
005BEEA7  8A 0D 46 C8 80 00         MOV CL,byte ptr [0x0080c846]
005BEEAD  25 FF 00 00 00            AND EAX,0xff
005BEEB2  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005BEEB5  8D 34 C9                  LEA ESI,[ECX + ECX*0x8]
005BEEB8  8A 94 C0 EA 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
005BEEBF  8A 8C F6 EA 87 80 00      MOV CL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
005BEEC6  33 C0                     XOR EAX,EAX
005BEEC8  3A D1                     CMP DL,CL
005BEECA  0F 95 C0                  SETNZ AL
005BEECD  E9 80 00 00 00            JMP 0x005bef52
LAB_005beed2:
005BEED2  8A 0D 46 C8 80 00         MOV CL,byte ptr [0x0080c846]
005BEED8  3A C8                     CMP CL,AL
005BEEDA  74 6B                     JZ 0x005bef47
005BEEDC  33 C0                     XOR EAX,EAX
005BEEDE  8A C1                     MOV AL,CL
005BEEE0  8B F0                     MOV ESI,EAX
005BEEE2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BEEE5  25 FF 00 00 00            AND EAX,0xff
005BEEEA  8A 8C F0 4F 8A 80 00      MOV CL,byte ptr [EAX + ESI*0x8 + 0x808a4f]
005BEEF1  84 C9                     TEST CL,CL
005BEEF3  75 12                     JNZ 0x005bef07
005BEEF5  8A 94 C6 4F 8A 80 00      MOV DL,byte ptr [ESI + EAX*0x8 + 0x808a4f]
005BEEFC  84 D2                     TEST DL,DL
005BEEFE  75 07                     JNZ 0x005bef07
005BEF00  B8 FE FF FF FF            MOV EAX,0xfffffffe
005BEF05  EB 42                     JMP 0x005bef49
LAB_005bef07:
005BEF07  80 F9 01                  CMP CL,0x1
005BEF0A  75 10                     JNZ 0x005bef1c
005BEF0C  8A 94 C6 4F 8A 80 00      MOV DL,byte ptr [ESI + EAX*0x8 + 0x808a4f]
005BEF13  84 D2                     TEST DL,DL
005BEF15  75 05                     JNZ 0x005bef1c
005BEF17  83 C8 FF                  OR EAX,0xffffffff
005BEF1A  EB 2D                     JMP 0x005bef49
LAB_005bef1c:
005BEF1C  84 C9                     TEST CL,CL
005BEF1E  75 11                     JNZ 0x005bef31
005BEF20  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
005BEF28  75 07                     JNZ 0x005bef31
005BEF2A  B8 01 00 00 00            MOV EAX,0x1
005BEF2F  EB 18                     JMP 0x005bef49
LAB_005bef31:
005BEF31  80 F9 01                  CMP CL,0x1
005BEF34  75 11                     JNZ 0x005bef47
005BEF36  80 BC C6 4F 8A 80 00 01   CMP byte ptr [ESI + EAX*0x8 + 0x808a4f],0x1
005BEF3E  75 07                     JNZ 0x005bef47
005BEF40  B8 02 00 00 00            MOV EAX,0x2
005BEF45  EB 02                     JMP 0x005bef49
LAB_005bef47:
005BEF47  33 C0                     XOR EAX,EAX
LAB_005bef49:
005BEF49  33 C9                     XOR ECX,ECX
005BEF4B  85 C0                     TEST EAX,EAX
005BEF4D  0F 9C C1                  SETL CL
005BEF50  8B C1                     MOV EAX,ECX
LAB_005bef52:
005BEF52  6A 02                     PUSH 0x2
005BEF54  6A FF                     PUSH -0x1
005BEF56  85 C0                     TEST EAX,EAX
005BEF58  6A FD                     PUSH -0x3
005BEF5A  0F 84 0E FF FF FF         JZ 0x005bee6e
005BEF60  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005BEF66  52                        PUSH EDX
LAB_005bef67:
005BEF67  68 42 24 00 00            PUSH 0x2442
LAB_005bef6c:
005BEF6C  E8 CF 11 0F 00            CALL 0x006b0140
005BEF71  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BEF77  50                        PUSH EAX
005BEF78  E8 43 2A 15 00            CALL 0x007119c0
005BEF7D  E9 36 02 00 00            JMP 0x005bf1b8
LAB_005bef82:
005BEF82  8B 43 73                  MOV EAX,dword ptr [EBX + 0x73]
005BEF85  6A 0F                     PUSH 0xf
005BEF87  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005BEF8A  83 E9 41                  SUB ECX,0x41
005BEF8D  51                        PUSH ECX
005BEF8E  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BEF94  6A 0A                     PUSH 0xa
005BEF96  6A 37                     PUSH 0x37
005BEF98  6A 00                     PUSH 0x0
005BEF9A  50                        PUSH EAX
005BEF9B  E8 F0 1A 15 00            CALL 0x00710a90
005BEFA0  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005BEFA6  6A 00                     PUSH 0x0
005BEFA8  6A FF                     PUSH -0x1
005BEFAA  6A FF                     PUSH -0x1
005BEFAC  52                        PUSH EDX
005BEFAD  68 40 24 00 00            PUSH 0x2440
005BEFB2  E8 89 11 0F 00            CALL 0x006b0140
005BEFB7  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BEFBD  50                        PUSH EAX
005BEFBE  E8 FD 29 15 00            CALL 0x007119c0
005BEFC3  8B 43 73                  MOV EAX,dword ptr [EBX + 0x73]
005BEFC6  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BEFCC  6A 00                     PUSH 0x0
005BEFCE  6A 22                     PUSH 0x22
005BEFD0  68 36 01 00 00            PUSH 0x136
005BEFD5  6A 00                     PUSH 0x0
005BEFD7  6A 00                     PUSH 0x0
005BEFD9  6A 00                     PUSH 0x0
005BEFDB  50                        PUSH EAX
005BEFDC  E8 BF 1B 15 00            CALL 0x00710ba0
005BEFE1  85 C0                     TEST EAX,EAX
005BEFE3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005BEFE6  0F 84 16 01 00 00         JZ 0x005bf102
005BEFEC  33 C9                     XOR ECX,ECX
005BEFEE  C6 45 F4 00               MOV byte ptr [EBP + -0xc],0x0
005BEFF2  8A 0D 3E C8 80 00         MOV CL,byte ptr [0x0080c83e]
005BEFF8  41                        INC ECX
005BEFF9  85 C9                     TEST ECX,ECX
005BEFFB  0F 8E F6 00 00 00         JLE 0x005bf0f7
005BF001  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_005bf004:
005BF004  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
005BF007  84 C0                     TEST AL,AL
005BF009  75 08                     JNZ 0x005bf013
005BF00B  8A 15 46 C8 80 00         MOV DL,byte ptr [0x0080c846]
005BF011  EB 0E                     JMP 0x005bf021
LAB_005bf013:
005BF013  8B D7                     MOV EDX,EDI
005BF015  81 E2 FF 00 00 00         AND EDX,0xff
005BF01B  8A 92 3E C8 80 00         MOV DL,byte ptr [EDX + 0x80c83e]
LAB_005bf021:
005BF021  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005BF026  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
005BF02A  84 C0                     TEST AL,AL
005BF02C  0F 86 A2 00 00 00         JBE 0x005bf0d4
LAB_005bf032:
005BF032  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005BF035  8B CE                     MOV ECX,ESI
005BF037  81 E1 FF 00 00 00         AND ECX,0xff
005BF03D  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
005BF040  C1 E0 03                  SHL EAX,0x3
005BF043  2B C1                     SUB EAX,ECX
005BF045  C1 E0 02                  SHL EAX,0x2
005BF048  38 90 F4 8A 80 00         CMP byte ptr [EAX + 0x808af4],DL
005BF04E  75 0A                     JNZ 0x005bf05a
005BF050  8A 88 F5 8A 80 00         MOV CL,byte ptr [EAX + 0x808af5]
005BF056  84 C9                     TEST CL,CL
005BF058  75 14                     JNZ 0x005bf06e
LAB_005bf05a:
005BF05A  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
005BF05D  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
005BF063  FE C0                     INC AL
005BF065  3A C1                     CMP AL,CL
005BF067  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005BF06A  72 C6                     JC 0x005bf032
005BF06C  EB 66                     JMP 0x005bf0d4
LAB_005bf06e:
005BF06E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005BF071  68 4C 00 00 01            PUSH 0x100004c
005BF076  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005BF079  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BF07C  51                        PUSH ECX
005BF07D  52                        PUSH EDX
005BF07E  6A 00                     PUSH 0x0
005BF080  6A 00                     PUSH 0x0
005BF082  6A 00                     PUSH 0x0
005BF084  50                        PUSH EAX
005BF085  E8 E6 50 0F 00            CALL 0x006b4170
005BF08A  81 E6 FF 00 00 00         AND ESI,0xff
005BF090  6A 00                     PUSH 0x0
005BF092  8B C6                     MOV EAX,ESI
005BF094  6A FF                     PUSH -0x1
005BF096  6A 00                     PUSH 0x0
005BF098  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005BF09B  C1 E1 03                  SHL ECX,0x3
005BF09E  2B C8                     SUB ECX,EAX
005BF0A0  8D 14 8D B0 8A 80 00      LEA EDX,[ECX*0x4 + 0x808ab0]
005BF0A7  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BF0AD  52                        PUSH EDX
005BF0AE  E8 0D 29 15 00            CALL 0x007119c0
005BF0B3  81 E7 FF 00 00 00         AND EDI,0xff
005BF0B9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005BF0BC  6B FF 26                  IMUL EDI,EDI,0x26
005BF0BF  8B 4B 73                  MOV ECX,dword ptr [EBX + 0x73]
005BF0C2  50                        PUSH EAX
005BF0C3  83 C7 2C                  ADD EDI,0x2c
005BF0C6  6A 01                     PUSH 0x1
005BF0C8  57                        PUSH EDI
005BF0C9  6A 38                     PUSH 0x38
005BF0CB  51                        PUSH ECX
005BF0CC  E8 58 41 E4 FF            CALL 0x00403229
005BF0D1  83 C4 14                  ADD ESP,0x14
LAB_005bf0d4:
005BF0D4  8A 45 F4                  MOV AL,byte ptr [EBP + -0xc]
005BF0D7  33 D2                     XOR EDX,EDX
005BF0D9  8A 15 3E C8 80 00         MOV DL,byte ptr [0x0080c83e]
005BF0DF  FE C0                     INC AL
005BF0E1  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
005BF0E4  42                        INC EDX
005BF0E5  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
005BF0E8  8B C7                     MOV EAX,EDI
005BF0EA  25 FF 00 00 00            AND EAX,0xff
005BF0EF  3B C2                     CMP EAX,EDX
005BF0F1  0F 8C 0D FF FF FF         JL 0x005bf004
LAB_005bf0f7:
005BF0F7  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BF0FD  E8 FE 1D 15 00            CALL 0x00710f00
LAB_005bf102:
005BF102  8A 43 68                  MOV AL,byte ptr [EBX + 0x68]
005BF105  84 C0                     TEST AL,AL
005BF107  74 66                     JZ 0x005bf16f
005BF109  B9 08 00 00 00            MOV ECX,0x8
005BF10E  33 C0                     XOR EAX,EAX
005BF110  8D BB A7 02 00 00         LEA EDI,[EBX + 0x2a7]
005BF116  33 F6                     XOR ESI,ESI
005BF118  F3 AB                     STOSD.REP ES:EDI
005BF11A  33 C9                     XOR ECX,ECX
005BF11C  8A 0D 3E C8 80 00         MOV CL,byte ptr [0x0080c83e]
005BF122  41                        INC ECX
005BF123  85 C9                     TEST ECX,ECX
005BF125  0F 8E 8D 00 00 00         JLE 0x005bf1b8
LAB_005bf12b:
005BF12B  85 F6                     TEST ESI,ESI
005BF12D  74 15                     JZ 0x005bf144
005BF12F  8B 04 B5 43 C9 80 00      MOV EAX,dword ptr [ESI*0x4 + 0x80c943]
005BF136  85 C0                     TEST EAX,EAX
005BF138  75 25                     JNZ 0x005bf15f
005BF13A  8B 93 A3 02 00 00         MOV EDX,dword ptr [EBX + 0x2a3]
005BF140  56                        PUSH ESI
005BF141  52                        PUSH EDX
005BF142  EB 12                     JMP 0x005bf156
LAB_005bf144:
005BF144  A1 63 C9 80 00            MOV EAX,[0x0080c963]
005BF149  85 C0                     TEST EAX,EAX
005BF14B  75 12                     JNZ 0x005bf15f
005BF14D  8B 83 A3 02 00 00         MOV EAX,dword ptr [EBX + 0x2a3]
005BF153  6A 00                     PUSH 0x0
005BF155  50                        PUSH EAX
LAB_005bf156:
005BF156  6A 00                     PUSH 0x0
005BF158  8B CB                     MOV ECX,EBX
005BF15A  E8 9F 25 E4 FF            CALL 0x004016fe
LAB_005bf15f:
005BF15F  33 C9                     XOR ECX,ECX
005BF161  46                        INC ESI
005BF162  8A 0D 3E C8 80 00         MOV CL,byte ptr [0x0080c83e]
005BF168  41                        INC ECX
005BF169  3B F1                     CMP ESI,ECX
005BF16B  7C BE                     JL 0x005bf12b
005BF16D  EB 49                     JMP 0x005bf1b8
LAB_005bf16f:
005BF16F  33 D2                     XOR EDX,EDX
005BF171  33 F6                     XOR ESI,ESI
005BF173  8A 15 3E C8 80 00         MOV DL,byte ptr [0x0080c83e]
005BF179  42                        INC EDX
005BF17A  85 D2                     TEST EDX,EDX
005BF17C  7E 3A                     JLE 0x005bf1b8
LAB_005bf17e:
005BF17E  85 F6                     TEST ESI,ESI
005BF180  74 12                     JZ 0x005bf194
005BF182  8B 83 A3 02 00 00         MOV EAX,dword ptr [EBX + 0x2a3]
005BF188  8B 0C B5 43 C9 80 00      MOV ECX,dword ptr [ESI*0x4 + 0x80c943]
005BF18F  56                        PUSH ESI
005BF190  50                        PUSH EAX
005BF191  51                        PUSH ECX
005BF192  EB 0F                     JMP 0x005bf1a3
LAB_005bf194:
005BF194  8B 93 A3 02 00 00         MOV EDX,dword ptr [EBX + 0x2a3]
005BF19A  A1 63 C9 80 00            MOV EAX,[0x0080c963]
005BF19F  6A 00                     PUSH 0x0
005BF1A1  52                        PUSH EDX
005BF1A2  50                        PUSH EAX
LAB_005bf1a3:
005BF1A3  8B CB                     MOV ECX,EBX
005BF1A5  E8 54 25 E4 FF            CALL 0x004016fe
005BF1AA  33 C9                     XOR ECX,ECX
005BF1AC  46                        INC ESI
005BF1AD  8A 0D 3E C8 80 00         MOV CL,byte ptr [0x0080c83e]
005BF1B3  41                        INC ECX
005BF1B4  3B F1                     CMP ESI,ECX
005BF1B6  7C C6                     JL 0x005bf17e
LAB_005bf1b8:
005BF1B8  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005BF1BB  6A 01                     PUSH 0x1
005BF1BD  8D 50 28                  LEA EDX,[EAX + 0x28]
005BF1C0  52                        PUSH EDX
005BF1C1  50                        PUSH EAX
005BF1C2  E8 19 5E 0F 00            CALL 0x006b4fe0
005BF1C7  50                        PUSH EAX
005BF1C8  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005BF1CB  33 C9                     XOR ECX,ECX
005BF1CD  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
005BF1D1  51                        PUSH ECX
005BF1D2  6A 32                     PUSH 0x32
005BF1D4  68 90 01 00 00            PUSH 0x190
005BF1D9  E8 E2 5E 0F 00            CALL 0x006b50c0
005BF1DE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005BF1E1  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005BF1E4  85 F6                     TEST ESI,ESI
005BF1E6  75 18                     JNZ 0x005bf200
005BF1E8  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
005BF1EC  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
005BF1F0  83 C6 1F                  ADD ESI,0x1f
005BF1F3  C1 EE 03                  SHR ESI,0x3
005BF1F6  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
005BF1FC  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_005bf200:
005BF200  50                        PUSH EAX
005BF201  E8 9A 5D 0F 00            CALL 0x006b4fa0
005BF206  8B CE                     MOV ECX,ESI
005BF208  8B F8                     MOV EDI,EAX
005BF20A  8B D1                     MOV EDX,ECX
005BF20C  B8 4C 4C 4C 4C            MOV EAX,0x4c4c4c4c
005BF211  C1 E9 02                  SHR ECX,0x2
005BF214  F3 AB                     STOSD.REP ES:EDI
005BF216  8B CA                     MOV ECX,EDX
005BF218  6A 0D                     PUSH 0xd
005BF21A  83 E1 03                  AND ECX,0x3
005BF21D  6A 18                     PUSH 0x18
005BF21F  F3 AA                     STOSB.REP ES:EDI
005BF221  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005BF224  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005BF227  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BF22A  83 E9 04                  SUB ECX,0x4
005BF22D  83 EA 04                  SUB EDX,0x4
005BF230  51                        PUSH ECX
005BF231  52                        PUSH EDX
005BF232  6A 02                     PUSH 0x2
005BF234  6A 02                     PUSH 0x2
005BF236  6A 00                     PUSH 0x0
005BF238  50                        PUSH EAX
005BF239  E8 A2 6C 0F 00            CALL 0x006b5ee0
005BF23E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005BF241  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005BF244  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BF247  83 E9 0A                  SUB ECX,0xa
005BF24A  83 EA 69                  SUB EDX,0x69
005BF24D  51                        PUSH ECX
005BF24E  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BF254  52                        PUSH EDX
005BF255  6A 05                     PUSH 0x5
005BF257  6A 05                     PUSH 0x5
005BF259  6A 00                     PUSH 0x0
005BF25B  50                        PUSH EAX
005BF25C  E8 2F 18 15 00            CALL 0x00710a90
005BF261  A1 18 76 80 00            MOV EAX,[0x00807618]
005BF266  6A 00                     PUSH 0x0
005BF268  6A FF                     PUSH -0x1
005BF26A  6A FF                     PUSH -0x1
005BF26C  50                        PUSH EAX
005BF26D  68 44 24 00 00            PUSH 0x2444
005BF272  E8 C9 0E 0F 00            CALL 0x006b0140
005BF277  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BF27D  50                        PUSH EAX
005BF27E  E8 3D 27 15 00            CALL 0x007119c0
005BF283  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005BF286  68 00 00 00 01            PUSH 0x1000000
005BF28B  6A 1C                     PUSH 0x1c
005BF28D  6A 50                     PUSH 0x50
005BF28F  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005BF292  83 E8 1C                  SUB EAX,0x1c
005BF295  99                        CDQ
005BF296  2B C2                     SUB EAX,EDX
005BF298  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005BF29B  D1 F8                     SAR EAX,0x1
005BF29D  83 EA 69                  SUB EDX,0x69
005BF2A0  50                        PUSH EAX
005BF2A1  52                        PUSH EDX
005BF2A2  6A 00                     PUSH 0x0
005BF2A4  51                        PUSH ECX
005BF2A5  E8 C6 4E 0F 00            CALL 0x006b4170
005BF2AA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005BF2AD  6A 0D                     PUSH 0xd
005BF2AF  6A 18                     PUSH 0x18
005BF2B1  6A 1C                     PUSH 0x1c
005BF2B3  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005BF2B6  6A 50                     PUSH 0x50
005BF2B8  83 E8 1C                  SUB EAX,0x1c
005BF2BB  99                        CDQ
005BF2BC  2B C2                     SUB EAX,EDX
005BF2BE  D1 F8                     SAR EAX,0x1
005BF2C0  50                        PUSH EAX
005BF2C1  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005BF2C4  83 E8 69                  SUB EAX,0x69
005BF2C7  50                        PUSH EAX
005BF2C8  6A 00                     PUSH 0x0
005BF2CA  51                        PUSH ECX
005BF2CB  E8 10 6C 0F 00            CALL 0x006b5ee0
005BF2D0  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
005BF2D5  F7 25 3A C8 80 00         MUL dword ptr [0x0080c83a]
005BF2DB  C1 EA 0B                  SHR EDX,0xb
005BF2DE  84 D2                     TEST DL,DL
005BF2E0  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005BF2E3  74 11                     JZ 0x005bf2f6
005BF2E5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005BF2E8  81 E1 FF 00 00 00         AND ECX,0xff
005BF2EE  51                        PUSH ECX
005BF2EF  68 9C 21 7C 00            PUSH 0x7c219c
005BF2F4  EB 0A                     JMP 0x005bf300
LAB_005bf2f6:
005BF2F6  68 98 21 7C 00            PUSH 0x7c2198
005BF2FB  68 94 21 7C 00            PUSH 0x7c2194
LAB_005bf300:
005BF300  68 3A F3 80 00            PUSH 0x80f33a
005BF305  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005BF30B  A1 3A C8 80 00            MOV EAX,[0x0080c83a]
005BF310  33 D2                     XOR EDX,EDX
005BF312  B9 10 0E 00 00            MOV ECX,0xe10
005BF317  BE 3C 00 00 00            MOV ESI,0x3c
005BF31C  F7 F1                     DIV ECX
005BF31E  83 C4 0C                  ADD ESP,0xc
005BF321  8B CA                     MOV ECX,EDX
005BF323  33 D2                     XOR EDX,EDX
005BF325  8B C1                     MOV EAX,ECX
005BF327  F7 F6                     DIV ESI
005BF329  B8 89 88 88 88            MOV EAX,0x88888889
005BF32E  52                        PUSH EDX
005BF32F  F7 E1                     MUL ECX
005BF331  C1 EA 05                  SHR EDX,0x5
005BF334  52                        PUSH EDX
005BF335  68 3A F3 80 00            PUSH 0x80f33a
005BF33A  68 84 21 7C 00            PUSH 0x7c2184
005BF33F  68 3A F3 80 00            PUSH 0x80f33a
005BF344  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005BF34A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005BF34D  83 C4 14                  ADD ESP,0x14
005BF350  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005BF353  6A 1C                     PUSH 0x1c
005BF355  83 E8 1C                  SUB EAX,0x1c
005BF358  6A 50                     PUSH 0x50
005BF35A  99                        CDQ
005BF35B  2B C2                     SUB EAX,EDX
005BF35D  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005BF360  D1 F8                     SAR EAX,0x1
005BF362  83 EA 69                  SUB EDX,0x69
005BF365  50                        PUSH EAX
005BF366  52                        PUSH EDX
005BF367  6A 00                     PUSH 0x0
005BF369  51                        PUSH ECX
005BF36A  8B 8B 8B 00 00 00         MOV ECX,dword ptr [EBX + 0x8b]
005BF370  E8 1B 17 15 00            CALL 0x00710a90
005BF375  8B 8B 8B 00 00 00         MOV ECX,dword ptr [EBX + 0x8b]
005BF37B  6A 08                     PUSH 0x8
005BF37D  6A FF                     PUSH -0x1
005BF37F  6A FF                     PUSH -0x1
005BF381  68 3A F3 80 00            PUSH 0x80f33a
005BF386  E8 35 26 15 00            CALL 0x007119c0
005BF38B  8D 83 A3 00 00 00         LEA EAX,[EBX + 0xa3]
005BF391  6A 4C                     PUSH 0x4c
005BF393  50                        PUSH EAX
005BF394  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005BF397  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005BF39A  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BF39D  51                        PUSH ECX
005BF39E  52                        PUSH EDX
005BF39F  6A 00                     PUSH 0x0
005BF3A1  6A 00                     PUSH 0x0
005BF3A3  6A 00                     PUSH 0x0
005BF3A5  50                        PUSH EAX
005BF3A6  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005BF3AB  68 A9 01 00 00            PUSH 0x1a9
005BF3B0  68 74 01 00 00            PUSH 0x174
005BF3B5  50                        PUSH EAX
005BF3B6  E8 45 5C 10 00            CALL 0x006c5000
005BF3BB  8D 4D F8                  LEA ECX,[EBP + -0x8]
005BF3BE  51                        PUSH ECX
005BF3BF  E8 9C BC 0E 00            CALL 0x006ab060
005BF3C4  EB 40                     JMP 0x005bf406
LAB_005bf3c6:
005BF3C6  8B 43 73                  MOV EAX,dword ptr [EBX + 0x73]
005BF3C9  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BF3CF  6A 0F                     PUSH 0xf
005BF3D1  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BF3D4  83 EA 41                  SUB EDX,0x41
005BF3D7  52                        PUSH EDX
005BF3D8  6A 0A                     PUSH 0xa
005BF3DA  6A 37                     PUSH 0x37
005BF3DC  6A 00                     PUSH 0x0
005BF3DE  50                        PUSH EAX
005BF3DF  E8 AC 16 15 00            CALL 0x00710a90
005BF3E4  A1 18 76 80 00            MOV EAX,[0x00807618]
005BF3E9  6A 00                     PUSH 0x0
005BF3EB  6A FF                     PUSH -0x1
005BF3ED  6A FF                     PUSH -0x1
005BF3EF  50                        PUSH EAX
005BF3F0  68 40 24 00 00            PUSH 0x2440
005BF3F5  E8 46 0D 0F 00            CALL 0x006b0140
005BF3FA  8B 8B 83 00 00 00         MOV ECX,dword ptr [EBX + 0x83]
005BF400  50                        PUSH EAX
005BF401  E8 BA 25 15 00            CALL 0x007119c0
LAB_005bf406:
005BF406  8B 43 73                  MOV EAX,dword ptr [EBX + 0x73]
005BF409  68 FF 00 00 01            PUSH 0x10000ff
005BF40E  81 C3 A3 00 00 00         ADD EBX,0xa3
005BF414  68 4C 00 00 01            PUSH 0x100004c
005BF419  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005BF41C  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005BF41F  53                        PUSH EBX
005BF420  51                        PUSH ECX
005BF421  52                        PUSH EDX
005BF422  6A 00                     PUSH 0x0
005BF424  6A 00                     PUSH 0x0
005BF426  6A 00                     PUSH 0x0
005BF428  50                        PUSH EAX
005BF429  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005BF42E  6A 46                     PUSH 0x46
005BF430  6A 1A                     PUSH 0x1a
005BF432  50                        PUSH EAX
005BF433  E8 A8 54 0F 00            CALL 0x006b48e0
LAB_005bf438:
005BF438  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
005BF43B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BF441  5F                        POP EDI
005BF442  5E                        POP ESI
005BF443  5B                        POP EBX
005BF444  8B E5                     MOV ESP,EBP
005BF446  5D                        POP EBP
005BF447  C2 04 00                  RET 0x4
LAB_005bf44a:
005BF44A  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
005BF44D  68 98 CF 7C 00            PUSH 0x7ccf98
005BF452  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BF457  56                        PUSH ESI
005BF458  6A 00                     PUSH 0x0
005BF45A  68 B4 01 00 00            PUSH 0x1b4
005BF45F  68 C8 CE 7C 00            PUSH 0x7ccec8
005BF464  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BF46A  E8 61 E0 0E 00            CALL 0x006ad4d0
005BF46F  83 C4 18                  ADD ESP,0x18
005BF472  85 C0                     TEST EAX,EAX
005BF474  74 01                     JZ 0x005bf477
005BF476  CC                        INT3
LAB_005bf477:
005BF477  68 B4 01 00 00            PUSH 0x1b4
005BF47C  68 C8 CE 7C 00            PUSH 0x7ccec8
005BF481  6A 00                     PUSH 0x0
005BF483  56                        PUSH ESI
005BF484  E8 B7 69 0E 00            CALL 0x006a5e40
005BF489  5F                        POP EDI
005BF48A  5E                        POP ESI
005BF48B  5B                        POP EBX
005BF48C  8B E5                     MOV ESP,EBP
005BF48E  5D                        POP EBP
005BF48F  C2 04 00                  RET 0x4
