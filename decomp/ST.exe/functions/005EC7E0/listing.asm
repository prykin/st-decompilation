STSprGameObjC::STSprGameObjC:
005EC7E0  56                        PUSH ESI
005EC7E1  57                        PUSH EDI
005EC7E2  8B F1                     MOV ESI,ECX
005EC7E4  E8 4A 51 E1 FF            CALL 0x00401933
005EC7E9  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005EC7EF  8B CF                     MOV ECX,EDI
005EC7F1  E8 20 4B E1 FF            CALL 0x00401316
005EC7F6  C7 07 78 C5 79 00         MOV dword ptr [EDI],0x79c578
005EC7FC  B9 3D 00 00 00            MOV ECX,0x3d
005EC801  33 C0                     XOR EAX,EAX
005EC803  8D BE 31 02 00 00         LEA EDI,[ESI + 0x231]
005EC809  C7 06 EC C3 79 00         MOV dword ptr [ESI],0x79c3ec
005EC80F  F3 AB                     STOSD.REP ES:EDI
005EC811  AA                        STOSB ES:EDI
005EC812  83 C8 FF                  OR EAX,0xffffffff
005EC815  C6 86 0E 03 00 00 FF      MOV byte ptr [ESI + 0x30e],0xff
005EC81C  89 86 08 03 00 00         MOV dword ptr [ESI + 0x308],EAX
005EC822  5F                        POP EDI
005EC823  88 86 0C 03 00 00         MOV byte ptr [ESI + 0x30c],AL
005EC829  8B C6                     MOV EAX,ESI
005EC82B  5E                        POP ESI
005EC82C  C3                        RET
