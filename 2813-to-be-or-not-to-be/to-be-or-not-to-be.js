/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {

         notToBe: function(temp) {
            if (val !== temp) {
                return true;
            } else {
                throw new Error("Equal")
            }
        },

        toBe: function(temp){
        if(val===temp)
        {
          return true;
        }
        else{
           throw new Error("Not Equal")
        }
    }

    }
    
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */