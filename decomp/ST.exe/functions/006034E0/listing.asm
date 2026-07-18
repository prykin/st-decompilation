FUN_006034e0:
006034E0  55                        PUSH EBP
006034E1  8B EC                     MOV EBP,ESP
006034E3  81 EC 40 01 00 00         SUB ESP,0x140
006034E9  53                        PUSH EBX
006034EA  56                        PUSH ESI
006034EB  57                        PUSH EDI
006034EC  B9 4F 00 00 00            MOV ECX,0x4f
006034F1  33 C0                     XOR EAX,EAX
006034F3  8D BD C0 FE FF FF         LEA EDI,[EBP + 0xfffffec0]
006034F9  F3 AB                     STOSD.REP ES:EDI
006034FB  AA                        STOSB ES:EDI
006034FC  B8 01 00 00 00            MOV EAX,0x1
00603501  33 DB                     XOR EBX,EBX
00603503  89 85 D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EAX
00603509  89 85 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EAX
0060350F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00603512  C7 85 C0 FE FF FF B8 01 00 00  MOV dword ptr [EBP + 0xfffffec0],0x1b8
0060351C  3B C3                     CMP EAX,EBX
0060351E  89 9D C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EBX
00603524  89 9D C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EBX
0060352A  89 85 D4 FE FF FF         MOV dword ptr [EBP + 0xfffffed4],EAX
00603530  74 06                     JZ 0x00603538
00603532  89 9D D0 FE FF FF         MOV dword ptr [EBP + 0xfffffed0],EBX
LAB_00603538:
00603538  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0060353B  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
0060353F  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
00603543  89 85 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],EAX
00603549  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
0060354D  66 89 8D E4 FE FF FF      MOV word ptr [EBP + 0xfffffee4],CX
00603554  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00603557  66 89 95 E6 FE FF FF      MOV word ptr [EBP + 0xfffffee6],DX
0060355E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00603561  66 89 85 E8 FE FF FF      MOV word ptr [EBP + 0xfffffee8],AX
00603568  89 8D E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],ECX
0060356E  8B FA                     MOV EDI,EDX
00603570  83 C9 FF                  OR ECX,0xffffffff
00603573  33 C0                     XOR EAX,EAX
00603575  F2 AE                     SCASB.REPNE ES:EDI
00603577  F7 D1                     NOT ECX
00603579  49                        DEC ECX
0060357A  89 9D DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],EBX
00603580  83 F9 0E                  CMP ECX,0xe
00603583  77 27                     JA 0x006035ac
00603585  8B FA                     MOV EDI,EDX
00603587  83 C9 FF                  OR ECX,0xffffffff
0060358A  F2 AE                     SCASB.REPNE ES:EDI
0060358C  8D B5 EA FE FF FF         LEA ESI,[EBP + 0xfffffeea]
00603592  F7 D1                     NOT ECX
00603594  2B F9                     SUB EDI,ECX
00603596  8B C6                     MOV EAX,ESI
00603598  8B D1                     MOV EDX,ECX
0060359A  8B F7                     MOV ESI,EDI
0060359C  8B F8                     MOV EDI,EAX
0060359E  C1 E9 02                  SHR ECX,0x2
006035A1  F3 A5                     MOVSD.REP ES:EDI,ESI
006035A3  8B CA                     MOV ECX,EDX
006035A5  83 E1 03                  AND ECX,0x3
006035A8  F3 A4                     MOVSB.REP ES:EDI,ESI
006035AA  EB 18                     JMP 0x006035c4
LAB_006035ac:
006035AC  6A 0E                     PUSH 0xe
006035AE  8D 8D EA FE FF FF         LEA ECX,[EBP + 0xfffffeea]
006035B4  52                        PUSH EDX
006035B5  51                        PUSH ECX
006035B6  E8 85 AD 12 00            CALL 0x0072e340
006035BB  83 C4 0C                  ADD ESP,0xc
006035BE  88 9D F8 FE FF FF         MOV byte ptr [EBP + 0xfffffef8],BL
LAB_006035c4:
006035C4  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006035C7  83 C9 FF                  OR ECX,0xffffffff
006035CA  8B FA                     MOV EDI,EDX
006035CC  33 C0                     XOR EAX,EAX
006035CE  F2 AE                     SCASB.REPNE ES:EDI
006035D0  F7 D1                     NOT ECX
006035D2  49                        DEC ECX
006035D3  81 F9 03 01 00 00         CMP ECX,0x103
006035D9  77 27                     JA 0x00603602
006035DB  8B FA                     MOV EDI,EDX
006035DD  83 C9 FF                  OR ECX,0xffffffff
006035E0  F2 AE                     SCASB.REPNE ES:EDI
006035E2  8D B5 F9 FE FF FF         LEA ESI,[EBP + 0xfffffef9]
006035E8  F7 D1                     NOT ECX
006035EA  2B F9                     SUB EDI,ECX
006035EC  8B C6                     MOV EAX,ESI
006035EE  8B D1                     MOV EDX,ECX
006035F0  8B F7                     MOV ESI,EDI
006035F2  8B F8                     MOV EDI,EAX
006035F4  C1 E9 02                  SHR ECX,0x2
006035F7  F3 A5                     MOVSD.REP ES:EDI,ESI
006035F9  8B CA                     MOV ECX,EDX
006035FB  83 E1 03                  AND ECX,0x3
006035FE  F3 A4                     MOVSB.REP ES:EDI,ESI
00603600  EB 18                     JMP 0x0060361a
LAB_00603602:
00603602  68 03 01 00 00            PUSH 0x103
00603607  8D 8D F9 FE FF FF         LEA ECX,[EBP + 0xfffffef9]
0060360D  52                        PUSH EDX
0060360E  51                        PUSH ECX
0060360F  E8 2C AD 12 00            CALL 0x0072e340
00603614  83 C4 0C                  ADD ESP,0xc
00603617  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
LAB_0060361a:
0060361A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00603620  8D 85 C0 FE FF FF         LEA EAX,[EBP + 0xfffffec0]
00603626  53                        PUSH EBX
00603627  50                        PUSH EAX
00603628  8B 11                     MOV EDX,dword ptr [ECX]
0060362A  53                        PUSH EBX
0060362B  53                        PUSH EBX
0060362C  68 5A 01 00 00            PUSH 0x15a
00603631  FF 52 08                  CALL dword ptr [EDX + 0x8]
00603634  5F                        POP EDI
00603635  5E                        POP ESI
00603636  5B                        POP EBX
00603637  8B E5                     MOV ESP,EBP
00603639  5D                        POP EBP
0060363A  C3                        RET
