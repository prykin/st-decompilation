FUN_006d6a10:
006D6A10  55                        PUSH EBP
006D6A11  8B EC                     MOV EBP,ESP
006D6A13  81 EC D8 00 00 00         SUB ESP,0xd8
006D6A19  53                        PUSH EBX
006D6A1A  56                        PUSH ESI
006D6A1B  8B F1                     MOV ESI,ECX
006D6A1D  57                        PUSH EDI
006D6A1E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006D6A21  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6A27  8B 9E F8 02 00 00         MOV EBX,dword ptr [ESI + 0x2f8]
006D6A2D  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
006D6A30  F7 40 04 00 00 00 20      TEST dword ptr [EAX + 0x4],0x20000000
006D6A37  75 0B                     JNZ 0x006d6a44
006D6A39  33 C0                     XOR EAX,EAX
006D6A3B  5F                        POP EDI
006D6A3C  5E                        POP ESI
006D6A3D  5B                        POP EBX
006D6A3E  8B E5                     MOV ESP,EBP
006D6A40  5D                        POP EBP
006D6A41  C2 04 00                  RET 0x4
LAB_006d6a44:
006D6A44  33 FF                     XOR EDI,EDI
006D6A46  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006D6A49  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006D6A4F  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
006D6A55  8B 91 E8 00 00 00         MOV EDX,dword ptr [ECX + 0xe8]
006D6A5B  42                        INC EDX
006D6A5C  89 91 E8 00 00 00         MOV dword ptr [ECX + 0xe8],EDX
006D6A62  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D6A68  83 BA E8 00 00 00 03      CMP dword ptr [EDX + 0xe8],0x3
006D6A6F  76 36                     JBE 0x006d6aa7
006D6A71  8B C8                     MOV ECX,EAX
006D6A73  2B 8A EC 00 00 00         SUB ECX,dword ptr [EDX + 0xec]
006D6A79  01 8A F0 00 00 00         ADD dword ptr [EDX + 0xf0],ECX
006D6A7F  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D6A85  39 8A F4 00 00 00         CMP dword ptr [EDX + 0xf4],ECX
006D6A8B  76 06                     JBE 0x006d6a93
006D6A8D  89 8A F4 00 00 00         MOV dword ptr [EDX + 0xf4],ECX
LAB_006d6a93:
006D6A93  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D6A99  39 8A F8 00 00 00         CMP dword ptr [EDX + 0xf8],ECX
006D6A9F  73 06                     JNC 0x006d6aa7
006D6AA1  89 8A F8 00 00 00         MOV dword ptr [EDX + 0xf8],ECX
LAB_006d6aa7:
006D6AA7  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
006D6AAD  89 81 EC 00 00 00         MOV dword ptr [ECX + 0xec],EAX
006D6AB3  8B 86 0C 03 00 00         MOV EAX,dword ptr [ESI + 0x30c]
006D6AB9  85 C0                     TEST EAX,EAX
006D6ABB  75 7C                     JNZ 0x006d6b39
006D6ABD  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006D6AC3  8D 8D 70 FF FF FF         LEA ECX,[EBP + 0xffffff70]
006D6AC9  8D 85 6C FF FF FF         LEA EAX,[EBP + 0xffffff6c]
006D6ACF  6A 00                     PUSH 0x0
006D6AD1  51                        PUSH ECX
006D6AD2  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
006D6AD8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006D6ADD  E8 0E 6D 05 00            CALL 0x0072d7f0
006D6AE2  83 C4 08                  ADD ESP,0x8
006D6AE5  85 C0                     TEST EAX,EAX
006D6AE7  75 37                     JNZ 0x006d6b20
006D6AE9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D6AEC  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D6AEF  52                        PUSH EDX
006D6AF0  8B CE                     MOV ECX,ESI
006D6AF2  E8 E9 F8 FF FF            CALL 0x006d63e0
006D6AF7  8B F8                     MOV EDI,EAX
006D6AF9  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6AFF  6A 00                     PUSH 0x0
006D6B01  6A 00                     PUSH 0x0
006D6B03  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
006D6B06  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006D6B09  51                        PUSH ECX
006D6B0A  E8 61 48 FE FF            CALL 0x006bb370
006D6B0F  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
006D6B15  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006D6B1B  E9 75 04 00 00            JMP 0x006d6f95
LAB_006d6b20:
006D6B20  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
006D6B26  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D6B29  8B F8                     MOV EDI,EAX
006D6B2B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006D6B31  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006D6B34  E9 5C 04 00 00            JMP 0x006d6f95
LAB_006d6b39:
006D6B39  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D6B3F  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006D6B42  A8 01                     TEST AL,0x1
006D6B44  0F 84 DB 01 00 00         JZ 0x006d6d25
006D6B4A  8B 8E 04 03 00 00         MOV ECX,dword ptr [ESI + 0x304]
006D6B50  85 C9                     TEST ECX,ECX
006D6B52  74 0B                     JZ 0x006d6b5f
006D6B54  A9 00 00 00 02            TEST EAX,0x2000000
006D6B59  0F 84 36 04 00 00         JZ 0x006d6f95
LAB_006d6b5f:
006D6B5F  8B 86 00 03 00 00         MOV EAX,dword ptr [ESI + 0x300]
006D6B65  85 C0                     TEST EAX,EAX
006D6B67  74 19                     JZ 0x006d6b82
006D6B69  8B 03                     MOV EAX,dword ptr [EBX]
006D6B6B  6A 00                     PUSH 0x0
006D6B6D  53                        PUSH EBX
006D6B6E  FF 90 80 00 00 00         CALL dword ptr [EAX + 0x80]
006D6B74  33 C0                     XOR EAX,EAX
006D6B76  89 86 00 03 00 00         MOV dword ptr [ESI + 0x300],EAX
006D6B7C  89 86 FC 02 00 00         MOV dword ptr [ESI + 0x2fc],EAX
LAB_006d6b82:
006D6B82  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
006D6B88  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
006D6B8B  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D6B92  74 0C                     JZ 0x006d6ba0
006D6B94  05 F0 04 00 00            ADD EAX,0x4f0
006D6B99  50                        PUSH EAX
006D6B9A  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006d6ba0:
006D6BA0  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6BA6  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006D6BA9  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006D6BAC  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006D6BAF  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006D6BB2  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006D6BB5  03 50 08                  ADD EDX,dword ptr [EAX + 0x8]
006D6BB8  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006D6BBB  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006D6BBE  03 48 0C                  ADD ECX,dword ptr [EAX + 0xc]
006D6BC1  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006D6BC4  33 C9                     XOR ECX,ECX
006D6BC6  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006D6BC9  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006D6BCC  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006D6BCF  8B 4A 18                  MOV ECX,dword ptr [EDX + 0x18]
006D6BD2  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006D6BD5  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006D6BD8  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
006D6BDB  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006D6BDE  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006D6BE1  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
006D6BE4  8B 4A 10                  MOV ECX,dword ptr [EDX + 0x10]
006D6BE7  03 CF                     ADD ECX,EDI
006D6BE9  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006D6BEC  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006D6BEF  8B 4A 14                  MOV ECX,dword ptr [EDX + 0x14]
006D6BF2  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006D6BF5  03 CA                     ADD ECX,EDX
006D6BF7  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006D6BFA  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006D6BFD  8B 40 28                  MOV EAX,dword ptr [EAX + 0x28]
006D6C00  52                        PUSH EDX
006D6C01  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006D6C04  51                        PUSH ECX
006D6C05  FF 15 54 BE 85 00         CALL dword ptr [0x0085be54]
006D6C0B  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6C11  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006D6C14  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006D6C17  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006D6C1E  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
006D6C21  03 D7                     ADD EDX,EDI
006D6C23  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006D6C26  8B 40 24                  MOV EAX,dword ptr [EAX + 0x24]
006D6C29  03 C1                     ADD EAX,ECX
006D6C2B  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006d6c2e:
006D6C2E  8B 86 04 03 00 00         MOV EAX,dword ptr [ESI + 0x304]
006D6C34  85 C0                     TEST EAX,EAX
006D6C36  74 27                     JZ 0x006d6c5f
006D6C38  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6C3E  6A 00                     PUSH 0x0
006D6C40  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006D6C43  8B 0B                     MOV ECX,dword ptr [EBX]
006D6C45  68 00 40 00 00            PUSH 0x4000
006D6C4A  52                        PUSH EDX
006D6C4B  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006D6C4E  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
006D6C51  8D 55 D4                  LEA EDX,[EBP + -0x2c]
006D6C54  50                        PUSH EAX
006D6C55  52                        PUSH EDX
006D6C56  53                        PUSH EBX
006D6C57  FF 91 84 00 00 00         CALL dword ptr [ECX + 0x84]
006D6C5D  EB 22                     JMP 0x006d6c81
LAB_006d6c5f:
006D6C5F  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6C65  6A 00                     PUSH 0x0
006D6C67  68 00 00 00 01            PUSH 0x1000000
006D6C6C  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
006D6C6F  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
006D6C72  8D 4D D4                  LEA ECX,[EBP + -0x2c]
006D6C75  51                        PUSH ECX
006D6C76  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006D6C79  8B 10                     MOV EDX,dword ptr [EAX]
006D6C7B  53                        PUSH EBX
006D6C7C  51                        PUSH ECX
006D6C7D  50                        PUSH EAX
006D6C7E  FF 52 14                  CALL dword ptr [EDX + 0x14]
LAB_006d6c81:
006D6C81  8B F8                     MOV EDI,EAX
006D6C83  85 FF                     TEST EDI,EDI
006D6C85  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006D6C88  74 4E                     JZ 0x006d6cd8
006D6C8A  81 FF C2 01 76 88         CMP EDI,0x887601c2
006D6C90  75 17                     JNZ 0x006d6ca9
006D6C92  8B 13                     MOV EDX,dword ptr [EBX]
006D6C94  53                        PUSH EBX
006D6C95  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
006D6C98  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6C9E  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
006D6CA1  51                        PUSH ECX
006D6CA2  E8 99 7F FF FF            CALL 0x006cec40
006D6CA7  EB 1F                     JMP 0x006d6cc8
LAB_006d6ca9:
006D6CA9  81 FF A0 00 76 88         CMP EDI,0x887600a0
006D6CAF  74 08                     JZ 0x006d6cb9
006D6CB1  81 FF AE 01 76 88         CMP EDI,0x887601ae
006D6CB7  75 1F                     JNZ 0x006d6cd8
LAB_006d6cb9:
006D6CB9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D6CBC  85 C0                     TEST EAX,EAX
006D6CBE  75 18                     JNZ 0x006d6cd8
006D6CC0  6A 02                     PUSH 0x2
006D6CC2  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006d6cc8:
006D6CC8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D6CCB  40                        INC EAX
006D6CCC  83 F8 02                  CMP EAX,0x2
006D6CCF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D6CD2  0F 8C 56 FF FF FF         JL 0x006d6c2e
LAB_006d6cd8:
006D6CD8  81 FF A0 00 76 88         CMP EDI,0x887600a0
006D6CDE  74 08                     JZ 0x006d6ce8
006D6CE0  81 FF AE 01 76 88         CMP EDI,0x887601ae
006D6CE6  75 05                     JNZ 0x006d6ced
LAB_006d6ce8:
006D6CE8  33 FF                     XOR EDI,EDI
006D6CEA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_006d6ced:
006D6CED  85 FF                     TEST EDI,EDI
006D6CEF  75 0D                     JNZ 0x006d6cfe
006D6CF1  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6CF7  81 60 04 FF FF FF FD      AND dword ptr [EAX + 0x4],0xfdffffff
LAB_006d6cfe:
006D6CFE  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D6D04  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006D6D07  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D6D0E  0F 84 81 02 00 00         JZ 0x006d6f95
006D6D14  05 F0 04 00 00            ADD EAX,0x4f0
006D6D19  50                        PUSH EAX
006D6D1A  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006D6D20  E9 70 02 00 00            JMP 0x006d6f95
LAB_006d6d25:
006D6D25  8B 86 10 03 00 00         MOV EAX,dword ptr [ESI + 0x310]
006D6D2B  85 C0                     TEST EAX,EAX
006D6D2D  8B 86 00 03 00 00         MOV EAX,dword ptr [ESI + 0x300]
006D6D33  0F 84 A8 00 00 00         JZ 0x006d6de1
006D6D39  85 C0                     TEST EAX,EAX
006D6D3B  74 37                     JZ 0x006d6d74
006D6D3D  8B 03                     MOV EAX,dword ptr [EBX]
006D6D3F  6A 00                     PUSH 0x0
006D6D41  53                        PUSH EBX
006D6D42  FF 90 80 00 00 00         CALL dword ptr [EAX + 0x80]
006D6D48  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
006D6D4E  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
006D6D51  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D6D58  74 0C                     JZ 0x006d6d66
006D6D5A  05 F0 04 00 00            ADD EAX,0x4f0
006D6D5F  50                        PUSH EAX
006D6D60  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006d6d66:
006D6D66  33 C0                     XOR EAX,EAX
006D6D68  89 86 00 03 00 00         MOV dword ptr [ESI + 0x300],EAX
006D6D6E  89 86 FC 02 00 00         MOV dword ptr [ESI + 0x2fc],EAX
LAB_006d6d74:
006D6D74  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006D6D7A  8D 8D 2C FF FF FF         LEA ECX,[EBP + 0xffffff2c]
006D6D80  8D 85 28 FF FF FF         LEA EAX,[EBP + 0xffffff28]
006D6D86  6A 00                     PUSH 0x0
006D6D88  51                        PUSH ECX
006D6D89  89 95 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EDX
006D6D8F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006D6D94  E8 57 6A 05 00            CALL 0x0072d7f0
006D6D99  83 C4 08                  ADD ESP,0x8
006D6D9C  85 C0                     TEST EAX,EAX
006D6D9E  75 28                     JNZ 0x006d6dc8
006D6DA0  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D6DA3  50                        PUSH EAX
006D6DA4  50                        PUSH EAX
006D6DA5  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D6DAB  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006D6DAE  50                        PUSH EAX
006D6DAF  E8 BC 45 FE FF            CALL 0x006bb370
006D6DB4  8B 8D 28 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff28]
006D6DBA  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006D6DBD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006D6DC3  E9 CD 01 00 00            JMP 0x006d6f95
LAB_006d6dc8:
006D6DC8  8B 95 28 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff28]
006D6DCE  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006D6DD1  8B F8                     MOV EDI,EAX
006D6DD3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006D6DD9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006D6DDC  E9 B4 01 00 00            JMP 0x006d6f95
LAB_006d6de1:
006D6DE1  85 C0                     TEST EAX,EAX
006D6DE3  74 19                     JZ 0x006d6dfe
006D6DE5  8B 03                     MOV EAX,dword ptr [EBX]
006D6DE7  6A 00                     PUSH 0x0
006D6DE9  53                        PUSH EBX
006D6DEA  FF 90 80 00 00 00         CALL dword ptr [EAX + 0x80]
006D6DF0  33 C0                     XOR EAX,EAX
006D6DF2  89 86 00 03 00 00         MOV dword ptr [ESI + 0x300],EAX
006D6DF8  89 86 FC 02 00 00         MOV dword ptr [ESI + 0x2fc],EAX
LAB_006d6dfe:
006D6DFE  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
006D6E04  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
006D6E07  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D6E0E  74 0C                     JZ 0x006d6e1c
006D6E10  05 F0 04 00 00            ADD EAX,0x4f0
006D6E15  50                        PUSH EAX
006D6E16  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006d6e1c:
006D6E1C  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6E22  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006D6E25  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006D6E28  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006D6E2B  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006D6E2E  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006D6E31  03 50 08                  ADD EDX,dword ptr [EAX + 0x8]
006D6E34  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006D6E37  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
006D6E3A  03 48 0C                  ADD ECX,dword ptr [EAX + 0xc]
006D6E3D  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006D6E40  33 C9                     XOR ECX,ECX
006D6E42  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006D6E45  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006D6E48  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006D6E4B  8B 4A 18                  MOV ECX,dword ptr [EDX + 0x18]
006D6E4E  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006D6E51  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006D6E54  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
006D6E57  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006D6E5A  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006D6E5D  8B 4A 10                  MOV ECX,dword ptr [EDX + 0x10]
006D6E60  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
006D6E63  03 CA                     ADD ECX,EDX
006D6E65  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006D6E68  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006D6E6B  8B 58 1C                  MOV EBX,dword ptr [EAX + 0x1c]
006D6E6E  8B 52 14                  MOV EDX,dword ptr [EDX + 0x14]
006D6E71  03 D3                     ADD EDX,EBX
006D6E73  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006D6E76  8B 58 20                  MOV EBX,dword ptr [EAX + 0x20]
006D6E79  03 D9                     ADD EBX,ECX
006D6E7B  8D 4D C4                  LEA ECX,[EBP + -0x3c]
006D6E7E  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006D6E81  8B 40 24                  MOV EAX,dword ptr [EAX + 0x24]
006D6E84  03 C2                     ADD EAX,EDX
006D6E86  8D 55 E4                  LEA EDX,[EBP + -0x1c]
006D6E89  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006D6E8C  51                        PUSH ECX
006D6E8D  8D 45 B0                  LEA EAX,[EBP + -0x50]
006D6E90  52                        PUSH EDX
006D6E91  50                        PUSH EAX
006D6E92  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006D6E98  85 C0                     TEST EAX,EAX
006D6E9A  0F 84 C4 00 00 00         JZ 0x006d6f64
006D6EA0  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
006D6EA6  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
006D6EA9  8B 88 E4 04 00 00         MOV ECX,dword ptr [EAX + 0x4e4]
006D6EAF  85 C9                     TEST ECX,ECX
006D6EB1  74 1D                     JZ 0x006d6ed0
006D6EB3  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
006D6EB6  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006D6EB9  8B 5D B8                  MOV EBX,dword ptr [EBP + -0x48]
006D6EBC  2B FA                     SUB EDI,EDX
006D6EBE  57                        PUSH EDI
006D6EBF  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
006D6EC2  2B DF                     SUB EBX,EDI
006D6EC4  53                        PUSH EBX
006D6EC5  52                        PUSH EDX
006D6EC6  8B 90 EC 04 00 00         MOV EDX,dword ptr [EAX + 0x4ec]
006D6ECC  57                        PUSH EDI
006D6ECD  52                        PUSH EDX
006D6ECE  FF D1                     CALL ECX
LAB_006d6ed0:
006D6ED0  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
006D6ED3  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_006d6eda:
006D6EDA  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6EE0  6A 00                     PUSH 0x0
006D6EE2  68 00 00 00 01            PUSH 0x1000000
006D6EE7  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
006D6EEA  8B 41 40                  MOV EAX,dword ptr [ECX + 0x40]
006D6EED  8D 4D D4                  LEA ECX,[EBP + -0x2c]
006D6EF0  51                        PUSH ECX
006D6EF1  8D 4D B0                  LEA ECX,[EBP + -0x50]
006D6EF4  8B 10                     MOV EDX,dword ptr [EAX]
006D6EF6  53                        PUSH EBX
006D6EF7  51                        PUSH ECX
006D6EF8  50                        PUSH EAX
006D6EF9  FF 52 14                  CALL dword ptr [EDX + 0x14]
006D6EFC  8B F8                     MOV EDI,EAX
006D6EFE  85 FF                     TEST EDI,EDI
006D6F00  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006D6F03  74 4A                     JZ 0x006d6f4f
006D6F05  81 FF C2 01 76 88         CMP EDI,0x887601c2
006D6F0B  75 17                     JNZ 0x006d6f24
006D6F0D  8B 13                     MOV EDX,dword ptr [EBX]
006D6F0F  53                        PUSH EBX
006D6F10  FF 52 6C                  CALL dword ptr [EDX + 0x6c]
006D6F13  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6F19  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
006D6F1C  51                        PUSH ECX
006D6F1D  E8 1E 7D FF FF            CALL 0x006cec40
006D6F22  EB 1F                     JMP 0x006d6f43
LAB_006d6f24:
006D6F24  81 FF A0 00 76 88         CMP EDI,0x887600a0
006D6F2A  74 08                     JZ 0x006d6f34
006D6F2C  81 FF AE 01 76 88         CMP EDI,0x887601ae
006D6F32  75 1B                     JNZ 0x006d6f4f
LAB_006d6f34:
006D6F34  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D6F37  85 C0                     TEST EAX,EAX
006D6F39  75 14                     JNZ 0x006d6f4f
006D6F3B  6A 02                     PUSH 0x2
006D6F3D  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006d6f43:
006D6F43  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D6F46  40                        INC EAX
006D6F47  83 F8 02                  CMP EAX,0x2
006D6F4A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006D6F4D  7C 8B                     JL 0x006d6eda
LAB_006d6f4f:
006D6F4F  81 FF A0 00 76 88         CMP EDI,0x887600a0
006D6F55  74 08                     JZ 0x006d6f5f
006D6F57  81 FF AE 01 76 88         CMP EDI,0x887601ae
006D6F5D  75 05                     JNZ 0x006d6f64
LAB_006d6f5f:
006D6F5F  33 FF                     XOR EDI,EDI
006D6F61  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_006d6f64:
006D6F64  8B 96 88 02 00 00         MOV EDX,dword ptr [ESI + 0x288]
006D6F6A  8B 42 28                  MOV EAX,dword ptr [EDX + 0x28]
006D6F6D  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006D6F74  74 0C                     JZ 0x006d6f82
006D6F76  05 F0 04 00 00            ADD EAX,0x4f0
006D6F7B  50                        PUSH EAX
006D6F7C  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006d6f82:
006D6F82  8B 86 88 02 00 00         MOV EAX,dword ptr [ESI + 0x288]
006D6F88  6A 00                     PUSH 0x0
006D6F8A  6A 00                     PUSH 0x0
006D6F8C  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
006D6F8F  51                        PUSH ECX
006D6F90  E8 DB 43 FE FF            CALL 0x006bb370
LAB_006d6f95:
006D6F95  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006D6F9B  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
006D6FA1  83 B9 E8 00 00 00 03      CMP dword ptr [ECX + 0xe8],0x3
006D6FA8  76 3E                     JBE 0x006d6fe8
006D6FAA  8B 91 EC 00 00 00         MOV EDX,dword ptr [ECX + 0xec]
006D6FB0  8B 99 FC 00 00 00         MOV EBX,dword ptr [ECX + 0xfc]
006D6FB6  2B C2                     SUB EAX,EDX
006D6FB8  03 D8                     ADD EBX,EAX
006D6FBA  89 99 FC 00 00 00         MOV dword ptr [ECX + 0xfc],EBX
006D6FC0  8B 8E 88 02 00 00         MOV ECX,dword ptr [ESI + 0x288]
006D6FC6  39 81 00 01 00 00         CMP dword ptr [ECX + 0x100],EAX
006D6FCC  76 06                     JBE 0x006d6fd4
006D6FCE  89 81 00 01 00 00         MOV dword ptr [ECX + 0x100],EAX
LAB_006d6fd4:
006D6FD4  8B B6 88 02 00 00         MOV ESI,dword ptr [ESI + 0x288]
006D6FDA  39 86 04 01 00 00         CMP dword ptr [ESI + 0x104],EAX
006D6FE0  73 06                     JNC 0x006d6fe8
006D6FE2  89 86 04 01 00 00         MOV dword ptr [ESI + 0x104],EAX
LAB_006d6fe8:
006D6FE8  8B C7                     MOV EAX,EDI
006D6FEA  5F                        POP EDI
006D6FEB  5E                        POP ESI
006D6FEC  5B                        POP EBX
006D6FED  8B E5                     MOV ESP,EBP
006D6FEF  5D                        POP EBP
006D6FF0  C2 04 00                  RET 0x4
