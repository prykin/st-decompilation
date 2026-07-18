FUN_006bc8f0:
006BC8F0  A1 98 4F 85 00            MOV EAX,[0x00854f98]
006BC8F5  85 C0                     TEST EAX,EAX
006BC8F7  75 69                     JNZ 0x006bc962
006BC8F9  8B 0D 28 4F 85 00         MOV ECX,dword ptr [0x00854f28]
LAB_006bc8ff:
006BC8FF  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BC904  8B 90 C0 01 00 00         MOV EDX,dword ptr [EAX + 0x1c0]
006BC90A  3B 0A                     CMP ECX,dword ptr [EDX]
006BC90C  7D 54                     JGE 0x006bc962
006BC90E  8B 15 C8 4F 85 00         MOV EDX,dword ptr [0x00854fc8]
006BC914  52                        PUSH EDX
006BC915  8B 15 DC 4F 85 00         MOV EDX,dword ptr [0x00854fdc]
006BC91B  52                        PUSH EDX
006BC91C  51                        PUSH ECX
006BC91D  50                        PUSH EAX
006BC91E  E8 4D 00 00 00            CALL 0x006bc970
006BC923  83 F8 FF                  CMP EAX,-0x1
006BC926  A3 DC 4E 85 00            MOV [0x00854edc],EAX
006BC92B  75 0F                     JNZ 0x006bc93c
006BC92D  C7 05 98 4F 85 00 01 00 00 00  MOV dword ptr [0x00854f98],0x1
006BC937  8D 48 FF                  LEA ECX,[EAX + -0x1]
006BC93A  EB 17                     JMP 0x006bc953
LAB_006bc93c:
006BC93C  8B 0D 28 4F 85 00         MOV ECX,dword ptr [0x00854f28]
006BC942  85 C0                     TEST EAX,EAX
006BC944  74 0C                     JZ 0x006bc952
006BC946  8D 50 FF                  LEA EDX,[EAX + -0x1]
006BC949  3B D1                     CMP EDX,ECX
006BC94B  7F 05                     JG 0x006bc952
006BC94D  8D 48 FF                  LEA ECX,[EAX + -0x1]
006BC950  EB 01                     JMP 0x006bc953
LAB_006bc952:
006BC952  41                        INC ECX
LAB_006bc953:
006BC953  A1 98 4F 85 00            MOV EAX,[0x00854f98]
006BC958  89 0D 28 4F 85 00         MOV dword ptr [0x00854f28],ECX
006BC95E  85 C0                     TEST EAX,EAX
006BC960  74 9D                     JZ 0x006bc8ff
LAB_006bc962:
006BC962  C3                        RET
