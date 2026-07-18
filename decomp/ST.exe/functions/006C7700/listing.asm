FUN_006c7700:
006C7700  55                        PUSH EBP
006C7701  8B EC                     MOV EBP,ESP
006C7703  81 EC 90 00 00 00         SUB ESP,0x90
006C7709  53                        PUSH EBX
006C770A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C770D  56                        PUSH ESI
006C770E  57                        PUSH EDI
006C770F  8D 85 70 FF FF FF         LEA EAX,[EBP + 0xffffff70]
006C7715  68 80 00 00 00            PUSH 0x80
006C771A  50                        PUSH EAX
006C771B  53                        PUSH EBX
006C771C  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006C7723  FF 53 36                  CALL dword ptr [EBX + 0x36]
006C7726  3D 80 00 00 00            CMP EAX,0x80
006C772B  74 12                     JZ 0x006c773f
006C772D  85 C0                     TEST EAX,EAX
006C772F  7C 05                     JL 0x006c7736
LAB_006c7731:
006C7731  B8 FB FF FF FF            MOV EAX,0xfffffffb
LAB_006c7736:
006C7736  5F                        POP EDI
006C7737  5E                        POP ESI
006C7738  5B                        POP EBX
006C7739  8B E5                     MOV ESP,EBP
006C773B  5D                        POP EBP
006C773C  C2 08 00                  RET 0x8
LAB_006c773f:
006C773F  80 BD 70 FF FF FF 0A      CMP byte ptr [EBP + 0xffffff70],0xa
006C7746  75 E9                     JNZ 0x006c7731
006C7748  80 BD 72 FF FF FF 01      CMP byte ptr [EBP + 0xffffff72],0x1
006C774F  75 E0                     JNZ 0x006c7731
006C7751  80 BD 71 FF FF FF 05      CMP byte ptr [EBP + 0xffffff71],0x5
006C7758  75 21                     JNZ 0x006c777b
006C775A  8B 4D B1                  MOV ECX,dword ptr [EBP + -0x4f]
006C775D  8B 95 73 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff73]
006C7763  81 E1 FF 00 00 00         AND ECX,0xff
006C7769  81 E2 FF 00 00 00         AND EDX,0xff
006C776F  0F AF CA                  IMUL ECX,EDX
006C7772  83 F9 04                  CMP ECX,0x4
006C7775  C6 45 0B 01               MOV byte ptr [EBP + 0xb],0x1
006C7779  7F 04                     JG 0x006c777f
LAB_006c777b:
006C777B  C6 45 0B 00               MOV byte ptr [EBP + 0xb],0x0
LAB_006c777f:
006C777F  8B 43 26                  MOV EAX,dword ptr [EBX + 0x26]
006C7782  85 C0                     TEST EAX,EAX
006C7784  74 5F                     JZ 0x006c77e5
006C7786  6A 01                     PUSH 0x1
006C7788  6A 00                     PUSH 0x0
006C778A  50                        PUSH EAX
006C778B  FF 15 64 BB 85 00         CALL dword ptr [0x0085bb64]
006C7791  8B F8                     MOV EDI,EAX
006C7793  83 FF FF                  CMP EDI,-0x1
006C7796  75 0F                     JNZ 0x006c77a7
006C7798  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006C779E  5F                        POP EDI
006C779F  5E                        POP ESI
006C77A0  5B                        POP EBX
006C77A1  8B E5                     MOV ESP,EBP
006C77A3  5D                        POP EBP
006C77A4  C2 08 00                  RET 0x8
LAB_006c77a7:
006C77A7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C77AA  81 EF 80 00 00 00         SUB EDI,0x80
006C77B0  85 F6                     TEST ESI,ESI
006C77B2  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006C77B5  75 34                     JNZ 0x006c77eb
006C77B7  8A 45 0B                  MOV AL,byte ptr [EBP + 0xb]
006C77BA  84 C0                     TEST AL,AL
006C77BC  74 2D                     JZ 0x006c77eb
006C77BE  8B 43 26                  MOV EAX,dword ptr [EBX + 0x26]
006C77C1  6A 02                     PUSH 0x2
006C77C3  56                        PUSH ESI
006C77C4  50                        PUSH EAX
006C77C5  FF 15 64 BB 85 00         CALL dword ptr [0x0085bb64]
006C77CB  8B F0                     MOV ESI,EAX
006C77CD  83 FE FF                  CMP ESI,-0x1
006C77D0  75 0F                     JNZ 0x006c77e1
006C77D2  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006C77D8  5F                        POP EDI
006C77D9  5E                        POP ESI
006C77DA  5B                        POP EBX
006C77DB  8B E5                     MOV ESP,EBP
006C77DD  5D                        POP EBP
006C77DE  C2 08 00                  RET 0x8
LAB_006c77e1:
006C77E1  2B F7                     SUB ESI,EDI
006C77E3  EB 06                     JMP 0x006c77eb
LAB_006c77e5:
006C77E5  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C77E8  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006c77eb:
006C77EB  8A 85 71 FF FF FF         MOV AL,byte ptr [EBP + 0xffffff71]
006C77F1  8B 4B 2A                  MOV ECX,dword ptr [EBX + 0x2a]
006C77F4  8A D0                     MOV DL,AL
006C77F6  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006C77F9  8A 4D 0B                  MOV CL,byte ptr [EBP + 0xb]
006C77FC  80 EA 03                  SUB DL,0x3
006C77FF  F6 DA                     NEG DL
006C7801  1B D2                     SBB EDX,EDX
006C7803  83 E2 0E                  AND EDX,0xe
006C7806  83 C2 02                  ADD EDX,0x2
006C7809  84 C9                     TEST CL,CL
006C780B  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
006C780E  0F 84 B2 00 00 00         JZ 0x006c78c6
006C7814  68 00 03 00 00            PUSH 0x300
006C7819  E8 52 83 FF FF            CALL 0x006bfb70
006C781E  85 C0                     TEST EAX,EAX
006C7820  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C7823  89 43 1E                  MOV dword ptr [EBX + 0x1e],EAX
006C7826  75 0E                     JNZ 0x006c7836
006C7828  5F                        POP EDI
006C7829  5E                        POP ESI
006C782A  B8 FE FF FF FF            MOV EAX,0xfffffffe
006C782F  5B                        POP EBX
006C7830  8B E5                     MOV ESP,EBP
006C7832  5D                        POP EBP
006C7833  C2 08 00                  RET 0x8
LAB_006c7836:
006C7836  81 FE 81 03 00 00         CMP ESI,0x381
006C783C  0F 82 A7 00 00 00         JC 0x006c78e9
006C7842  8B 43 26                  MOV EAX,dword ptr [EBX + 0x26]
006C7845  85 C0                     TEST EAX,EAX
006C7847  74 13                     JZ 0x006c785c
006C7849  8D 8C 37 FF FC FF FF      LEA ECX,[EDI + ESI*0x1 + 0xfffffcff]
006C7850  6A 00                     PUSH 0x0
006C7852  51                        PUSH ECX
006C7853  50                        PUSH EAX
006C7854  FF 15 64 BB 85 00         CALL dword ptr [0x0085bb64]
006C785A  EB 0E                     JMP 0x006c786a
LAB_006c785c:
006C785C  8B 43 2A                  MOV EAX,dword ptr [EBX + 0x2a]
006C785F  81 C6 7F FC FF FF         ADD ESI,0xfffffc7f
006C7865  03 C6                     ADD EAX,ESI
006C7867  89 43 2A                  MOV dword ptr [EBX + 0x2a],EAX
LAB_006c786a:
006C786A  8D 55 FF                  LEA EDX,[EBP + -0x1]
006C786D  6A 01                     PUSH 0x1
006C786F  52                        PUSH EDX
006C7870  53                        PUSH EBX
006C7871  FF 53 36                  CALL dword ptr [EBX + 0x36]
006C7874  83 F8 01                  CMP EAX,0x1
006C7877  74 16                     JZ 0x006c788f
006C7879  85 C0                     TEST EAX,EAX
006C787B  0F 8C B5 FE FF FF         JL 0x006c7736
006C7881  5F                        POP EDI
006C7882  5E                        POP ESI
006C7883  B8 F4 FF FF FF            MOV EAX,0xfffffff4
006C7888  5B                        POP EBX
006C7889  8B E5                     MOV ESP,EBP
006C788B  5D                        POP EBP
006C788C  C2 08 00                  RET 0x8
LAB_006c788f:
006C788F  80 7D FF 0C               CMP byte ptr [EBP + -0x1],0xc
006C7893  75 54                     JNZ 0x006c78e9
006C7895  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006C7898  68 00 03 00 00            PUSH 0x300
006C789D  50                        PUSH EAX
006C789E  53                        PUSH EBX
006C789F  C7 45 0C 00 01 00 00      MOV dword ptr [EBP + 0xc],0x100
006C78A6  FF 53 36                  CALL dword ptr [EBX + 0x36]
006C78A9  3D 00 03 00 00            CMP EAX,0x300
006C78AE  74 4F                     JZ 0x006c78ff
006C78B0  85 C0                     TEST EAX,EAX
006C78B2  0F 8C 7E FE FF FF         JL 0x006c7736
006C78B8  5F                        POP EDI
006C78B9  5E                        POP ESI
006C78BA  B8 F4 FF FF FF            MOV EAX,0xfffffff4
006C78BF  5B                        POP EBX
006C78C0  8B E5                     MOV ESP,EBP
006C78C2  5D                        POP EBP
006C78C3  C2 08 00                  RET 0x8
LAB_006c78c6:
006C78C6  3C 03                     CMP AL,0x3
006C78C8  74 1F                     JZ 0x006c78e9
006C78CA  6A 30                     PUSH 0x30
006C78CC  E8 9F 82 FF FF            CALL 0x006bfb70
006C78D1  85 C0                     TEST EAX,EAX
006C78D3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C78D6  89 43 1E                  MOV dword ptr [EBX + 0x1e],EAX
006C78D9  75 0E                     JNZ 0x006c78e9
006C78DB  5F                        POP EDI
006C78DC  5E                        POP ESI
006C78DD  B8 FE FF FF FF            MOV EAX,0xfffffffe
006C78E2  5B                        POP EBX
006C78E3  8B E5                     MOV ESP,EBP
006C78E5  5D                        POP EBP
006C78E6  C2 08 00                  RET 0x8
LAB_006c78e9:
006C78E9  83 7D 0C 10               CMP dword ptr [EBP + 0xc],0x10
006C78ED  75 10                     JNZ 0x006c78ff
006C78EF  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006C78F2  B9 0C 00 00 00            MOV ECX,0xc
006C78F7  8D 75 80                  LEA ESI,[EBP + -0x80]
006C78FA  F3 A5                     MOVSD.REP ES:EDI,ESI
006C78FC  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_006c78ff:
006C78FF  8B 43 26                  MOV EAX,dword ptr [EBX + 0x26]
006C7902  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C7905  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006C7908  89 4B 1A                  MOV dword ptr [EBX + 0x1a],ECX
006C790B  85 C0                     TEST EAX,EAX
006C790D  89 53 2A                  MOV dword ptr [EBX + 0x2a],EDX
006C7910  74 10                     JZ 0x006c7922
006C7912  81 C7 80 00 00 00         ADD EDI,0x80
006C7918  6A 00                     PUSH 0x0
006C791A  57                        PUSH EDI
006C791B  50                        PUSH EAX
006C791C  FF 15 64 BB 85 00         CALL dword ptr [0x0085bb64]
LAB_006c7922:
006C7922  0F BF 85 74 FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff74]
006C7929  0F BF 95 78 FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff78]
006C7930  0F BF 8D 76 FF FF FF      MOVSX ECX,word ptr [EBP + 0xffffff76]
006C7937  89 03                     MOV dword ptr [EBX],EAX
006C7939  2B D0                     SUB EDX,EAX
006C793B  0F BF 85 7A FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff7a]
006C7942  2B C1                     SUB EAX,ECX
006C7944  89 4B 04                  MOV dword ptr [EBX + 0x4],ECX
006C7947  8A 8D 73 FF FF FF         MOV CL,byte ptr [EBP + 0xffffff73]
006C794D  42                        INC EDX
006C794E  40                        INC EAX
006C794F  88 4B 10                  MOV byte ptr [EBX + 0x10],CL
006C7952  0F BF 4D B4               MOVSX ECX,word ptr [EBP + -0x4c]
006C7956  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
006C7959  89 53 08                  MOV dword ptr [EBX + 0x8],EDX
006C795C  0F BF 45 B2               MOVSX EAX,word ptr [EBP + -0x4e]
006C7960  8A 55 B1                  MOV DL,byte ptr [EBP + -0x4f]
006C7963  5F                        POP EDI
006C7964  88 53 11                  MOV byte ptr [EBX + 0x11],DL
006C7967  89 43 12                  MOV dword ptr [EBX + 0x12],EAX
006C796A  89 4B 16                  MOV dword ptr [EBX + 0x16],ECX
006C796D  5E                        POP ESI
006C796E  33 C0                     XOR EAX,EAX
006C7970  5B                        POP EBX
006C7971  8B E5                     MOV ESP,EBP
006C7973  5D                        POP EBP
006C7974  C2 08 00                  RET 0x8
