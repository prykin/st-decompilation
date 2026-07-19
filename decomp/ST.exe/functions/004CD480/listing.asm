FUN_004cd480:
004CD480  56                        PUSH ESI
004CD481  8B F1                     MOV ESI,ECX
004CD483  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CD489  57                        PUSH EDI
004CD48A  8A 86 64 04 00 00         MOV AL,byte ptr [ESI + 0x464]
004CD490  33 FF                     XOR EDI,EDI
004CD492  50                        PUSH EAX
004CD493  E8 1F 75 F3 FF            CALL 0x004049b7
004CD498  25 FF 00 00 00            AND EAX,0xff
004CD49D  48                        DEC EAX
004CD49E  74 31                     JZ 0x004cd4d1
004CD4A0  48                        DEC EAX
004CD4A1  74 11                     JZ 0x004cd4b4
004CD4A3  48                        DEC EAX
004CD4A4  75 4B                     JNZ 0x004cd4f1
004CD4A6  8B 8E 64 04 00 00         MOV ECX,dword ptr [ESI + 0x464]
004CD4AC  68 90 00 00 00            PUSH 0x90
004CD4B1  51                        PUSH ECX
004CD4B2  EB 0C                     JMP 0x004cd4c0
LAB_004cd4b4:
004CD4B4  8B 96 64 04 00 00         MOV EDX,dword ptr [ESI + 0x464]
004CD4BA  68 94 00 00 00            PUSH 0x94
004CD4BF  52                        PUSH EDX
LAB_004cd4c0:
004CD4C0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CD4C6  E8 A0 43 F3 FF            CALL 0x0040186b
004CD4CB  85 C0                     TEST EAX,EAX
004CD4CD  74 22                     JZ 0x004cd4f1
004CD4CF  EB 1B                     JMP 0x004cd4ec
LAB_004cd4d1:
004CD4D1  8B 86 64 04 00 00         MOV EAX,dword ptr [ESI + 0x464]
004CD4D7  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CD4DD  68 98 00 00 00            PUSH 0x98
004CD4E2  50                        PUSH EAX
004CD4E3  E8 83 43 F3 FF            CALL 0x0040186b
004CD4E8  85 C0                     TEST EAX,EAX
004CD4EA  74 05                     JZ 0x004cd4f1
LAB_004cd4ec:
004CD4EC  BF 01 00 00 00            MOV EDI,0x1
LAB_004cd4f1:
004CD4F1  8B 0C BD D8 14 79 00      MOV ECX,dword ptr [EDI*0x4 + 0x7914d8]
004CD4F8  8B 96 68 04 00 00         MOV EDX,dword ptr [ESI + 0x468]
004CD4FE  03 CA                     ADD ECX,EDX
004CD500  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004CD506  39 8A E4 00 00 00         CMP dword ptr [EDX + 0xe4],ECX
004CD50C  0F 82 1E 01 00 00         JC 0x004cd630
004CD512  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004CD515  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004CD51B  05 39 30 00 00            ADD EAX,0x3039
004CD520  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004CD523  25 00 00 03 00            AND EAX,0x30000
004CD528  3D 00 00 02 00            CMP EAX,0x20000
004CD52D  77 7C                     JA 0x004cd5ab
004CD52F  8B 86 64 04 00 00         MOV EAX,dword ptr [ESI + 0x464]
004CD535  33 C9                     XOR ECX,ECX
004CD537  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004CD53D  BF 01 00 00 00            MOV EDI,0x1
004CD542  3B C1                     CMP EAX,ECX
004CD544  0F 85 DA 00 00 00         JNZ 0x004cd624
004CD54A  8B 96 FD 01 00 00         MOV EDX,dword ptr [ESI + 0x1fd]
004CD550  8B 86 F9 01 00 00         MOV EAX,dword ptr [ESI + 0x1f9]
004CD556  52                        PUSH EDX
004CD557  50                        PUSH EAX
004CD558  57                        PUSH EDI
004CD559  E8 FD 57 F3 FF            CALL 0x00402d5b
004CD55E  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004CD561  83 C4 0C                  ADD ESP,0xc
004CD564  51                        PUSH ECX
004CD565  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CD56B  E8 47 74 F3 FF            CALL 0x004049b7
004CD570  25 FF 00 00 00            AND EAX,0xff
004CD575  48                        DEC EAX
004CD576  74 2D                     JZ 0x004cd5a5
004CD578  48                        DEC EAX
004CD579  74 10                     JZ 0x004cd58b
004CD57B  48                        DEC EAX
004CD57C  0F 85 A2 00 00 00         JNZ 0x004cd624
004CD582  8B 16                     MOV EDX,dword ptr [ESI]
004CD584  6A 7C                     PUSH 0x7c
004CD586  E9 8F 00 00 00            JMP 0x004cd61a
LAB_004cd58b:
004CD58B  8B 06                     MOV EAX,dword ptr [ESI]
004CD58D  6A 7B                     PUSH 0x7b
004CD58F  6A 06                     PUSH 0x6
004CD591  8B CE                     MOV ECX,ESI
004CD593  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004CD599  8B CE                     MOV ECX,ESI
004CD59B  E8 7E 85 F3 FF            CALL 0x00405b1e
004CD5A0  8B C7                     MOV EAX,EDI
004CD5A2  5F                        POP EDI
004CD5A3  5E                        POP ESI
004CD5A4  C3                        RET
LAB_004cd5a5:
004CD5A5  8B 16                     MOV EDX,dword ptr [ESI]
004CD5A7  6A 7A                     PUSH 0x7a
004CD5A9  EB 6F                     JMP 0x004cd61a
LAB_004cd5ab:
004CD5AB  8B 8E 64 04 00 00         MOV ECX,dword ptr [ESI + 0x464]
004CD5B1  33 C0                     XOR EAX,EAX
004CD5B3  A0 4D 87 80 00            MOV AL,[0x0080874d]
004CD5B8  BF 02 00 00 00            MOV EDI,0x2
004CD5BD  3B C8                     CMP ECX,EAX
004CD5BF  75 63                     JNZ 0x004cd624
004CD5C1  8B 8E FD 01 00 00         MOV ECX,dword ptr [ESI + 0x1fd]
004CD5C7  8B 96 F9 01 00 00         MOV EDX,dword ptr [ESI + 0x1f9]
004CD5CD  51                        PUSH ECX
004CD5CE  52                        PUSH EDX
004CD5CF  6A 01                     PUSH 0x1
004CD5D1  E8 85 57 F3 FF            CALL 0x00402d5b
004CD5D6  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004CD5D9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CD5DF  83 C4 0C                  ADD ESP,0xc
004CD5E2  50                        PUSH EAX
004CD5E3  E8 CF 73 F3 FF            CALL 0x004049b7
004CD5E8  25 FF 00 00 00            AND EAX,0xff
004CD5ED  48                        DEC EAX
004CD5EE  74 26                     JZ 0x004cd616
004CD5F0  48                        DEC EAX
004CD5F1  74 09                     JZ 0x004cd5fc
004CD5F3  48                        DEC EAX
004CD5F4  75 2E                     JNZ 0x004cd624
004CD5F6  8B 16                     MOV EDX,dword ptr [ESI]
004CD5F8  6A 7F                     PUSH 0x7f
004CD5FA  EB 1E                     JMP 0x004cd61a
LAB_004cd5fc:
004CD5FC  8B 06                     MOV EAX,dword ptr [ESI]
004CD5FE  6A 7E                     PUSH 0x7e
004CD600  6A 06                     PUSH 0x6
004CD602  8B CE                     MOV ECX,ESI
004CD604  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004CD60A  8B CE                     MOV ECX,ESI
004CD60C  E8 0D 85 F3 FF            CALL 0x00405b1e
004CD611  8B C7                     MOV EAX,EDI
004CD613  5F                        POP EDI
004CD614  5E                        POP ESI
004CD615  C3                        RET
LAB_004cd616:
004CD616  8B 16                     MOV EDX,dword ptr [ESI]
004CD618  6A 7D                     PUSH 0x7d
LAB_004cd61a:
004CD61A  6A 06                     PUSH 0x6
004CD61C  8B CE                     MOV ECX,ESI
004CD61E  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
FUN_004cd480::cf_common_exit_004CD624:
004CD624  8B CE                     MOV ECX,ESI
004CD626  E8 F3 84 F3 FF            CALL 0x00405b1e
004CD62B  8B C7                     MOV EAX,EDI
004CD62D  5F                        POP EDI
004CD62E  5E                        POP ESI
004CD62F  C3                        RET
LAB_004cd630:
004CD630  5F                        POP EDI
004CD631  33 C0                     XOR EAX,EAX
004CD633  5E                        POP ESI
004CD634  C3                        RET
