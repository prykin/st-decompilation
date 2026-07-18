FUN_006757c0:
006757C0  55                        PUSH EBP
006757C1  8B EC                     MOV EBP,ESP
006757C3  83 EC 08                  SUB ESP,0x8
006757C6  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
006757CD  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
006757D4  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
006757DB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006757DE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006757E1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006757E4  66 83 39 00               CMP word ptr [ECX],0x0
006757E8  7D 05                     JGE 0x006757ef
006757EA  66 C7 01 00 00            MOV word ptr [ECX],0x0
LAB_006757ef:
006757EF  56                        PUSH ESI
006757F0  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006757F3  66 83 3E 00               CMP word ptr [ESI],0x0
006757F7  7D 05                     JGE 0x006757fe
006757F9  66 C7 06 00 00            MOV word ptr [ESI],0x0
LAB_006757fe:
006757FE  57                        PUSH EDI
006757FF  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00675802  66 83 3F 00               CMP word ptr [EDI],0x0
00675806  7D 05                     JGE 0x0067580d
00675808  66 C7 07 00 00            MOV word ptr [EDI],0x0
LAB_0067580d:
0067580D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00675810  66 83 38 00               CMP word ptr [EAX],0x0
00675814  7D 05                     JGE 0x0067581b
00675816  66 C7 00 00 00            MOV word ptr [EAX],0x0
LAB_0067581b:
0067581B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0067581E  66 83 38 00               CMP word ptr [EAX],0x0
00675822  7D 05                     JGE 0x00675829
00675824  66 C7 00 00 00            MOV word ptr [EAX],0x0
LAB_00675829:
00675829  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0067582C  66 83 38 00               CMP word ptr [EAX],0x0
00675830  7D 05                     JGE 0x00675837
00675832  66 C7 00 00 00            MOV word ptr [EAX],0x0
LAB_00675837:
00675837  0F BF 01                  MOVSX EAX,word ptr [ECX]
0067583A  53                        PUSH EBX
0067583B  0F BF 1E                  MOVSX EBX,word ptr [ESI]
0067583E  03 C3                     ADD EAX,EBX
00675840  3B C2                     CMP EAX,EDX
00675842  7E 18                     JLE 0x0067585c
LAB_00675844:
00675844  66 8B 01                  MOV AX,word ptr [ECX]
00675847  66 85 C0                  TEST AX,AX
0067584A  7E 10                     JLE 0x0067585c
0067584C  48                        DEC EAX
0067584D  66 89 01                  MOV word ptr [ECX],AX
00675850  0F BF 1E                  MOVSX EBX,word ptr [ESI]
00675853  0F BF C0                  MOVSX EAX,AX
00675856  03 D8                     ADD EBX,EAX
00675858  3B DA                     CMP EBX,EDX
0067585A  7F E8                     JG 0x00675844
LAB_0067585c:
0067585C  66 8B 09                  MOV CX,word ptr [ECX]
0067585F  0F BF 06                  MOVSX EAX,word ptr [ESI]
00675862  0F BF D9                  MOVSX EBX,CX
00675865  03 C3                     ADD EAX,EBX
00675867  5B                        POP EBX
00675868  3B C2                     CMP EAX,EDX
0067586A  7E 05                     JLE 0x00675871
0067586C  2B D1                     SUB EDX,ECX
0067586E  66 89 16                  MOV word ptr [ESI],DX
LAB_00675871:
00675871  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00675874  0F BF 07                  MOVSX EAX,word ptr [EDI]
00675877  0F BF 0A                  MOVSX ECX,word ptr [EDX]
0067587A  03 C1                     ADD EAX,ECX
0067587C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067587F  3B C1                     CMP EAX,ECX
00675881  7E 18                     JLE 0x0067589b
LAB_00675883:
00675883  66 8B 07                  MOV AX,word ptr [EDI]
00675886  66 85 C0                  TEST AX,AX
00675889  7E 10                     JLE 0x0067589b
0067588B  48                        DEC EAX
0067588C  66 89 07                  MOV word ptr [EDI],AX
0067588F  0F BF 32                  MOVSX ESI,word ptr [EDX]
00675892  0F BF C0                  MOVSX EAX,AX
00675895  03 C6                     ADD EAX,ESI
00675897  3B C1                     CMP EAX,ECX
00675899  7F E8                     JG 0x00675883
LAB_0067589b:
0067589B  66 8B 07                  MOV AX,word ptr [EDI]
0067589E  0F BF 32                  MOVSX ESI,word ptr [EDX]
006758A1  0F BF F8                  MOVSX EDI,AX
006758A4  03 F7                     ADD ESI,EDI
006758A6  3B F1                     CMP ESI,ECX
006758A8  7E 05                     JLE 0x006758af
006758AA  2B C8                     SUB ECX,EAX
006758AC  66 89 0A                  MOV word ptr [EDX],CX
LAB_006758af:
006758AF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006758B2  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006758B5  0F BF 01                  MOVSX EAX,word ptr [ECX]
006758B8  0F BF 16                  MOVSX EDX,word ptr [ESI]
006758BB  03 C2                     ADD EAX,EDX
006758BD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006758C0  3B C2                     CMP EAX,EDX
006758C2  7E 18                     JLE 0x006758dc
LAB_006758c4:
006758C4  66 8B 01                  MOV AX,word ptr [ECX]
006758C7  66 85 C0                  TEST AX,AX
006758CA  7E 10                     JLE 0x006758dc
006758CC  48                        DEC EAX
006758CD  66 89 01                  MOV word ptr [ECX],AX
006758D0  0F BF 3E                  MOVSX EDI,word ptr [ESI]
006758D3  0F BF C0                  MOVSX EAX,AX
006758D6  03 C7                     ADD EAX,EDI
006758D8  3B C2                     CMP EAX,EDX
006758DA  7F E8                     JG 0x006758c4
LAB_006758dc:
006758DC  66 8B 01                  MOV AX,word ptr [ECX]
006758DF  0F BF 3E                  MOVSX EDI,word ptr [ESI]
006758E2  0F BF C8                  MOVSX ECX,AX
006758E5  03 CF                     ADD ECX,EDI
006758E7  5F                        POP EDI
006758E8  3B CA                     CMP ECX,EDX
006758EA  7E 05                     JLE 0x006758f1
006758EC  2B D0                     SUB EDX,EAX
006758EE  66 89 16                  MOV word ptr [ESI],DX
LAB_006758f1:
006758F1  5E                        POP ESI
006758F2  8B E5                     MOV ESP,EBP
006758F4  5D                        POP EBP
006758F5  C3                        RET
