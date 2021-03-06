
#ifndef ERRORS_H
#define ERRORS_H

 /**
 * \enum enum err_code
 * \brief Constantes d'erreurs.
 *
 * err_code est une série de constantes prédéfinie pour diverses futures 
 * fonctions.
 */
enum err_code {
    ERR_NONE = 0,              /*!< Aucune erreur. */
    ERR_KEY_SCHEDULE, 		   /*!< Erreur génération des sous clés. */
    ERR_INNER_FUNCTION,		   /*!< Erreur de la fonction intérieure. */
    ERR_FEISTEL,			   /*!< Erreur de feistel. */
    ERR_ATTACK, 			   /*!< Erreur lors de l'attaque DFA. */
    ERR_OTHER                  /*!< Erreur quelconque. */
};
extern enum err_code des_errno;

void err_print(const enum err_code err);

#endif    
