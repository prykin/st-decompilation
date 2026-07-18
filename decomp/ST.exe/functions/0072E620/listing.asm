__strcmpi:
0072E620  55                        PUSH EBP
0072E621  8B EC                     MOV EBP,ESP
0072E623  57                        PUSH EDI
0072E624  56                        PUSH ESI
0072E625  53                        PUSH EBX
0072E626  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0072E629  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0072E62C  8D 05 08 72 85 00         LEA EAX,[0x857208]
0072E632  83 78 08 00               CMP dword ptr [EAX + 0x8],0x0
0072E636  75 3B                     JNZ 0x0072e673
0072E638  B0 FF                     MOV AL,0xff
0072E63A  8B FF                     MOV EDI,EDI
LAB_0072e63c:
0072E63C  0A C0                     OR AL,AL
0072E63E  74 2E                     JZ 0x0072e66e
0072E640  8A 06                     MOV AL,byte ptr [ESI]
0072E642  46                        INC ESI
0072E643  8A 27                     MOV AH,byte ptr [EDI]
0072E645  47                        INC EDI
0072E646  38 C4                     CMP AH,AL
0072E648  74 F2                     JZ 0x0072e63c
0072E64A  2C 41                     SUB AL,0x41
0072E64C  3C 1A                     CMP AL,0x1a
0072E64E  1A C9                     SBB CL,CL
0072E650  80 E1 20                  AND CL,0x20
0072E653  02 C1                     ADD AL,CL
0072E655  04 41                     ADD AL,0x41
0072E657  86 E0                     XCHG AL,AH
0072E659  2C 41                     SUB AL,0x41
0072E65B  3C 1A                     CMP AL,0x1a
0072E65D  1A C9                     SBB CL,CL
0072E65F  80 E1 20                  AND CL,0x20
0072E662  02 C1                     ADD AL,CL
0072E664  04 41                     ADD AL,0x41
0072E666  38 E0                     CMP AL,AH
0072E668  74 D2                     JZ 0x0072e63c
0072E66A  1A C0                     SBB AL,AL
0072E66C  1C FF                     SBB AL,0xff
LAB_0072e66e:
0072E66E  0F BE C0                  MOVSX EAX,AL
0072E671  EB 34                     JMP 0x0072e6a7
LAB_0072e673:
0072E673  B8 FF 00 00 00            MOV EAX,0xff
0072E678  33 DB                     XOR EBX,EBX
0072E67A  8B FF                     MOV EDI,EDI
LAB_0072e67c:
0072E67C  0A C0                     OR AL,AL
0072E67E  74 27                     JZ 0x0072e6a7
0072E680  8A 06                     MOV AL,byte ptr [ESI]
0072E682  46                        INC ESI
0072E683  8A 1F                     MOV BL,byte ptr [EDI]
0072E685  47                        INC EDI
0072E686  38 D8                     CMP AL,BL
0072E688  74 F2                     JZ 0x0072e67c
0072E68A  50                        PUSH EAX
0072E68B  53                        PUSH EBX
0072E68C  E8 4F 20 00 00            CALL 0x007306e0
0072E691  8B D8                     MOV EBX,EAX
0072E693  83 C4 04                  ADD ESP,0x4
0072E696  E8 45 20 00 00            CALL 0x007306e0
0072E69B  83 C4 04                  ADD ESP,0x4
0072E69E  38 C3                     CMP BL,AL
0072E6A0  74 DA                     JZ 0x0072e67c
0072E6A2  1B C0                     SBB EAX,EAX
0072E6A4  83 D8 FF                  SBB EAX,-0x1
LAB_0072e6a7:
0072E6A7  5B                        POP EBX
0072E6A8  5E                        POP ESI
0072E6A9  5F                        POP EDI
0072E6AA  C9                        LEAVE
0072E6AB  C3                        RET
