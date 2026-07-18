FUN_00742ca0:
00742CA0  55                        PUSH EBP
00742CA1  8B EC                     MOV EBP,ESP
00742CA3  57                        PUSH EDI
00742CA4  56                        PUSH ESI
00742CA5  53                        PUSH EBX
00742CA6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00742CA9  0B C9                     OR ECX,ECX
00742CAB  0F 84 95 00 00 00         JZ 0x00742d46
00742CB1  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00742CB4  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00742CB7  8D 05 08 72 85 00         LEA EAX,[0x857208]
00742CBD  83 78 08 00               CMP dword ptr [EAX + 0x8],0x0
00742CC1  75 43                     JNZ 0x00742d06
00742CC3  B7 41                     MOV BH,0x41
00742CC5  B3 5A                     MOV BL,0x5a
00742CC7  B6 20                     MOV DH,0x20
00742CC9  8D 49 00                  LEA ECX,[ECX]
LAB_00742ccc:
00742CCC  8A 26                     MOV AH,byte ptr [ESI]
00742CCE  0A E4                     OR AH,AH
00742CD0  8A 07                     MOV AL,byte ptr [EDI]
00742CD2  74 21                     JZ 0x00742cf5
00742CD4  0A C0                     OR AL,AL
00742CD6  74 1D                     JZ 0x00742cf5
00742CD8  46                        INC ESI
00742CD9  47                        INC EDI
00742CDA  38 FC                     CMP AH,BH
00742CDC  72 06                     JC 0x00742ce4
00742CDE  38 DC                     CMP AH,BL
00742CE0  77 02                     JA 0x00742ce4
00742CE2  02 E6                     ADD AH,DH
LAB_00742ce4:
00742CE4  38 F8                     CMP AL,BH
00742CE6  72 06                     JC 0x00742cee
00742CE8  38 D8                     CMP AL,BL
00742CEA  77 02                     JA 0x00742cee
00742CEC  02 C6                     ADD AL,DH
LAB_00742cee:
00742CEE  38 C4                     CMP AH,AL
00742CF0  75 09                     JNZ 0x00742cfb
00742CF2  49                        DEC ECX
00742CF3  75 D7                     JNZ 0x00742ccc
LAB_00742cf5:
00742CF5  33 C9                     XOR ECX,ECX
00742CF7  38 C4                     CMP AH,AL
00742CF9  74 4B                     JZ 0x00742d46
LAB_00742cfb:
00742CFB  B9 FF FF FF FF            MOV ECX,0xffffffff
00742D00  72 44                     JC 0x00742d46
00742D02  F7 D9                     NEG ECX
00742D04  EB 40                     JMP 0x00742d46
LAB_00742d06:
00742D06  33 C0                     XOR EAX,EAX
00742D08  33 DB                     XOR EBX,EBX
00742D0A  8B FF                     MOV EDI,EDI
LAB_00742d0c:
00742D0C  8A 06                     MOV AL,byte ptr [ESI]
00742D0E  0B C0                     OR EAX,EAX
00742D10  8A 1F                     MOV BL,byte ptr [EDI]
00742D12  74 23                     JZ 0x00742d37
00742D14  0B DB                     OR EBX,EBX
00742D16  74 1F                     JZ 0x00742d37
00742D18  46                        INC ESI
00742D19  47                        INC EDI
00742D1A  51                        PUSH ECX
00742D1B  50                        PUSH EAX
00742D1C  53                        PUSH EBX
00742D1D  E8 BE D9 FE FF            CALL 0x007306e0
00742D22  8B D8                     MOV EBX,EAX
00742D24  83 C4 04                  ADD ESP,0x4
00742D27  E8 B4 D9 FE FF            CALL 0x007306e0
00742D2C  83 C4 04                  ADD ESP,0x4
00742D2F  59                        POP ECX
00742D30  3B C3                     CMP EAX,EBX
00742D32  75 09                     JNZ 0x00742d3d
00742D34  49                        DEC ECX
00742D35  75 D5                     JNZ 0x00742d0c
LAB_00742d37:
00742D37  33 C9                     XOR ECX,ECX
00742D39  3B C3                     CMP EAX,EBX
00742D3B  74 09                     JZ 0x00742d46
LAB_00742d3d:
00742D3D  B9 FF FF FF FF            MOV ECX,0xffffffff
00742D42  72 02                     JC 0x00742d46
00742D44  F7 D9                     NEG ECX
LAB_00742d46:
00742D46  8B C1                     MOV EAX,ECX
00742D48  5B                        POP EBX
00742D49  5E                        POP ESI
00742D4A  5F                        POP EDI
00742D4B  C9                        LEAVE
00742D4C  C3                        RET
