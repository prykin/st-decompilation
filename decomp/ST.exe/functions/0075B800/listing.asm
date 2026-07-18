FUN_0075b800:
0075B800  55                        PUSH EBP
0075B801  8B EC                     MOV EBP,ESP
0075B803  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075B806  53                        PUSH EBX
0075B807  56                        PUSH ESI
0075B808  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075B80B  57                        PUSH EDI
0075B80C  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0075B80F  3B C7                     CMP EAX,EDI
0075B811  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
0075B814  7D 22                     JGE 0x0075b838
0075B816  57                        PUSH EDI
0075B817  50                        PUSH EAX
0075B818  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075B81B  50                        PUSH EAX
0075B81C  56                        PUSH ESI
0075B81D  E8 FE FE FF FF            CALL 0x0075b720
0075B822  85 C0                     TEST EAX,EAX
0075B824  75 0A                     JNZ 0x0075b830
LAB_0075b826:
0075B826  5F                        POP EDI
0075B827  5E                        POP ESI
0075B828  83 C8 FF                  OR EAX,0xffffffff
0075B82B  5B                        POP EBX
0075B82C  5D                        POP EBP
0075B82D  C2 14 00                  RET 0x14
LAB_0075b830:
0075B830  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0075B833  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0075B836  EB 03                     JMP 0x0075b83b
LAB_0075b838:
0075B838  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_0075b83b:
0075B83B  2B C7                     SUB EAX,EDI
0075B83D  8B F2                     MOV ESI,EDX
0075B83F  8B C8                     MOV ECX,EAX
0075B841  BB 01 00 00 00            MOV EBX,0x1
0075B846  D3 FE                     SAR ESI,CL
0075B848  8B CF                     MOV ECX,EDI
0075B84A  D3 E3                     SHL EBX,CL
0075B84C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075B84F  8D 7C B9 44               LEA EDI,[ECX + EDI*0x4 + 0x44]
0075B853  4B                        DEC EBX
0075B854  23 F3                     AND ESI,EBX
0075B856  8B 1F                     MOV EBX,dword ptr [EDI]
0075B858  3B F3                     CMP ESI,EBX
0075B85A  7E 3D                     JLE 0x0075b899
LAB_0075b85c:
0075B85C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075B85F  D1 E6                     SHL ESI,0x1
0075B861  83 F8 01                  CMP EAX,0x1
0075B864  7D 14                     JGE 0x0075b87a
0075B866  6A 01                     PUSH 0x1
0075B868  50                        PUSH EAX
0075B869  52                        PUSH EDX
0075B86A  53                        PUSH EBX
0075B86B  E8 B0 FE FF FF            CALL 0x0075b720
0075B870  85 C0                     TEST EAX,EAX
0075B872  74 B2                     JZ 0x0075b826
0075B874  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
0075B877  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
LAB_0075b87a:
0075B87A  48                        DEC EAX
0075B87B  8B DA                     MOV EBX,EDX
0075B87D  8B C8                     MOV ECX,EAX
0075B87F  83 C7 04                  ADD EDI,0x4
0075B882  D3 FB                     SAR EBX,CL
0075B884  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0075B887  83 E3 01                  AND EBX,0x1
0075B88A  0B F3                     OR ESI,EBX
0075B88C  41                        INC ECX
0075B88D  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
0075B890  8B 0F                     MOV ECX,dword ptr [EDI]
0075B892  3B F1                     CMP ESI,ECX
0075B894  7F C6                     JG 0x0075b85c
0075B896  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
LAB_0075b899:
0075B899  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075B89C  89 47 10                  MOV dword ptr [EDI + 0x10],EAX
0075B89F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0075B8A2  83 F8 10                  CMP EAX,0x10
0075B8A5  89 57 0C                  MOV dword ptr [EDI + 0xc],EDX
0075B8A8  7E 09                     JLE 0x0075b8b3
0075B8AA  5F                        POP EDI
0075B8AB  5E                        POP ESI
0075B8AC  33 C0                     XOR EAX,EAX
0075B8AE  5B                        POP EBX
0075B8AF  5D                        POP EBP
0075B8B0  C2 14 00                  RET 0x14
LAB_0075b8b3:
0075B8B3  8B 94 81 8C 00 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8c]
0075B8BA  8B 3C 81                  MOV EDI,dword ptr [ECX + EAX*0x4]
0075B8BD  8B 81 D0 00 00 00         MOV EAX,dword ptr [ECX + 0xd0]
0075B8C3  2B D7                     SUB EDX,EDI
0075B8C5  03 D0                     ADD EDX,EAX
0075B8C7  33 C0                     XOR EAX,EAX
0075B8C9  5F                        POP EDI
0075B8CA  8A 44 32 11               MOV AL,byte ptr [EDX + ESI*0x1 + 0x11]
0075B8CE  5E                        POP ESI
0075B8CF  5B                        POP EBX
0075B8D0  5D                        POP EBP
0075B8D1  C2 14 00                  RET 0x14
